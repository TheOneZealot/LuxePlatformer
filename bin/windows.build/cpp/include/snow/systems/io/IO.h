#ifndef INCLUDED_snow_systems_io_IO
#define INCLUDED_snow_systems_io_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,io,IO)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS3(snow,modules,sdl,IO)
HX_DECLARE_CLASS3(snow,systems,io,IO)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace systems{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.io.IO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IO_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IO","\xe6","\x3f","\x00","\x00"); }

		::snow::Snow app;
		::snow::modules::sdl::IO module;
		::String string_save_prefix;
		virtual ::String app_path( );
		Dynamic app_path_dyn();

		virtual ::String app_path_prefs( );
		Dynamic app_path_prefs_dyn();

		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options);
		Dynamic data_load_dyn();

		virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options);
		Dynamic data_save_dyn();

		virtual ::snow::api::Promise data_flow( ::String _id,Dynamic _processor,Dynamic _provider);
		Dynamic data_flow_dyn();

		::haxe::ds::IntMap string_slots;
		virtual ::String string_save_path( hx::Null< int >  _slot);
		Dynamic string_save_path_dyn();

		virtual bool string_save( ::String _key,::String _value,hx::Null< int >  _slot);
		Dynamic string_save_dyn();

		virtual ::String string_load( ::String _key,hx::Null< int >  _slot);
		Dynamic string_load_dyn();

		virtual bool string_destroy( hx::Null< int >  _slot);
		Dynamic string_destroy_dyn();

		virtual ::haxe::ds::StringMap string_slots_sync( hx::Null< int >  _slot);
		Dynamic string_slots_sync_dyn();

		virtual ::snow::api::Promise default_provider( ::snow::Snow _app,::String _id);
		Dynamic default_provider_dyn();

		virtual Void onevent( ::snow::types::SystemEvent _event);
		Dynamic onevent_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace io

#endif /* INCLUDED_snow_systems_io_IO */ 
