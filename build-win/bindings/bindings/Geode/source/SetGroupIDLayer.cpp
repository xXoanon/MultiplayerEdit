
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

auto SetGroupIDLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetGroupIDLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetGroupIDLayer::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetGroupIDLayer::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetGroupIDLayer*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd3d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetGroupIDLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fbbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::callRemoveFromGroup(float dt) -> decltype(callRemoveFromGroup(dt)) {
	using FunctionType = decltype(callRemoveFromGroup(dt))(*)(SetGroupIDLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto SetGroupIDLayer::createTextInput(cocos2d::CCPoint position, int tag, int length, gd::string placeholder, float width, int arrow) -> decltype(createTextInput(position, tag, length, placeholder, width, arrow)) {
	using FunctionType = decltype(createTextInput(position, tag, length, placeholder, width, arrow))(*)(SetGroupIDLayer*, cocos2d::CCPoint, int, int, gd::string, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fac60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, tag, length, placeholder, width, arrow);
}

auto SetGroupIDLayer::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::init(GameObject* obj, cocos2d::CCArray* objs) -> decltype(init(obj, objs)) {
	using FunctionType = decltype(init(obj, objs))(*)(SetGroupIDLayer*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f85e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj, objs);
}

auto SetGroupIDLayer::onAddGroup(cocos2d::CCObject* sender) -> decltype(onAddGroup(sender)) {
	using FunctionType = decltype(onAddGroup(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fca90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onAddGroupParent(cocos2d::CCObject* sender) -> decltype(onAddGroupParent(sender)) {
	using FunctionType = decltype(onAddGroupParent(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onAnim(cocos2d::CCObject* sender) -> decltype(onAnim(sender)) {
	using FunctionType = decltype(onAnim(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fbb40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrow(int tag, int increment) -> decltype(onArrow(tag, increment)) {
	using FunctionType = decltype(onArrow(tag, increment))(*)(SetGroupIDLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, increment);
}

auto SetGroupIDLayer::onArrowLeft(cocos2d::CCObject* sender) -> decltype(onArrowLeft(sender)) {
	using FunctionType = decltype(onArrowLeft(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrowRight(cocos2d::CCObject* sender) -> decltype(onArrowRight(sender)) {
	using FunctionType = decltype(onArrowRight(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onExtra(cocos2d::CCObject* sender) -> decltype(onExtra(sender)) {
	using FunctionType = decltype(onExtra(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onExtra2(cocos2d::CCObject* sender) -> decltype(onExtra2(sender)) {
	using FunctionType = decltype(onExtra2(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fba00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onGroupIDOptions(cocos2d::CCObject* sender) -> decltype(onGroupIDOptions(sender)) {
	using FunctionType = decltype(onGroupIDOptions(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeEditorLayer1(cocos2d::CCObject* sender) -> decltype(onNextFreeEditorLayer1(sender)) {
	using FunctionType = decltype(onNextFreeEditorLayer1(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcf90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeEditorLayer2(cocos2d::CCObject* sender) -> decltype(onNextFreeEditorLayer2(sender)) {
	using FunctionType = decltype(onNextFreeEditorLayer2(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeOrderChannel(cocos2d::CCObject* sender) -> decltype(onNextFreeOrderChannel(sender)) {
	using FunctionType = decltype(onNextFreeOrderChannel(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextGroupID1(cocos2d::CCObject* sender) -> decltype(onNextGroupID1(sender)) {
	using FunctionType = decltype(onNextGroupID1(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onRemoveFromGroup(cocos2d::CCObject* sender) -> decltype(onRemoveFromGroup(sender)) {
	using FunctionType = decltype(onRemoveFromGroup(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleGuide(cocos2d::CCObject* sender) -> decltype(onToggleGuide(sender)) {
	using FunctionType = decltype(onToggleGuide(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleSelectedOrder(cocos2d::CCObject* sender) -> decltype(onToggleSelectedOrder(sender)) {
	using FunctionType = decltype(onToggleSelectedOrder(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3faa80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceIn(cocos2d::CCObject* sender) -> decltype(onToggleTraceIn(sender)) {
	using FunctionType = decltype(onToggleTraceIn(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fab20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceOut(cocos2d::CCObject* sender) -> decltype(onToggleTraceOut(sender)) {
	using FunctionType = decltype(onToggleTraceOut(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fabc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayer(cocos2d::CCObject* sender) -> decltype(onZLayer(sender)) {
	using FunctionType = decltype(onZLayer(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcd00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayerShift(cocos2d::CCObject* sender) -> decltype(onZLayerShift(sender)) {
	using FunctionType = decltype(onZLayerShift(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcdc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::updateEditorLabel() -> decltype(updateEditorLabel()) {
	using FunctionType = decltype(updateEditorLabel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorLabel2() -> decltype(updateEditorLabel2()) {
	using FunctionType = decltype(updateEditorLabel2())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorLayerID() -> decltype(updateEditorLayerID()) {
	using FunctionType = decltype(updateEditorLayerID())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fce90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorLayerID2() -> decltype(updateEditorLayerID2()) {
	using FunctionType = decltype(updateEditorLayerID2())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorOrder() -> decltype(updateEditorOrder()) {
	using FunctionType = decltype(updateEditorOrder())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fda90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorOrderLabel() -> decltype(updateEditorOrderLabel()) {
	using FunctionType = decltype(updateEditorOrderLabel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateGroupIDButtons() -> decltype(updateGroupIDButtons()) {
	using FunctionType = decltype(updateGroupIDButtons())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateGroupIDLabel() -> decltype(updateGroupIDLabel()) {
	using FunctionType = decltype(updateGroupIDLabel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateOrderChannel() -> decltype(updateOrderChannel()) {
	using FunctionType = decltype(updateOrderChannel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateOrderChannelLabel() -> decltype(updateOrderChannelLabel()) {
	using FunctionType = decltype(updateOrderChannelLabel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateZLayerButtons() -> decltype(updateZLayerButtons()) {
	using FunctionType = decltype(updateZLayerButtons())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateZOrder() -> decltype(updateZOrder()) {
	using FunctionType = decltype(updateZOrder())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateZOrderLabel() -> decltype(updateZOrderLabel()) {
	using FunctionType = decltype(updateZOrderLabel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
