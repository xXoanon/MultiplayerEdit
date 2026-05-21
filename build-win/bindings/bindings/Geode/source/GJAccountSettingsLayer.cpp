
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

auto GJAccountSettingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountSettingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJAccountSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountSettingsLayer::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&GJAccountSettingsLayer::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(GJAccountSettingsLayer*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto GJAccountSettingsLayer::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJAccountSettingsLayer::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(GJAccountSettingsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJAccountSettingsLayer::closeAccInputNodes(cocos2d::CCArray* nodes) -> decltype(closeAccInputNodes(nodes)) {
	using FunctionType = decltype(closeAccInputNodes(nodes))(*)(GJAccountSettingsLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, nodes);
}

auto GJAccountSettingsLayer::createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float width, float scale) -> decltype(createToggleButton(label, selector, toggled, menu, position, width, scale)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position, width, scale))(*)(GJAccountSettingsLayer*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position, width, scale);
}

auto GJAccountSettingsLayer::init(int accountID) -> decltype(init(accountID)) {
	using FunctionType = decltype(init(accountID))(*)(GJAccountSettingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2921e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GJAccountSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::onCommentSetting(cocos2d::CCObject* sender) -> decltype(onCommentSetting(sender)) {
	using FunctionType = decltype(onCommentSetting(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::onFriendRequests(cocos2d::CCObject* sender) -> decltype(onFriendRequests(sender)) {
	using FunctionType = decltype(onFriendRequests(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::onMessageSetting(cocos2d::CCObject* sender) -> decltype(onMessageSetting(sender)) {
	using FunctionType = decltype(onMessageSetting(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::updateScoreValues() -> decltype(updateScoreValues()) {
	using FunctionType = decltype(updateScoreValues())(*)(GJAccountSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
