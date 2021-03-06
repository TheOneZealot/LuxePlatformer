#ifndef INCLUDED_snow_core_native_audio_NativeAudioData
#define INCLUDED_snow_core_native_audio_NativeAudioData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,NativeAudioData)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  NativeAudioData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeAudioData_obj OBJ_;
		NativeAudioData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.core.native.audio.NativeAudioData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeAudioData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeAudioData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NativeAudioData","\x69","\xd1","\xe6","\x02"); }

		static ::snow::api::Promise data_from_load( ::snow::Snow app,::String _path,Dynamic _is_stream,Dynamic _format);
		static Dynamic data_from_load_dyn();

		static ::snow::api::Promise data_from_bytes( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		static Dynamic data_from_bytes_dyn();

		static ::snow::types::AudioData data_from_load_direct( ::snow::Snow app,::String _path,Dynamic _is_stream,Dynamic _format);
		static Dynamic data_from_load_direct_dyn();

		static ::snow::types::AudioData data_from_bytes_direct( ::snow::Snow app,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		static Dynamic data_from_bytes_direct_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_NativeAudioData */ 
