#include <hxcpp.h>

#ifndef INCLUDED_AABBPhysics
#include <AABBPhysics.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->speed = ((Float)128);
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",20,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(21)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("luxe game","\x9c","\x14","\x33","\xb3");
	HX_STACK_LINE(22)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(23)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(24)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(26)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",30,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::AABBPhysics tmp1 = tmp->add_engine(hx::ClassOf< ::AABBPhysics >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		::Main_obj::physics = tmp1;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",33,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::luxe::Parcel tmp3 = ::luxe::Parcel_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::luxe::Parcel parcel = tmp3;		HX_STACK_VAR(parcel,"parcel");
		HX_STACK_LINE(36)
		::luxe::Parcel tmp4 = parcel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::phoenix::Color tmp5 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.85));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Dynamic tmp6 = this->assetsloaded_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &tmp5,Dynamic &tmp6,::luxe::Parcel &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",35,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed") , tmp4,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , tmp5,false);
					__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp6,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp7 = _Function_1_2::Block(tmp5,tmp6,tmp4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		::luxe::ParcelProgress_obj::__new(tmp7);
		HX_STACK_LINE(41)
		parcel->load(null());
	}
return null();
}


Void Main_obj::assetsloaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","assetsloaded",0x806ef9fd,"Main.assetsloaded","Main.hx",45,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(48)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::phoenix::Color tmp2 = tmp1->rgb((int)16337668);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)128,(int)128,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp,::phoenix::Color &tmp2,::phoenix::Vector &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",46,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp4 = _Function_1_1::Block(tmp,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::luxe::Sprite tmp5 = ::luxe::Sprite_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		this->player = tmp5;
		HX_STACK_LINE(53)
		::phoenix::Rectangle tmp6 = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		this->collider = tmp6;
		HX_STACK_LINE(54)
		::phoenix::Rectangle tmp7 = this->collider;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		tmp7->set((int)256,(int)256,(int)256,(int)256);
		HX_STACK_LINE(56)
		::AABBPhysics tmp8 = ::Main_obj::physics;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		::phoenix::Rectangle tmp9 = this->collider;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		::AABBPhysics tmp10 = ::Main_obj::physics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		tmp10->staticBodies = tmp8->staticBodies->concat(Array_obj< ::Dynamic >::__new().Add(tmp9));
		HX_STACK_LINE(58)
		::luxe::Input tmp11 = ::Luxe_obj::input;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		tmp11->bind_key(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),(int)119);
		HX_STACK_LINE(59)
		::luxe::Input tmp12 = ::Luxe_obj::input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		tmp12->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(60)
		::luxe::Input tmp13 = ::Luxe_obj::input;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		tmp13->bind_key(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),(int)115);
		HX_STACK_LINE(61)
		::luxe::Input tmp14 = ::Luxe_obj::input;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		tmp14->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,assetsloaded,(void))

Void Main_obj::onkeyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",65,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(66)
		bool tmp = (e->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(67)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",72,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(73)
		::luxe::Sprite tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(75)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		bool tmp3 = tmp2->inputdown(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		if ((tmp3)){
			HX_STACK_LINE(77)
			::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::phoenix::Vector _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				Float tmp7 = this->speed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				Float tmp8 = dt;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(77)
				Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(77)
				Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(77)
				_g->y = _y;
				HX_STACK_LINE(77)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(77)
				if ((tmp11)){
					HX_STACK_LINE(77)
					_g->y;
				}
				else{
					HX_STACK_LINE(77)
					bool tmp12 = (_g->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(77)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(77)
					if ((tmp12)){
						HX_STACK_LINE(77)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(77)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(77)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(77)
						tmp13 = false;
					}
					HX_STACK_LINE(77)
					if ((tmp13)){
						HX_STACK_LINE(77)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(77)
						_g->listen_y(tmp14);
					}
					HX_STACK_LINE(77)
					_g->y;
				}
			}
		}
		HX_STACK_LINE(79)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		bool tmp5 = tmp4->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		if ((tmp5)){
			HX_STACK_LINE(81)
			::luxe::Sprite tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			::phoenix::Vector tmp7 = tmp6->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			::phoenix::Vector _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Float tmp8 = _g->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				Float tmp10 = dt;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(81)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(81)
				Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(81)
				Float _x = tmp12;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(81)
				_g->x = _x;
				HX_STACK_LINE(81)
				bool tmp13 = _g->_construct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				if ((tmp13)){
					HX_STACK_LINE(81)
					_g->x;
				}
				else{
					HX_STACK_LINE(81)
					bool tmp14 = (_g->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(81)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(81)
					if ((tmp14)){
						HX_STACK_LINE(81)
						bool tmp16 = _g->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(81)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(81)
						tmp15 = !(tmp17);
					}
					else{
						HX_STACK_LINE(81)
						tmp15 = false;
					}
					HX_STACK_LINE(81)
					if ((tmp15)){
						HX_STACK_LINE(81)
						Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(81)
						_g->listen_x(tmp16);
					}
					HX_STACK_LINE(81)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(83)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		bool tmp7 = tmp6->inputdown(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		if ((tmp7)){
			HX_STACK_LINE(85)
			::luxe::Sprite tmp8 = this->player;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			::phoenix::Vector tmp9 = tmp8->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			::phoenix::Vector _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				Float tmp10 = _g->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				Float tmp11 = this->speed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				Float tmp12 = dt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				Float _y = tmp14;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(85)
				_g->y = _y;
				HX_STACK_LINE(85)
				bool tmp15 = _g->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				if ((tmp15)){
					HX_STACK_LINE(85)
					_g->y;
				}
				else{
					HX_STACK_LINE(85)
					bool tmp16 = (_g->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(85)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(85)
					if ((tmp16)){
						HX_STACK_LINE(85)
						bool tmp18 = _g->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(85)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(85)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(85)
						tmp17 = false;
					}
					HX_STACK_LINE(85)
					if ((tmp17)){
						HX_STACK_LINE(85)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(85)
						_g->listen_y(tmp18);
					}
					HX_STACK_LINE(85)
					_g->y;
				}
			}
		}
		HX_STACK_LINE(87)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		bool tmp9 = tmp8->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		if ((tmp9)){
			HX_STACK_LINE(89)
			::luxe::Sprite tmp10 = this->player;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			::phoenix::Vector tmp11 = tmp10->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			::phoenix::Vector _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				Float tmp12 = _g->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				Float tmp13 = this->speed;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				Float tmp14 = dt;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(89)
				Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(89)
				_g->x = _x;
				HX_STACK_LINE(89)
				bool tmp17 = _g->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				if ((tmp17)){
					HX_STACK_LINE(89)
					_g->x;
				}
				else{
					HX_STACK_LINE(89)
					bool tmp18 = (_g->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(89)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(89)
					if ((tmp18)){
						HX_STACK_LINE(89)
						bool tmp20 = _g->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(89)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(89)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(89)
						tmp19 = false;
					}
					HX_STACK_LINE(89)
					if ((tmp19)){
						HX_STACK_LINE(89)
						Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(89)
						_g->listen_x(tmp20);
					}
					HX_STACK_LINE(89)
					_g->x;
				}
			}
		}
	}
return null();
}


::AABBPhysics Main_obj::physics;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(collider,"collider");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsloaded") ) { return assetsloaded_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { outValue = physics; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { physics=ioValue.Cast< ::AABBPhysics >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsFloat,(int)offsetof(Main_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Main_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::AABBPhysics*/ ,(void *) &Main_obj::physics,HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("assetsloaded","\xc8","\x54","\x94","\x59"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::physics,"physics");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::physics,"physics");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

