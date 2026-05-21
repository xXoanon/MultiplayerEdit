
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

GJDropDownLayer::GJDropDownLayer() : GJDropDownLayer(geode::CutoffConstructor, sizeof(GJDropDownLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJDropDownLayer::~GJDropDownLayer();

	using FunctionType = void(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d230, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GJDropDownLayer::~GJDropDownLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJDropDownLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x256dd0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJDropDownLayer(geode::CutoffConstructor, sizeof(GJDropDownLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJDropDownLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::draw), this);
	using FunctionType = decltype(draw())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::enterLayer() -> decltype(enterLayer()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::enterLayer), this);
	using FunctionType = decltype(enterLayer())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::exitLayer(cocos2d::CCObject* sender) -> decltype(exitLayer(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJDropDownLayer::exitLayer), this);
	using FunctionType = decltype(exitLayer(sender))(*)(GJDropDownLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJDropDownLayer::showLayer(bool instant) -> decltype(showLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJDropDownLayer::showLayer), this);
	using FunctionType = decltype(showLayer(instant))(*)(GJDropDownLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto GJDropDownLayer::hideLayer(bool instant) -> decltype(hideLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJDropDownLayer::hideLayer), this);
	using FunctionType = decltype(hideLayer(instant))(*)(GJDropDownLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2574b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto GJDropDownLayer::layerVisible() -> decltype(layerVisible()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::layerVisible), this);
	using FunctionType = decltype(layerVisible())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::disableUI() -> decltype(disableUI()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::disableUI), this);
	using FunctionType = decltype(disableUI())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2572c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::enableUI() -> decltype(enableUI()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJDropDownLayer::enableUI), this);
	using FunctionType = decltype(enableUI())(*)(GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2572e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJDropDownLayer::init(char const* title, float height, bool noBack) -> decltype(init(title, height, noBack)) {
	using FunctionType = decltype(init(title, height, noBack))(*)(GJDropDownLayer*, char const*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, height, noBack);
}
