/************************************************************************
	filename: 	CEGUIThumb.cpp
	created:	25/4/2004
	author:		Paul D Turner
	
	purpose:	Implements common parts of the Thumb base class widget
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
#include "elements/CEGUIThumb.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*************************************************************************
	Event name constants
*************************************************************************/
// generated internally by Window
const utf8	Thumb::ThumbPositionChanged[]		= "ThumbPosChanged";


/*************************************************************************
	Constructor for Thumb objects
*************************************************************************/
Thumb::Thumb(const String& type, const String& name) :
	PushButton(type, name),
	d_hotTrack(true),
	d_vertFree(false),
	d_horzFree(false),
	d_beingDragged(false),
	d_vertMin(0.0f),
	d_horzMin(0.0f),
	d_vertMax(1.0f),
	d_horzMax(1.0f)
{
	addThumbEvents();
}


/*************************************************************************
	Destructor for Thumb objects	
*************************************************************************/
Thumb::~Thumb(void)
{
}


/*************************************************************************
	set the movement range of the thumb for the vertical axis.	
*************************************************************************/
void Thumb::setVertRange(float min, float max)
{
	// ensure min <= max, swap if not.
	if (min > max)
	{
		float tmp = min;
		max = min;
		min = tmp;
	}

	d_vertMax = max;
	d_vertMin = min;

	// validate current position.
	float cp = getYPosition();

	if (cp < min)
	{
		setYPosition(min);
	}
	else if (cp > max)
	{
		setYPosition(max);
	}

}


/*************************************************************************
	set the movement range of the thumb for the horizontal axis.
*************************************************************************/
void Thumb::setHorzRange(float min, float max)
{
	// ensure min <= max, swap if not.
	if (min > max)
	{
		float tmp = min;
		max = min;
		min = tmp;
	}

	d_horzMax = max;
	d_horzMin = min;

	// validate current position.
	float cp = getXPosition();

	if (cp < min)
	{
		setXPosition(min);
	}
	else if (cp > max)
	{
		setXPosition(max);
	}

}


/*************************************************************************
	Add thumb specific events	
*************************************************************************/
void Thumb::addThumbEvents(void)
{
	addEvent(ThumbPositionChanged);
}


/*************************************************************************
	event triggered internally when the position of the thumb	
*************************************************************************/
void Thumb::onThumbPositionChanged(WindowEventArgs& e)
{
	fireEvent(ThumbPositionChanged, e);
}


/*************************************************************************
	Handler for mouse movement events
*************************************************************************/
void Thumb::onMouseMove(MouseEventArgs& e)
{
	// default processing
	PushButton::onMouseMove(e);

	// only react if we are being dragged
	if (d_beingDragged)
	{
		Vector2 delta;
		float hmin, hmax, vmin, vmax;

		// get some values as absolute pixel offsets
		if (getMetricsMode() == Relative)
		{
			delta = relativeToAbsolute(screenToWindow(e.position));

			hmax = relativeToAbsoluteX_impl(d_parent, d_horzMax);
			hmin = relativeToAbsoluteX_impl(d_parent, d_horzMin);
			vmax = relativeToAbsoluteY_impl(d_parent, d_vertMax);
			vmin = relativeToAbsoluteY_impl(d_parent, d_vertMin);
		}
		else
		{
			delta = screenToWindow(e.position);

			hmin = d_horzMin;
			hmax = d_horzMax;
			vmin = d_vertMin;
			vmax = d_vertMax;
		}

		// calculate amount of movement in pixels
		delta -= d_dragPoint;

		//
		// Calculate new (pixel) position for thumb
		//
		Point newPos(d_abs_area.getPosition());

		if (d_horzFree)
		{
			newPos.d_x += delta.d_x;

			// limit value to within currently set range
			newPos.d_x = (newPos.d_x < hmin) ? hmin : (newPos.d_x > hmax) ? hmax : newPos.d_x;
		}

		if (d_vertFree)
		{
			newPos.d_y += delta.d_y;

			// limit new position to within currently set range
			newPos.d_y = (newPos.d_y < vmin) ? vmin : (newPos.d_y > vmax) ? vmax : newPos.d_y;
		}

		// update thumb position if needed
		if (newPos != d_abs_area.getPosition())
		{
			if (getMetricsMode() == Relative)
			{
				newPos = absoluteToRelative_impl(d_parent, newPos);
			}

			setPosition(newPos);

			// send notification as required
			if (d_hotTrack)
			{
				onThumbPositionChanged(WindowEventArgs(this));
			}

		}

	}

	e.handled = true;
}


/*************************************************************************
	Handler for mouse button down events
*************************************************************************/
void Thumb::onMouseButtonDown(MouseEventArgs& e)
{
	// default processing
	PushButton::onMouseButtonDown(e);

	if (e.button == LeftButton)
	{
		// initialise the dragging state
		d_beingDragged = true;
		d_dragPoint = screenToWindow(e.position);

		if (getMetricsMode() == Relative)
		{
			d_dragPoint = relativeToAbsolute(d_dragPoint);
		}

		e.handled = true;
	}

}


/*************************************************************************
	Handler for event triggered when we lose capture of mouse input
*************************************************************************/
void Thumb::onCaptureLost(EventArgs& e)
{
	// default handling
	PushButton::onCaptureLost(e);

	d_beingDragged = false;

	// send notification whenever thumb is released
	onThumbPositionChanged(WindowEventArgs(this));
}


} // End of  CEGUI namespace section