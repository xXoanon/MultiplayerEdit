
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

auto GJChestSprite::create(int chestType) -> decltype(create(chestType)) {
	using FunctionType = decltype(create(chestType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d15e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chestType);
}

auto GJChestSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GJChestSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GJChestSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GJChestSprite::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GJChestSprite::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(GJChestSprite*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d16b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GJChestSprite::switchToState(ChestSpriteState state, bool noGlow) -> decltype(switchToState(state, noGlow)) {
	using FunctionType = decltype(switchToState(state, noGlow))(*)(GJChestSprite*, ChestSpriteState, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d17e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state, noGlow);
}
