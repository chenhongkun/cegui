/************************************************************************
	filename: 	CEGUIRadioButton.h
	created:	13/4/2004
	author:		Paul D Turner
	
	purpose:	Interface to base class for RadioButton widget
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
#ifndef _CEGUIRadioButton_h_
#define _CEGUIRadioButton_h_

#include "CEGUIBase.h"
#include "elements/CEGUIButtonBase.h"


// Start of CEGUI namespace section
namespace CEGUI
{
/*!
\brief
	Base class to provide the logic for Radio Button widgets.

*/
class CEGUIBASE_API RadioButton : public ButtonBase
{
public:
	/*************************************************************************
		Event name constants
	*************************************************************************/
	// generated internally by Window
	static const utf8	SelectStateChanged[];			//!< The selected state of the widget has changed.


	/*************************************************************************
		Accessor Functions
	*************************************************************************/ 
	/*!
	\brief
		return true if the radio button is selected (has the checkmark)

	\return
		true if this widget is selected, false if the widget is not selected.
	*/
	bool	isSelected(void) const				{return d_selected;}

	
	/*!
	\brief
		return the groupID assigned to this radio button

	\return
		ulong value that identifies the Radio Button group this widget belongs to.
	*/
	ulong	getGroupID(void) const				{return d_groupID;}


	/*************************************************************************
		Manipulator Functions
	*************************************************************************/
	/*!
	\brief
		set whether the radio button is selected or not

	\param select
		true to put the radio button in the selected state, false to put the radio button in the
		deselected state.  If changing to the selected state, any previously selected radio button
		within the same group is automatically deselected.

	\return
		Nothing.
	*/
	void	setSelected(bool select);

	
	/*!
	\brief
		set the groupID for this radio button

	\param group
		ulong value specifying the radio button group that this widget belongs to.

	\return	
		Nothing.
	*/
	void	setGroupID(ulong group);


protected:
	/*************************************************************************
		Construction / Destruction
	*************************************************************************/
	RadioButton(const String& type, const String& name);
	virtual ~RadioButton(void);


	/*************************************************************************
		Implementation Functions
	*************************************************************************/
	/*!
	\brief
		Add radio button specific events
	*/
	void	addRadioButtonEvents(void);


	/*!
	\brief
		Deselect any selected radio buttons attached to the same parent within the same group
		(but not do not deselect 'this').
	*/
	void	deselectOtherButtonsInGroup(void) const;


	/*************************************************************************
		New Radio Button Events
	*************************************************************************/
	/*!
	\brief
		event triggered internally when the select state of the button changes.
	*/
	virtual void	onSelectStateChanged(WindowEventArgs& e);


	/*************************************************************************
		Overridden Event handlers
	*************************************************************************/
	virtual void	onMouseButtonUp(MouseEventArgs& e);


	/*************************************************************************
		Implementation Data
	*************************************************************************/
	bool		d_selected;				// true when radio button is selected (has checkmark)
	ulong		d_groupID;				// radio button group ID
};


} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIRadioButton_h_