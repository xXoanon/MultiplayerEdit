
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

auto SpriteAnimationManager::createAnimations(gd::string definition) -> decltype(createAnimations(definition)) {
	using FunctionType = decltype(createAnimations(definition))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(definition);
}

auto SpriteAnimationManager::animationFinished() -> decltype(animationFinished()) {
	using FunctionType = decltype(animationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::callAnimationFinished() -> decltype(callAnimationFinished()) {
	using FunctionType = decltype(callAnimationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::executeAnimation(gd::string animation) -> decltype(executeAnimation(animation)) {
	using FunctionType = decltype(executeAnimation(animation))(*)(SpriteAnimationManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::getPrio(gd::string animation) -> decltype(getPrio(animation)) {
	using FunctionType = decltype(getPrio(animation))(*)(SpriteAnimationManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::initWithOwner(CCAnimatedSprite* sprite, gd::string definition) -> decltype(initWithOwner(sprite, definition)) {
	using FunctionType = decltype(initWithOwner(sprite, definition))(*)(SpriteAnimationManager*, CCAnimatedSprite*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, definition);
}

auto SpriteAnimationManager::loadAnimations(gd::string definition) -> decltype(loadAnimations(definition)) {
	using FunctionType = decltype(loadAnimations(definition))(*)(SpriteAnimationManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definition);
}

auto SpriteAnimationManager::overridePrio() -> decltype(overridePrio()) {
	using FunctionType = decltype(overridePrio())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::queueAnimation(gd::string animation) -> decltype(queueAnimation(animation)) {
	using FunctionType = decltype(queueAnimation(animation))(*)(SpriteAnimationManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::runAnimation(gd::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(SpriteAnimationManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, gd::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first) -> decltype(storeAnimation(action, frames, name, priority, type, first)) {
	using FunctionType = decltype(storeAnimation(action, frames, name, priority, type, first))(*)(SpriteAnimationManager*, cocos2d::CCAnimate*, cocos2d::CCAnimate*, gd::string, int, spriteMode, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action, frames, name, priority, type, first);
}
