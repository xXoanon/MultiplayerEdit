
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

auto GJPFollowCommandLayer::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28a6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto GJPFollowCommandLayer::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPFollowCommandLayer::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPFollowCommandLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJPFollowCommandLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GJPFollowCommandLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28cf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJPFollowCommandLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJPFollowCommandLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(GJPFollowCommandLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJPFollowCommandLayer::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(GJPFollowCommandLayer*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28a800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto GJPFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject* sender) -> decltype(onUpdateGroupID(sender)) {
	using FunctionType = decltype(onUpdateGroupID(sender))(*)(GJPFollowCommandLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPFollowCommandLayer::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(GJPFollowCommandLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPFollowCommandLayer::sliderXModChanged(cocos2d::CCObject* sender) -> decltype(sliderXModChanged(sender)) {
	using FunctionType = decltype(sliderXModChanged(sender))(*)(GJPFollowCommandLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPFollowCommandLayer::sliderYModChanged(cocos2d::CCObject* sender) -> decltype(sliderYModChanged(sender)) {
	using FunctionType = decltype(sliderYModChanged(sender))(*)(GJPFollowCommandLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPFollowCommandLayer::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x272a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateDurLabel(bool decimals) -> decltype(updateDurLabel(decimals)) {
	using FunctionType = decltype(updateDurLabel(decimals))(*)(GJPFollowCommandLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}

auto GJPFollowCommandLayer::updateTargetGroupID() -> decltype(updateTargetGroupID()) {
	using FunctionType = decltype(updateTargetGroupID())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28cd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28ccc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateXMod() -> decltype(updateXMod()) {
	using FunctionType = decltype(updateXMod())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28ce20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateXModLabel() -> decltype(updateXModLabel()) {
	using FunctionType = decltype(updateXModLabel())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateYMod() -> decltype(updateYMod()) {
	using FunctionType = decltype(updateYMod())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28cea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPFollowCommandLayer::updateYModLabel() -> decltype(updateYModLabel()) {
	using FunctionType = decltype(updateYModLabel())(*)(GJPFollowCommandLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28c550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
