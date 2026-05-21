
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

auto GameToolbox::addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem) -> decltype(addBackButton(parent, menuItem)) {
	using FunctionType = decltype(addBackButton(parent, menuItem))(*)(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, menuItem);
}

auto GameToolbox::addRThumbScrollButton(cocos2d::CCLayer* parent) -> decltype(addRThumbScrollButton(parent)) {
	using FunctionType = decltype(addRThumbScrollButton(parent))(*)(cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent);
}

auto GameToolbox::alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize) -> decltype(alignItemsHorisontally(items, gap, position, skipSize)) {
	using FunctionType = decltype(alignItemsHorisontally(items, gap, position, skipSize))(*)(cocos2d::CCArray*, float, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, gap, position, skipSize);
}

auto GameToolbox::bounceTime(float time) -> decltype(bounceTime(time)) {
	using FunctionType = decltype(bounceTime(time))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(time);
}

auto GameToolbox::createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container) -> decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container)) {
	using FunctionType = decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container))(*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x646a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container);
}

auto GameToolbox::easeToText(int easingType) -> decltype(easeToText(easingType)) {
	using FunctionType = decltype(easeToText(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x685a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::gen_random(int length) -> decltype(gen_random(length)) {
	using FunctionType = decltype(gen_random(length))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(length);
}

auto GameToolbox::getEasedValue(float value, int easingType, float easingRate) -> decltype(getEasedValue(value, easingType, easingRate)) {
	using FunctionType = decltype(getEasedValue(value, easingType, easingRate))(*)(float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, easingType, easingRate);
}

auto GameToolbox::getRelativeOffset(GameObject* object, cocos2d::CCPoint offset) -> decltype(getRelativeOffset(object, offset)) {
	using FunctionType = decltype(getRelativeOffset(object, offset))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, offset);
}

auto GameToolbox::getResponse(cocos2d::extension::CCHttpResponse* response) -> decltype(getResponse(response)) {
	using FunctionType = decltype(getResponse(response))(*)(cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response);
}

auto GameToolbox::getTimeString(int seconds, bool noSeconds) -> decltype(getTimeString(seconds, noSeconds)) {
	using FunctionType = decltype(getTimeString(seconds, noSeconds))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(seconds, noSeconds);
}

auto GameToolbox::hsvFromString(gd::string const& str, char const* delim) -> decltype(hsvFromString(str, delim)) {
	using FunctionType = decltype(hsvFromString(str, delim))(*)(gd::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, delim);
}

auto GameToolbox::intToShortString(int value) -> decltype(intToShortString(value)) {
	using FunctionType = decltype(intToShortString(value))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value);
}

auto GameToolbox::intToString(int value) -> decltype(intToString(value)) {
	using FunctionType = decltype(intToString(value))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value);
}

auto GameToolbox::mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSaveLargestInt(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSaveLargestInt(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSkipConflict(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSkipConflict(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::msToTimeString(int milliseconds, int formattingMode) -> decltype(msToTimeString(milliseconds, formattingMode)) {
	using FunctionType = decltype(msToTimeString(milliseconds, formattingMode))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(milliseconds, formattingMode);
}

auto GameToolbox::particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate) -> decltype(particleFromStruct(particleStruct, system, dontUpdate)) {
	using FunctionType = decltype(particleFromStruct(particleStruct, system, dontUpdate))(*)(cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(particleStruct, system, dontUpdate);
}

auto GameToolbox::particleStringToStruct(gd::string const& str, cocos2d::ParticleStruct& particleStruct) -> decltype(particleStringToStruct(str, particleStruct)) {
	using FunctionType = decltype(particleStringToStruct(str, particleStruct))(*)(gd::string const&, cocos2d::ParticleStruct&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, particleStruct);
}

auto GameToolbox::pointsToString(int points) -> decltype(pointsToString(points)) {
	using FunctionType = decltype(pointsToString(points))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(points);
}

auto GameToolbox::preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect) -> decltype(preVisitWithClippingRect(node, rect)) {
	using FunctionType = decltype(preVisitWithClippingRect(node, rect))(*)(cocos2d::CCNode*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x645f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(node, rect);
}

auto GameToolbox::saveParticleToString(cocos2d::CCParticleSystemQuad* system) -> decltype(saveParticleToString(system)) {
	using FunctionType = decltype(saveParticleToString(system))(*)(cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(system);
}

auto GameToolbox::stringFromHSV(cocos2d::ccHSVValue value, char const* separator) -> decltype(stringFromHSV(value, separator)) {
	using FunctionType = decltype(stringFromHSV(value, separator))(*)(cocos2d::ccHSVValue, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, separator);
}

auto GameToolbox::stringSetupToDict(gd::string const& str, char const* separator) -> decltype(stringSetupToDict(str, separator)) {
	using FunctionType = decltype(stringSetupToDict(str, separator))(*)(gd::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator);
}

auto GameToolbox::stringSetupToMap(gd::string const& str, char const* separator, gd::map<gd::string, gd::string>& setup) -> decltype(stringSetupToMap(str, separator, setup)) {
	using FunctionType = decltype(stringSetupToMap(str, separator, setup))(*)(gd::string const&, char const*, gd::map<gd::string, gd::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x658c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator, setup);
}

auto GameToolbox::timestampToHumanReadable(time_t timestamp) -> decltype(timestampToHumanReadable(timestamp)) {
	using FunctionType = decltype(timestampToHumanReadable(timestamp))(*)(time_t);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x692f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(timestamp);
}

auto GameToolbox::transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv) -> decltype(transformColor(color, hsv)) {
	using FunctionType = decltype(transformColor(color, hsv))(*)(cocos2d::ccColor3B const&, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x652c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, hsv);
}
