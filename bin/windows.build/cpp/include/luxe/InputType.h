#ifndef INCLUDED_luxe_InputType
#define INCLUDED_luxe_InputType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InputType)
namespace luxe{


class InputType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InputType_obj OBJ_;

	public:
		InputType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.InputType","\x0c","\x55","\xfc","\xee"); }
		::String __ToString() const { return HX_HCSTRING("InputType.","\xea","\x3b","\xb7","\x8f") + tag; }

		static ::luxe::InputType gamepad;
		static inline ::luxe::InputType gamepad_dyn() { return gamepad; }
		static ::luxe::InputType keys;
		static inline ::luxe::InputType keys_dyn() { return keys; }
		static ::luxe::InputType mouse;
		static inline ::luxe::InputType mouse_dyn() { return mouse; }
		static ::luxe::InputType touch;
		static inline ::luxe::InputType touch_dyn() { return touch; }
		static ::luxe::InputType unknown;
		static inline ::luxe::InputType unknown_dyn() { return unknown; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_InputType */ 
