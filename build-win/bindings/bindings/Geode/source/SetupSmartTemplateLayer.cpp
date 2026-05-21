
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

auto SetupSmartTemplateLayer::create(GJSmartTemplate* smartTemplate) -> decltype(create(smartTemplate)) {
	using FunctionType = decltype(create(smartTemplate))(*)(GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x458a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(smartTemplate);
}

auto SetupSmartTemplateLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSmartTemplateLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSmartTemplateLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SetupSmartTemplateLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SetupSmartTemplateLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SetupSmartTemplateLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupSmartTemplateLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SetupSmartTemplateLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupSmartTemplateLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupSmartTemplateLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetupSmartTemplateLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupSmartTemplateLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupSmartTemplateLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupSmartTemplateLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupSmartTemplateLayer::init(GJSmartTemplate* smartTemplate) -> decltype(init(smartTemplate)) {
	using FunctionType = decltype(init(smartTemplate))(*)(SetupSmartTemplateLayer*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x458b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto SetupSmartTemplateLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SetupSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartTemplateLayer::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(SetupSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartTemplateLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetupSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
