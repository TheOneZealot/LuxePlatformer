#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InputType
#include <luxe/InputType.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEvent
#include <luxe/TextEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_systems_input_Input
#include <snow/systems/input/Input.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace luxe{

Void Input_obj::__construct(::luxe::Engine _core)
{
HX_STACK_FRAME("luxe.Input","new",0xd5d5d724,"luxe.Input.new","luxe/Input.hx",28,0x19edc1cd)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(30)
	this->core = _core;
	HX_STACK_LINE(32)
	::luxe::KeyEvent tmp = ::luxe::KeyEvent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->key_event = tmp;
	HX_STACK_LINE(33)
	::luxe::TextEvent tmp1 = ::luxe::TextEvent_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	this->text_event = tmp1;
	HX_STACK_LINE(34)
	::luxe::MouseEvent tmp2 = ::luxe::MouseEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->mouse_event = tmp2;
	HX_STACK_LINE(35)
	::luxe::TouchEvent tmp3 = ::luxe::TouchEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	this->touch_event = tmp3;
	HX_STACK_LINE(36)
	::luxe::GamepadEvent tmp4 = ::luxe::GamepadEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	this->gamepad_event = tmp4;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::luxe::Engine _core)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Input_obj::inputpressed( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputpressed",0x66d30494,"luxe.Input.inputpressed","luxe/Input.hx",44,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(45)
	::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputpressed,return )

bool Input_obj::inputreleased( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputreleased",0x98a70a8b,"luxe.Input.inputreleased","luxe/Input.hx",49,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp = this->_named_input_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputreleased,return )

bool Input_obj::inputdown( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputdown",0x58f8fb30,"luxe.Input.inputdown","luxe/Input.hx",54,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(55)
	::haxe::ds::StringMap tmp = this->_named_input_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputdown,return )

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("luxe.Input","keypressed",0x9327649f,"luxe.Input.keypressed","luxe/Input.hx",61,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(62)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	bool tmp3 = tmp1->keypressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("luxe.Input","keyreleased",0x3626b420,"luxe.Input.keyreleased","luxe/Input.hx",66,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(67)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	bool tmp3 = tmp1->keyreleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("luxe.Input","keydown",0xb1f4f645,"luxe.Input.keydown","luxe/Input.hx",71,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(72)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	bool tmp3 = tmp1->keydown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("luxe.Input","scanpressed",0x4c8f9989,"luxe.Input.scanpressed","luxe/Input.hx",77,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(78)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	bool tmp3 = tmp1->scanpressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("luxe.Input","scanreleased",0xb7eccbf6,"luxe.Input.scanreleased","luxe/Input.hx",82,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(83)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	bool tmp3 = tmp1->scanreleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("luxe.Input","scandown",0x9cf0eb1b,"luxe.Input.scandown","luxe/Input.hx",87,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(88)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	bool tmp3 = tmp1->scandown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("luxe.Input","mousepressed",0xb04bfbd9,"luxe.Input.mousepressed","luxe/Input.hx",94,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(95)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	bool tmp3 = tmp1->mousepressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("luxe.Input","mousereleased",0x99066fa6,"luxe.Input.mousereleased","luxe/Input.hx",99,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(100)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	bool tmp3 = tmp1->mousereleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("luxe.Input","mousedown",0x3e22f6cb,"luxe.Input.mousedown","luxe/Input.hx",104,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(105)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	bool tmp3 = tmp1->mousedown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadpressed",0x00765fdd,"luxe.Input.gamepadpressed","luxe/Input.hx",111,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(112)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	bool tmp4 = tmp1->gamepadpressed(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadreleased",0x6df38f22,"luxe.Input.gamepadreleased","luxe/Input.hx",116,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(117)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	bool tmp4 = tmp1->gamepadreleased(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepaddown",0x38b3a847,"luxe.Input.gamepaddown","luxe/Input.hx",121,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(122)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	bool tmp4 = tmp1->gamepaddown(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("luxe.Input","gamepadaxis",0x36becc86,"luxe.Input.gamepadaxis","luxe/Input.hx",126,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(127)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	int tmp3 = _axis;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	Float tmp4 = tmp1->gamepadaxis(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::bind_key( ::String _name,int _key){
{
		HX_STACK_FRAME("luxe.Input","bind_key",0x3768d999,"luxe.Input.bind_key","luxe/Input.hx",135,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key,"_key")
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		if ((tmp3)){
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(138)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(138)
			::haxe::ds::StringMap tmp5 = this->key_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(141)
		::haxe::ds::StringMap tmp4 = this->key_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		::haxe::ds::IntMap _kb = tmp6;		HX_STACK_VAR(_kb,"_kb");
		HX_STACK_LINE(142)
		int tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		_kb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_key,(void))

Void Input_obj::bind_mouse( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","bind_mouse",0xb3ebd89f,"luxe.Input.bind_mouse","luxe/Input.hx",147,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(149)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(150)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(150)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(150)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(150)
			::haxe::ds::StringMap tmp5 = this->mouse_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp4 = this->mouse_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::haxe::ds::IntMap _mb = tmp6;		HX_STACK_VAR(_mb,"_mb");
		HX_STACK_LINE(154)
		int tmp7 = _button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		_mb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_mouse,(void))

Void Input_obj::bind_gamepad( ::String _name,int _gamepad_button,Dynamic _gamepad_id){
{
		HX_STACK_FRAME("luxe.Input","bind_gamepad",0x321db59b,"luxe.Input.bind_gamepad","luxe/Input.hx",159,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_gamepad_button,"_gamepad_button")
		HX_STACK_ARG(_gamepad_id,"_gamepad_id")
		HX_STACK_LINE(161)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		if ((tmp3)){
			HX_STACK_LINE(162)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(162)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(162)
			::haxe::ds::StringMap tmp5 = this->gamepad_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(165)
		::haxe::ds::StringMap tmp4 = this->gamepad_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		::haxe::ds::IntMap _gp = tmp6;		HX_STACK_VAR(_gp,"_gp");
		HX_STACK_LINE(166)
		int tmp7 = _gamepad_button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		Dynamic tmp8 = _gamepad_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		_gp->set(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,bind_gamepad,(void))

Void Input_obj::init( ){
{
		HX_STACK_FRAME("luxe.Input","init",0x41ff1fcc,"luxe.Input.init","luxe/Input.hx",172,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			tmp = tmp2;
		}
		HX_STACK_LINE(174)
		this->key_bindings = tmp;
		HX_STACK_LINE(175)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(175)
		this->mouse_bindings = tmp1;
		HX_STACK_LINE(176)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(176)
		this->gamepad_bindings = tmp2;
		HX_STACK_LINE(178)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(178)
		this->_named_input_down = tmp3;
		HX_STACK_LINE(179)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(179)
		this->_named_input_pressed = tmp4;
		HX_STACK_LINE(180)
		::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			tmp5 = tmp7;
		}
		HX_STACK_LINE(180)
		this->_named_input_released = tmp5;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,init,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Input","destroy",0x250ce5be,"luxe.Input.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::process( ){
{
		HX_STACK_FRAME("luxe.Input","process",0xf1d15b33,"luxe.Input.process","luxe/Input.hx",192,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(200)
				::haxe::ds::StringMap tmp2 = this->_named_input_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(200)
				::String tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				if ((tmp5)){
					HX_STACK_LINE(201)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(201)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(201)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(203)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(203)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(203)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(211)
		::haxe::ds::StringMap tmp2 = this->_named_input_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(213)
				::haxe::ds::StringMap tmp4 = this->_named_input_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				::String tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				if ((tmp7)){
					HX_STACK_LINE(214)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(214)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(214)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(216)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(216)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(216)
					tmp8->set(tmp9,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,process,(void))

Void Input_obj::onmousedown( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousedown",0xd525f2cc,"luxe.Input.onmousedown","luxe/Input.hx",227,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(229)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		if ((tmp1)){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(231)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		int tmp7 = _window_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		tmp2->set_press(tmp3,tmp4,tmp5,::luxe::InteractState_obj::down,tmp6,tmp7);
		HX_STACK_LINE(233)
		::luxe::MouseEvent tmp8 = this->mouse_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		this->check_named_mouse(tmp8,true);
		HX_STACK_LINE(235)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(235)
		tmp9->emitter->emit((int)17,tmp10);
		HX_STACK_LINE(237)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(237)
		tmp11->game->onmousedown(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,onmousedown,(void))

Void Input_obj::onmouseup( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmouseup",0x05061245,"luxe.Input.onmouseup","luxe/Input.hx",241,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(243)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		if ((tmp1)){
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(245)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		int tmp7 = _window_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		tmp2->set_press(tmp3,tmp4,tmp5,::luxe::InteractState_obj::up,tmp6,tmp7);
		HX_STACK_LINE(247)
		::luxe::MouseEvent tmp8 = this->mouse_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		this->check_named_mouse(tmp8,null());
		HX_STACK_LINE(249)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(249)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(249)
		tmp9->emitter->emit((int)18,tmp10);
		HX_STACK_LINE(251)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(251)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(251)
		tmp11->game->onmouseup(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,onmouseup,(void))

Void Input_obj::onmousemove( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousemove",0xdb18dd7b,"luxe.Input.onmousemove","luxe/Input.hx",255,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_x_rel,"_x_rel")
		HX_STACK_ARG(_y_rel,"_y_rel")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(257)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		if ((tmp1)){
			HX_STACK_LINE(257)
			return null();
		}
		HX_STACK_LINE(259)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		int tmp5 = _x_rel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		int tmp6 = _y_rel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		tmp2->set_move(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(261)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(261)
		tmp9->emitter->emit((int)19,tmp10);
		HX_STACK_LINE(263)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(263)
		tmp11->game->onmousemove(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onmousemove,(void))

Void Input_obj::onmousewheel( Float _x,Float _y,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousewheel",0x97fd56f1,"luxe.Input.onmousewheel","luxe/Input.hx",267,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(269)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		if ((tmp1)){
			HX_STACK_LINE(269)
			return null();
		}
		HX_STACK_LINE(271)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		Float tmp5 = _timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		int tmp6 = _window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		tmp2->set_wheel(tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(273)
		::luxe::MouseEvent tmp7 = this->mouse_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(273)
		this->check_named_mouse(tmp7,false);
		HX_STACK_LINE(275)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		::luxe::MouseEvent tmp9 = this->mouse_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(275)
		tmp8->emitter->emit((int)20,tmp9);
		HX_STACK_LINE(277)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		::luxe::MouseEvent tmp11 = this->mouse_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		tmp10->game->onmousewheel(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,onmousewheel,(void))

Void Input_obj::onkeydown( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onkeydown",0xf6014006,"luxe.Input.onkeydown","luxe/Input.hx",283,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(285)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		if ((tmp1)){
			HX_STACK_LINE(285)
			return null();
		}
		HX_STACK_LINE(287)
		::luxe::KeyEvent tmp2 = this->key_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,::luxe::InteractState_obj::down,tmp7,tmp8);
		HX_STACK_LINE(289)
		::luxe::KeyEvent tmp9 = this->key_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(289)
		this->check_named_keys(tmp9,true);
		HX_STACK_LINE(291)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(291)
		::luxe::KeyEvent tmp11 = this->key_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(291)
		tmp10->emitter->emit((int)12,tmp11);
		HX_STACK_LINE(293)
		::luxe::Engine tmp12 = this->core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		::luxe::KeyEvent tmp13 = this->key_event;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(293)
		tmp12->game->onkeydown(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onkeydown,(void))

Void Input_obj::onkeyup( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onkeyup",0xe295bcff,"luxe.Input.onkeyup","luxe/Input.hx",297,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(299)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		if ((tmp1)){
			HX_STACK_LINE(299)
			return null();
		}
		HX_STACK_LINE(301)
		::luxe::KeyEvent tmp2 = this->key_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(301)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(301)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,::luxe::InteractState_obj::up,tmp7,tmp8);
		HX_STACK_LINE(303)
		::luxe::KeyEvent tmp9 = this->key_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		this->check_named_keys(tmp9,null());
		HX_STACK_LINE(305)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		::luxe::KeyEvent tmp11 = this->key_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(305)
		tmp10->emitter->emit((int)13,tmp11);
		HX_STACK_LINE(307)
		::luxe::Engine tmp12 = this->core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(307)
		::luxe::KeyEvent tmp13 = this->key_event;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(307)
		tmp12->game->onkeyup(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onkeyup,(void))

Void Input_obj::ontextinput( ::String _text,int _start,int _length,int _etype,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","ontextinput",0x951a5202,"luxe.Input.ontextinput","luxe/Input.hx",311,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_text,"_text")
		HX_STACK_ARG(_start,"_start")
		HX_STACK_ARG(_length,"_length")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(313)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(313)
			return null();
		}
		HX_STACK_LINE(315)
		int tmp2 = _etype;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		::luxe::TextEventType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(316)
				tmp3 = ::luxe::TextEventType_obj::edit;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(317)
				tmp3 = ::luxe::TextEventType_obj::input;
			}
			;break;
			default: {
				HX_STACK_LINE(318)
				return null();
			}
		}
		HX_STACK_LINE(315)
		::luxe::TextEventType _type = tmp3;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(321)
		::luxe::TextEvent tmp4 = this->text_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		::String tmp5 = _text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		int tmp6 = _start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		int tmp7 = _length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		::luxe::TextEventType tmp8 = _type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(321)
		Float tmp9 = _timestamp;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(321)
		int tmp10 = _window_id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(321)
		tmp4->set(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(323)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(323)
		::luxe::TextEvent tmp12 = this->text_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(323)
		tmp11->emitter->emit((int)14,tmp12);
		HX_STACK_LINE(325)
		::luxe::Engine tmp13 = this->core;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(325)
		::luxe::TextEvent tmp14 = this->text_event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(325)
		tmp13->game->ontextinput(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontextinput,(void))

Void Input_obj::ontouchdown( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchdown",0xee3dc966,"luxe.Input.ontouchdown","luxe/Input.hx",331,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(333)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		if ((tmp1)){
			HX_STACK_LINE(333)
			return null();
		}
		HX_STACK_LINE(335)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(335)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(335)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::down,tmp8);
		HX_STACK_LINE(337)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(337)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(337)
		tmp9->emitter->emit((int)21,tmp10);
		HX_STACK_LINE(339)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(339)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(339)
		tmp11->game->ontouchdown(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchdown,(void))

Void Input_obj::ontouchup( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchup",0x1d8b2e5f,"luxe.Input.ontouchup","luxe/Input.hx",343,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(345)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(345)
			return null();
		}
		HX_STACK_LINE(347)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(347)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(347)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(347)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(347)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::up,tmp8);
		HX_STACK_LINE(349)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(349)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(349)
		tmp9->emitter->emit((int)22,tmp10);
		HX_STACK_LINE(351)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(351)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(351)
		tmp11->game->ontouchup(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchup,(void))

Void Input_obj::ontouchmove( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchmove",0xf430b415,"luxe.Input.ontouchmove","luxe/Input.hx",355,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(357)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		if ((tmp1)){
			HX_STACK_LINE(357)
			return null();
		}
		HX_STACK_LINE(359)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(359)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::move,tmp8);
		HX_STACK_LINE(361)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(361)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		tmp9->emitter->emit((int)23,tmp10);
		HX_STACK_LINE(363)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(363)
		tmp11->game->ontouchmove(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchmove,(void))

Void Input_obj::ongamepadaxis( int _gamepad,int _axis,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepadaxis",0xd1798ac7,"luxe.Input.ongamepadaxis","luxe/Input.hx",369,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_axis,"_axis")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(371)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(371)
			return null();
		}
		HX_STACK_LINE(373)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		int tmp4 = _axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(373)
		tmp2->set_axis(tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(375)
		::luxe::Engine tmp7 = this->core;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(375)
		::luxe::GamepadEvent tmp8 = this->gamepad_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(375)
		tmp7->emitter->emit((int)24,tmp8);
		HX_STACK_LINE(377)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		::luxe::GamepadEvent tmp10 = this->gamepad_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		tmp9->game->ongamepadaxis(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepadaxis,(void))

Void Input_obj::ongamepaddown( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepaddown",0xd36e6688,"luxe.Input.ongamepaddown","luxe/Input.hx",381,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(383)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		if ((tmp1)){
			HX_STACK_LINE(383)
			return null();
		}
		HX_STACK_LINE(385)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(385)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(385)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(385)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(385)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(385)
		tmp2->set_button(tmp3,tmp4,tmp5,::luxe::InteractState_obj::down,tmp6);
		HX_STACK_LINE(387)
		::luxe::GamepadEvent tmp7 = this->gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(387)
		this->check_named_gamepad_buttons(tmp7,true);
		HX_STACK_LINE(389)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		::luxe::GamepadEvent tmp9 = this->gamepad_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(389)
		tmp8->emitter->emit((int)25,tmp9);
		HX_STACK_LINE(391)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(391)
		::luxe::GamepadEvent tmp11 = this->gamepad_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(391)
		tmp10->game->ongamepaddown(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepaddown,(void))

Void Input_obj::ongamepadup( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepadup",0x3074df01,"luxe.Input.ongamepadup","luxe/Input.hx",395,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(397)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		if ((tmp1)){
			HX_STACK_LINE(397)
			return null();
		}
		HX_STACK_LINE(399)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		tmp2->set_button(tmp3,tmp4,tmp5,::luxe::InteractState_obj::up,tmp6);
		HX_STACK_LINE(401)
		::luxe::GamepadEvent tmp7 = this->gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(401)
		this->check_named_gamepad_buttons(tmp7,false);
		HX_STACK_LINE(403)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		::luxe::GamepadEvent tmp9 = this->gamepad_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		tmp8->emitter->emit((int)26,tmp9);
		HX_STACK_LINE(405)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		::luxe::GamepadEvent tmp11 = this->gamepad_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		tmp10->game->ongamepadup(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepadup,(void))

Void Input_obj::ongamepaddevice( int _gamepad,::String _id,int _etype,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepaddevice",0x960ca03c,"luxe.Input.ongamepaddevice","luxe/Input.hx",409,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(411)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		if ((tmp1)){
			HX_STACK_LINE(411)
			return null();
		}
		HX_STACK_LINE(413)
		int tmp2 = _etype;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		::luxe::GamepadEventType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(414)
				tmp3 = ::luxe::GamepadEventType_obj::device_added;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(415)
				tmp3 = ::luxe::GamepadEventType_obj::device_removed;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(416)
				tmp3 = ::luxe::GamepadEventType_obj::device_remapped;
			}
			;break;
			default: {
				HX_STACK_LINE(417)
				tmp3 = ::luxe::GamepadEventType_obj::unknown;
			}
		}
		HX_STACK_LINE(413)
		::luxe::GamepadEventType _type = tmp3;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(420)
		::luxe::GamepadEvent tmp4 = this->gamepad_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		int tmp5 = _gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(420)
		::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		::luxe::GamepadEventType tmp7 = _type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		tmp4->set_device(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(422)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(422)
		::luxe::GamepadEvent tmp10 = this->gamepad_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(422)
		tmp9->emitter->emit((int)27,tmp10);
		HX_STACK_LINE(424)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		::luxe::GamepadEvent tmp12 = this->gamepad_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		tmp11->game->ongamepaddevice(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepaddevice,(void))

Void Input_obj::oninputdown( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Input","oninputdown",0xeffbf731,"luxe.Input.oninputdown","luxe/Input.hx",430,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(432)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		if ((tmp1)){
			HX_STACK_LINE(432)
			return null();
		}
		HX_STACK_LINE(434)
		::luxe::InputType _type = ::luxe::InputType_obj::unknown;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(436)
		bool tmp2 = (_key_event != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		if ((tmp2)){
			HX_STACK_LINE(436)
			_type = ::luxe::InputType_obj::keys;
		}
		HX_STACK_LINE(437)
		bool tmp3 = (_mouse_event != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		if ((tmp3)){
			HX_STACK_LINE(437)
			_type = ::luxe::InputType_obj::mouse;
		}
		HX_STACK_LINE(438)
		bool tmp4 = (_touch_event != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(438)
		if ((tmp4)){
			HX_STACK_LINE(438)
			_type = ::luxe::InputType_obj::touch;
		}
		HX_STACK_LINE(439)
		bool tmp5 = (_gamepad_event != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(439)
		if ((tmp5)){
			HX_STACK_LINE(439)
			_type = ::luxe::InputType_obj::gamepad;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::luxe::InputType &_type,::String &_name,::luxe::MouseEvent &_mouse_event,::luxe::KeyEvent &_key_event,::luxe::TouchEvent &_touch_event,::luxe::GamepadEvent &_gamepad_event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",442,0x19edc1cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _type,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5") , _key_event,false);
					__result->Add(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32") , _mouse_event,false);
					__result->Add(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2") , _touch_event,false);
					__result->Add(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b") , _gamepad_event,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(442)
		Dynamic tmp6 = _Function_1_1::Block(_type,_name,_mouse_event,_key_event,_touch_event,_gamepad_event);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(442)
		Dynamic _event = tmp6;		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(452)
		::luxe::Engine tmp7 = this->core;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(452)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(452)
		tmp7->emitter->emit((int)15,tmp8);
		HX_STACK_LINE(454)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(454)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(454)
		tmp9->game->oninputdown(tmp10);
		HX_STACK_LINE(456)
		_event = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,oninputdown,(void))

Void Input_obj::oninputup( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Input","oninputup",0x18b1c36a,"luxe.Input.oninputup","luxe/Input.hx",460,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(462)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(462)
			return null();
		}
		HX_STACK_LINE(464)
		::luxe::InputType _type = ::luxe::InputType_obj::unknown;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(466)
		bool tmp2 = (_key_event != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(466)
		if ((tmp2)){
			HX_STACK_LINE(466)
			_type = ::luxe::InputType_obj::keys;
		}
		HX_STACK_LINE(467)
		bool tmp3 = (_mouse_event != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		if ((tmp3)){
			HX_STACK_LINE(467)
			_type = ::luxe::InputType_obj::mouse;
		}
		HX_STACK_LINE(468)
		bool tmp4 = (_touch_event != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(468)
		if ((tmp4)){
			HX_STACK_LINE(468)
			_type = ::luxe::InputType_obj::touch;
		}
		HX_STACK_LINE(469)
		bool tmp5 = (_gamepad_event != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		if ((tmp5)){
			HX_STACK_LINE(469)
			_type = ::luxe::InputType_obj::gamepad;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::luxe::InputType &_type,::String &_name,::luxe::MouseEvent &_mouse_event,::luxe::KeyEvent &_key_event,::luxe::TouchEvent &_touch_event,::luxe::GamepadEvent &_gamepad_event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",472,0x19edc1cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _type,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5") , _key_event,false);
					__result->Add(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32") , _mouse_event,false);
					__result->Add(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2") , _touch_event,false);
					__result->Add(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b") , _gamepad_event,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(472)
		Dynamic tmp6 = _Function_1_1::Block(_type,_name,_mouse_event,_key_event,_touch_event,_gamepad_event);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		Dynamic _event = tmp6;		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(482)
		::luxe::Engine tmp7 = this->core;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		tmp7->emitter->emit((int)16,tmp8);
		HX_STACK_LINE(484)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(484)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(484)
		tmp9->game->oninputup(tmp10);
		HX_STACK_LINE(486)
		_event = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,oninputup,(void))

Void Input_obj::check_named_keys( ::luxe::KeyEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_keys",0x66d0b78d,"luxe.Input.check_named_keys","luxe/Input.hx",492,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(494)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(495)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(497)
				::haxe::ds::StringMap tmp2 = this->key_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(497)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(497)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(497)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(498)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(498)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				if ((tmp5)){
					HX_STACK_LINE(498)
					tmp6 = e->repeat;
				}
				else{
					HX_STACK_LINE(498)
					tmp6 = false;
				}
				HX_STACK_LINE(498)
				bool _is_down_repeat = tmp6;		HX_STACK_VAR(_is_down_repeat,"_is_down_repeat");
				HX_STACK_LINE(499)
				int tmp7 = e->keycode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(499)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(499)
				bool tmp9 = _b->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(499)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(499)
				if ((tmp9)){
					HX_STACK_LINE(499)
					bool tmp11 = _is_down_repeat;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(499)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(499)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(499)
					tmp10 = false;
				}
				HX_STACK_LINE(499)
				if ((tmp10)){
					HX_STACK_LINE(500)
					::String tmp11 = _name;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(500)
					bool tmp12 = ::Lambda_obj::has(_fired,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(500)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(500)
					if ((tmp13)){
						HX_STACK_LINE(501)
						::String tmp14 = _name;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(501)
						_fired->push(tmp14);
					}
				}
			}
;
		}
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(507)
			while((true)){
				HX_STACK_LINE(507)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(507)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(507)
				if ((tmp3)){
					HX_STACK_LINE(507)
					break;
				}
				HX_STACK_LINE(507)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(507)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(507)
				++(_g);
				HX_STACK_LINE(508)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				if ((tmp5)){
					HX_STACK_LINE(511)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(511)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(511)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(513)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(513)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(513)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(515)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(515)
					::luxe::KeyEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(515)
					this->oninputdown(tmp10,tmp11,null(),null(),null());
				}
				else{
					HX_STACK_LINE(520)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(520)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(520)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(522)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(522)
					tmp8->remove(tmp9);
					HX_STACK_LINE(524)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(524)
					::luxe::KeyEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(524)
					this->oninputup(tmp10,tmp11,null(),null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_keys,(void))

Void Input_obj::check_named_mouse( ::luxe::MouseEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_mouse",0xbd36266c,"luxe.Input.check_named_mouse","luxe/Input.hx",531,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(533)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(534)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(536)
				::haxe::ds::StringMap tmp2 = this->mouse_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(536)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(536)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(536)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(537)
				int tmp5 = e->button;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(537)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(537)
				if ((tmp6)){
					HX_STACK_LINE(538)
					::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(538)
					bool tmp8 = ::Lambda_obj::has(_fired,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(538)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(538)
					if ((tmp9)){
						HX_STACK_LINE(539)
						::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(539)
						_fired->push(tmp10);
					}
				}
			}
;
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(545)
			while((true)){
				HX_STACK_LINE(545)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(545)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(545)
				if ((tmp3)){
					HX_STACK_LINE(545)
					break;
				}
				HX_STACK_LINE(545)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(545)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(545)
				++(_g);
				HX_STACK_LINE(546)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(546)
				if ((tmp5)){
					HX_STACK_LINE(549)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(549)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(549)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(551)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(551)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(551)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(553)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(553)
					::luxe::MouseEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(553)
					this->oninputdown(tmp10,null(),tmp11,null(),null());
				}
				else{
					HX_STACK_LINE(558)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(558)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(558)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(560)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(560)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(560)
					tmp8->remove(tmp9);
					HX_STACK_LINE(562)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(562)
					::luxe::MouseEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(562)
					this->oninputup(tmp10,null(),tmp11,null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_mouse,(void))

Void Input_obj::check_named_gamepad_buttons( ::luxe::GamepadEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_gamepad_buttons",0xe4db646a,"luxe.Input.check_named_gamepad_buttons","luxe/Input.hx",569,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(571)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(572)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(574)
				::haxe::ds::StringMap tmp2 = this->gamepad_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(574)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(574)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(574)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(575)
				int tmp5 = e->button;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(575)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(575)
				if ((tmp6)){
					HX_STACK_LINE(576)
					int tmp7 = e->button;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(576)
					Dynamic tmp8 = _b->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(576)
					Dynamic _kb = tmp8;		HX_STACK_VAR(_kb,"_kb");
					HX_STACK_LINE(577)
					bool tmp9 = (_kb == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(577)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(577)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(577)
					if ((tmp10)){
						HX_STACK_LINE(577)
						tmp11 = (_kb == e->gamepad);
					}
					else{
						HX_STACK_LINE(577)
						tmp11 = true;
					}
					HX_STACK_LINE(577)
					bool _accepted_gamepad = tmp11;		HX_STACK_VAR(_accepted_gamepad,"_accepted_gamepad");
					HX_STACK_LINE(578)
					::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(578)
					bool tmp13 = ::Lambda_obj::has(_fired,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(578)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(578)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(578)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(578)
					if ((tmp15)){
						HX_STACK_LINE(578)
						tmp16 = _accepted_gamepad;
					}
					else{
						HX_STACK_LINE(578)
						tmp16 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp16)){
						HX_STACK_LINE(579)
						::String tmp17 = _name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(579)
						_fired->push(tmp17);
					}
				}
			}
;
		}
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(584)
			while((true)){
				HX_STACK_LINE(584)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(584)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(584)
				if ((tmp3)){
					HX_STACK_LINE(584)
					break;
				}
				HX_STACK_LINE(584)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(584)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(584)
				++(_g);
				HX_STACK_LINE(585)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(585)
				if ((tmp5)){
					HX_STACK_LINE(588)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(588)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(588)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(590)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(590)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(590)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(592)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(592)
					::luxe::GamepadEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(592)
					this->oninputdown(tmp10,null(),null(),null(),tmp11);
				}
				else{
					HX_STACK_LINE(597)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(597)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(597)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(599)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(599)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(599)
					tmp8->remove(tmp9);
					HX_STACK_LINE(601)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(601)
					::luxe::GamepadEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(601)
					this->oninputup(tmp10,null(),null(),null(),tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_gamepad_buttons,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(key_bindings,"key_bindings");
	HX_MARK_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_MARK_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_MARK_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_MARK_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_MARK_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_MARK_MEMBER_NAME(key_event,"key_event");
	HX_MARK_MEMBER_NAME(text_event,"text_event");
	HX_MARK_MEMBER_NAME(mouse_event,"mouse_event");
	HX_MARK_MEMBER_NAME(touch_event,"touch_event");
	HX_MARK_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(key_bindings,"key_bindings");
	HX_VISIT_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_VISIT_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_VISIT_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_VISIT_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_VISIT_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_VISIT_MEMBER_NAME(key_event,"key_event");
	HX_VISIT_MEMBER_NAME(text_event,"text_event");
	HX_VISIT_MEMBER_NAME(mouse_event,"mouse_event");
	HX_VISIT_MEMBER_NAME(touch_event,"touch_event");
	HX_VISIT_MEMBER_NAME(gamepad_event,"gamepad_event");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_key") ) { return bind_key_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { return key_event; }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { return text_event; }
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_mouse") ) { return bind_mouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { return mouse_event; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { return touch_event; }
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { return key_bindings; }
		if (HX_FIELD_EQ(inName,"inputpressed") ) { return inputpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_gamepad") ) { return bind_gamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { return gamepad_event; }
		if (HX_FIELD_EQ(inName,"inputreleased") ) { return inputreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { return mouse_bindings; }
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { return gamepad_bindings; }
		if (HX_FIELD_EQ(inName,"check_named_keys") ) { return check_named_keys_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { return _named_input_down; }
		if (HX_FIELD_EQ(inName,"check_named_mouse") ) { return check_named_mouse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { return _named_input_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { return _named_input_released; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"check_named_gamepad_buttons") ) { return check_named_gamepad_buttons_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { key_event=inValue.Cast< ::luxe::KeyEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { text_event=inValue.Cast< ::luxe::TextEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { mouse_event=inValue.Cast< ::luxe::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { touch_event=inValue.Cast< ::luxe::TouchEvent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { key_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { gamepad_event=inValue.Cast< ::luxe::GamepadEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { mouse_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { gamepad_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { _named_input_down=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { _named_input_pressed=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { _named_input_released=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"));
	outFields->push(HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"));
	outFields->push(HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"));
	outFields->push(HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"));
	outFields->push(HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"));
	outFields->push(HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"));
	outFields->push(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"));
	outFields->push(HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"));
	outFields->push(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"));
	outFields->push(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"));
	outFields->push(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Input_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,key_bindings),HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,mouse_bindings),HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,gamepad_bindings),HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_released),HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_pressed),HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_down),HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d")},
	{hx::fsObject /*::luxe::KeyEvent*/ ,(int)offsetof(Input_obj,key_event),HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5")},
	{hx::fsObject /*::luxe::TextEvent*/ ,(int)offsetof(Input_obj,text_event),HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74")},
	{hx::fsObject /*::luxe::MouseEvent*/ ,(int)offsetof(Input_obj,mouse_event),HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32")},
	{hx::fsObject /*::luxe::TouchEvent*/ ,(int)offsetof(Input_obj,touch_event),HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2")},
	{hx::fsObject /*::luxe::GamepadEvent*/ ,(int)offsetof(Input_obj,gamepad_event),HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"),
	HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"),
	HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"),
	HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"),
	HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"),
	HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"),
	HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"),
	HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"),
	HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"),
	HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"),
	HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"),
	HX_HCSTRING("inputpressed","\xd8","\x03","\xc2","\x04"),
	HX_HCSTRING("inputreleased","\xc7","\x66","\xd7","\x2b"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"),
	HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"),
	HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"),
	HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"),
	HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"),
	HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"),
	HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("bind_key","\xdd","\xe6","\x0d","\xc2"),
	HX_HCSTRING("bind_mouse","\xe3","\xbe","\xe1","\xfb"),
	HX_HCSTRING("bind_gamepad","\xdf","\xb4","\x0c","\xd0"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("check_named_keys","\xd1","\xa8","\xea","\xe8"),
	HX_HCSTRING("check_named_mouse","\xa8","\x50","\xcf","\x11"),
	HX_HCSTRING("check_named_gamepad_buttons","\xa6","\x31","\x6e","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Input","\x32","\xb5","\x12","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
