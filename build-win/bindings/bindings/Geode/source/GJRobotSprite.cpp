
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

auto GJRobotSprite::create(int frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a6690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto GJRobotSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GJRobotSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GJRobotSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GJRobotSprite::hideSecondary() -> decltype(hideSecondary()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRobotSprite::hideSecondary), this);
	using FunctionType = decltype(hideSecondary())(*)(GJRobotSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRobotSprite::init(int frame, gd::string animName) -> decltype(init(frame, animName)) {
	using FunctionType = decltype(init(frame, animName))(*)(GJRobotSprite*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a6740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, animName);
}

auto GJRobotSprite::updateColors() -> decltype(updateColors()) {
	using FunctionType = decltype(updateColors())(*)(GJRobotSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a6ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJRobotSprite::updateFrame(int frame) -> decltype(updateFrame(frame)) {
	using FunctionType = decltype(updateFrame(frame))(*)(GJRobotSprite*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}
