
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

auto TutorialLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cbc90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto TutorialLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TutorialLayer::init), this);
	using FunctionType = decltype(init())(*)(TutorialLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cbda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TutorialLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TutorialLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(TutorialLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TutorialLayer::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(TutorialLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto TutorialLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(TutorialLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TutorialLayer::onNext(cocos2d::CCObject* sender) -> decltype(onNext(sender)) {
	using FunctionType = decltype(onNext(sender))(*)(TutorialLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
