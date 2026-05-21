
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

auto MoreOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&MoreOptionsLayer::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(MoreOptionsLayer*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto MoreOptionsLayer::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MoreOptionsLayer::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(MoreOptionsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MoreOptionsLayer::googlePlaySignedIn() -> decltype(googlePlaySignedIn()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::googlePlaySignedIn), this);
	using FunctionType = decltype(googlePlaySignedIn())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::dropDownLayerWillClose(GJDropDownLayer* layer) -> decltype(dropDownLayerWillClose(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJDropDownLayer*>::func(&MoreOptionsLayer::dropDownLayerWillClose), this);
	using FunctionType = decltype(dropDownLayerWillClose(layer))(*)(MoreOptionsLayer*, GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto MoreOptionsLayer::addToggle(char const* label, char const* key, char const* description) -> decltype(addToggle(label, key, description)) {
	using FunctionType = decltype(addToggle(label, key, description))(*)(MoreOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x374b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, key, description);
}

auto MoreOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	using FunctionType = decltype(countForPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3751e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x375600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::layerForPage(int page) -> decltype(layerForPage(page)) {
	using FunctionType = decltype(layerForPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x375440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::objectsForPage(int page) -> decltype(objectsForPage(page)) {
	using FunctionType = decltype(objectsForPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3752b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3768a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onFMODDebug(cocos2d::CCObject* sender) -> decltype(onFMODDebug(sender)) {
	using FunctionType = decltype(onFMODDebug(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x376410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3766c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onKeybindings(cocos2d::CCObject* sender) -> decltype(onKeybindings(sender)) {
	using FunctionType = decltype(onKeybindings(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdcf70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3755e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onParental(cocos2d::CCObject* sender) -> decltype(onParental(sender)) {
	using FunctionType = decltype(onParental(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3765b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3755f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onSongBrowser(cocos2d::CCObject* sender) -> decltype(onSongBrowser(sender)) {
	using FunctionType = decltype(onSongBrowser(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3763a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x375ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
