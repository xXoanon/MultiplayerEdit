
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

CCSpritePart::CCSpritePart() : CCSpritePart(geode::CutoffConstructor, sizeof(CCSpritePart)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CCSpritePart::~CCSpritePart();

	using FunctionType = void(*)(CCSpritePart*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45890, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto CCSpritePart::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCSpritePart::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(CCSpritePart*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto CCSpritePart::frameChanged(gd::string frame) -> decltype(frameChanged(frame)) {
	using FunctionType = decltype(frameChanged(frame))(*)(CCSpritePart*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}
