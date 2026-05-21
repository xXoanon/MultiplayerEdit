
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

SetTextPopup::SetTextPopup() : SetTextPopup(geode::CutoffConstructor, sizeof(SetTextPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetTextPopup::~SetTextPopup();

	using FunctionType = void(*)(SetTextPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28dca0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

SetTextPopup::~SetTextPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetTextPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x29cd80, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetTextPopup(geode::CutoffConstructor, sizeof(SetTextPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetTextPopup::create(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset) -> decltype(create(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset)) {
	using FunctionType = decltype(create(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset))(*)(gd::string, gd::string, int, gd::string, gd::string, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ce30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset);
}

auto SetTextPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTextPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetTextPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29daf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTextPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTextPopup::show), this);
	using FunctionType = decltype(show())(*)(SetTextPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTextPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetTextPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetTextPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetTextPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetTextPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetTextPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29d8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetTextPopup::init(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset) -> decltype(init(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset)) {
	using FunctionType = decltype(init(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset))(*)(SetTextPopup*, gd::string, gd::string, int, gd::string, gd::string, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29cfa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, placeholder, maxLength, title, okBtnText, showResetBtn, offset);
}

auto SetTextPopup::onCancel(cocos2d::CCObject* sender) -> decltype(onCancel(sender)) {
	using FunctionType = decltype(onCancel(sender))(*)(SetTextPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29d9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetTextPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetTextPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29da60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetTextPopup::onResetValue(cocos2d::CCObject* sender) -> decltype(onResetValue(sender)) {
	using FunctionType = decltype(onResetValue(sender))(*)(SetTextPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29d880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
