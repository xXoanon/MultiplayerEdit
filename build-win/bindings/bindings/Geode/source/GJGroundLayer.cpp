
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

auto GJGroundLayer::create(int groundID, int lineType) -> decltype(create(groundID, lineType)) {
	using FunctionType = decltype(create(groundID, lineType))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(groundID, lineType);
}

auto GJGroundLayer::showGround() -> decltype(showGround()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGroundLayer::showGround), this);
	using FunctionType = decltype(showGround())(*)(GJGroundLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27edf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGroundLayer::fadeInGround(float duration) -> decltype(fadeInGround(duration)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJGroundLayer::fadeInGround), this);
	using FunctionType = decltype(fadeInGround(duration))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, duration);
}

auto GJGroundLayer::fadeOutGround(float duration) -> decltype(fadeOutGround(duration)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJGroundLayer::fadeOutGround), this);
	using FunctionType = decltype(fadeOutGround(duration))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27eff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, duration);
}

auto GJGroundLayer::createLine(int lineType) -> decltype(createLine(lineType)) {
	using FunctionType = decltype(createLine(lineType))(*)(GJGroundLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ea50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, lineType);
}

auto GJGroundLayer::fadeInFinished() -> decltype(fadeInFinished()) {
	using FunctionType = decltype(fadeInFinished())(*)(GJGroundLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27edf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGroundLayer::init(int groundID, int lineType) -> decltype(init(groundID, lineType)) {
	using FunctionType = decltype(init(groundID, lineType))(*)(GJGroundLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groundID, lineType);
}

auto GJGroundLayer::loadGroundSprites(int count, bool ground1) -> decltype(loadGroundSprites(count, ground1)) {
	using FunctionType = decltype(loadGroundSprites(count, ground1))(*)(GJGroundLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, ground1);
}

auto GJGroundLayer::scaleGround(float scale) -> decltype(scaleGround(scale)) {
	using FunctionType = decltype(scaleGround(scale))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ec40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GJGroundLayer::updateShadows() -> decltype(updateShadows()) {
	using FunctionType = decltype(updateShadows())(*)(GJGroundLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ee80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGroundLayer::updateShadowXPos(float leftX, float rightX) -> decltype(updateShadowXPos(leftX, rightX)) {
	using FunctionType = decltype(updateShadowXPos(leftX, rightX))(*)(GJGroundLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ef20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, leftX, rightX);
}
