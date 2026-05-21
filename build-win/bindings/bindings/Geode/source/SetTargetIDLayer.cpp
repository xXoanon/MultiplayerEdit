
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

auto SetTargetIDLayer::create(EffectGameObject* object, cocos2d::CCArray* objects, gd::string title, gd::string label, int minimum, int maximum, int objectID) -> decltype(create(object, objects, title, label, minimum, maximum, objectID)) {
	using FunctionType = decltype(create(object, objects, title, label, minimum, maximum, objectID))(*)(EffectGameObject*, cocos2d::CCArray*, gd::string, gd::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x401cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, title, label, minimum, maximum, objectID);
}

auto SetTargetIDLayer::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTargetIDLayer::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetTargetIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTargetIDLayer::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetTargetIDLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetTargetIDLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x402300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetTargetIDLayer::init(EffectGameObject* object, cocos2d::CCArray* objects, gd::string title, gd::string label, int minimum, int maximum, int objectID) -> decltype(init(object, objects, title, label, minimum, maximum, objectID)) {
	using FunctionType = decltype(init(object, objects, title, label, minimum, maximum, objectID))(*)(SetTargetIDLayer*, EffectGameObject*, cocos2d::CCArray*, gd::string, gd::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x401e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, title, label, minimum, maximum, objectID);
}
