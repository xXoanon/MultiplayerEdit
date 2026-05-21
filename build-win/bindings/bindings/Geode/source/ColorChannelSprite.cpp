
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

auto ColorChannelSprite::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorChannelSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorChannelSprite::init), this);
	using FunctionType = decltype(init())(*)(ColorChannelSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2589f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorChannelSprite::updateBlending(bool enabled) -> decltype(updateBlending(enabled)) {
	using FunctionType = decltype(updateBlending(enabled))(*)(ColorChannelSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enabled);
}

auto ColorChannelSprite::updateCopyLabel(int channelID, bool copyColorLoop) -> decltype(updateCopyLabel(channelID, copyColorLoop)) {
	using FunctionType = decltype(updateCopyLabel(channelID, copyColorLoop))(*)(ColorChannelSprite*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, copyColorLoop);
}

auto ColorChannelSprite::updateOpacity(float alpha) -> decltype(updateOpacity(alpha)) {
	using FunctionType = decltype(updateOpacity(alpha))(*)(ColorChannelSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, alpha);
}
