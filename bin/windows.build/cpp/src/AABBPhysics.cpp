#include <hxcpp.h>

#ifndef INCLUDED_AABBPhysics
#include <AABBPhysics.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif

Void AABBPhysics_obj::__construct()
{
HX_STACK_FRAME("AABBPhysics","new",0xf3d93a79,"AABBPhysics.new","AABBPhysics.hx",5,0x19337717)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//AABBPhysics_obj::~AABBPhysics_obj() { }

Dynamic AABBPhysics_obj::__CreateEmpty() { return  new AABBPhysics_obj; }
hx::ObjectPtr< AABBPhysics_obj > AABBPhysics_obj::__new()
{  hx::ObjectPtr< AABBPhysics_obj > _result_ = new AABBPhysics_obj();
	_result_->__construct();
	return _result_;}

Dynamic AABBPhysics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABBPhysics_obj > _result_ = new AABBPhysics_obj();
	_result_->__construct();
	return _result_;}

Void AABBPhysics_obj::init( ){
{
		HX_STACK_FRAME("AABBPhysics","init",0x66f2a6d7,"AABBPhysics.init","AABBPhysics.hx",11,0x19337717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11)
		this->staticBodies = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void AABBPhysics_obj::render( ){
{
		HX_STACK_FRAME("AABBPhysics","render",0x73e896dd,"AABBPhysics.render","AABBPhysics.hx",15,0x19337717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		bool tmp = this->get_draw();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		if ((tmp1)){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			Array< ::Dynamic > _g1 = this->staticBodies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			while((true)){
				HX_STACK_LINE(17)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(17)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(17)
				if ((tmp3)){
					HX_STACK_LINE(17)
					break;
				}
				HX_STACK_LINE(17)
				::phoenix::Rectangle tmp4 = _g1->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				::phoenix::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(17)
				++(_g);
				HX_STACK_LINE(19)
				::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::phoenix::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(22)
				::phoenix::Color tmp7 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Rectangle &tmp6,::phoenix::Color &tmp7){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","AABBPhysics.hx",19,0x19337717)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
							__result->Add(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b") , tmp6,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp7,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				Dynamic tmp8 = _Function_3_1::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(19)
				tmp5->rectangle(tmp8);
			}
		}
	}
return null();
}



AABBPhysics_obj::AABBPhysics_obj()
{
}

void AABBPhysics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABBPhysics);
	HX_MARK_MEMBER_NAME(staticBodies,"staticBodies");
	::luxe::PhysicsEngine_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AABBPhysics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(staticBodies,"staticBodies");
	::luxe::PhysicsEngine_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AABBPhysics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"staticBodies") ) { return staticBodies; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AABBPhysics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"staticBodies") ) { staticBodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AABBPhysics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("staticBodies","\xce","\x22","\x51","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AABBPhysics_obj,staticBodies),HX_HCSTRING("staticBodies","\xce","\x22","\x51","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("staticBodies","\xce","\x22","\x51","\x79"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABBPhysics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABBPhysics_obj::__mClass,"__mClass");
};

#endif

hx::Class AABBPhysics_obj::__mClass;

void AABBPhysics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AABBPhysics","\x07","\x8a","\x42","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABBPhysics_obj >;
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

