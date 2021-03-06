#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void RenderTexture_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.RenderTexture","new",0xaa824ed8,"phoenix.RenderTexture.new","phoenix/RenderTexture.hx",19,0xd65f2599)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(21)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)5;
	HX_STACK_LINE(23)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		bool tmp1 = (_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(25)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			int tmp3 = tmp2->screen->get_w();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			_options->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp4;
		}
		HX_STACK_LINE(25)
		_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		bool tmp1 = (_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(26)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			int tmp3 = tmp2->screen->get_h();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			_options->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp4;
		}
		HX_STACK_LINE(26)
		_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(29)
	int tmp1 = this->width_actual = _options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->width = tmp1;
	HX_STACK_LINE(30)
	int tmp2 = this->height_actual = _options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->height = tmp2;
	HX_STACK_LINE(36)
	bool tmp3 = (_options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	if ((tmp3)){
		HX_STACK_LINE(37)
		this->submit(null(),null(),null());
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = this->filter_min;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			glTexParameteri(tmp4,(int)10241,tmp5);
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = this->filter_mag;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			glTexParameteri(tmp4,(int)10240,tmp5);
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = this->clamp_s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			glTexParameteri(tmp4,(int)10242,tmp5);
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = this->clamp_t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			glTexParameteri(tmp4,(int)10243,tmp5);
		}
	}
	HX_STACK_LINE(43)
	::opengl::GLObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int tmp5 = linc::opengl::webgl::createFramebuffer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		int _id = tmp5;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(43)
		::opengl::GLObject tmp6 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(43)
	this->fbo = tmp4;
	HX_STACK_LINE(45)
	this->bindBuffer();
	HX_STACK_LINE(48)
	::opengl::GLObject tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int tmp6 = linc::opengl::webgl::createRenderbuffer();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		int _id = tmp6;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(48)
		::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(48)
	this->renderbuffer = tmp5;
	HX_STACK_LINE(50)
	this->bindRenderBuffer();
	HX_STACK_LINE(56)
	int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	glRenderbufferStorage((int)36161,(int)6402,tmp6,tmp7);
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::opengl::GLObject tmp8 = this->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		::opengl::GLObject texture = tmp8;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(59)
		bool tmp9 = (texture == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		if ((tmp9)){
			HX_STACK_LINE(59)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(59)
			tmp10 = texture->id;
		}
		HX_STACK_LINE(59)
		glFramebufferTexture2D((int)36160,(int)36064,(int)3553,tmp10,(int)0);
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::opengl::GLObject tmp8 = this->renderbuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		::opengl::GLObject renderbuffer = tmp8;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(61)
		bool tmp9 = (renderbuffer == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		if ((tmp9)){
			HX_STACK_LINE(61)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(61)
			tmp10 = renderbuffer->id;
		}
		HX_STACK_LINE(61)
		glFramebufferRenderbuffer((int)36160,(int)36096,(int)36161,tmp10);
	}
	HX_STACK_LINE(64)
	int tmp8 = glCheckFramebufferStatus((int)36160);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	int status = tmp8;		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(66)
	int tmp9 = status;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(66)
	switch( (int)(tmp9)){
		case (int)36053: {
		}
		;break;
		case (int)36054: {
			HX_STACK_LINE(71)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xe1","\xd7","\x83","\x5b"));
		}
		;break;
		case (int)36055: {
			HX_STACK_LINE(74)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x7a","\x19","\xd9","\xea"));
		}
		;break;
		case (int)36057: {
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x4b","\x8e","\xb0","\x5a"));
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(80)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_UNSUPPORTED","\x12","\x3e","\x42","\x1e"));
		}
		;break;
		default: {
			HX_STACK_LINE(83)
			::String tmp10 = (HX_HCSTRING("Incomplete framebuffer: ","\xf1","\x26","\xa0","\x6c") + status);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			HX_STACK_DO_THROW(tmp10);
		}
	}
	HX_STACK_LINE(87)
	this->unbindBuffer(null());
	HX_STACK_LINE(88)
	this->unbindRenderBuffer(null());
	HX_STACK_LINE(91)
	::luxe::Resources tmp10 = this->_system;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	tmp10->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(Dynamic _options)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RenderTexture_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","clear",0xba007e05,"phoenix.RenderTexture.clear","phoenix/RenderTexture.hx",95,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->super::clear();
		HX_STACK_LINE(99)
		::opengl::GLObject tmp = this->fbo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(100)
			::opengl::GLObject tmp2 = this->fbo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			::opengl::GLObject framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(100)
			bool tmp3 = (framebuffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(100)
				tmp4 = framebuffer->id;
			}
			HX_STACK_LINE(100)
			linc::opengl::webgl::deleteFramebuffer(tmp4);
		}
		HX_STACK_LINE(103)
		::opengl::GLObject tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		if ((tmp3)){
			HX_STACK_LINE(104)
			::opengl::GLObject tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			::opengl::GLObject renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(104)
			bool tmp5 = (renderbuffer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			if ((tmp5)){
				HX_STACK_LINE(104)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(104)
				tmp6 = renderbuffer->id;
			}
			HX_STACK_LINE(104)
			linc::opengl::webgl::deleteRenderbuffer(tmp6);
		}
	}
return null();
}


Void RenderTexture_obj::bindBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindBuffer",0xb4215325,"phoenix.RenderTexture.bindBuffer","phoenix/RenderTexture.hx",109,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::opengl::GLObject tmp1 = this->fbo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		tmp->state->bindFramebuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindBuffer,(void))

Void RenderTexture_obj::unbindBuffer( ::opengl::GLObject _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindBuffer",0xcec7b4be,"phoenix.RenderTexture.unbindBuffer","phoenix/RenderTexture.hx",115,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(117)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::opengl::GLObject tmp1 = _other;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		tmp->state->bindFramebuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindBuffer,(void))

Void RenderTexture_obj::bindRenderBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindRenderBuffer",0xeaa600db,"phoenix.RenderTexture.bindRenderBuffer","phoenix/RenderTexture.hx",121,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::opengl::GLObject tmp1 = this->renderbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		tmp->state->bindRenderbuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindRenderBuffer,(void))

Void RenderTexture_obj::unbindRenderBuffer( ::opengl::GLObject _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindRenderBuffer",0x021f1b34,"phoenix.RenderTexture.unbindRenderBuffer","phoenix/RenderTexture.hx",127,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(129)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::opengl::GLObject tmp1 = _other;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		tmp->state->bindRenderbuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindRenderBuffer,(void))


RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(fbo,"fbo");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	::phoenix::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fbo,"fbo");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	::phoenix::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fbo") ) { return fbo; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"unbindBuffer") ) { return unbindBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderBuffer") ) { return bindRenderBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unbindRenderBuffer") ) { return unbindRenderBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fbo") ) { fbo=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::opengl::GLObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fbo","\xb3","\xbb","\x4d","\x00"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderTexture_obj,fbo),HX_HCSTRING("fbo","\xb3","\xbb","\x4d","\x00")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderTexture_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fbo","\xb3","\xbb","\x4d","\x00"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("unbindBuffer","\x36","\xc2","\xcd","\x64"),
	HX_HCSTRING("bindRenderBuffer","\x53","\x2a","\x4c","\x49"),
	HX_HCSTRING("unbindRenderBuffer","\xac","\x92","\xbc","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RenderTexture","\xe6","\x42","\x54","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTexture_obj >;
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

} // end namespace phoenix
