
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

auto SetFolderPopup::create(int value, bool isCreated, gd::string title) -> decltype(create(value, isCreated, title)) {
	using FunctionType = decltype(create(value, isCreated, title))(*)(int, bool, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c4f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, isCreated, title);
}

auto SetFolderPopup::valueChanged() -> decltype(valueChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetFolderPopup::valueChanged), this);
	using FunctionType = decltype(valueChanged())(*)(SetFolderPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetFolderPopup::setTextPopupClosed(SetTextPopup* popup, gd::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, gd::string>::func(&SetFolderPopup::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(SetFolderPopup*, SetTextPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29cbf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto SetFolderPopup::init(int value, bool isCreated, gd::string title) -> decltype(init(value, isCreated, title)) {
	using FunctionType = decltype(init(value, isCreated, title))(*)(SetFolderPopup*, int, bool, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, isCreated, title);
}

auto SetFolderPopup::onSetFolderName(cocos2d::CCObject* sender) -> decltype(onSetFolderName(sender)) {
	using FunctionType = decltype(onSetFolderName(sender))(*)(SetFolderPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
