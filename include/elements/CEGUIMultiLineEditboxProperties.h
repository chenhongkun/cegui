/************************************************************************
	filename: 	CEGUIMultiLineEditboxProperties.h
	created:	10/7/2004
	author:		Paul D Turner
	
	purpose:	Interface to properties for the MultiLineEditbox class
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
#ifndef _CEGUIMultiLineEditboxProperties_h_
#define _CEGUIMultiLineEditboxProperties_h_

#include "CEGUIProperty.h"


// Start of CEGUI namespace section
namespace CEGUI
{

// Start of MultiLineEditboxProperties namespace section
/*!
\brief
	Namespace containing all classes that make up the properties interface for the MultiLineEditbox class
*/
namespace MultiLineEditboxProperties
{
/*!
\brief
	Property to access the read-only setting of the edit box.

	\par Usage:
		- Name: ReadOnly
		- Format: "[text]"

	\par Where [Text] is:
		- "True" to indicate the edit box is read-only.
		- "False" to indicate the edit box is not read-only (text may be edited by user).
*/
class ReadOnly : public Property
{
public:
	ReadOnly() : Property((utf8*)"ReadOnly", (utf8*)"Property to get/set the read-only setting for the edit box.  Value is either \"True\" or \"False\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the word-wrap setting of the edit box.

	\par Usage:
		- Name: WordWrap
		- Format: "[text]"

	\par Where [Text] is:
		- "True" to indicate the text should be word-wrapped.
		- "False" to indicate the text should not be word-wrapped.
*/
class WordWrap : public Property
{
public:
	WordWrap() : Property((utf8*)"WordWrap", (utf8*)"Property to get/set the word-wrap setting of the edit box.  Value is either \"True\" or \"False\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the current carat index.

	\par Usage:
		- Name: CaratIndex
		- Format: "[uint]"

	\par Where:
		- [uint] is the zero based index of the carat position within the text.
*/
class CaratIndex : public Property
{
public:
	CaratIndex() : Property((utf8*)"CaratIndex", (utf8*)"Property to get/set the current carat index.  Value is \"[uint]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the current selection start index.

	\par Usage:
		- Name: SelectionStart
		- Format: "[uint]"

	\par Where:
		- [uint] is the zero based index of the selection start position within the text.
*/
class SelectionStart : public Property
{
public:
	SelectionStart() : Property((utf8*)"SelectionStart", (utf8*)"Property to get/set the zero based index of the selection start position within the text.  Value is \"[uint]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the current selection length.

	\par Usage:
		- Name: SelectionLength
		- Format: "[uint]"

	\par Where:
		- [uint] is the length of the selection (as a count of the number of code points selected).
*/
class SelectionLength : public Property
{
public:
	SelectionLength() : Property((utf8*)"SelectionLength", (utf8*)"Property to get/set the length of the selection (as a count of the number of code points selected).  Value is \"[uint]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the maximum text length for the edit box.

	\par Usage:
		- Name: MaxTextLength
		- Format: "[uint]"

	\par Where:
		- [uint] is the maximum allowed text length (as a count of code points).
*/
class MaxTextLength : public Property
{
public:
	MaxTextLength() : Property((utf8*)"MaxTextLength", (utf8*)"Property to get/set the the maximum allowed text length (as a count of code points).  Value is \"[uint]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the normal, unselected, text colour used for rendering text.

	\par Usage:
		- Name: NormalTextColour
		- Format: "aarrggbb".

	\par Where:
		- aarrggbb is the ARGB colour value to be used.
*/
class NormalTextColour : public Property
{
public:
	NormalTextColour() : Property((utf8*)"NormalTextColour", (utf8*)"Property to get/set the normal, unselected, text colour used for rendering text.  Value is \"aarrggbb\" (hex).") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the colour used for rendering text within the selection area.

	\par Usage:
		- Name: SelectedTextColour
		- Format: "aarrggbb".

	\par Where:
		- aarrggbb is the ARGB colour value to be used.
*/
class SelectedTextColour : public Property
{
public:
	SelectedTextColour() : Property((utf8*)"SelectedTextColour", (utf8*)"Property to get/set the colour used for rendering text within the selection area.  Value is \"aarrggbb\" (hex).") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the colour used for rendering the selection highlight when the edit box is active.

	\par Usage:
		- Name: ActiveSelectionColour
		- Format: "aarrggbb".

	\par Where:
		- aarrggbb is the ARGB colour value to be used.
*/
class ActiveSelectionColour : public Property
{
public:
	ActiveSelectionColour() : Property((utf8*)"ActiveSelectionColour", (utf8*)"Property to get/set the colour used for rendering the selection highlight when the edit box is active.  Value is \"aarrggbb\" (hex).") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the colour used for rendering the selection highlight when the edit box is inactive.

	\par Usage:
		- Name: InactiveSelectionColour
		- Format: "aarrggbb".

	\par Where:
		- aarrggbb is the ARGB colour value to be used.
*/
class InactiveSelectionColour : public Property
{
public:
	InactiveSelectionColour() : Property((utf8*)"InactiveSelectionColour", (utf8*)"Property to get/set the colour used for rendering the selection highlight when the edit box is inactive.  Value is \"aarrggbb\" (hex).") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


} // End of  MultiLineEditboxProperties namespace section

} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIMultiLineEditboxProperties_h_