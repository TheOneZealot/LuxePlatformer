#ifndef INCLUDED_snow_systems_input_Input
#define INCLUDED_snow_systems_input_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,systems,input,Input)
HX_DECLARE_CLASS2(snow,types,GamepadEvent)
HX_DECLARE_CLASS2(snow,types,InputEvent)
HX_DECLARE_CLASS2(snow,types,KeyEvent)
HX_DECLARE_CLASS2(snow,types,ModState)
HX_DECLARE_CLASS2(snow,types,MouseEvent)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
HX_DECLARE_CLASS2(snow,types,TextEvent)
HX_DECLARE_CLASS2(snow,types,TouchEvent)
namespace snow{
namespace systems{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.input.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Input_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		::snow::Snow app;
		int gamepad_init_count;
		::snow::types::InputEvent event;
		::snow::types::KeyEvent key_event;
		::snow::types::TextEvent text_event;
		::snow::types::MouseEvent mouse_event;
		::snow::types::TouchEvent touch_event;
		::snow::types::GamepadEvent gamepad_event;
		::snow::types::ModState mod_state;
		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual bool keypressed( int _code);
		Dynamic keypressed_dyn();

		virtual bool keyreleased( int _code);
		Dynamic keyreleased_dyn();

		virtual bool keydown( int _code);
		Dynamic keydown_dyn();

		virtual bool scanpressed( int _code);
		Dynamic scanpressed_dyn();

		virtual bool scanreleased( int _code);
		Dynamic scanreleased_dyn();

		virtual bool scandown( int _code);
		Dynamic scandown_dyn();

		virtual bool mousepressed( int _button);
		Dynamic mousepressed_dyn();

		virtual bool mousereleased( int _button);
		Dynamic mousereleased_dyn();

		virtual bool mousedown( int _button);
		Dynamic mousedown_dyn();

		virtual bool gamepadpressed( int _gamepad,int _button);
		Dynamic gamepadpressed_dyn();

		virtual bool gamepadreleased( int _gamepad,int _button);
		Dynamic gamepadreleased_dyn();

		virtual bool gamepaddown( int _gamepad,int _button);
		Dynamic gamepaddown_dyn();

		virtual Float gamepadaxis( int _gamepad,int _axis);
		Dynamic gamepadaxis_dyn();

		virtual Void dispatch_key_down_event( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id);
		Dynamic dispatch_key_down_event_dyn();

		virtual Void dispatch_key_up_event( int keycode,int scancode,bool repeat,::snow::types::ModState mod,Float timestamp,int window_id);
		Dynamic dispatch_key_up_event_dyn();

		virtual Void dispatch_text_event( ::String text,int start,int length,int type,Float timestamp,int window_id);
		Dynamic dispatch_text_event_dyn();

		virtual Void dispatch_mouse_move_event( int x,int y,int xrel,int yrel,Float timestamp,int window_id);
		Dynamic dispatch_mouse_move_event_dyn();

		virtual Void dispatch_mouse_down_event( int x,int y,int button,Float timestamp,int window_id);
		Dynamic dispatch_mouse_down_event_dyn();

		virtual Void dispatch_mouse_up_event( int x,int y,int button,Float timestamp,int window_id);
		Dynamic dispatch_mouse_up_event_dyn();

		virtual Void dispatch_mouse_wheel_event( Float x,Float y,Float timestamp,int window_id);
		Dynamic dispatch_mouse_wheel_event_dyn();

		virtual Void dispatch_touch_down_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic dispatch_touch_down_event_dyn();

		virtual Void dispatch_touch_up_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic dispatch_touch_up_event_dyn();

		virtual Void dispatch_touch_move_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic dispatch_touch_move_event_dyn();

		virtual Void dispatch_gamepad_axis_event( int gamepad,int axis,Float value,Float timestamp);
		Dynamic dispatch_gamepad_axis_event_dyn();

		virtual Void dispatch_gamepad_button_down_event( int gamepad,int button,Float value,Float timestamp);
		Dynamic dispatch_gamepad_button_down_event_dyn();

		virtual Void dispatch_gamepad_button_up_event( int gamepad,int button,Float value,Float timestamp);
		Dynamic dispatch_gamepad_button_up_event_dyn();

		virtual Void dispatch_gamepad_device_event( int gamepad,::String id,int type,Float timestamp);
		Dynamic dispatch_gamepad_device_event_dyn();

		virtual Void onevent( ::snow::types::SystemEvent _event);
		Dynamic onevent_dyn();

		virtual Void _update_mousestate( );
		Dynamic _update_mousestate_dyn();

		virtual Void _update_gamepadstate( );
		Dynamic _update_gamepadstate_dyn();

		virtual Void _update_keystate( );
		Dynamic _update_keystate_dyn();

		::haxe::ds::IntMap key_code_down;
		::haxe::ds::IntMap key_code_pressed;
		::haxe::ds::IntMap key_code_released;
		::haxe::ds::IntMap scan_code_down;
		::haxe::ds::IntMap scan_code_pressed;
		::haxe::ds::IntMap scan_code_released;
		::haxe::ds::IntMap mouse_button_down;
		::haxe::ds::IntMap mouse_button_pressed;
		::haxe::ds::IntMap mouse_button_released;
		::haxe::ds::IntMap gamepad_button_down;
		::haxe::ds::IntMap gamepad_button_pressed;
		::haxe::ds::IntMap gamepad_button_released;
		::haxe::ds::IntMap gamepad_axis_values;
		int touch_count;
		::haxe::ds::IntMap touches_down;
};

} // end namespace snow
} // end namespace systems
} // end namespace input

#endif /* INCLUDED_snow_systems_input_Input */ 
