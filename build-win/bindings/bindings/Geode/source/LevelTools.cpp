
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

auto LevelTools::artistForAudio(int id) -> decltype(artistForAudio(id)) {
	using FunctionType = decltype(artistForAudio(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::fbURLForArtist(int id) -> decltype(fbURLForArtist(id)) {
	using FunctionType = decltype(fbURLForArtist(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32b150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::getAudioFileName(int id) -> decltype(getAudioFileName(id)) {
	using FunctionType = decltype(getAudioFileName(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::getAudioString(int id) -> decltype(getAudioString(id)) {
	using FunctionType = decltype(getAudioString(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32b650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::getAudioTitle(int id) -> decltype(getAudioTitle(id)) {
	using FunctionType = decltype(getAudioTitle(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3278f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::getLevel(int id, bool noString) -> decltype(getLevel(id, noString)) {
	using FunctionType = decltype(getLevel(id, noString))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x325040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, noString);
}

auto LevelTools::getLevelList() -> decltype(getLevelList()) {
	using FunctionType = decltype(getLevelList())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LevelTools::getSongObject(int id) -> decltype(getSongObject(id)) {
	using FunctionType = decltype(getSongObject(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::moveTriggerObjectsToArray(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, int index) -> decltype(moveTriggerObjectsToArray(objects, objectsDict, index)) {
	using FunctionType = decltype(moveTriggerObjectsToArray(objects, objectsDict, index))(*)(cocos2d::CCArray*, cocos2d::CCDictionary*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, objectsDict, index);
}

auto LevelTools::nameForArtist(int id) -> decltype(nameForArtist(id)) {
	using FunctionType = decltype(nameForArtist(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::ngURLForArtist(int id) -> decltype(ngURLForArtist(id)) {
	using FunctionType = decltype(ngURLForArtist(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32a730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::posForTimeInternal(float time, cocos2d::CCArray* objects, int speed, bool platformer, bool ignoreMinorAxis, bool ignoreWarp, int& rotateChannel, int unused) -> decltype(posForTimeInternal(time, objects, speed, platformer, ignoreMinorAxis, ignoreWarp, rotateChannel, unused)) {
	using FunctionType = decltype(posForTimeInternal(time, objects, speed, platformer, ignoreMinorAxis, ignoreWarp, rotateChannel, unused))(*)(float, cocos2d::CCArray*, int, bool, bool, bool, int&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32cba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(time, objects, speed, platformer, ignoreMinorAxis, ignoreWarp, rotateChannel, unused);
}

auto LevelTools::sortChannelOrderObjects(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, bool moveObjects) -> decltype(sortChannelOrderObjects(objects, objectsDict, moveObjects)) {
	using FunctionType = decltype(sortChannelOrderObjects(objects, objectsDict, moveObjects))(*)(cocos2d::CCArray*, cocos2d::CCDictionary*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, objectsDict, moveObjects);
}

auto LevelTools::sortSpeedObjects(cocos2d::CCArray* objects, GJBaseGameLayer* layer) -> decltype(sortSpeedObjects(objects, layer)) {
	using FunctionType = decltype(sortSpeedObjects(objects, layer))(*)(cocos2d::CCArray*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, layer);
}

auto LevelTools::timeForPos(cocos2d::CCPoint position, cocos2d::CCArray* objects, int speed, int order, int channel, bool songTriggers, bool platformer, bool ignoreWarp, bool ignoreRotate, int id) -> decltype(timeForPos(position, objects, speed, order, channel, songTriggers, platformer, ignoreWarp, ignoreRotate, id)) {
	using FunctionType = decltype(timeForPos(position, objects, speed, order, channel, songTriggers, platformer, ignoreWarp, ignoreRotate, id))(*)(cocos2d::CCPoint, cocos2d::CCArray*, int, int, int, bool, bool, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32c1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(position, objects, speed, order, channel, songTriggers, platformer, ignoreWarp, ignoreRotate, id);
}

auto LevelTools::urlForAudio(int id) -> decltype(urlForAudio(id)) {
	using FunctionType = decltype(urlForAudio(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto LevelTools::verifyLevelIntegrity(gd::string str, int id) -> decltype(verifyLevelIntegrity(str, id)) {
	using FunctionType = decltype(verifyLevelIntegrity(str, id))(*)(gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, id);
}

auto LevelTools::ytURLForArtist(int id) -> decltype(ytURLForArtist(id)) {
	using FunctionType = decltype(ytURLForArtist(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32abd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}
