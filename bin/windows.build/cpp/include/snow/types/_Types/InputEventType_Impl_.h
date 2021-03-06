#ifndef INCLUDED_snow_types__Types_InputEventType_Impl_
#define INCLUDED_snow_types__Types_InputEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,InputEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  InputEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputEventType_Impl__obj OBJ_;
		InputEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.InputEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InputEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InputEventType_Impl_","\xca","\x72","\x1a","\x1a"); }

		static void __boot();
		static int ie_unknown;
		static int ie_key;
		static int ie_text;
		static int ie_mouse;
		static int ie_touch;
		static int ie_gamepad;
		static int ie_joystick;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_InputEventType_Impl_ */ 
