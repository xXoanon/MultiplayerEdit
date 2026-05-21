
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

auto AnimatedGameObject::animationForID(int type, int id) -> decltype(animationForID(type, id)) {
	using FunctionType = decltype(animationForID(type, id))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, id);
}

auto AnimatedGameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&AnimatedGameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(AnimatedGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto AnimatedGameObject::setChildColor(cocos2d::ccColor3B const& color) -> decltype(setChildColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&AnimatedGameObject::setChildColor), this);
	using FunctionType = decltype(setChildColor(color))(*)(AnimatedGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto AnimatedGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AnimatedGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(AnimatedGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AnimatedGameObject::activateObject() -> decltype(activateObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AnimatedGameObject::activateObject), this);
	using FunctionType = decltype(activateObject())(*)(AnimatedGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AnimatedGameObject::deactivateObject(bool deactivate) -> decltype(deactivateObject(deactivate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&AnimatedGameObject::deactivateObject), this);
	using FunctionType = decltype(deactivateObject(deactivate))(*)(AnimatedGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, deactivate);
}

auto AnimatedGameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&AnimatedGameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(AnimatedGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto AnimatedGameObject::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&AnimatedGameObject::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(AnimatedGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto AnimatedGameObject::displayFrameChanged(cocos2d::CCObject* sprite, gd::string frameName) -> decltype(displayFrameChanged(sprite, frameName)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*, gd::string>::func(&AnimatedGameObject::displayFrameChanged), this);
	using FunctionType = decltype(displayFrameChanged(sprite, frameName))(*)(AnimatedGameObject*, cocos2d::CCObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a50b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sprite, frameName);
}

auto AnimatedGameObject::init(int id) -> decltype(init(id)) {
	using FunctionType = decltype(init(id))(*)(AnimatedGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AnimatedGameObject::playAnimation(int type) -> decltype(playAnimation(type)) {
	using FunctionType = decltype(playAnimation(type))(*)(AnimatedGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto AnimatedGameObject::setupChildSprites() -> decltype(setupChildSprites()) {
	using FunctionType = decltype(setupChildSprites())(*)(AnimatedGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AnimatedGameObject::updateObjectAnimation() -> decltype(updateObjectAnimation()) {
	using FunctionType = decltype(updateObjectAnimation())(*)(AnimatedGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a38a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
