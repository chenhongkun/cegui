/************************************************************************
	filename: 	CEGUIRenderableElement.h
	created:	14/4/2004
	author:		Paul D Turner
	
	purpose:	Interface for base class of a 'higher-level' renderable
				UI entity.
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
#ifndef _CEGUIRenderableElement_h_
#define _CEGUIRenderableElement_h_

#include "CEGUIBase.h"
#include "CEGUISystem.h"
#include "CEGUIColourRect.h"
#include "CEGUIVector.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*!
\brief

*/
class CEGUIBASE_API RenderableElement
{
public:
	/*************************************************************************
		Drawing methods
	*************************************************************************/
	/*!
	\brief
		Draw the element chain starting with this element.

	\param position
		Vector3 object describing the base position to be used when rendering the element chain.  Each element
		in the chain will be offset from this position by it's own internal position setting.

	\param clip_rect
		Rect object describing the clipping area.  No rendering will appear outside this area.
	*/
	void	draw(const Vector3& position, const Rect& clip_rect);


	/*************************************************************************
		Accessors
	*************************************************************************/
	/*!
	\brief
		Return a pointer to the next RenderableElement in the chain.

	\return
		Pointer to a RenderableElement object that is linked this this one.  May be NULL for none.
	*/
	RenderableElement*	getNextElement(void) const			{return d_next;}


	/*!
	\brief
		Return the rendering colours set for this RenderableElement

	\return
		ColourRect object describing the colours to be used when rendering this RenderableElement.
	*/
	ColourRect	getColours(void) const						{return d_colours;}


	/*!
	\brief
		Return the offset position of this RenderableElement.

	\return
		Point object describing the offset position that this RenderableElement is to be rendered at.  This
		value is added to whatever position is specified when the RenderableElement::draw method is called to
		obtain the final rendering position.
	*/
	Point	getPosition(void) const							{return Point(d_area.d_left, d_area.d_top);}


	/*!
	\brief
		Return the current size of the element.

	\return
		Size object describing the current size of the RenderableFrame.
	*/
	Size	getSize(void) const				{return Size(d_area.getWidth(), d_area.getHeight());}


	/*!
	\brief
		Return the area for the element.

	\return
		Rect object describing the pixel area (offset from some unknown location) of the frame.
	*/
	Rect	getRect(void) const				{return d_area;}


	/*************************************************************************
		Manipulators
	*************************************************************************/
	/*!
	\brief
	Link another RenderableElement to this one.

	The linked element will be drawn whenever this element is drawn using the same base position and clipping area
	as provided when the RenderableElement::draw method is called.  Whole chains of Renderable Elements can be
	created using this system.

	\param element
		Pointer to a RenderableElement object that will be linked to this element.

	\return
		Nothing.
	*/
	void	setNextElement(RenderableElement* element)		{d_next = element;}


	/*!
	\brief
		Sets the colours to be applied when rendering the element.

	\param colours
		ColourRect object describing the colours to be used.

	\return 
		Nothing.
	*/
	void	setColours(const ColourRect& colours)			{d_colours = colours;}


	/*!
	\brief
		Set the rendering offset position for this element.

	\param position
		Point object describing the offset position to use for this element.  This value is added to whatever
		position is specified when the RenderableElement::draw method is called to obtain the final rendering
		position.

	\return
		Nothing.
	*/
	void	setPosition(const Point& position)				{d_area.setPosition(position);}


	/*!
	\brief
		set the dimensions for the frame.

	\param size
		Size object describing the new size for the frame (in pixels)
	*/
	void	setSize(const Size& size)		{d_area.setSize(size);}


	/*!
	\brief
		Set the area for the frame

	\param area
		Rect object describing the pixel area (offset from some unknown location) of the frame.

	\return
		None.
	*/
	void	setRect(const Rect& area)		{d_area = area;}


protected:
	/*************************************************************************
		Construction / Destruction
	*************************************************************************/
	/*!
	\brief
		Constructor for RenderableElement base class
	*/
	RenderableElement(void);


	/*!
	\brief
		Destructor for RenderableElement base class
	*/
	virtual ~RenderableElement(void);


	/*************************************************************************
		Implementation methods
	*************************************************************************/
	/*!
	\brief
		This function performs the required rendering for this element.

	\param position
		Vector3 object describing the final rendering position for the object.

	\param clip_rect
		Rect object describing the clipping area for the rendering.  No rendering will be performed outside this area.

	\return
		Nothing.
	*/
	virtual void	draw_impl(const Vector3& position, const Rect& clip_rect) const = 0;


	/*************************************************************************
		Implementation Data
	*************************************************************************/
	RenderableElement*	d_next;		//!< Link to another RenderableElement.
	ColourRect	d_colours;			//!< Colours to be used for this element;
	Rect		d_area;				//!< Currently defined area for this element.
};

} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIRenderableElement_h_