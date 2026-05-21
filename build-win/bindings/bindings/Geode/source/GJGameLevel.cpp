
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

GJGameLevel::GJGameLevel() : GJGameLevel(geode::CutoffConstructor, sizeof(GJGameLevel)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJGameLevel::~GJGameLevel();

	using FunctionType = void(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x141590, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::create(cocos2d::CCDictionary* dict, bool download) -> decltype(create(dict, download)) {
	using FunctionType = decltype(create(dict, download))(*)(cocos2d::CCDictionary*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ae30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict, download);
}

auto GJGameLevel::lengthKeyToString(int key) -> decltype(lengthKeyToString(key)) {
	using FunctionType = decltype(lengthKeyToString(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cbd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJGameLevel::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJGameLevel::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ef00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJGameLevel::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGameLevel::init), this);
	using FunctionType = decltype(init())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16c6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGameLevel::areCoinsVerified() -> decltype(areCoinsVerified()) {
	using FunctionType = decltype(areCoinsVerified())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ff40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::copyLevelInfo(GJGameLevel* level) -> decltype(copyLevelInfo(level)) {
	using FunctionType = decltype(copyLevelInfo(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16dec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJGameLevel::getAudioFileName() -> decltype(getAudioFileName()) {
	using FunctionType = decltype(getAudioFileName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getAverageDifficulty() -> decltype(getAverageDifficulty()) {
	using FunctionType = decltype(getAverageDifficulty())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cd30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getCoinKey(int coinNumber) -> decltype(getCoinKey(coinNumber)) {
	using FunctionType = decltype(getCoinKey(coinNumber))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, coinNumber);
}

auto GJGameLevel::getLastBuildPageForTab(int tab) -> decltype(getLastBuildPageForTab(tab)) {
	using FunctionType = decltype(getLastBuildPageForTab(tab))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ce20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto GJGameLevel::getListSnapshot() -> decltype(getListSnapshot()) {
	using FunctionType = decltype(getListSnapshot())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16db30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getSongName() -> decltype(getSongName()) {
	using FunctionType = decltype(getSongName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getUnpackedLevelDescription() -> decltype(getUnpackedLevelDescription()) {
	using FunctionType = decltype(getUnpackedLevelDescription())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x170060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::handleStatsConflict(GJGameLevel* level) -> decltype(handleStatsConflict(level)) {
	using FunctionType = decltype(handleStatsConflict(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16fb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::saveNewScore(int value, int type, int ticks, int clicks, int coins, gd::string inputs, bool save) -> decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save)) {
	using FunctionType = decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save))(*)(GJGameLevel*, int, int, int, int, int, gd::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type, ticks, clicks, coins, inputs, save);
}

auto GJGameLevel::savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid) -> decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid)) {
	using FunctionType = decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid))(*)(GJGameLevel*, int, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16c8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, percent, isPracticeMode, clicks, attempts, isChkValid);
}

auto GJGameLevel::scoreStringToVector(gd::string& str, gd::vector<int>& vec) -> decltype(scoreStringToVector(str, vec)) {
	using FunctionType = decltype(scoreStringToVector(str, vec))(*)(GJGameLevel*, gd::string&, gd::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, vec);
}

auto GJGameLevel::storeNewLocalScore(int value, int type) -> decltype(storeNewLocalScore(value, type)) {
	using FunctionType = decltype(storeNewLocalScore(value, type))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type);
}

auto GJGameLevel::unverifyCoins() -> decltype(unverifyCoins()) {
	using FunctionType = decltype(unverifyCoins())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ffa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
