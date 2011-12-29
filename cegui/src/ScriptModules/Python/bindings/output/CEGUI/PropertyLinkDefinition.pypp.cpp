// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "PropertyLinkDefinition.pypp.hpp"

namespace bp = boost::python;

struct PropertyLinkDefinition_wrapper : CEGUI::PropertyLinkDefinition, bp::wrapper< CEGUI::PropertyLinkDefinition > {

    PropertyLinkDefinition_wrapper(CEGUI::PropertyLinkDefinition const & arg )
    : CEGUI::PropertyLinkDefinition( arg )
      , bp::wrapper< CEGUI::PropertyLinkDefinition >(){
        // copy constructor
        
    }

    PropertyLinkDefinition_wrapper(::CEGUI::String const & propertyName, ::CEGUI::String const & widgetName, ::CEGUI::String const & targetProperty, ::CEGUI::String const & initialValue, bool redrawOnWrite, bool layoutOnWrite )
    : CEGUI::PropertyLinkDefinition( boost::ref(propertyName), boost::ref(widgetName), boost::ref(targetProperty), boost::ref(initialValue), redrawOnWrite, layoutOnWrite )
      , bp::wrapper< CEGUI::PropertyLinkDefinition >(){
        // constructor
    
    }

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::PropertyLinkDefinition::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::PropertyLinkDefinition::get( boost::python::ptr(receiver) );
    }

    ::CEGUI::Window const * getTargetWindow( ::CEGUI::PropertyReceiver const * receiver ) const {
        return CEGUI::PropertyLinkDefinition::getTargetWindow( boost::python::ptr(receiver) );
    }

    ::CEGUI::Window * getTargetWindow( ::CEGUI::PropertyReceiver * receiver ){
        return CEGUI::PropertyLinkDefinition::getTargetWindow( boost::python::ptr(receiver) );
    }

    ::CEGUI::Window const * getTargetWindow( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::String const & name ) const {
        return CEGUI::PropertyLinkDefinition::getTargetWindow( boost::python::ptr(receiver), boost::ref(name) );
    }

    ::CEGUI::Window * getTargetWindow( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & name ){
        return CEGUI::PropertyLinkDefinition::getTargetWindow( boost::python::ptr(receiver), boost::ref(name) );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::PropertyLinkDefinition::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::PropertyLinkDefinition::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void writeXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLAttributes = this->get_override( "writeXMLAttributes" ) )
            func_writeXMLAttributes( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyLinkDefinition::writeXMLAttributes( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyLinkDefinition::writeXMLAttributes( boost::ref(xml_stream) );
    }

    virtual void writeXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementType = this->get_override( "writeXMLElementType" ) )
            func_writeXMLElementType( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyLinkDefinition::writeXMLElementType( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyLinkDefinition::writeXMLElementType( boost::ref(xml_stream) );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::PropertyDefinitionBase::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_PropertyLinkDefinition_class(){

    { //::CEGUI::PropertyLinkDefinition
        typedef bp::class_< PropertyLinkDefinition_wrapper, bp::bases< CEGUI::PropertyDefinitionBase > > PropertyLinkDefinition_exposer_t;
        PropertyLinkDefinition_exposer_t PropertyLinkDefinition_exposer = PropertyLinkDefinition_exposer_t( "PropertyLinkDefinition", "*!\n\
        \n\
            Class representing a property that links to another property defined on\n\
            an attached child widget.\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool >(( bp::arg("propertyName"), bp::arg("widgetName"), bp::arg("targetProperty"), bp::arg("initialValue"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite") )) );
        bp::scope PropertyLinkDefinition_scope( PropertyLinkDefinition_exposer );
        { //::CEGUI::PropertyLinkDefinition::addLinkTarget
        
            typedef void ( ::CEGUI::PropertyLinkDefinition::*addLinkTarget_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            PropertyLinkDefinition_exposer.def( 
                "addLinkTarget"
                , addLinkTarget_function_type( &::CEGUI::PropertyLinkDefinition::addLinkTarget )
                , ( bp::arg("widget"), bp::arg("property") )
                , "! add a new link target to  property on  widget (name).\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::clearLinkTargets
        
            typedef void ( ::CEGUI::PropertyLinkDefinition::*clearLinkTargets_function_type )(  ) ;
            
            PropertyLinkDefinition_exposer.def( 
                "clearLinkTargets"
                , clearLinkTargets_function_type( &::CEGUI::PropertyLinkDefinition::clearLinkTargets )
                , "! add a new link target to  property on  widget (name).\n\
            ! clear all link targets from this link definition.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::get
        
            typedef ::CEGUI::String ( ::CEGUI::PropertyLinkDefinition::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyLinkDefinition_wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::PropertyLinkDefinition::get)
                , default_get_function_type(&PropertyLinkDefinition_wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::PropertyLinkDefinition::getTargetWindow
        
            typedef ::CEGUI::Window const * ( PropertyLinkDefinition_wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_wrapper::getTargetWindow )
                , ( bp::arg("receiver") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                    \n\
                        return a pointer to the window containing the target property to\n\
                        be accessed.\n\
            \n\
                    @exception UnknownObjectException\n\
                        thrown if no such target window exists within the system.\n\
            \n\
                     deprecated\n\
                        This will be removed in 0.8.x.  Use the version taking a suffix\n\
                        string instead!\n\
                    *\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::getTargetWindow
        
            typedef ::CEGUI::Window * ( PropertyLinkDefinition_wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver * ) ;
            
            PropertyLinkDefinition_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_wrapper::getTargetWindow )
                , ( bp::arg("receiver") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
             deprecated\n\
                This will be removed in 0.8.x.  Use the version taking a suffix\n\
                string instead!\n\
            *\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::getTargetWindow
        
            typedef ::CEGUI::Window const * ( PropertyLinkDefinition_wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::String const & ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_wrapper::getTargetWindow )
                , ( bp::arg("receiver"), bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Return a pointer to the target window with the given name.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::getTargetWindow
        
            typedef ::CEGUI::Window * ( PropertyLinkDefinition_wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            PropertyLinkDefinition_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_wrapper::getTargetWindow )
                , ( bp::arg("receiver"), bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Return a pointer to the target window with the given name.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::isTargetProperty
        
            typedef bool ( ::CEGUI::PropertyLinkDefinition::*isTargetProperty_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "isTargetProperty"
                , isTargetProperty_function_type( &::CEGUI::PropertyLinkDefinition::isTargetProperty )
                , ( bp::arg("widget"), bp::arg("property") )
                , "return whether a the given widget  property pair is a target of this property link.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition::set
        
            typedef void ( ::CEGUI::PropertyLinkDefinition::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( PropertyLinkDefinition_wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            PropertyLinkDefinition_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::PropertyLinkDefinition::set)
                , default_set_function_type(&PropertyLinkDefinition_wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::PropertyLinkDefinition::writeXMLAttributes
        
            typedef void ( PropertyLinkDefinition_wrapper::*writeXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "writeXMLAttributes"
                , writeXMLAttributes_function_type( &PropertyLinkDefinition_wrapper::default_writeXMLAttributes )
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::PropertyLinkDefinition::writeXMLElementType
        
            typedef void ( PropertyLinkDefinition_wrapper::*writeXMLElementType_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "writeXMLElementType"
                , writeXMLElementType_function_type( &PropertyLinkDefinition_wrapper::default_writeXMLElementType )
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyLinkDefinition_wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&PropertyLinkDefinition_wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( PropertyLinkDefinition_wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&PropertyLinkDefinition_wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( PropertyLinkDefinition_wrapper::*default_isReadable_function_type )(  ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&PropertyLinkDefinition_wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( PropertyLinkDefinition_wrapper::*default_isWritable_function_type )(  ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&PropertyLinkDefinition_wrapper::default_isWritable) );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeXMLToStream
        
            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyLinkDefinition_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinition_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PropertyLinkDefinition_wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}
