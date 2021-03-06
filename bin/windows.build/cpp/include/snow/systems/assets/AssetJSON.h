#ifndef INCLUDED_snow_systems_assets_AssetJSON
#define INCLUDED_snow_systems_assets_AssetJSON

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetJSON)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetJSON_obj : public ::snow::systems::assets::Asset_obj{
	public:
		typedef ::snow::systems::assets::Asset_obj super;
		typedef AssetJSON_obj OBJ_;
		AssetJSON_obj();
		Void __construct(::snow::systems::assets::Assets _system,::String _id,Dynamic _json);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.assets.AssetJSON")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetJSON_obj > __new(::snow::systems::assets::Assets _system,::String _id,Dynamic _json);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetJSON_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetJSON","\xf8","\x0b","\xc9","\x4c"); }

		static ::snow::api::Promise load( ::snow::systems::assets::Assets _system,::String _id);
		static Dynamic load_dyn();

		static ::snow::api::Promise processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data);
		static Dynamic processor_dyn();

		Dynamic json;
		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual Dynamic set_json( Dynamic _json);
		Dynamic set_json_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_AssetJSON */ 
