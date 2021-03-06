/***********************************************************************
    filename:   Module.cpp
    created:    Sun Oct 09 2011
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2011 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#include "CEGUI/CommonDialogs/Module.h"
#include "CEGUI/TplWindowFactoryRegisterer.h"

#include "CEGUI/CommonDialogs/ColourPicker/ColourPicker.h"
#include "CEGUI/CommonDialogs/ColourPicker/Controls.h"

//----------------------------------------------------------------------------//
extern "C"
CEGUI::FactoryModule& getWindowFactoryModule()
{
    static CEGUI::CommonDialogsWindowModule module;
    return module;
}

//----------------------------------------------------------------------------//

// Start of CEGUI namespace section
namespace CEGUI
{

//----------------------------------------------------------------------------//
CommonDialogsWindowModule::CommonDialogsWindowModule()
{
    d_registry.push_back(new TplWindowFactoryRegisterer<ColourPicker>);
    d_registry.push_back(new TplWindowFactoryRegisterer<ColourPickerControls>);
}

//----------------------------------------------------------------------------//
CommonDialogsWindowModule::~CommonDialogsWindowModule()
{
    FactoryRegistry::iterator i = d_registry.begin();
    for ( ; i != d_registry.end(); ++i)
        delete (*i);
}

//----------------------------------------------------------------------------//

} // End of  CEGUI namespace section

