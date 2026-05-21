
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

auto CustomSongLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CustomSongLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongLayer::show), this);
	using FunctionType = decltype(show())(*)(CustomSongLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomSongLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CustomSongLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomSongLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomSongLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(CustomSongLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomSongLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomSongLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CustomSongLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomSongLayer::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&CustomSongLayer::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(CustomSongLayer*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto CustomSongLayer::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomSongLayer::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(CustomSongLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomSongLayer::dropDownLayerWillClose(GJDropDownLayer* layer) -> decltype(dropDownLayerWillClose(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJDropDownLayer*>::func(&CustomSongLayer::dropDownLayerWillClose), this);
	using FunctionType = decltype(dropDownLayerWillClose(layer))(*)(CustomSongLayer*, GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto CustomSongLayer::musicBrowserClosed(MusicBrowser* browser) -> decltype(musicBrowserClosed(browser)) {
	auto self = addresser::thunkAdjust(Resolve<MusicBrowser*>::func(&CustomSongLayer::musicBrowserClosed), this);
	using FunctionType = decltype(musicBrowserClosed(browser))(*)(CustomSongLayer*, MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc42e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, browser);
}

auto CustomSongLayer::init(CustomSongDelegate* delegate) -> decltype(init(delegate)) {
	using FunctionType = decltype(init(delegate))(*)(CustomSongLayer*, CustomSongDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto CustomSongLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc43b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onCreateLines(cocos2d::CCObject* sender) -> decltype(onCreateLines(sender)) {
	using FunctionType = decltype(onCreateLines(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onMusicBrowser(cocos2d::CCObject* sender) -> decltype(onMusicBrowser(sender)) {
	using FunctionType = decltype(onMusicBrowser(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onNCSBrowser(cocos2d::CCObject* sender) -> decltype(onNCSBrowser(sender)) {
	using FunctionType = decltype(onNCSBrowser(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onNewgroundsBrowser(cocos2d::CCObject* sender) -> decltype(onNewgroundsBrowser(sender)) {
	using FunctionType = decltype(onNewgroundsBrowser(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc38a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc39a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongLayer::onSongBrowser(cocos2d::CCObject* sender) -> decltype(onSongBrowser(sender)) {
	using FunctionType = decltype(onSongBrowser(sender))(*)(CustomSongLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
