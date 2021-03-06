#ifndef INCLUDED_luxe_tween_easing_QuadEaseIn
#define INCLUDED_luxe_tween_easing_QuadEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,QuadEaseIn)
namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  QuadEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QuadEaseIn_obj OBJ_;
		QuadEaseIn_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.QuadEaseIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QuadEaseIn_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadEaseIn_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::luxe::tween::easing::IEasing_obj *();
		::String __ToString() const { return HX_HCSTRING("QuadEaseIn","\xba","\x23","\x33","\xe7"); }

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_QuadEaseIn */ 
