
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

CCAnimatedSprite::CCAnimatedSprite() : CCAnimatedSprite(geode::CutoffConstructor, sizeof(CCAnimatedSprite)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CCAnimatedSprite::~CCAnimatedSprite();

	using FunctionType = void(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff20, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

CCAnimatedSprite::~CCAnimatedSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCAnimatedSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x411b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCAnimatedSprite(geode::CutoffConstructor, sizeof(CCAnimatedSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto CCAnimatedSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&CCAnimatedSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(CCAnimatedSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto CCAnimatedSprite::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&CCAnimatedSprite::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(CCAnimatedSprite*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto CCAnimatedSprite::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&CCAnimatedSprite::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(CCAnimatedSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto CCAnimatedSprite::animationFinishedO(cocos2d::CCObject* str) -> decltype(animationFinishedO(str)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&CCAnimatedSprite::animationFinishedO), this);
	using FunctionType = decltype(animationFinishedO(str))(*)(CCAnimatedSprite*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, str);
}

auto CCAnimatedSprite::initWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(initWithType(definition, texture, useTexture)) {
	using FunctionType = decltype(initWithType(definition, texture, useTexture))(*)(CCAnimatedSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCAnimatedSprite::loadType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(loadType(definition, texture, useTexture)) {
	using FunctionType = decltype(loadType(definition, texture, useTexture))(*)(CCAnimatedSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCAnimatedSprite::runAnimation(gd::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(CCAnimatedSprite*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto CCAnimatedSprite::switchToMode(spriteMode mode) -> decltype(switchToMode(mode)) {
	using FunctionType = decltype(switchToMode(mode))(*)(CCAnimatedSprite*, spriteMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, mode);
}

auto CCAnimatedSprite::tweenToAnimation(gd::string animation, float duration) -> decltype(tweenToAnimation(animation, duration)) {
	using FunctionType = decltype(tweenToAnimation(animation, duration))(*)(CCAnimatedSprite*, gd::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation, duration);
}

auto CCAnimatedSprite::tweenToAnimationFinished() -> decltype(tweenToAnimationFinished()) {
	using FunctionType = decltype(tweenToAnimationFinished())(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
