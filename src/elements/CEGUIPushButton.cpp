/************************************************************************
	filename: 	CEGUIPushButton.cpp
	created:	13/4/2004
	author:		Paul D Turner
	
	purpose:	Implementation of PushButton widget base class
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#include "elements/CEGUIPushButton.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*************************************************************************
	Event name constants
*************************************************************************/
const utf8	PushButton::Clicked[]				= "Clicked";


/*************************************************************************
	Constructor
*************************************************************************/
PushButton::PushButton(const String& type, const String& name) :
	ButtonBase(type, name)
{
	// add the additional events generated by this derived class
	addPushButtonEvents();
}


/*************************************************************************
	Destructor
*************************************************************************/
PushButton::~PushButton(void)
{
}


/*************************************************************************
	Add button specific events	
*************************************************************************/
void PushButton::addPushButtonEvents(void)
{
	addEvent(Clicked);
}


/*************************************************************************
	handler invoked internally when the button is clicked.	
*************************************************************************/
void PushButton::onClicked(WindowEventArgs& e)
{
	fireEvent(Clicked, e);
}


/*************************************************************************
	Handler for mouse button release events
*************************************************************************/
void PushButton::onMouseButtonUp(MouseEventArgs& e)
{
	// default handling
	ButtonBase::onMouseButtonUp(e);

	Window* sheet = System::getSingleton().getGUISheet();

	if (sheet != NULL)
	{
		// if mouse was released over this widget
		if (this == sheet->getChildAtPosition(e.position))
		{
			// fire event
			onClicked(WindowEventArgs(this));
		}

	}

	e.handled = true;
}


} // End of  CEGUI namespace section