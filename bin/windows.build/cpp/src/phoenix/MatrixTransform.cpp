#include <hxcpp.h>

#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void MatrixTransform_obj::__construct(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s)
{
HX_STACK_FRAME("phoenix.MatrixTransform","new",0x876d86de,"phoenix.MatrixTransform.new","phoenix/Matrix.hx",16,0x938b753d)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(17)
	this->pos = p;
	HX_STACK_LINE(18)
	this->rotation = r;
	HX_STACK_LINE(19)
	this->scale = s;
}
;
	return null();
}

//MatrixTransform_obj::~MatrixTransform_obj() { }

Dynamic MatrixTransform_obj::__CreateEmpty() { return  new MatrixTransform_obj; }
hx::ObjectPtr< MatrixTransform_obj > MatrixTransform_obj::__new(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s)
{  hx::ObjectPtr< MatrixTransform_obj > _result_ = new MatrixTransform_obj();
	_result_->__construct(p,r,s);
	return _result_;}

Dynamic MatrixTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatrixTransform_obj > _result_ = new MatrixTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MatrixTransform_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.MatrixTransform","destroy",0x262ffa78,"phoenix.MatrixTransform.destroy","phoenix/Matrix.hx",22,0x938b753d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->pos = null();
		HX_STACK_LINE(23)
		this->rotation = null();
		HX_STACK_LINE(23)
		this->scale = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MatrixTransform_obj,destroy,(void))


MatrixTransform_obj::MatrixTransform_obj()
{
}

void MatrixTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatrixTransform);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_END_CLASS();
}

void MatrixTransform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
}

Dynamic MatrixTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatrixTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatrixTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MatrixTransform_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(MatrixTransform_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MatrixTransform_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatrixTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatrixTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class MatrixTransform_obj::__mClass;

void MatrixTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.MatrixTransform","\xec","\x7f","\xf5","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatrixTransform_obj >;
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
