
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

auto UploadListPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UploadListPopup::show), this);
	using FunctionType = decltype(show())(*)(UploadListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30bc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UploadListPopup::listUploadFinished(GJLevelList* list) -> decltype(listUploadFinished(list)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*>::func(&UploadListPopup::listUploadFinished), this);
	using FunctionType = decltype(listUploadFinished(list))(*)(UploadListPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30b710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, list);
}

auto UploadListPopup::listUploadFailed(GJLevelList* list, int response) -> decltype(listUploadFailed(list, response)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*, int>::func(&UploadListPopup::listUploadFailed), this);
	using FunctionType = decltype(listUploadFailed(list, response))(*)(UploadListPopup*, GJLevelList*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30b8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, list, response);
}

auto UploadListPopup::init(GJLevelList* list) -> decltype(init(list)) {
	using FunctionType = decltype(init(list))(*)(UploadListPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30b1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto UploadListPopup::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(UploadListPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30bcd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UploadListPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(UploadListPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UploadListPopup::onReturnToList(cocos2d::CCObject* sender) -> decltype(onReturnToList(sender)) {
	using FunctionType = decltype(onReturnToList(sender))(*)(UploadListPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30bc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
