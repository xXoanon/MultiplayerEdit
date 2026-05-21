
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

CCBlockLayer::CCBlockLayer() : CCBlockLayer(geode::CutoffConstructor, sizeof(CCBlockLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CCBlockLayer::~CCBlockLayer();

	using FunctionType = void(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x423d0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

CCBlockLayer::~CCBlockLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCBlockLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x424a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCBlockLayer(geode::CutoffConstructor, sizeof(CCBlockLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto CCBlockLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::init), this);
	using FunctionType = decltype(init())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::draw), this);
	using FunctionType = decltype(draw())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::enterLayer() -> decltype(enterLayer()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::enterLayer), this);
	using FunctionType = decltype(enterLayer())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::exitLayer() -> decltype(exitLayer()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::exitLayer), this);
	using FunctionType = decltype(exitLayer())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::showLayer(bool instant) -> decltype(showLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCBlockLayer::showLayer), this);
	using FunctionType = decltype(showLayer(instant))(*)(CCBlockLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto CCBlockLayer::hideLayer(bool instant) -> decltype(hideLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCBlockLayer::hideLayer), this);
	using FunctionType = decltype(hideLayer(instant))(*)(CCBlockLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto CCBlockLayer::layerVisible() -> decltype(layerVisible()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::layerVisible), this);
	using FunctionType = decltype(layerVisible())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCBlockLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCBlockLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(CCBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
