#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void ParcelProgress_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.ParcelProgress","new",0x2d233760,"luxe.ParcelProgress.new","luxe/ParcelProgress.hx",11,0xf4bec2ef)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(28)
	this->fade_alpha = ((Float)0);
	HX_STACK_LINE(27)
	this->height = ((Float)0);
	HX_STACK_LINE(26)
	this->width = ((Float)0);
	HX_STACK_LINE(32)
	::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	int tmp1 = tmp->screen->get_w();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float _view_width = tmp1;		HX_STACK_VAR(_view_width,"_view_width");
	HX_STACK_LINE(33)
	::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = tmp2->screen->get_h();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float _view_height = tmp3;		HX_STACK_VAR(_view_height,"_view_height");
	HX_STACK_LINE(35)
	::luxe::Camera tmp4 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	::phoenix::Vector tmp5 = tmp4->get_size();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	if ((tmp6)){
		HX_STACK_LINE(36)
		::luxe::Camera tmp7 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		::phoenix::Vector tmp8 = tmp7->get_size();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		_view_width = tmp8->x;
		HX_STACK_LINE(37)
		::luxe::Camera tmp9 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		::phoenix::Vector tmp10 = tmp9->get_size();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		_view_height = tmp10->y;
	}
	HX_STACK_LINE(40)
	Float tmp7 = (Float(_view_width) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	int _view_mid_x = tmp8;		HX_STACK_VAR(_view_mid_x,"_view_mid_x");
	HX_STACK_LINE(41)
	Float tmp9 = (Float(_view_height) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(41)
	int _view_mid_y = tmp10;		HX_STACK_VAR(_view_mid_y,"_view_mid_y");
	HX_STACK_LINE(43)
	Float tmp11 = (_view_width * ((Float)0.75));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(43)
	Float tmp13 = ::Math_obj::max(tmp12,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(43)
	this->width = tmp13;
	HX_STACK_LINE(44)
	Float tmp14 = (_view_height * ((Float)0.002));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	Float tmp16 = ::Math_obj::max(tmp15,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(44)
	this->height = tmp16;
	HX_STACK_LINE(46)
	this->options = _options;
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(48)
		Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(48)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(48)
		if ((tmp19)){
			HX_STACK_LINE(48)
			Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(48)
			tmp20->__FieldRef(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb")) = false;
		}
		HX_STACK_LINE(48)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(48)
		tmp20->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		::phoenix::Color tmp18 = tmp17->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		if ((tmp19)){
			HX_STACK_LINE(49)
			::phoenix::Color tmp20 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(49)
			::phoenix::Color tmp21 = tmp20->rgb((int)3421236);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(49)
			Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(49)
			tmp22->__FieldRef(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")) = tmp21;
		}
		HX_STACK_LINE(49)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(49)
		tmp20->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(50)
		::phoenix::Color tmp18 = tmp17->__Field(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(50)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(50)
		if ((tmp19)){
			HX_STACK_LINE(50)
			::phoenix::Color tmp20 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(50)
			::phoenix::Color tmp21 = tmp20->rgb((int)1447446);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(50)
			Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(50)
			tmp22->__FieldRef(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5")) = tmp21;
		}
		HX_STACK_LINE(50)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(50)
		tmp20->__Field(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5"), hx::paccDynamic );
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		::phoenix::Color tmp18 = tmp17->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		if ((tmp19)){
			HX_STACK_LINE(51)
			::phoenix::Color tmp20 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(51)
			::phoenix::Color tmp21 = tmp20->rgb((int)592137);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(51)
			Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(51)
			tmp22->__FieldRef(HX_HCSTRING("background","\xee","\x93","\x1d","\x26")) = tmp21;
		}
		HX_STACK_LINE(51)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		tmp20->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(52)
		Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(52)
		if ((tmp19)){
			HX_STACK_LINE(52)
			Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(52)
			tmp20->__FieldRef(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31")) = true;
		}
		HX_STACK_LINE(52)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(52)
		tmp20->__Field(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31"), hx::paccDynamic );
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(53)
		Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("fade_out","\x0b","\x09","\x04","\xee"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(53)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(53)
		if ((tmp19)){
			HX_STACK_LINE(53)
			Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(53)
			tmp20->__FieldRef(HX_HCSTRING("fade_out","\x0b","\x09","\x04","\xee")) = true;
		}
		HX_STACK_LINE(53)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(53)
		tmp20->__Field(HX_HCSTRING("fade_out","\x0b","\x09","\x04","\xee"), hx::paccDynamic );
	}
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(54)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(54)
		if ((tmp19)){
			HX_STACK_LINE(54)
			Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(54)
			tmp20->__FieldRef(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58")) = ((Float)0.3);
		}
		HX_STACK_LINE(54)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(54)
		tmp20->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );
	}
	HX_STACK_LINE(56)
	Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(56)
	Float tmp18 = tmp17->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic )->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(56)
	this->fade_alpha = tmp18;
	HX_STACK_LINE(58)
	Dynamic tmp19 = this->options;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(58)
	Dynamic tmp20 = tmp19->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(58)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(58)
	if ((tmp21)){
		HX_STACK_LINE(60)
		Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		Dynamic tmp23 = tmp22->__Field(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(60)
		if ((tmp23)){
			HX_STACK_LINE(61)
			Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			tmp24->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
			HX_STACK_LINE(62)
			Dynamic tmp25 = this->options;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(62)
			tmp25->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
			HX_STACK_LINE(63)
			Dynamic tmp26 = this->options;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(63)
			tmp26->__Field(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
		}
		HX_STACK_LINE(66)
		Float tmp24 = (_view_height * ((Float)0.60));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(66)
		int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(66)
		int _ypos = tmp25;		HX_STACK_VAR(_ypos,"_ypos");
		HX_STACK_LINE(67)
		Float tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(67)
		Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(67)
		int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(67)
		int _half_width = tmp28;		HX_STACK_VAR(_half_width,"_half_width");
		HX_STACK_LINE(68)
		Float tmp29 = this->height;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(68)
		Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(68)
		int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(68)
		int _half_height = tmp31;		HX_STACK_VAR(_half_height,"_half_height");
		HX_STACK_LINE(72)
		::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(_view_width,_view_height,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(74)
		Dynamic tmp33 = this->options;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(74)
		::phoenix::Color tmp34 = tmp33->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_2_1{
			inline static Dynamic Block( ::phoenix::Color &tmp34,::phoenix::Vector &tmp32){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",70,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp32,false);
					__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp34,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)998)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		Dynamic tmp35 = _Function_2_1::Block(tmp34,tmp32);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(70)
		::luxe::Sprite tmp36 = ::luxe::Sprite_obj::__new(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(70)
		this->background = tmp36;
		HX_STACK_LINE(80)
		int tmp37 = (_view_mid_x - _half_width);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(80)
		int tmp38 = (_ypos - _half_height);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(80)
		::phoenix::Vector tmp39 = ::phoenix::Vector_obj::__new(tmp37,tmp38,null(),null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(81)
		Float tmp40 = this->height;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(81)
		::phoenix::Vector tmp41 = ::phoenix::Vector_obj::__new((int)2,tmp40,null(),null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(84)
		Dynamic tmp42 = this->options;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(84)
		::phoenix::Color tmp43 = tmp42->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
		struct _Function_2_2{
			inline static Dynamic Block( ::phoenix::Vector &tmp41,::phoenix::Vector &tmp39,::phoenix::Color &tmp43){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",79,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp39,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp41,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp43,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)998)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(79)
		Dynamic tmp44 = _Function_2_2::Block(tmp41,tmp39,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(79)
		::luxe::Sprite tmp45 = ::luxe::Sprite_obj::__new(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(79)
		this->progress_bar = tmp45;
		HX_STACK_LINE(89)
		Dynamic tmp46 = this->options;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(89)
		::phoenix::Color tmp47 = tmp46->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(91)
		int tmp48 = (_view_mid_x - _half_width);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(91)
		int tmp49 = (_ypos - _half_height);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(91)
		::phoenix::Vector tmp50 = ::phoenix::Vector_obj::__new(tmp48,tmp49,null(),null());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(92)
		::luxe::Draw tmp51 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(93)
		Float tmp52 = this->width;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(94)
		Float tmp53 = this->height;		HX_STACK_VAR(tmp53,"tmp53");
		struct _Function_2_3{
			inline static Dynamic Block( Float &tmp52,Float &tmp53){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",92,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp52,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp53,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)998.1),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		Dynamic tmp54 = _Function_2_3::Block(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(92)
		::phoenix::geometry::RectangleGeometry tmp55 = tmp51->rectangle(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(92)
		::phoenix::geometry::Geometry tmp56 = ((::phoenix::geometry::Geometry)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
		struct _Function_2_4{
			inline static Dynamic Block( ::phoenix::Color &tmp47,::phoenix::geometry::Geometry &tmp56,::phoenix::Vector &tmp50){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",88,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp47,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp50,false);
					__result->Add(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2") , tmp56,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)998.1),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(88)
		Dynamic tmp57 = _Function_2_4::Block(tmp47,tmp56,tmp50);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(88)
		::luxe::Visual tmp58 = ::luxe::Visual_obj::__new(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(88)
		this->progress_border = tmp58;
		HX_STACK_LINE(100)
		Dynamic tmp59 = this->options;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(100)
		Dynamic tmp60 = tmp59->__Field(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(100)
		if ((tmp60)){
			HX_STACK_LINE(103)
			::luxe::Sprite tmp61 = this->background;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(103)
			Dynamic tmp62 = this->options;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(103)
			Dynamic tmp63 = tmp62->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(103)
			Float tmp64 = this->fade_alpha;		HX_STACK_VAR(tmp64,"tmp64");
			struct _Function_3_1{
				inline static Dynamic Block( Float &tmp64){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",103,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , tmp64,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(103)
			Dynamic tmp65 = _Function_3_1::Block(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(103)
			tmp61->color->tween(tmp63,tmp65,true);
			HX_STACK_LINE(104)
			::luxe::Sprite tmp66 = this->progress_bar;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(104)
			Dynamic tmp67 = this->options;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(104)
			Dynamic tmp68 = tmp67->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp68,"tmp68");
			struct _Function_3_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",104,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(104)
			Dynamic tmp69 = _Function_3_2::Block();		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(104)
			tmp66->color->tween(tmp68,tmp69,true);
			HX_STACK_LINE(105)
			::luxe::Visual tmp70 = this->progress_border;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(105)
			Dynamic tmp71 = this->options;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(105)
			Dynamic tmp72 = tmp71->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp72,"tmp72");
			struct _Function_3_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",105,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(105)
			Dynamic tmp73 = _Function_3_3::Block();		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(105)
			tmp70->color->tween(tmp72,tmp73,true);
		}
	}
	HX_STACK_LINE(112)
	Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(112)
	::luxe::Emitter tmp23 = tmp22->__Field(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(112)
	Dynamic tmp24 = this->onbegin_dyn();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(112)
	tmp23->on((int)1,tmp24);
	HX_STACK_LINE(113)
	Dynamic tmp25 = this->options;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(113)
	::luxe::Emitter tmp26 = tmp25->__Field(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(113)
	Dynamic tmp27 = this->onprogress_dyn();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(113)
	tmp26->on((int)3,tmp27);
	HX_STACK_LINE(114)
	Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(114)
	::luxe::Emitter tmp29 = tmp28->__Field(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(114)
	Dynamic tmp30 = this->oncomplete_dyn();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(114)
	tmp29->on((int)4,tmp30);
}
;
	return null();
}

//ParcelProgress_obj::~ParcelProgress_obj() { }

Dynamic ParcelProgress_obj::__CreateEmpty() { return  new ParcelProgress_obj; }
hx::ObjectPtr< ParcelProgress_obj > ParcelProgress_obj::__new(Dynamic _options)
{  hx::ObjectPtr< ParcelProgress_obj > _result_ = new ParcelProgress_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic ParcelProgress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParcelProgress_obj > _result_ = new ParcelProgress_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ParcelProgress_obj::set_progress( Float amount){
{
		HX_STACK_FRAME("luxe.ParcelProgress","set_progress",0x87c9882a,"luxe.ParcelProgress.set_progress","luxe/ParcelProgress.hx",118,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(120)
		bool tmp = (amount < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		if ((tmp)){
			HX_STACK_LINE(120)
			amount = (int)0;
		}
		HX_STACK_LINE(121)
		bool tmp1 = (amount > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		if ((tmp1)){
			HX_STACK_LINE(121)
			amount = (int)1;
		}
		HX_STACK_LINE(123)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		if ((tmp4)){
			HX_STACK_LINE(124)
			::luxe::Sprite tmp5 = this->progress_bar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::phoenix::Vector _this = tmp5->size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			Float tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			Float tmp7 = amount;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			_this->x = _x;
			HX_STACK_LINE(124)
			bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			if ((tmp10)){
				HX_STACK_LINE(124)
				_this->x;
			}
			else{
				HX_STACK_LINE(124)
				bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				if ((tmp11)){
					HX_STACK_LINE(124)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(124)
					tmp12 = false;
				}
				HX_STACK_LINE(124)
				if ((tmp12)){
					HX_STACK_LINE(124)
					Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					_this->listen_x(tmp13);
				}
				HX_STACK_LINE(124)
				_this->x;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,set_progress,(void))

Void ParcelProgress_obj::onbegin( ::luxe::Parcel _parcel){
{
		HX_STACK_FRAME("luxe.ParcelProgress","onbegin",0x3974ffaa,"luxe.ParcelProgress.onbegin","luxe/ParcelProgress.hx",129,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parcel,"_parcel")
		HX_STACK_LINE(131)
		this->set_progress((int)0);
		HX_STACK_LINE(133)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(135)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("fade_in","\x08","\x52","\x48","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(137)
				Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				tmp5->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
				HX_STACK_LINE(138)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				tmp6->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
				HX_STACK_LINE(139)
				Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				tmp7->__Field(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)0;
				HX_STACK_LINE(140)
				::luxe::Sprite tmp8 = this->background;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(140)
				Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(140)
				Float tmp11 = this->fade_alpha;		HX_STACK_VAR(tmp11,"tmp11");
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp11){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",140,0xf4bec2ef)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , tmp11,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(140)
				Dynamic tmp12 = _Function_3_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(140)
				tmp8->color->tween(tmp10,tmp12,true);
				HX_STACK_LINE(141)
				::luxe::Sprite tmp13 = this->progress_bar;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(141)
				Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				struct _Function_3_2{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",141,0xf4bec2ef)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(141)
				Dynamic tmp16 = _Function_3_2::Block();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(141)
				tmp13->color->tween(tmp15,tmp16,true);
				HX_STACK_LINE(142)
				::luxe::Visual tmp17 = this->progress_border;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(142)
				Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(142)
				Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				struct _Function_3_3{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",142,0xf4bec2ef)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(142)
				Dynamic tmp20 = _Function_3_3::Block();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(142)
				tmp17->color->tween(tmp19,tmp20,true);
			}
			else{
				HX_STACK_LINE(146)
				Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(146)
				tmp5->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)1;
				HX_STACK_LINE(147)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				tmp6->__Field(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)1;
				HX_STACK_LINE(148)
				Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				tmp7->__Field(HX_HCSTRING("bar_border","\x18","\xdd","\x02","\xd5"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = (int)1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,onbegin,(void))

Void ParcelProgress_obj::onprogress( Dynamic _state){
{
		HX_STACK_FRAME("luxe.ParcelProgress","onprogress",0x712b88cc,"luxe.ParcelProgress.onprogress","luxe/ParcelProgress.hx",156,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_state,"_state")
		HX_STACK_LINE(159)
		Float tmp = (Float(_state->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic )) / Float(_state->__Field(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"), hx::paccDynamic )));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		Float _amount = tmp;		HX_STACK_VAR(_amount,"_amount");
		HX_STACK_LINE(162)
		Float tmp1 = _amount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		this->set_progress(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,onprogress,(void))

Void ParcelProgress_obj::oncomplete( ::luxe::Parcel _parcel){
{
		HX_STACK_FRAME("luxe.ParcelProgress","oncomplete",0x6ac891d8,"luxe.ParcelProgress.oncomplete","luxe/ParcelProgress.hx",166,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parcel,"_parcel")
		HX_STACK_LINE(168)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("no_visuals","\x75","\xa8","\x76","\xfb"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		if ((tmp3)){
			HX_STACK_LINE(168)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			tmp4 = tmp6->__Field(HX_HCSTRING("fade_out","\x0b","\x09","\x04","\xee"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(168)
			tmp4 = false;
		}
		HX_STACK_LINE(168)
		if ((tmp4)){
			HX_STACK_LINE(170)
			this->do_complete();
			HX_STACK_LINE(172)
			::luxe::Sprite tmp5 = this->background;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",172,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(172)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			tmp5->color->tween(tmp7,tmp8,true);
			HX_STACK_LINE(173)
			::luxe::Sprite tmp9 = this->progress_bar;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(173)
			Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",173,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(173)
			Dynamic tmp12 = _Function_2_2::Block();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(173)
			tmp9->color->tween(tmp11,tmp12,true);
			HX_STACK_LINE(174)
			::luxe::Visual tmp13 = this->progress_border;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("fade_time","\xf0","\xd0","\xc8","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",174,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(174)
			Dynamic tmp16 = _Function_2_3::Block();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(174)
			tmp13->color->tween(tmp15,tmp16,true);
		}
		else{
			HX_STACK_LINE(178)
			this->do_complete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,oncomplete,(void))

Void ParcelProgress_obj::do_complete( ){
{
		HX_STACK_FRAME("luxe.ParcelProgress","do_complete",0xb3983e2d,"luxe.ParcelProgress.do_complete","luxe/ParcelProgress.hx",184,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		if ((tmp2)){
			HX_STACK_LINE(187)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			::luxe::Parcel tmp5 = tmp4->__Field(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			tmp3->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParcelProgress_obj,do_complete,(void))


ParcelProgress_obj::ParcelProgress_obj()
{
}

void ParcelProgress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParcelProgress);
	HX_MARK_MEMBER_NAME(parcel,"parcel");
	HX_MARK_MEMBER_NAME(progress_bar,"progress_bar");
	HX_MARK_MEMBER_NAME(progress_border,"progress_border");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(image_logo,"image_logo");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(fade_alpha,"fade_alpha");
	HX_MARK_END_CLASS();
}

void ParcelProgress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parcel,"parcel");
	HX_VISIT_MEMBER_NAME(progress_bar,"progress_bar");
	HX_VISIT_MEMBER_NAME(progress_border,"progress_border");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(image_logo,"image_logo");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(fade_alpha,"fade_alpha");
}

Dynamic ParcelProgress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parcel") ) { return parcel; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onbegin") ) { return onbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"image_logo") ) { return image_logo; }
		if (HX_FIELD_EQ(inName,"fade_alpha") ) { return fade_alpha; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { return onprogress_dyn(); }
		if (HX_FIELD_EQ(inName,"oncomplete") ) { return oncomplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"do_complete") ) { return do_complete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"progress_bar") ) { return progress_bar; }
		if (HX_FIELD_EQ(inName,"set_progress") ) { return set_progress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"progress_border") ) { return progress_border; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParcelProgress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parcel") ) { parcel=inValue.Cast< ::luxe::Parcel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image_logo") ) { image_logo=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fade_alpha") ) { fade_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"progress_bar") ) { progress_bar=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"progress_border") ) { progress_border=inValue.Cast< ::luxe::Visual >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParcelProgress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"));
	outFields->push(HX_HCSTRING("progress_bar","\x01","\xc9","\xda","\xb7"));
	outFields->push(HX_HCSTRING("progress_border","\x7e","\x66","\xda","\x18"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("image_logo","\x0f","\x12","\x69","\x73"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("fade_alpha","\x1b","\xe9","\x4e","\x68"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Parcel*/ ,(int)offsetof(ParcelProgress_obj,parcel),HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,progress_bar),HX_HCSTRING("progress_bar","\x01","\xc9","\xda","\xb7")},
	{hx::fsObject /*::luxe::Visual*/ ,(int)offsetof(ParcelProgress_obj,progress_border),HX_HCSTRING("progress_border","\x7e","\x66","\xda","\x18")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,image_logo),HX_HCSTRING("image_logo","\x0f","\x12","\x69","\x73")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParcelProgress_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(ParcelProgress_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(ParcelProgress_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ParcelProgress_obj,fade_alpha),HX_HCSTRING("fade_alpha","\x1b","\xe9","\x4e","\x68")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed"),
	HX_HCSTRING("progress_bar","\x01","\xc9","\xda","\xb7"),
	HX_HCSTRING("progress_border","\x7e","\x66","\xda","\x18"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("image_logo","\x0f","\x12","\x69","\x73"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("fade_alpha","\x1b","\xe9","\x4e","\x68"),
	HX_HCSTRING("set_progress","\x2a","\xcf","\x3d","\x50"),
	HX_HCSTRING("onbegin","\xaa","\x18","\x66","\xb3"),
	HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"),
	HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"),
	HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParcelProgress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParcelProgress_obj::__mClass,"__mClass");
};

#endif

hx::Class ParcelProgress_obj::__mClass;

void ParcelProgress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.ParcelProgress","\x6e","\x47","\x24","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ParcelProgress_obj >;
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
