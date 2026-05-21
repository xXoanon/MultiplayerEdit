
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

auto RingObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto RingObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto RingObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto RingObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RingObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RingObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&RingObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(RingObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto RingObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&RingObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(RingObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a21b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto RingObject::setRScale(float scale) -> decltype(setRScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setRScale), this);
	using FunctionType = decltype(setRScale(scale))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto RingObject::triggerActivated(float xPosition) -> decltype(triggerActivated(xPosition)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::triggerActivated), this);
	using FunctionType = decltype(triggerActivated(xPosition))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, xPosition);
}

auto RingObject::shouldDrawEditorHitbox() -> decltype(shouldDrawEditorHitbox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RingObject::shouldDrawEditorHitbox), this);
	using FunctionType = decltype(shouldDrawEditorHitbox())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RingObject::powerOnObject(int state) -> decltype(powerOnObject(state)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RingObject::powerOnObject), this);
	using FunctionType = decltype(powerOnObject(state))(*)(RingObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, state);
}

auto RingObject::spawnCircle() -> decltype(spawnCircle()) {
	using FunctionType = decltype(spawnCircle())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
