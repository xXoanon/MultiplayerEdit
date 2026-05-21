
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

GJOptionsLayer::GJOptionsLayer() : GJOptionsLayer(geode::CutoffConstructor, sizeof(GJOptionsLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJOptionsLayer::~GJOptionsLayer();

	using FunctionType = void(*)(GJOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28d270, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GJOptionsLayer::~GJOptionsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJOptionsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x28f990, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJOptionsLayer(geode::CutoffConstructor, sizeof(GJOptionsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJOptionsLayer::didToggleGV(gd::string variable) -> decltype(didToggleGV(variable)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string>::func(&GJOptionsLayer::didToggleGV), this);
	using FunctionType = decltype(didToggleGV(variable))(*)(GJOptionsLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f5ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, variable);
}

auto GJOptionsLayer::addGVToggle(char const* title, char const* variable, char const* description) -> decltype(addGVToggle(title, variable, description)) {
	using FunctionType = decltype(addGVToggle(title, variable, description))(*)(GJOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28fda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, variable, description);
}

auto GJOptionsLayer::addToggleInternal(char const* title, int id, bool initial, char const* description) -> decltype(addToggleInternal(title, id, initial, description)) {
	using FunctionType = decltype(addToggleInternal(title, id, initial, description))(*)(GJOptionsLayer*, char const*, int, bool, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28fee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, id, initial, description);
}

auto GJOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	using FunctionType = decltype(countForPage(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::incrementCountForPage(int page) -> decltype(incrementCountForPage(page)) {
	using FunctionType = decltype(incrementCountForPage(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2904f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::init(int background) -> decltype(init(background)) {
	using FunctionType = decltype(init(background))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28fa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJOptionsLayer::layerForPage(int page) -> decltype(layerForPage(page)) {
	using FunctionType = decltype(layerForPage(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::objectsForPage(int page) -> decltype(objectsForPage(page)) {
	using FunctionType = decltype(objectsForPage(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2905f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJOptionsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJOptionsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x290d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
