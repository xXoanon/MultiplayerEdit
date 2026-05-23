
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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

PlayLayer::PlayLayer() : PlayLayer(geode::CutoffConstructor, sizeof(PlayLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	PlayLayer::~PlayLayer();

	using FunctionType = void(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayerC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

PlayLayer::~PlayLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PlayLayer*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayerD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PlayLayer(geode::CutoffConstructor, sizeof(PlayLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto PlayLayer::activatePlatformerEndTrigger(EndTriggerGameObject* object, gd::vector<int> const& remapKeys) -> decltype(activatePlatformerEndTrigger(object, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<EndTriggerGameObject*, gd::vector<int> const&>::func(&PlayLayer::activatePlatformerEndTrigger), this);
	using FunctionType = decltype(activatePlatformerEndTrigger(object, remapKeys))(*)(PlayLayer*, EndTriggerGameObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer28activatePlatformerEndTriggerEP20EndTriggerGameObjectRKSt6vectorIiSaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object, remapKeys);
}

auto PlayLayer::loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& activeObjects, gd::vector<SavedSpecialObjectState>& specialObjects) -> decltype(loadActiveSaveObjects(activeObjects, specialObjects)) {
	using FunctionType = decltype(loadActiveSaveObjects(activeObjects, specialObjects))(*)(PlayLayer*, gd::vector<SavedActiveObjectState>&, gd::vector<SavedSpecialObjectState>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer21loadActiveSaveObjectsERSt6vectorI22SavedActiveObjectStateSaIS1_EERS0_I23SavedSpecialObjectStateSaIS5_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, activeObjects, specialObjects);
}

auto PlayLayer::loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& dynamicObjects) -> decltype(loadDynamicSaveObjects(dynamicObjects)) {
	using FunctionType = decltype(loadDynamicSaveObjects(dynamicObjects))(*)(PlayLayer*, gd::vector<SavedObjectStateRef>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer22loadDynamicSaveObjectsERSt6vectorI19SavedObjectStateRefSaIS1_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects);
}

auto PlayLayer::playReplay(gd::string inputs) -> decltype(playReplay(inputs)) {
	using FunctionType = decltype(playReplay(inputs))(*)(PlayLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer10playReplayESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, inputs);
}

auto PlayLayer::prepareCreateObjectsFromSetup(gd::string& levelString) -> decltype(prepareCreateObjectsFromSetup(levelString)) {
	using FunctionType = decltype(prepareCreateObjectsFromSetup(levelString))(*)(PlayLayer*, gd::string&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer29prepareCreateObjectsFromSetupERSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelString);
}

auto PlayLayer::saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& activeObjects, gd::vector<SavedSpecialObjectState>& specialObjects) -> decltype(saveActiveSaveObjects(activeObjects, specialObjects)) {
	using FunctionType = decltype(saveActiveSaveObjects(activeObjects, specialObjects))(*)(PlayLayer*, gd::vector<SavedActiveObjectState>&, gd::vector<SavedSpecialObjectState>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer21saveActiveSaveObjectsERSt6vectorI22SavedActiveObjectStateSaIS1_EERS0_I23SavedSpecialObjectStateSaIS5_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, activeObjects, specialObjects);
}

auto PlayLayer::saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& dynamicObjects) -> decltype(saveDynamicSaveObjects(dynamicObjects)) {
	using FunctionType = decltype(saveDynamicSaveObjects(dynamicObjects))(*)(PlayLayer*, gd::vector<SavedObjectStateRef>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9PlayLayer22saveDynamicSaveObjectsERSt6vectorI19SavedObjectStateRefSaIS1_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects);
}
