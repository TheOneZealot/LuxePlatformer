#ifndef INCLUDED_luxe_tween_easing_Quad
#define INCLUDED_luxe_tween_easing_Quad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,Quad)
namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  Quad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Quad_obj OBJ_;
		Quad_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.Quad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Quad_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Quad_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Quad","\xe7","\x64","\xe3","\x35"); }

		static ::luxe::tween::easing::IEasing get_easeIn( );
		static Dynamic get_easeIn_dyn();

		static ::luxe::tween::easing::IEasing get_easeInOut( );
		static Dynamic get_easeInOut_dyn();

		static ::luxe::tween::easing::IEasing get_easeOut( );
		static Dynamic get_easeOut_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_Quad */ 
