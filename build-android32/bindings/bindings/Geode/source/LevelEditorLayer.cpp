
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

LevelEditorLayer::LevelEditorLayer() : LevelEditorLayer(geode::CutoffConstructor, sizeof(LevelEditorLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	LevelEditorLayer::~LevelEditorLayer();

	using FunctionType = void(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayerC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::claimCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&LevelEditorLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(LevelEditorLayer*, gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer19claimCustomParticleERKSsRKN7cocos2d14ParticleStructEiiib")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto LevelEditorLayer::unclaimCustomParticle(gd::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::CCParticleSystemQuad*>::func(&LevelEditorLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(LevelEditorLayer*, gd::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21unclaimCustomParticleERKSsPN7cocos2d20CCParticleSystemQuadE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto LevelEditorLayer::addExclusionList(const gd::unordered_set<int>& excludes, gd::unordered_set<int>& groups) -> decltype(addExclusionList(excludes, groups)) {
	using FunctionType = decltype(addExclusionList(excludes, groups))(*)(LevelEditorLayer*, const gd::unordered_set<int>&, gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer16addExclusionListERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEERS6_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, excludes, groups);
}

auto LevelEditorLayer::addObjectFromVector(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(addObjectFromVector(values, exists)) {
	using FunctionType = decltype(addObjectFromVector(values, exists))(*)(LevelEditorLayer*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer19addObjectFromVectorERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, values, exists);
}

auto LevelEditorLayer::addTriggersWithGroupID(gd::unordered_set<int>& sourceIDs, cocos2d::CCArray* triggers, gd::unordered_map<int, int>& remap, int objectID) -> decltype(addTriggersWithGroupID(sourceIDs, triggers, remap, objectID)) {
	using FunctionType = decltype(addTriggersWithGroupID(sourceIDs, triggers, remap, objectID))(*)(LevelEditorLayer*, gd::unordered_set<int>&, cocos2d::CCArray*, gd::unordered_map<int, int>&, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22addTriggersWithGroupIDERSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEEPN7cocos2d7CCArrayERSt13unordered_mapIiiS2_S4_SaISt4pairIKiiEEEi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sourceIDs, triggers, remap, objectID);
}

auto LevelEditorLayer::addTriggersWithTargetGroupID(gd::unordered_set<int>& sourceIDs, gd::unordered_set<int>& targetIDs, cocos2d::CCArray* triggers, gd::unordered_map<int, int>& remap, int objectID) -> decltype(addTriggersWithTargetGroupID(sourceIDs, targetIDs, triggers, remap, objectID)) {
	using FunctionType = decltype(addTriggersWithTargetGroupID(sourceIDs, targetIDs, triggers, remap, objectID))(*)(LevelEditorLayer*, gd::unordered_set<int>&, gd::unordered_set<int>&, cocos2d::CCArray*, gd::unordered_map<int, int>&, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer28addTriggersWithTargetGroupIDERSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEES7_PN7cocos2d7CCArrayERSt13unordered_mapIiiS2_S4_SaISt4pairIKiiEEEi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sourceIDs, targetIDs, triggers, remap, objectID);
}

auto LevelEditorLayer::createObjectsFromSetup(gd::string& setup) -> decltype(createObjectsFromSetup(setup)) {
	using FunctionType = decltype(createObjectsFromSetup(setup))(*)(LevelEditorLayer*, gd::string&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22createObjectsFromSetupERSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto LevelEditorLayer::createObjectsFromString(gd::string const& str, bool noUndo, bool noLimit) -> decltype(createObjectsFromString(str, noUndo, noLimit)) {
	using FunctionType = decltype(createObjectsFromString(str, noUndo, noLimit))(*)(LevelEditorLayer*, gd::string const&, bool, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23createObjectsFromStringERKSsbb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, noUndo, noLimit);
}

auto LevelEditorLayer::getNextFreeAreaEffectID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeAreaEffectID(exclude)) {
	using FunctionType = decltype(getNextFreeAreaEffectID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeAreaEffectIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeBlockID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeBlockID(exclude)) {
	using FunctionType = decltype(getNextFreeBlockID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer18getNextFreeBlockIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeEditorLayer(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeEditorLayer(exclude)) {
	using FunctionType = decltype(getNextFreeEditorLayer(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22getNextFreeEditorLayerERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeEnterChannel(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeEnterChannel(exclude)) {
	using FunctionType = decltype(getNextFreeEnterChannel(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeEnterChannelERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeGradientID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeGradientID(exclude)) {
	using FunctionType = decltype(getNextFreeGradientID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21getNextFreeGradientIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeGroupID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeGroupID(exclude)) {
	using FunctionType = decltype(getNextFreeGroupID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer18getNextFreeGroupIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeItemID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeItemID(exclude)) {
	using FunctionType = decltype(getNextFreeItemID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer17getNextFreeItemIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeOrderChannel(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeOrderChannel(exclude)) {
	using FunctionType = decltype(getNextFreeOrderChannel(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeOrderChannelERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeSFXGroupID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeSFXGroupID(exclude)) {
	using FunctionType = decltype(getNextFreeSFXGroupID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21getNextFreeSFXGroupIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeSFXID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeSFXID(exclude)) {
	using FunctionType = decltype(getNextFreeSFXID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer16getNextFreeSFXIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}
