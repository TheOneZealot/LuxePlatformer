#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#define INCLUDED_luxe_structural_OrderedMapIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap)
HX_DECLARE_CLASS2(luxe,structural,OrderedMapIterator)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  OrderedMapIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrderedMapIterator_obj OBJ_;
		OrderedMapIterator_obj();
		Void __construct(::luxe::structural::OrderedMap omap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.OrderedMapIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrderedMapIterator_obj > __new(::luxe::structural::OrderedMap omap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrderedMapIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OrderedMapIterator","\x5d","\x6d","\x6f","\xce"); }

		::luxe::structural::OrderedMap map;
		int index;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_OrderedMapIterator */ 
