/************************************************************************
	filename: 	CEGUIRadioButton.cpp
	created:	13/4/2004
	author:		Paul D Turner
	
	purpose:	Implementation of RadioButton widget base class
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
#include "elements/CEGUIRadioButton.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*************************************************************************
	Event name constants
*************************************************************************/
// generated internally by Window
const utf8	RadioButton::SelectStateChanged[]		= "SelectStateChanged";


/*************************************************************************
	Constructor
*************************************************************************/
RadioButton::RadioButton(const String& type, const String& name) :
	ButtonBase(type, name),
	d_selected(false),
	d_groupID(0)
{
	// add radio button specific events.
	addRadioButtonEvents();
}


/*************************************************************************
	Destructor
*************************************************************************/
RadioButton::~RadioButton(void)
{
}


/*************************************************************************
	set whether the radio button is selected or not	
*************************************************************************/
void RadioButton::setSelected(bool select)
{
	if (select != d_selected)
	{
		d_selected = select;
		requestRedraw();

		// if new state is 'selected', we must de-select any selected radio buttons within our group.
		if (d_selected)
		{
			deselectOtherButtonsInGroup();
		}

		onSelectStateChanged(WindowEventArgs(this));
	}

}


/*************************************************************************
	set the groupID for this radio button	
*************************************************************************/
void RadioButton::setGroupID(ulong group)
{
	d_groupID = group;

	if (d_selected)
	{
		deselectOtherButtonsInGroup();
	}

}


/*************************************************************************
	Add radio button specific events	
*************************************************************************/
void RadioButton::addRadioButtonEvents(void)
{
	addEvent(SelectStateChanged);
}


/*************************************************************************
	Deselect any selected radio buttons attached to the same parent
	within the same group (but not do not deselect 'this').
*************************************************************************/
void RadioButton::deselectOtherButtonsInGroup(void) const
{
	// nothing to do unless we are attached to another window.
	if (d_parent != NULL)
	{
		int child_count = d_parent->getChildCount();

		// scan all children
		for (int child = 0; child < child_count; ++child)
		{
			// is this child same type as we are?
			if (d_parent->getChildAtIdx(child)->getType() == getType())
			{
				RadioButton* rb = (RadioButton*)d_parent->getChildAtIdx(child);

				// is child same group, selected, but not 'this'?
				if (rb->isSelected() && (rb != this) && (rb->getGroupID() == d_groupID))
				{
					// deselect the radio button.
					rb->setSelected(false);
				}

			}

		}

	}

}


/*************************************************************************
	event triggered internally when the select state of the button changes.
*************************************************************************/
void RadioButton::onSelectStateChanged(WindowEventArgs& e)
{
	fireEvent(SelectStateChanged, e);
}


/*************************************************************************
	Handler called when mouse button gets released
*************************************************************************/
void RadioButton::onMouseButtonUp(MouseEventArgs& e)
{
	// default handling
	ButtonBase::onMouseButtonUp(e);

	Window* sheet = System::getSingleton().getGUISheet();

	if (sheet != NULL)
	{
		// if mouse was released over this widget
		if (this == sheet->getChildAtPosition(e.position))
		{
			// select this button & deselect all others in the same group.
			setSelected(true);
		}

	}

	e.handled = true;
}

} // End of  CEGUI namespace section