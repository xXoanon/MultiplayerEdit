
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

auto GJSmartTemplate::applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite) -> decltype(applyTransformationsForType(type, sprite)) {
	using FunctionType = decltype(applyTransformationsForType(type, sprite))(*)(SmartBlockType, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, sprite);
}

auto GJSmartTemplate::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b09a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJSmartTemplate::flipBlockType(SmartBlockType type, bool flipX, bool flipY) -> decltype(flipBlockType(type, flipX, flipY)) {
	using FunctionType = decltype(flipBlockType(type, flipX, flipY))(*)(SmartBlockType, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b4070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, flipX, flipY);
}

auto GJSmartTemplate::flipKey(gd::string key, bool flipX, bool flipY) -> decltype(flipKey(key, flipX, flipY)) {
	using FunctionType = decltype(flipKey(key, flipX, flipY))(*)(gd::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b4680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, flipX, flipY);
}

auto GJSmartTemplate::getSimplifiedKey(gd::string key) -> decltype(getSimplifiedKey(key)) {
	using FunctionType = decltype(getSimplifiedKey(key))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b10d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartTemplate::getVerySimplifiedKey(gd::string key) -> decltype(getVerySimplifiedKey(key)) {
	using FunctionType = decltype(getVerySimplifiedKey(key))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b18b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartTemplate::keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight) -> decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::offsetForDir(GJSmartDirection direction, int key) -> decltype(offsetForDir(direction, key)) {
	using FunctionType = decltype(offsetForDir(direction, key))(*)(GJSmartDirection, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(direction, key);
}

auto GJSmartTemplate::offsetForType(SmartBlockType type) -> decltype(offsetForType(type)) {
	using FunctionType = decltype(offsetForType(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::rotateBlockType(SmartBlockType type, int degrees) -> decltype(rotateBlockType(type, degrees)) {
	using FunctionType = decltype(rotateBlockType(type, degrees))(*)(SmartBlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, degrees);
}

auto GJSmartTemplate::rotateKey(gd::string key, int degrees) -> decltype(rotateKey(key, degrees)) {
	using FunctionType = decltype(rotateKey(key, degrees))(*)(gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b4320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, degrees);
}

auto GJSmartTemplate::smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point) -> decltype(smartObjectToType(object, point)) {
	using FunctionType = decltype(smartObjectToType(object, point))(*)(SmartGameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, point);
}

auto GJSmartTemplate::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b5810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJSmartTemplate::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b5540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJSmartTemplate::getNoCornerKey(gd::string key) -> decltype(getNoCornerKey(key)) {
	using FunctionType = decltype(getNoCornerKey(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b19c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getPrefab(gd::string key, bool flipX, bool flipY) -> decltype(getPrefab(key, flipX, flipY)) {
	using FunctionType = decltype(getPrefab(key, flipX, flipY))(*)(GJSmartTemplate*, gd::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b2ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, flipX, flipY);
}

auto GJSmartTemplate::getPrefabWithID(gd::string key, int id) -> decltype(getPrefabWithID(key, id)) {
	using FunctionType = decltype(getPrefabWithID(key, id))(*)(GJSmartTemplate*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b3490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto GJSmartTemplate::getRandomPrefab(gd::string key) -> decltype(getRandomPrefab(key)) {
	using FunctionType = decltype(getRandomPrefab(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b2a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getTemplateState(gd::vector<SmartPrefabResult>& results) -> decltype(getTemplateState(results)) {
	using FunctionType = decltype(getTemplateState(results))(*)(GJSmartTemplate*, gd::vector<SmartPrefabResult>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b4f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, results);
}

auto GJSmartTemplate::getTotalChanceForPrefab(gd::string key) -> decltype(getTotalChanceForPrefab(key)) {
	using FunctionType = decltype(getTotalChanceForPrefab(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b2970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::isUnrequired(gd::string key) -> decltype(isUnrequired(key)) {
	using FunctionType = decltype(isUnrequired(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b4db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::logTemplateStatus(bool unused) -> decltype(logTemplateStatus(unused)) {
	using FunctionType = decltype(logTemplateStatus(unused))(*)(GJSmartTemplate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b49b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto GJSmartTemplate::saveRemap(gd::string key) -> decltype(saveRemap(key)) {
	using FunctionType = decltype(saveRemap(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b0b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::saveRemapToDict(gd::string key, gd::string remap, cocos2d::CCDictionary* dict) -> decltype(saveRemapToDict(key, remap, dict)) {
	using FunctionType = decltype(saveRemapToDict(key, remap, dict))(*)(GJSmartTemplate*, gd::string, gd::string, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b0ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, remap, dict);
}

auto GJSmartTemplate::scanForPrefab(gd::string key) -> decltype(scanForPrefab(key)) {
	using FunctionType = decltype(scanForPrefab(key))(*)(GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b1b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}
