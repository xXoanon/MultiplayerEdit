
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

CCSpritePlus::CCSpritePlus() : CCSpritePlus(geode::CutoffConstructor, sizeof(CCSpritePlus)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CCSpritePlus::~CCSpritePlus();

	using FunctionType = void(*)(CCSpritePlus*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45710, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

CCSpritePlus::~CCSpritePlus() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCSpritePlus*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x47d30, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCSpritePlus(geode::CutoffConstructor, sizeof(CCSpritePlus));
		geode::DestructorLock::addLock(this);
	}
}

auto CCSpritePlus::createWithSpriteFrameName(char const* frame) -> decltype(createWithSpriteFrameName(frame)) {
	using FunctionType = decltype(createWithSpriteFrameName(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto CCSpritePlus::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto CCSpritePlus::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto CCSpritePlus::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto CCSpritePlus::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&CCSpritePlus::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(CCSpritePlus*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto CCSpritePlus::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto CCSpritePlus::setRotationX(float rotationX) -> decltype(setRotationX(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setRotationX), this);
	using FunctionType = decltype(setRotationX(rotationX))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto CCSpritePlus::setRotationY(float rotationY) -> decltype(setRotationY(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCSpritePlus::setRotationY), this);
	using FunctionType = decltype(setRotationY(rotationY))(*)(CCSpritePlus*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto CCSpritePlus::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&CCSpritePlus::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(CCSpritePlus*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto CCSpritePlus::initWithSpriteFrameName(char const* frameName) -> decltype(initWithSpriteFrameName(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&CCSpritePlus::initWithSpriteFrameName), this);
	using FunctionType = decltype(initWithSpriteFrameName(frameName))(*)(CCSpritePlus*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto CCSpritePlus::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCSpritePlus::setFlipX), this);
	using FunctionType = decltype(setFlipX(flipX))(*)(CCSpritePlus*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipX);
}

auto CCSpritePlus::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCSpritePlus::setFlipY), this);
	using FunctionType = decltype(setFlipY(flipY))(*)(CCSpritePlus*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipY);
}

auto CCSpritePlus::removeFollower(cocos2d::CCNode* sprite) -> decltype(removeFollower(sprite)) {
	using FunctionType = decltype(removeFollower(sprite))(*)(CCSpritePlus*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite);
}
