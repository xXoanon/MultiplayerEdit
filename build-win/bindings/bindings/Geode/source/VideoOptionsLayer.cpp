
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

auto VideoOptionsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto VideoOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&VideoOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(VideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto VideoOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&VideoOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(VideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3789d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto VideoOptionsLayer::createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float scale, float width, bool center, cocos2d::CCArray* nodes) -> decltype(createToggleButton(label, selector, toggled, menu, position, scale, width, center, nodes)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position, scale, width, center, nodes))(*)(VideoOptionsLayer*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3789e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position, scale, width, center, nodes);
}

auto VideoOptionsLayer::onAdvanced(cocos2d::CCObject* sender) -> decltype(onAdvanced(sender)) {
	using FunctionType = decltype(onAdvanced(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x377ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onApply(cocos2d::CCObject* sender) -> decltype(onApply(sender)) {
	using FunctionType = decltype(onApply(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onBorderless(cocos2d::CCObject* sender) -> decltype(onBorderless(sender)) {
	using FunctionType = decltype(onBorderless(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x377ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onBorderlessFix(cocos2d::CCObject* sender) -> decltype(onBorderlessFix(sender)) {
	using FunctionType = decltype(onBorderlessFix(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onFullscreen(cocos2d::CCObject* sender) -> decltype(onFullscreen(sender)) {
	using FunctionType = decltype(onFullscreen(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x377fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onResolutionNext(cocos2d::CCObject* sender) -> decltype(onResolutionNext(sender)) {
	using FunctionType = decltype(onResolutionNext(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onResolutionPrev(cocos2d::CCObject* sender) -> decltype(onResolutionPrev(sender)) {
	using FunctionType = decltype(onResolutionPrev(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onTextureQualityNext(cocos2d::CCObject* sender) -> decltype(onTextureQualityNext(sender)) {
	using FunctionType = decltype(onTextureQualityNext(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onTextureQualityPrev(cocos2d::CCObject* sender) -> decltype(onTextureQualityPrev(sender)) {
	using FunctionType = decltype(onTextureQualityPrev(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::toggleResolution() -> decltype(toggleResolution()) {
	using FunctionType = decltype(toggleResolution())(*)(VideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto VideoOptionsLayer::updateResolution(int resolution) -> decltype(updateResolution(resolution)) {
	using FunctionType = decltype(updateResolution(resolution))(*)(VideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, resolution);
}

auto VideoOptionsLayer::updateTextureQuality(int quality) -> decltype(updateTextureQuality(quality)) {
	using FunctionType = decltype(updateTextureQuality(quality))(*)(VideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, quality);
}
