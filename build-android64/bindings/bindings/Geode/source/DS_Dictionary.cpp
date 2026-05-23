
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

DS_Dictionary::DS_Dictionary() {
	using FunctionType = void(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_DictionaryC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::addBoolValuesToMapForKey(gd::map<gd::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKey(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKey(p0, p1, p2))(*)(DS_Dictionary*, gd::map<gd::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary24addBoolValuesToMapForKeyERSt3mapISsbSt4lessISsESaISt4pairIKSsbEEEPKcb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::addBoolValuesToMapForKeySpecial(gd::map<gd::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2))(*)(DS_Dictionary*, gd::map<gd::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary31addBoolValuesToMapForKeySpecialERSt3mapISsbSt4lessISsESaISt4pairIKSsbEEEPKcb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::cleanStringWhiteSpace(gd::string const& p0) -> decltype(cleanStringWhiteSpace(p0)) {
	using FunctionType = decltype(cleanStringWhiteSpace(p0))(*)(DS_Dictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary21cleanStringWhiteSpaceERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::loadRootSubDictFromString(gd::string const& p0) -> decltype(loadRootSubDictFromString(p0)) {
	using FunctionType = decltype(loadRootSubDictFromString(p0))(*)(DS_Dictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary25loadRootSubDictFromStringERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::rectFromString(gd::string const& p0, cocos2d::CCRect& p1) -> decltype(rectFromString(p0, p1)) {
	using FunctionType = decltype(rectFromString(p0, p1))(*)(DS_Dictionary*, gd::string const&, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary14rectFromStringERKSsRN7cocos2d6CCRectE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setBoolMapForKey(char const* p0, gd::map<gd::string, bool>& p1) -> decltype(setBoolMapForKey(p0, p1)) {
	using FunctionType = decltype(setBoolMapForKey(p0, p1))(*)(DS_Dictionary*, char const*, gd::map<gd::string, bool>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary16setBoolMapForKeyEPKcRSt3mapISsbSt4lessISsESaISt4pairIKSsbEEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectArrayForKey(char const* p0, gd::vector<cocos2d::CCRect> const& p1) -> decltype(setRectArrayForKey(p0, p1)) {
	using FunctionType = decltype(setRectArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, gd::vector<cocos2d::CCRect> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary18setRectArrayForKeyEPKcRKSt6vectorI7cocos2d6CCRectSaIS4_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectArrayForKey(char const* p0, gd::vector<cocos2d::CCRect> const& p1, bool p2) -> decltype(setRectArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setRectArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, gd::vector<cocos2d::CCRect> const&, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary18setRectArrayForKeyEPKcRKSt6vectorI7cocos2d6CCRectSaIS4_EEb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, gd::vector<gd::string> const& p1) -> decltype(setStringArrayForKey(p0, p1)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, gd::vector<gd::string> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary20setStringArrayForKeyEPKcRKSt6vectorISsSaISsEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, gd::vector<gd::string> const& p1, bool p2) -> decltype(setStringArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, gd::vector<gd::string> const&, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary20setStringArrayForKeyEPKcRKSt6vectorISsSaISsEEb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringForKey(char const* p0, gd::string const& p1) -> decltype(setStringForKey(p0, p1)) {
	using FunctionType = decltype(setStringForKey(p0, p1))(*)(DS_Dictionary*, char const*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary15setStringForKeyEPKcRKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringForKey(char const* p0, gd::string const& p1, bool p2) -> decltype(setStringForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, gd::string const&, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary15setStringForKeyEPKcRKSsb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setVec2ArrayForKey(char const* p0, gd::vector<cocos2d::CCPoint> const& p1) -> decltype(setVec2ArrayForKey(p0, p1)) {
	using FunctionType = decltype(setVec2ArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, gd::vector<cocos2d::CCPoint> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary18setVec2ArrayForKeyEPKcRKSt6vectorI7cocos2d7CCPointSaIS4_EE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setVec2ArrayForKey(char const* p0, gd::vector<cocos2d::CCPoint> const& p1, bool p2) -> decltype(setVec2ArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setVec2ArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, gd::vector<cocos2d::CCPoint> const&, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary18setVec2ArrayForKeyEPKcRKSt6vectorI7cocos2d7CCPointSaIS4_EEb")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::split(gd::string const& p0, char const* p1, gd::vector<gd::string>& p2) -> decltype(split(p0, p1, p2)) {
	using FunctionType = decltype(split(p0, p1, p2))(*)(DS_Dictionary*, gd::string const&, char const*, gd::vector<gd::string>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary5splitERKSsPKcRSt6vectorISsSaISsEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::splitWithForm(gd::string const& p0, gd::vector<gd::string>& p1) -> decltype(splitWithForm(p0, p1)) {
	using FunctionType = decltype(splitWithForm(p0, p1))(*)(DS_Dictionary*, gd::string const&, gd::vector<gd::string>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary13splitWithFormERKSsRSt6vectorISsSaISsEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::vec2FromString(gd::string const& p0, cocos2d::CCPoint& p1) -> decltype(vec2FromString(p0, p1)) {
	using FunctionType = decltype(vec2FromString(p0, p1))(*)(DS_Dictionary*, gd::string const&, cocos2d::CCPoint&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DS_Dictionary14vec2FromStringERKSsRN7cocos2d7CCPointE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
