#ifndef INCLUDED_haxe_crypto_Base64
#define INCLUDED_haxe_crypto_Base64

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Base64)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Base64_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Base64_obj OBJ_;
		Base64_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Base64")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Base64_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Base64_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Base64","\xaf","\x71","\xbc","\x89"); }

		static void __boot();
		static ::String CHARS;
		static ::haxe::io::Bytes BYTES;
		static ::String encode( ::haxe::io::Bytes bytes,hx::Null< bool >  complement);
		static Dynamic encode_dyn();

		static ::haxe::io::Bytes decode( ::String str,hx::Null< bool >  complement);
		static Dynamic decode_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Base64 */ 
