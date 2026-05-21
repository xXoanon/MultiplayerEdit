
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

SetupTriggerPopup::SetupTriggerPopup() : SetupTriggerPopup(geode::CutoffConstructor, sizeof(SetupTriggerPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetupTriggerPopup::~SetupTriggerPopup();

	using FunctionType = void(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d780, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

SetupTriggerPopup::~SetupTriggerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupTriggerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x473a80, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupTriggerPopup(geode::CutoffConstructor, sizeof(SetupTriggerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupTriggerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetupTriggerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SetupTriggerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47df60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetupTriggerPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::toggleGroup(int group, bool visible) -> decltype(toggleGroup(group, visible)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupTriggerPopup::toggleGroup), this);
	using FunctionType = decltype(toggleGroup(group, visible))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4746b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, visible);
}

auto SetupTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupTriggerPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetupTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTriggerPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTriggerPopup::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&SetupTriggerPopup::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(SetupTriggerPopup*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto SetupTriggerPopup::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(SetupTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTriggerPopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&SetupTriggerPopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(SetupTriggerPopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto SetupTriggerPopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&SetupTriggerPopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(SetupTriggerPopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto SetupTriggerPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::updateToggleItem(int value, bool toggled) -> decltype(updateToggleItem(value, toggled)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupTriggerPopup::updateToggleItem), this);
	using FunctionType = decltype(updateToggleItem(value, toggled))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4780c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, toggled);
}

auto SetupTriggerPopup::getValue(int tag) -> decltype(getValue(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SetupTriggerPopup::getValue), this);
	using FunctionType = decltype(getValue(tag))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto SetupTriggerPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupTriggerPopup::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupTriggerPopup*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupTriggerPopup::addCloseButton(gd::string text) -> decltype(addCloseButton(text)) {
	using FunctionType = decltype(addCloseButton(text))(*)(SetupTriggerPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto SetupTriggerPopup::addCustomButton(int tag, ButtonSprite* sprite, cocos2d::CCPoint position, int page, int group) -> decltype(addCustomButton(tag, sprite, position, page, group)) {
	using FunctionType = decltype(addCustomButton(tag, sprite, position, page, group))(*)(SetupTriggerPopup*, int, ButtonSprite*, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, sprite, position, page, group);
}

auto SetupTriggerPopup::addHelpButton(gd::string title, gd::string desc, float scale) -> decltype(addHelpButton(title, desc, scale)) {
	using FunctionType = decltype(addHelpButton(title, desc, scale))(*)(SetupTriggerPopup*, gd::string, gd::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, desc, scale);
}

auto SetupTriggerPopup::addInfoLabel(gd::string text, float scale, cocos2d::CCPoint position, int page, int group) -> decltype(addInfoLabel(text, scale, position, page, group)) {
	using FunctionType = decltype(addInfoLabel(text, scale, position, page, group))(*)(SetupTriggerPopup*, gd::string, float, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, scale, position, page, group);
}

auto SetupTriggerPopup::addObjectToPage(cocos2d::CCObject* object, int page) -> decltype(addObjectToPage(object, page)) {
	using FunctionType = decltype(addObjectToPage(object, page))(*)(SetupTriggerPopup*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4747a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, page);
}

auto SetupTriggerPopup::addTitle(gd::string title) -> decltype(addTitle(title)) {
	using FunctionType = decltype(addTitle(title))(*)(SetupTriggerPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title);
}

auto SetupTriggerPopup::createCustomButton(int tag, gd::string text, gd::string frame, cocos2d::CCPoint position, float buttonScale, float labelScale, bool vertical, int page, int group) -> decltype(createCustomButton(tag, text, frame, position, buttonScale, labelScale, vertical, page, group)) {
	using FunctionType = decltype(createCustomButton(tag, text, frame, position, buttonScale, labelScale, vertical, page, group))(*)(SetupTriggerPopup*, int, gd::string, gd::string, cocos2d::CCPoint, float, float, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4774b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, text, frame, position, buttonScale, labelScale, vertical, page, group);
}

auto SetupTriggerPopup::createCustomEasingControls(gd::string text, cocos2d::CCPoint position, float scale, int typeProperty, int rateProperty, int page, int group) -> decltype(createCustomEasingControls(text, position, scale, typeProperty, rateProperty, page, group)) {
	using FunctionType = decltype(createCustomEasingControls(text, position, scale, typeProperty, rateProperty, page, group))(*)(SetupTriggerPopup*, gd::string, cocos2d::CCPoint, float, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, position, scale, typeProperty, rateProperty, page, group);
}

auto SetupTriggerPopup::createCustomToggleValueControl(int property, bool toggled, bool notClickable, gd::string text, cocos2d::CCPoint position, bool vertical, int page, int group) -> decltype(createCustomToggleValueControl(property, toggled, notClickable, text, position, vertical, page, group)) {
	using FunctionType = decltype(createCustomToggleValueControl(property, toggled, notClickable, text, position, vertical, page, group))(*)(SetupTriggerPopup*, int, bool, bool, gd::string, cocos2d::CCPoint, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, toggled, notClickable, text, position, vertical, page, group);
}

auto SetupTriggerPopup::createEasingControls(cocos2d::CCPoint position, float scale, int page, int group) -> decltype(createEasingControls(position, scale, page, group)) {
	using FunctionType = decltype(createEasingControls(position, scale, page, group))(*)(SetupTriggerPopup*, cocos2d::CCPoint, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, scale, page, group);
}

auto SetupTriggerPopup::createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos) -> decltype(createMultiTriggerItems(touchPos, spawnPos, multiPos)) {
	using FunctionType = decltype(createMultiTriggerItems(touchPos, spawnPos, multiPos))(*)(SetupTriggerPopup*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4750f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touchPos, spawnPos, multiPos);
}

auto SetupTriggerPopup::createMultiTriggerItemsCorner() -> decltype(createMultiTriggerItemsCorner()) {
	using FunctionType = decltype(createMultiTriggerItemsCorner())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::createMultiTriggerItemsDefault() -> decltype(createMultiTriggerItemsDefault()) {
	using FunctionType = decltype(createMultiTriggerItemsDefault())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::createMultiTriggerItemsDefaultHorizontal() -> decltype(createMultiTriggerItemsDefaultHorizontal()) {
	using FunctionType = decltype(createMultiTriggerItemsDefaultHorizontal())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::createMultiTriggerItemsDefaultVertical() -> decltype(createMultiTriggerItemsDefaultVertical()) {
	using FunctionType = decltype(createMultiTriggerItemsDefaultVertical())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::createPageButtons(float offset, int arrow) -> decltype(createPageButtons(offset, arrow)) {
	using FunctionType = decltype(createPageButtons(offset, arrow))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset, arrow);
}

auto SetupTriggerPopup::createPlusButton(int tag, cocos2d::CCPoint position, float scale, gd::string frame, int page, int group) -> decltype(createPlusButton(tag, position, scale, frame, page, group)) {
	using FunctionType = decltype(createPlusButton(tag, position, scale, frame, page, group))(*)(SetupTriggerPopup*, int, cocos2d::CCPoint, float, gd::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, position, scale, frame, page, group);
}

auto SetupTriggerPopup::createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCPoint position) -> decltype(createToggleButton(text, selector, toggled, position)) {
	using FunctionType = decltype(createToggleButton(text, selector, toggled, position))(*)(SetupTriggerPopup*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, selector, toggled, position);
}

auto SetupTriggerPopup::createToggleValueControl(int property, gd::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float scale) -> decltype(createToggleValueControl(property, label, position, vertical, page, group, scale)) {
	using FunctionType = decltype(createToggleValueControl(property, label, position, vertical, page, group, scale))(*)(SetupTriggerPopup*, int, gd::string, cocos2d::CCPoint, bool, int, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, vertical, page, group, scale);
}

auto SetupTriggerPopup::createValueControl(int property, gd::string label, cocos2d::CCPoint position, float scale, float sliderMin, float sliderMax) -> decltype(createValueControl(property, label, position, scale, sliderMin, sliderMax)) {
	using FunctionType = decltype(createValueControl(property, label, position, scale, sliderMin, sliderMax))(*)(SetupTriggerPopup*, int, gd::string, cocos2d::CCPoint, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale, sliderMin, sliderMax);
}

auto SetupTriggerPopup::createValueControlAdvanced(int property, gd::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable) -> decltype(createValueControlAdvanced(property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable)) {
	using FunctionType = decltype(createValueControlAdvanced(property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable))(*)(SetupTriggerPopup*, int, gd::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable);
}

auto SetupTriggerPopup::getGroupContainer(int group) -> decltype(getGroupContainer(group)) {
	using FunctionType = decltype(getGroupContainer(group))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto SetupTriggerPopup::getPageContainer(int page) -> decltype(getPageContainer(page)) {
	using FunctionType = decltype(getPageContainer(page))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SetupTriggerPopup::getTriggerValue(int property, GameObject* object) -> decltype(getTriggerValue(property, object)) {
	using FunctionType = decltype(getTriggerValue(property, object))(*)(SetupTriggerPopup*, int, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47a5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, object);
}

auto SetupTriggerPopup::getTruncatedValue(float value, int decimals) -> decltype(getTruncatedValue(value, decimals)) {
	using FunctionType = decltype(getTruncatedValue(value, decimals))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, decimals);
}

auto SetupTriggerPopup::goToPage(int page, bool hideAll) -> decltype(goToPage(page, hideAll)) {
	using FunctionType = decltype(goToPage(page, hideAll))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4743b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, hideAll);
}

auto SetupTriggerPopup::init(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background) -> decltype(init(trigger, triggers, width, height, background)) {
	using FunctionType = decltype(init(trigger, triggers, width, height, background))(*)(SetupTriggerPopup*, EffectGameObject*, cocos2d::CCArray*, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, trigger, triggers, width, height, background);
}

auto SetupTriggerPopup::onCustomEaseArrow(int property, bool up) -> decltype(onCustomEaseArrow(property, up)) {
	using FunctionType = decltype(onCustomEaseArrow(property, up))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47da70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, up);
}

auto SetupTriggerPopup::onCustomEaseArrowDown(cocos2d::CCObject* sender) -> decltype(onCustomEaseArrowDown(sender)) {
	using FunctionType = decltype(onCustomEaseArrowDown(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47da40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onCustomEaseArrowUp(cocos2d::CCObject* sender) -> decltype(onCustomEaseArrowUp(sender)) {
	using FunctionType = decltype(onCustomEaseArrowUp(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47da10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onCustomEaseRate(cocos2d::CCObject* sender) -> decltype(onCustomEaseRate(sender)) {
	using FunctionType = decltype(onCustomEaseRate(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onDisableValue(cocos2d::CCObject* sender) -> decltype(onDisableValue(sender)) {
	using FunctionType = decltype(onDisableValue(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onEase(cocos2d::CCObject* sender) -> decltype(onEase(sender)) {
	using FunctionType = decltype(onEase(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47cf80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onEaseRate(cocos2d::CCObject* sender) -> decltype(onEaseRate(sender)) {
	using FunctionType = decltype(onEaseRate(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47cff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onMultiTrigger(cocos2d::CCObject* sender) -> decltype(onMultiTrigger(sender)) {
	using FunctionType = decltype(onMultiTrigger(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4757f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4742d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onSpawnedByTrigger(cocos2d::CCObject* sender) -> decltype(onSpawnedByTrigger(sender)) {
	using FunctionType = decltype(onSpawnedByTrigger(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onToggleTriggerValue(sender)) {
	using FunctionType = decltype(onToggleTriggerValue(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onTouchTriggered(cocos2d::CCObject* sender) -> decltype(onTouchTriggered(sender)) {
	using FunctionType = decltype(onTouchTriggered(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::toggleCustomEaseRateVisibility(int property, int tag) -> decltype(toggleCustomEaseRateVisibility(property, tag)) {
	using FunctionType = decltype(toggleCustomEaseRateVisibility(property, tag))(*)(SetupTriggerPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ddf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, tag);
}

auto SetupTriggerPopup::toggleDisableButtons(bool visible) -> decltype(toggleDisableButtons(visible)) {
	using FunctionType = decltype(toggleDisableButtons(visible))(*)(SetupTriggerPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto SetupTriggerPopup::toggleEaseRateVisibility() -> decltype(toggleEaseRateVisibility()) {
	using FunctionType = decltype(toggleEaseRateVisibility())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ce70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::triggerArrowChanged(int property, bool isRight) -> decltype(triggerArrowChanged(property, isRight)) {
	using FunctionType = decltype(triggerArrowChanged(property, isRight))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, isRight);
}

auto SetupTriggerPopup::triggerArrowLeft(cocos2d::CCObject* sender) -> decltype(triggerArrowLeft(sender)) {
	using FunctionType = decltype(triggerArrowLeft(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::triggerArrowRight(cocos2d::CCObject* sender) -> decltype(triggerArrowRight(sender)) {
	using FunctionType = decltype(triggerArrowRight(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::triggerSliderChanged(cocos2d::CCObject* sender) -> decltype(triggerSliderChanged(sender)) {
	using FunctionType = decltype(triggerSliderChanged(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::updateCustomEaseLabel(int property, int easingType) -> decltype(updateCustomEaseLabel(property, easingType)) {
	using FunctionType = decltype(updateCustomEaseLabel(property, easingType))(*)(SetupTriggerPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47db10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, easingType);
}

auto SetupTriggerPopup::updateCustomEaseRateLabel(int property, float easingRate) -> decltype(updateCustomEaseRateLabel(property, easingRate)) {
	using FunctionType = decltype(updateCustomEaseRateLabel(property, easingRate))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47dce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, easingRate);
}

auto SetupTriggerPopup::updateEaseLabel() -> decltype(updateEaseLabel()) {
	using FunctionType = decltype(updateEaseLabel())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47cae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateEaseRateLabel() -> decltype(updateEaseRateLabel()) {
	using FunctionType = decltype(updateEaseRateLabel())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47cc90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateEditorLabel() -> decltype(updateEditorLabel()) {
	using FunctionType = decltype(updateEditorLabel())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateInputNodeLabel(int property, gd::string text) -> decltype(updateInputNodeLabel(property, text)) {
	using FunctionType = decltype(updateInputNodeLabel(property, text))(*)(SetupTriggerPopup*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, text);
}

auto SetupTriggerPopup::updateMultiTriggerBtn() -> decltype(updateMultiTriggerBtn()) {
	using FunctionType = decltype(updateMultiTriggerBtn())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x475760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateSlider(int property) -> decltype(updateSlider(property)) {
	using FunctionType = decltype(updateSlider(property))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property);
}

auto SetupTriggerPopup::updateSpawnedByTrigger() -> decltype(updateSpawnedByTrigger()) {
	using FunctionType = decltype(updateSpawnedByTrigger())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4756c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateTouchTriggered() -> decltype(updateTouchTriggered()) {
	using FunctionType = decltype(updateTouchTriggered())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4755d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateValue(int property, float value) -> decltype(updateValue(property, value)) {
	using FunctionType = decltype(updateValue(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}

auto SetupTriggerPopup::updateValueControls(int property, float value) -> decltype(updateValueControls(property, value)) {
	using FunctionType = decltype(updateValueControls(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}

auto SetupTriggerPopup::valueChanged(int property, float value) -> decltype(valueChanged(property, value)) {
	using FunctionType = decltype(valueChanged(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}
