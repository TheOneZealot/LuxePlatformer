#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#define INCLUDED_luxe_tween_actuators_IGenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  IGenericActuator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGenericActuator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value)=0;
virtual Dynamic autoVisible_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration)=0;
virtual Dynamic delay_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing)=0;
virtual Dynamic ease_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onComplete_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onRepeat_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onUpdate_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator reflect( Dynamic value)=0;
virtual Dynamic reflect_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator repeat( Dynamic times)=0;
virtual Dynamic repeat_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator reverse( Dynamic value)=0;
virtual Dynamic reverse_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value)=0;
virtual Dynamic timescale_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value)=0;
virtual Dynamic smartRotation_dyn()=0;
		virtual ::luxe::tween::actuators::IGenericActuator snapping( Dynamic value)=0;
virtual Dynamic snapping_dyn()=0;
};



template<typename IMPL>
class IGenericActuator_delegate_ : public IGenericActuator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGenericActuator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value) { return mDelegate->autoVisible(value);}
		Dynamic autoVisible_dyn() { return mDelegate->autoVisible_dyn();}
		::luxe::tween::actuators::IGenericActuator delay( Float duration) { return mDelegate->delay(duration);}
		Dynamic delay_dyn() { return mDelegate->delay_dyn();}
		::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing) { return mDelegate->ease(easing);}
		Dynamic ease_dyn() { return mDelegate->ease_dyn();}
		::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onComplete(handler,parameters);}
		Dynamic onComplete_dyn() { return mDelegate->onComplete_dyn();}
		::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onRepeat(handler,parameters);}
		Dynamic onRepeat_dyn() { return mDelegate->onRepeat_dyn();}
		::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onUpdate(handler,parameters);}
		Dynamic onUpdate_dyn() { return mDelegate->onUpdate_dyn();}
		::luxe::tween::actuators::IGenericActuator reflect( Dynamic value) { return mDelegate->reflect(value);}
		Dynamic reflect_dyn() { return mDelegate->reflect_dyn();}
		::luxe::tween::actuators::IGenericActuator repeat( Dynamic times) { return mDelegate->repeat(times);}
		Dynamic repeat_dyn() { return mDelegate->repeat_dyn();}
		::luxe::tween::actuators::IGenericActuator reverse( Dynamic value) { return mDelegate->reverse(value);}
		Dynamic reverse_dyn() { return mDelegate->reverse_dyn();}
		::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value) { return mDelegate->timescale(_value);}
		Dynamic timescale_dyn() { return mDelegate->timescale_dyn();}
		::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value) { return mDelegate->smartRotation(value);}
		Dynamic smartRotation_dyn() { return mDelegate->smartRotation_dyn();}
		::luxe::tween::actuators::IGenericActuator snapping( Dynamic value) { return mDelegate->snapping(value);}
		Dynamic snapping_dyn() { return mDelegate->snapping_dyn();}
};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_IGenericActuator */ 
