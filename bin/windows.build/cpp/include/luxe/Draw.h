#ifndef INCLUDED_luxe_Draw
#define INCLUDED_luxe_Draw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS2(phoenix,geometry,ArcGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,LineGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RingGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,TextGeometry)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Draw_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Draw_obj OBJ_;
		Draw_obj();
		Void __construct(::luxe::Engine _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Draw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Draw_obj > __new(::luxe::Engine _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Draw_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"); }

		virtual ::phoenix::geometry::LineGeometry line( Dynamic options);
		Dynamic line_dyn();

		virtual ::phoenix::geometry::RectangleGeometry rectangle( Dynamic options);
		Dynamic rectangle_dyn();

		virtual ::phoenix::geometry::QuadGeometry box( Dynamic options);
		Dynamic box_dyn();

		virtual ::phoenix::geometry::RingGeometry ring( Dynamic options);
		Dynamic ring_dyn();

		virtual ::phoenix::geometry::CircleGeometry circle( Dynamic options);
		Dynamic circle_dyn();

		virtual ::phoenix::geometry::ArcGeometry arc( Dynamic options);
		Dynamic arc_dyn();

		virtual ::phoenix::geometry::Geometry ngon( Dynamic options);
		Dynamic ngon_dyn();

		virtual ::phoenix::geometry::Geometry poly( Dynamic options);
		Dynamic poly_dyn();

		virtual ::phoenix::geometry::QuadGeometry texture( Dynamic options);
		Dynamic texture_dyn();

		virtual ::phoenix::geometry::TextGeometry text( Dynamic options);
		Dynamic text_dyn();

		::luxe::Engine core;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Draw */ 
