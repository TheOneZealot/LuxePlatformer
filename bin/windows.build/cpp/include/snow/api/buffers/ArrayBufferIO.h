#ifndef INCLUDED_snow_api_buffers_ArrayBufferIO
#define INCLUDED_snow_api_buffers_ArrayBufferIO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferIO)
namespace snow{
namespace api{
namespace buffers{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferIO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferIO_obj OBJ_;
		ArrayBufferIO_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.api.buffers.ArrayBufferIO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBufferIO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferIO_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArrayBufferIO","\x7f","\x77","\x2c","\x77"); }

		static int getInt16( Array< unsigned char > buffer,int byteOffset);
		static Dynamic getInt16_dyn();

		static int getInt16_BE( Array< unsigned char > buffer,int byteOffset);
		static Dynamic getInt16_BE_dyn();

		static Void setInt16( Array< unsigned char > buffer,int byteOffset,int value);
		static Dynamic setInt16_dyn();

		static Void setInt16_BE( Array< unsigned char > buffer,int byteOffset,int value);
		static Dynamic setInt16_BE_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers

#endif /* INCLUDED_snow_api_buffers_ArrayBufferIO */ 
