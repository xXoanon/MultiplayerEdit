
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

BrowseSmartTemplateLayer::BrowseSmartTemplateLayer() : BrowseSmartTemplateLayer(geode::CutoffConstructor, sizeof(BrowseSmartTemplateLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	BrowseSmartTemplateLayer::~BrowseSmartTemplateLayer();

	using FunctionType = void(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x456730, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

BrowseSmartTemplateLayer::~BrowseSmartTemplateLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(BrowseSmartTemplateLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x459d20, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) BrowseSmartTemplateLayer(geode::CutoffConstructor, sizeof(BrowseSmartTemplateLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto BrowseSmartTemplateLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BrowseSmartTemplateLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BrowseSmartTemplateLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartTemplateLayer::addObjectToPage(cocos2d::CCObject* object, int page) -> decltype(addObjectToPage(object, page)) {
	using FunctionType = decltype(addObjectToPage(object, page))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45a850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, page);
}

auto BrowseSmartTemplateLayer::addPrefabMenuItem(SmartPrefabResult result, int index) -> decltype(addPrefabMenuItem(result, index)) {
	using FunctionType = decltype(addPrefabMenuItem(result, index))(*)(BrowseSmartTemplateLayer*, SmartPrefabResult, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45a450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result, index);
}

auto BrowseSmartTemplateLayer::baseSetup() -> decltype(baseSetup()) {
	using FunctionType = decltype(baseSetup())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45a8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartTemplateLayer::createPrefab(gd::string key, int id) -> decltype(createPrefab(key, id)) {
	using FunctionType = decltype(createPrefab(key, id))(*)(BrowseSmartTemplateLayer*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto BrowseSmartTemplateLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(BrowseSmartTemplateLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45ae90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BrowseSmartTemplateLayer::init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter) -> decltype(init(smartTemplate, browseFilter)) {
	using FunctionType = decltype(init(smartTemplate, browseFilter))(*)(BrowseSmartTemplateLayer*, GJSmartTemplate*, SmartBrowseFilter);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x459de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, browseFilter);
}

auto BrowseSmartTemplateLayer::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartTemplateLayer::onTemplateObject(cocos2d::CCObject* sender) -> decltype(onTemplateObject(sender)) {
	using FunctionType = decltype(onTemplateObject(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
