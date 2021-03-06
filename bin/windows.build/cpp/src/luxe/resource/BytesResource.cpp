#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_resource_BytesResource
#include <luxe/resource/BytesResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetBytes
#include <snow/systems/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
namespace luxe{
namespace resource{

Void BytesResource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.BytesResource","new",0x949063c3,"luxe.resource.BytesResource.new","luxe/resource/Resource.hx",177,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		if ((tmp)){
			HX_STACK_LINE(179)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(181)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)3;
	HX_STACK_LINE(183)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	super::__construct(tmp);
	HX_STACK_LINE(185)
	this->asset = _options->__Field(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"), hx::paccDynamic );
}
;
	return null();
}

//BytesResource_obj::~BytesResource_obj() { }

Dynamic BytesResource_obj::__CreateEmpty() { return  new BytesResource_obj; }
hx::ObjectPtr< BytesResource_obj > BytesResource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< BytesResource_obj > _result_ = new BytesResource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic BytesResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesResource_obj > _result_ = new BytesResource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise BytesResource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.BytesResource","reload",0x28f0bfd6,"luxe.resource.BytesResource.reload","luxe/resource/Resource.hx",189,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	::luxe::resource::BytesResource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		if ((tmp2)){
			HX_STACK_LINE(191)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(193)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::luxe::resource::BytesResource,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/resource/Resource.hx",195,0x204e02c8)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(197)
			_g->set_state((int)2);
			HX_STACK_LINE(199)
			::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(199)
			::snow::systems::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			::snow::api::Promise tmp3 = ::snow::systems::assets::AssetBytes_obj::load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::snow::api::Promise get = tmp3;		HX_STACK_VAR(get,"get");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::luxe::resource::BytesResource,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetBytes _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/resource/Resource.hx",201,0x204e02c8)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(203)
					_g->asset = _asset;
					HX_STACK_LINE(204)
					_g->set_state((int)3);
					HX_STACK_LINE(205)
					::luxe::resource::BytesResource tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(205)
					resolve(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(201)
			get->then( Dynamic(new _Function_2_1(_g,resolve)),null());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::luxe::resource::BytesResource,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/resource/Resource.hx",209,0x204e02c8)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(211)
					_g->set_state((int)4);
					HX_STACK_LINE(212)
					Dynamic tmp4 = _error;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(212)
					reject(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(209)
			get->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(195)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


Void BytesResource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.BytesResource","clear",0xd36de3b0,"luxe.resource.BytesResource.clear","luxe/resource/Resource.hx",220,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		::snow::systems::assets::AssetBytes tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		if ((tmp1)){
			HX_STACK_LINE(223)
			::snow::systems::assets::AssetBytes tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			tmp2->destroy();
			HX_STACK_LINE(224)
			this->asset = null();
		}
	}
return null();
}


Float BytesResource_obj::memory_use( ){
	HX_STACK_FRAME("luxe.resource.BytesResource","memory_use",0xbbda3fc6,"luxe.resource.BytesResource.memory_use","luxe/resource/Resource.hx",229,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	::snow::systems::assets::AssetBytes tmp = this->asset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	if ((tmp1)){
		HX_STACK_LINE(231)
		return (int)0;
	}
	HX_STACK_LINE(233)
	::snow::systems::assets::AssetBytes tmp2 = this->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	int tmp3 = tmp2->bytes->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	return tmp3;
}



BytesResource_obj::BytesResource_obj()
{
}

void BytesResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesResource);
	HX_MARK_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BytesResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BytesResource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memory_use") ) { return memory_use_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::snow::systems::assets::AssetBytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::assets::AssetBytes*/ ,(int)offsetof(BytesResource_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("memory_use","\xc9","\x50","\x8c","\xfa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesResource_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesResource_obj::__mClass;

void BytesResource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.BytesResource","\x51","\xc6","\x84","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesResource_obj >;
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
} // end namespace resource
