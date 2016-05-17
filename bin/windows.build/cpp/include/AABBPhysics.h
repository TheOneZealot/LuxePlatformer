#ifndef INCLUDED_AABBPhysics
#define INCLUDED_AABBPhysics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
HX_DECLARE_CLASS0(AABBPhysics)
HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS1(phoenix,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  AABBPhysics_obj : public ::luxe::PhysicsEngine_obj{
	public:
		typedef ::luxe::PhysicsEngine_obj super;
		typedef AABBPhysics_obj OBJ_;
		AABBPhysics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="AABBPhysics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AABBPhysics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AABBPhysics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AABBPhysics","\x07","\x8a","\x42","\x38"); }

		Array< ::Dynamic > staticBodies;
		virtual Void init( );

		virtual Void render( );

};


#endif /* INCLUDED_AABBPhysics */ 
