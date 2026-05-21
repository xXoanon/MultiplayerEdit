
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

auto LevelSelectLayer::scene(int page) -> decltype(scene(page)) {
	using FunctionType = decltype(scene(page))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3182c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(page);
}

auto LevelSelectLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSelectLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSelectLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelSelectLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelSelectLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelSelectLayer::updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object) -> decltype(updatePageWithObject(layer, object)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*, cocos2d::CCObject*>::func(&LevelSelectLayer::updatePageWithObject), this);
	using FunctionType = decltype(updatePageWithObject(layer, object))(*)(LevelSelectLayer*, cocos2d::CCObject*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, object);
}

auto LevelSelectLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&LevelSelectLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(LevelSelectLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto LevelSelectLayer::colorForPage(int page) -> decltype(colorForPage(page)) {
	using FunctionType = decltype(colorForPage(page))(*)(LevelSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto LevelSelectLayer::init(int page) -> decltype(init(page)) {
	using FunctionType = decltype(init(page))(*)(LevelSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3183f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto LevelSelectLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3191b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onNext(cocos2d::CCObject* sender) -> decltype(onNext(sender)) {
	using FunctionType = decltype(onNext(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onPrev(cocos2d::CCObject* sender) -> decltype(onPrev(sender)) {
	using FunctionType = decltype(onPrev(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3199b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
