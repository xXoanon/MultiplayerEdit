
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

auto GJSpecialColorSelect::create(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type) -> decltype(create(id, delegate, type)) {
	using FunctionType = decltype(create(id, delegate, type))(*)(int, GJSpecialColorSelectDelegate*, ColorSelectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, delegate, type);
}

auto GJSpecialColorSelect::textForColorIdx(int index) -> decltype(textForColorIdx(index)) {
	using FunctionType = decltype(textForColorIdx(index))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(index);
}

auto GJSpecialColorSelect::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSpecialColorSelect::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJSpecialColorSelect*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSpecialColorSelect::init(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type) -> decltype(init(id, delegate, type)) {
	using FunctionType = decltype(init(id, delegate, type))(*)(GJSpecialColorSelect*, int, GJSpecialColorSelectDelegate*, ColorSelectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, delegate, type);
}

auto GJSpecialColorSelect::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJSpecialColorSelect*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b89e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJSpecialColorSelect::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(GJSpecialColorSelect*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
