// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "AbsoluteDim.pypp.hpp"

namespace bp = boost::python;

struct AbsoluteDim_wrapper : CEGUI::AbsoluteDim, bp::wrapper< CEGUI::AbsoluteDim > {

    AbsoluteDim_wrapper(CEGUI::AbsoluteDim const & arg )
    : CEGUI::AbsoluteDim( arg )
      , bp::wrapper< CEGUI::AbsoluteDim >(){
        // copy constructor
        
    }

    AbsoluteDim_wrapper( )
    : CEGUI::AbsoluteDim( )
      , bp::wrapper< CEGUI::AbsoluteDim >(){
        // null constructor
    
    }

    AbsoluteDim_wrapper(float val )
    : CEGUI::AbsoluteDim( val )
      , bp::wrapper< CEGUI::AbsoluteDim >(){
        // constructor
    
    }

    virtual ::CEGUI::BaseDim * clone(  ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->CEGUI::AbsoluteDim::clone(  );
        }
    }
    
    ::CEGUI::BaseDim * default_clone(  ) const  {
        return CEGUI::AbsoluteDim::clone( );
    }

    virtual float getValue( ::CEGUI::Window const & wnd ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd) );
        else{
            return this->CEGUI::AbsoluteDim::getValue( boost::ref(wnd) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd ) const  {
        return CEGUI::AbsoluteDim::getValue( boost::ref(wnd) );
    }

    virtual float getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd), boost::ref(container) );
        else{
            return this->CEGUI::AbsoluteDim::getValue( boost::ref(wnd), boost::ref(container) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        return CEGUI::AbsoluteDim::getValue( boost::ref(wnd), boost::ref(container) );
    }

    virtual void writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementAttributes_impl = this->get_override( "writeXMLElementAttributes_impl" ) )
            func_writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::AbsoluteDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::AbsoluteDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
    }

    virtual void writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementName_impl = this->get_override( "writeXMLElementName_impl" ) )
            func_writeXMLElementName_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::AbsoluteDim::writeXMLElementName_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::AbsoluteDim::writeXMLElementName_impl( boost::ref(xml_stream) );
    }

    virtual bool handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        if( bp::override func_handleFontRenderSizeChange = this->get_override( "handleFontRenderSizeChange" ) )
            return func_handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        else{
            return this->CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        }
    }
    
    bool default_handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        return CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_AbsoluteDim_class(){

    { //::CEGUI::AbsoluteDim
        typedef bp::class_< AbsoluteDim_wrapper, bp::bases< CEGUI::BaseDim > > AbsoluteDim_exposer_t;
        AbsoluteDim_exposer_t AbsoluteDim_exposer = AbsoluteDim_exposer_t( "AbsoluteDim", "*!\n\
        \n\
            Dimension type that represents an absolute pixel value.\n\
            Implements BaseDim interface.\n\
        *\n", bp::init< >() );
        bp::scope AbsoluteDim_scope( AbsoluteDim_exposer );
        AbsoluteDim_exposer.def( bp::init< float >(( bp::arg("val") )) );
        bp::implicitly_convertible< float, CEGUI::AbsoluteDim >();
        { //::CEGUI::AbsoluteDim::clone
        
            typedef ::CEGUI::BaseDim * ( ::CEGUI::AbsoluteDim::*clone_function_type )(  ) const;
            typedef ::CEGUI::BaseDim * ( AbsoluteDim_wrapper::*default_clone_function_type )(  ) const;
            
            AbsoluteDim_exposer.def( 
                "clone"
                , clone_function_type(&::CEGUI::AbsoluteDim::clone)
                , default_clone_function_type(&AbsoluteDim_wrapper::default_clone)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::AbsoluteDim::getBaseValue
        
            typedef float ( ::CEGUI::AbsoluteDim::*getBaseValue_function_type )(  ) const;
            
            AbsoluteDim_exposer.def( 
                "getBaseValue"
                , getBaseValue_function_type( &::CEGUI::AbsoluteDim::getBaseValue )
                , "! Get the current value of the AbsoluteDim.\n" );
        
        }
        { //::CEGUI::AbsoluteDim::getValue
        
            typedef float ( ::CEGUI::AbsoluteDim::*getValue_function_type )( ::CEGUI::Window const & ) const;
            typedef float ( AbsoluteDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const & ) const;
            
            AbsoluteDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::AbsoluteDim::getValue)
                , default_getValue_function_type(&AbsoluteDim_wrapper::default_getValue)
                , ( bp::arg("wnd") ) );
        
        }
        { //::CEGUI::AbsoluteDim::getValue
        
            typedef float ( ::CEGUI::AbsoluteDim::*getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            typedef float ( AbsoluteDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            
            AbsoluteDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::AbsoluteDim::getValue)
                , default_getValue_function_type(&AbsoluteDim_wrapper::default_getValue)
                , ( bp::arg("wnd"), bp::arg("container") ) );
        
        }
        { //::CEGUI::AbsoluteDim::setBaseValue
        
            typedef void ( ::CEGUI::AbsoluteDim::*setBaseValue_function_type )( float ) ;
            
            AbsoluteDim_exposer.def( 
                "setBaseValue"
                , setBaseValue_function_type( &::CEGUI::AbsoluteDim::setBaseValue )
                , ( bp::arg("val") )
                , "! Set the current value of the AbsoluteDim.\n" );
        
        }
        { //::CEGUI::AbsoluteDim::writeXMLElementAttributes_impl
        
            typedef void ( AbsoluteDim_wrapper::*writeXMLElementAttributes_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            AbsoluteDim_exposer.def( 
                "writeXMLElementAttributes_impl"
                , writeXMLElementAttributes_impl_function_type( &AbsoluteDim_wrapper::default_writeXMLElementAttributes_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::AbsoluteDim::writeXMLElementName_impl
        
            typedef void ( AbsoluteDim_wrapper::*writeXMLElementName_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            AbsoluteDim_exposer.def( 
                "writeXMLElementName_impl"
                , writeXMLElementName_impl_function_type( &AbsoluteDim_wrapper::default_writeXMLElementName_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::BaseDim::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::BaseDim::*handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            typedef bool ( AbsoluteDim_wrapper::*default_handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            
            AbsoluteDim_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type(&::CEGUI::BaseDim::handleFontRenderSizeChange)
                , default_handleFontRenderSizeChange_function_type(&AbsoluteDim_wrapper::default_handleFontRenderSizeChange)
                , ( bp::arg("window"), bp::arg("font") ) );
        
        }
        { //::CEGUI::BaseDim::writeXMLToStream
        
            typedef void ( ::CEGUI::BaseDim::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( AbsoluteDim_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            AbsoluteDim_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::BaseDim::writeXMLToStream)
                , default_writeXMLToStream_function_type(&AbsoluteDim_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
