// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "TextureTarget.pypp.hpp"

namespace bp = boost::python;

struct TextureTarget_wrapper : CEGUI::TextureTarget, bp::wrapper< CEGUI::TextureTarget > {

    TextureTarget_wrapper()
    : CEGUI::TextureTarget()
      , bp::wrapper< CEGUI::TextureTarget >(){
        // null constructor
        
    }

    virtual void clear(  ){
        bp::override func_clear = this->get_override( "clear" );
        func_clear(  );
    }

    virtual void declareRenderSize( ::CEGUI::Sizef const & sz ){
        bp::override func_declareRenderSize = this->get_override( "declareRenderSize" );
        func_declareRenderSize( boost::ref(sz) );
    }

    virtual ::CEGUI::Texture & getTexture(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual bool isRenderingInverted(  ) const {
        bp::override func_isRenderingInverted = this->get_override( "isRenderingInverted" );
        return func_isRenderingInverted(  );
    }

    virtual void activate(  ){
        bp::override func_activate = this->get_override( "activate" );
        func_activate(  );
    }

    virtual void deactivate(  ){
        bp::override func_deactivate = this->get_override( "deactivate" );
        func_deactivate(  );
    }

    virtual void draw( ::CEGUI::GeometryBuffer const & buffer ){
        bp::override func_draw = this->get_override( "draw" );
        func_draw( boost::ref(buffer) );
    }

    virtual void draw( ::CEGUI::RenderQueue const & queue ){
        bp::override func_draw = this->get_override( "draw" );
        func_draw( boost::ref(queue) );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    void fireEvent_impl( ::CEGUI::String const & name, ::CEGUI::EventArgs & args ){
        CEGUI::EventSet::fireEvent_impl( boost::ref(name), boost::ref(args) );
    }

    virtual ::CEGUI::Rectf const & getArea(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    ::CEGUI::ScriptModule * getScriptModule(  ) const {
        return CEGUI::EventSet::getScriptModule(  );
    }

    virtual bool isImageryCache(  ) const {
        bp::override func_isImageryCache = this->get_override( "isImageryCache" );
        return func_isImageryCache(  );
    }

    virtual void setArea( ::CEGUI::Rectf const & area ){
        bp::override func_setArea = this->get_override( "setArea" );
        func_setArea( boost::ref(area) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void unprojectPoint( ::CEGUI::GeometryBuffer const & buff, ::CEGUI::Vector2f const & p_in, ::CEGUI::Vector2f & p_out ) const {
        bp::override func_unprojectPoint = this->get_override( "unprojectPoint" );
        func_unprojectPoint( boost::ref(buff), boost::ref(p_in), boost::ref(p_out) );
    }

};

void register_TextureTarget_class(){

    { //::CEGUI::TextureTarget
        typedef bp::class_< TextureTarget_wrapper, bp::bases< CEGUI::RenderTarget >, boost::noncopyable > TextureTarget_exposer_t;
        TextureTarget_exposer_t TextureTarget_exposer = TextureTarget_exposer_t( "TextureTarget", "*!\n\
        \n\
            Specialisation of RenderTarget interface that should be used as the base\n\
            class for RenderTargets that are implemented using textures.\n\
        *\n" );
        bp::scope TextureTarget_scope( TextureTarget_exposer );
        { //::CEGUI::TextureTarget::clear
        
            typedef void ( ::CEGUI::TextureTarget::*clear_function_type )(  ) ;
            
            TextureTarget_exposer.def( 
                "clear"
                , bp::pure_virtual( clear_function_type(&::CEGUI::TextureTarget::clear) )
                , "*!\n\
            \n\
                Clear the surface of the underlying texture.\n\
            *\n" );
        
        }
        { //::CEGUI::TextureTarget::declareRenderSize
        
            typedef void ( ::CEGUI::TextureTarget::*declareRenderSize_function_type )( ::CEGUI::Sizef const & ) ;
            
            TextureTarget_exposer.def( 
                "declareRenderSize"
                , bp::pure_virtual( declareRenderSize_function_type(&::CEGUI::TextureTarget::declareRenderSize) )
                , ( bp::arg("sz") )
                , "*!\n\
                \n\
                    Used to declare to the TextureTarget the largest size, in pixels, of the\n\
                    next set of incoming rendering operations.\n\
            \n\
                \note\n\
                    The main purpose of this is to allow for the implemenatation to resize\n\
                    the underlying texture so that it can hold the imagery that will be\n\
                    drawn.\n\
            \n\
                @param sz\n\
                    Size object describing the largest area that will be rendererd in the\n\
                    next batch of rendering operations.\n\
            \n\
                @exception InvalidRequestException\n\
                    May be thrown if the TextureTarget would not be able to handle the\n\
                    operations rendering content of the given size.\n\
                *\n" );
        
        }
        { //::CEGUI::TextureTarget::getTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::TextureTarget::*getTexture_function_type )(  ) const;
            
            TextureTarget_exposer.def( 
                "getTexture"
                , bp::pure_virtual( getTexture_function_type(&::CEGUI::TextureTarget::getTexture) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Return a pointer to the CEGUI.Texture that the TextureTarget is using.\n\
            \n\
                @return\n\
                    Texture object that the TextureTarget uses when rendering imagery.\n\
                *\n" );
        
        }
        { //::CEGUI::TextureTarget::isRenderingInverted
        
            typedef bool ( ::CEGUI::TextureTarget::*isRenderingInverted_function_type )(  ) const;
            
            TextureTarget_exposer.def( 
                "isRenderingInverted"
                , bp::pure_virtual( isRenderingInverted_function_type(&::CEGUI::TextureTarget::isRenderingInverted) )
                , "*!\n\
                \n\
                    Return whether rendering done on the target texture is inverted in\n\
                    relation to regular textures.\n\
            \n\
                    This is intended to be used when generating geometry for rendering the\n\
                    TextureTarget onto another surface.\n\
            \n\
                @return\n\
                    - true if the texture content should be considered as inverted\n\
                    vertically in comparison with other regular textures.\n\
                    - false if the texture content has the same orientation as regular\n\
                    textures.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::activate
        
            typedef void ( ::CEGUI::RenderTarget::*activate_function_type )(  ) ;
            
            TextureTarget_exposer.def( 
                "activate"
                , bp::pure_virtual( activate_function_type(&::CEGUI::RenderTarget::activate) )
                , "*!\n\
                \n\
                    Activate the render target and put it in a state ready to be drawn to.\n\
            \n\
                \note\n\
                    You MUST call this before doing any rendering - if you do not call this,\n\
                    in the unlikely event that your application actually works, it will\n\
                    likely stop working in some future version.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::deactivate
        
            typedef void ( ::CEGUI::RenderTarget::*deactivate_function_type )(  ) ;
            
            TextureTarget_exposer.def( 
                "deactivate"
                , bp::pure_virtual( deactivate_function_type(&::CEGUI::RenderTarget::deactivate) )
                , "*!\n\
                \n\
                    Deactivate the render target after having completed rendering.\n\
            \n\
                \note\n\
                    You MUST call this after you finish rendering to the target - if you do\n\
                    not call this, in the unlikely event that your application actually\n\
                    works, it will likely stop working in some future version.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::draw
        
            typedef void ( ::CEGUI::RenderTarget::*draw_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            
            TextureTarget_exposer.def( 
                "draw"
                , bp::pure_virtual( draw_function_type(&::CEGUI::RenderTarget::draw) )
                , ( bp::arg("buffer") )
                , "*!\n\
                \n\
                    Draw geometry from the given GeometryBuffer onto the surface that\n\
                    this RenderTarget represents.\n\
            \n\
                @param buffer\n\
                    GeometryBuffer object holding the geometry that should be drawn to the\n\
                    RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::draw
        
            typedef void ( ::CEGUI::RenderTarget::*draw_function_type )( ::CEGUI::RenderQueue const & ) ;
            
            TextureTarget_exposer.def( 
                "draw"
                , bp::pure_virtual( draw_function_type(&::CEGUI::RenderTarget::draw) )
                , ( bp::arg("queue") )
                , "*!\n\
                \n\
                    Draw geometry from the given RenderQueue onto the surface that\n\
                    this RenderTarget represents.\n\
            \n\
                @param queue\n\
                    RenderQueue object holding the geometry that should be drawn to the\n\
                    RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( TextureTarget_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            TextureTarget_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&TextureTarget_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::EventSet::fireEvent_impl
        
            typedef void ( TextureTarget_wrapper::*fireEvent_impl_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs & ) ;
            
            TextureTarget_exposer.def( 
                "fireEvent_impl"
                , fireEvent_impl_function_type( &TextureTarget_wrapper::fireEvent_impl )
                , ( bp::arg("name"), bp::arg("args") )
                , "! Implementation event firing member\n" );
        
        }
        { //::CEGUI::RenderTarget::getArea
        
            typedef ::CEGUI::Rectf const & ( ::CEGUI::RenderTarget::*getArea_function_type )(  ) const;
            
            TextureTarget_exposer.def( 
                "getArea"
                , bp::pure_virtual( getArea_function_type(&::CEGUI::RenderTarget::getArea) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the area defined for this RenderTarget.\n\
            \n\
                @return\n\
                    Rect object describing the currently defined area for this RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::EventSet::getScriptModule
        
            typedef ::CEGUI::ScriptModule * ( TextureTarget_wrapper::*getScriptModule_function_type )(  ) const;
            
            TextureTarget_exposer.def( 
                "getScriptModule"
                , getScriptModule_function_type( &TextureTarget_wrapper::getScriptModule )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Implementation event firing member\n\
            ! Helper to return the script module pointer or throw.\n" );
        
        }
        { //::CEGUI::RenderTarget::isImageryCache
        
            typedef bool ( ::CEGUI::RenderTarget::*isImageryCache_function_type )(  ) const;
            
            TextureTarget_exposer.def( 
                "isImageryCache"
                , bp::pure_virtual( isImageryCache_function_type(&::CEGUI::RenderTarget::isImageryCache) )
                , "*!\n\
                \n\
                    Return whether the RenderTarget is an implementation that caches\n\
                    actual rendered imagery.\n\
            \n\
                    Typically it is expected that texture based RenderTargets would return\n\
                    true in response to this call.  Other types of RenderTarget, like\n\
                    view port based targets, will more likely return false.\n\
            \n\
                @return\n\
                    - true if the RenderTarget does cache rendered imagery.\n\
                    - false if the RenderTarget does not cache rendered imagery.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::setArea
        
            typedef void ( ::CEGUI::RenderTarget::*setArea_function_type )( ::CEGUI::Rectf const & ) ;
            
            TextureTarget_exposer.def( 
                "setArea"
                , bp::pure_virtual( setArea_function_type(&::CEGUI::RenderTarget::setArea) )
                , ( bp::arg("area") )
                , "*!\n\
                \n\
                    Set the area for this RenderTarget.  The exact action this function\n\
                    will take depends upon what the concrete class is representing.  For\n\
                    example, with a 'view port' style RenderTarget, this should set the area\n\
                    that the view port occupies on the display (or rendering window).\n\
            \n\
                @param area\n\
                    Rect object describing the new area to be assigned to the RenderTarget.\n\
            \n\
                \note\n\
                    When implementing this function, you should be sure to fire the event\n\
                    RenderTarget.EventAreaChanged so that interested parties can know that\n\
                    the change has occurred.\n\
            \n\
                @exception InvalidRequestException\n\
                    May be thrown if the RenderTarget does not support setting or changing\n\
                    its area, or if the area change can not be satisfied for some reason.\n\
                *\n" );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( TextureTarget_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            TextureTarget_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&TextureTarget_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( TextureTarget_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            TextureTarget_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&TextureTarget_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::RenderTarget::unprojectPoint
        
            typedef void ( ::CEGUI::RenderTarget::*unprojectPoint_function_type )( ::CEGUI::GeometryBuffer const &,::CEGUI::Vector2f const &,::CEGUI::Vector2f & ) const;
            
            TextureTarget_exposer.def( 
                "unprojectPoint"
                , bp::pure_virtual( unprojectPoint_function_type(&::CEGUI::RenderTarget::unprojectPoint) )
                , ( bp::arg("buff"), bp::arg("p_in"), bp::arg("p_out") )
                , "*!\n\
            \n\
                Take point  p_in unproject it and put the result in  p_out.\n\
                Resulting point is local to GeometryBuffer  buff.\n\
            *\n" );
        
        }
    }

}
