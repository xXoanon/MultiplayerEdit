
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

auto ChanceTriggerGameObject::getTargetIDs(gd::vector<int>& ids) -> decltype(getTargetIDs(ids)) {
	using FunctionType = decltype(getTargetIDs(ids))(*)(ChanceTriggerGameObject*, gd::vector<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN23ChanceTriggerGameObject12getTargetIDsERSt6vectorIiSaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ids);
}

auto ChanceTriggerGameObject::remapChanceObjects(gd::unordered_map<int, int> const* remap) -> decltype(remapChanceObjects(remap)) {
	using FunctionType = decltype(remapChanceObjects(remap))(*)(ChanceTriggerGameObject*, gd::unordered_map<int, int> const*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN23ChanceTriggerGameObject18remapChanceObjectsEPKSt13unordered_mapIiiSt4hashIiESt8equal_toIiESaISt4pairIKiiEEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, remap);
}
