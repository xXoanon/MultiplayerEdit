
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

auto UploadPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UploadPopup::show), this);
	using FunctionType = decltype(show())(*)(UploadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30bc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UploadPopup::levelUploadFinished(GJGameLevel* level) -> decltype(levelUploadFinished(level)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&UploadPopup::levelUploadFinished), this);
	using FunctionType = decltype(levelUploadFinished(level))(*)(UploadPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, level);
}

auto UploadPopup::levelUploadFailed(GJGameLevel* level) -> decltype(levelUploadFailed(level)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&UploadPopup::levelUploadFailed), this);
	using FunctionType = decltype(levelUploadFailed(level))(*)(UploadPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, level);
}

auto UploadPopup::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(UploadPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto UploadPopup::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(UploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UploadPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(UploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UploadPopup::onReturnToLevel(cocos2d::CCObject* sender) -> decltype(onReturnToLevel(sender)) {
	using FunctionType = decltype(onReturnToLevel(sender))(*)(UploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
