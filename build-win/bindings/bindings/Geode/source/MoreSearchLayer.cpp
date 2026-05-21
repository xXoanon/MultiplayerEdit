
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

auto MoreSearchLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreSearchLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x312bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreSearchLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreSearchLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreSearchLayer::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&MoreSearchLayer::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(MoreSearchLayer*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto MoreSearchLayer::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MoreSearchLayer::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(MoreSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MoreSearchLayer::audioNext(cocos2d::CCObject* sender) -> decltype(audioNext(sender)) {
	using FunctionType = decltype(audioNext(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::audioPrevious(cocos2d::CCObject* sender) -> decltype(audioPrevious(sender)) {
	using FunctionType = decltype(audioPrevious(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::createToggleButton(gd::string label, cocos2d::SEL_MenuHandler callback, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position) -> decltype(createToggleButton(label, callback, toggled, menu, position)) {
	using FunctionType = decltype(createToggleButton(label, callback, toggled, menu, position))(*)(MoreSearchLayer*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3172e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, callback, toggled, menu, position);
}

auto MoreSearchLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onCoins(cocos2d::CCObject* sender) -> decltype(onCoins(sender)) {
	using FunctionType = decltype(onCoins(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onCompleted(cocos2d::CCObject* sender) -> decltype(onCompleted(sender)) {
	using FunctionType = decltype(onCompleted(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onEpic(cocos2d::CCObject* sender) -> decltype(onEpic(sender)) {
	using FunctionType = decltype(onEpic(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onFeatured(cocos2d::CCObject* sender) -> decltype(onFeatured(sender)) {
	using FunctionType = decltype(onFeatured(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onLegendary(cocos2d::CCObject* sender) -> decltype(onLegendary(sender)) {
	using FunctionType = decltype(onLegendary(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onMythic(cocos2d::CCObject* sender) -> decltype(onMythic(sender)) {
	using FunctionType = decltype(onMythic(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onNoStar(cocos2d::CCObject* sender) -> decltype(onNoStar(sender)) {
	using FunctionType = decltype(onNoStar(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onSongFilter(cocos2d::CCObject* sender) -> decltype(onSongFilter(sender)) {
	using FunctionType = decltype(onSongFilter(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onSongMode(cocos2d::CCObject* sender) -> decltype(onSongMode(sender)) {
	using FunctionType = decltype(onSongMode(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onTwoPlayer(cocos2d::CCObject* sender) -> decltype(onTwoPlayer(sender)) {
	using FunctionType = decltype(onTwoPlayer(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onUncompleted(cocos2d::CCObject* sender) -> decltype(onUncompleted(sender)) {
	using FunctionType = decltype(onUncompleted(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3149e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::selectSong(int songID) -> decltype(selectSong(songID)) {
	using FunctionType = decltype(selectSong(songID))(*)(MoreSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID);
}

auto MoreSearchLayer::toggleSongNodes(bool custom, bool disable) -> decltype(toggleSongNodes(custom, disable)) {
	using FunctionType = decltype(toggleSongNodes(custom, disable))(*)(MoreSearchLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, custom, disable);
}

auto MoreSearchLayer::updateAudioLabel() -> decltype(updateAudioLabel()) {
	using FunctionType = decltype(updateAudioLabel())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
