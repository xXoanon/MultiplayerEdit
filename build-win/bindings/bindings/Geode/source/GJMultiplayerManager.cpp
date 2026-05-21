
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

auto GJMultiplayerManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2825f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJMultiplayerManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMultiplayerManager::init), this);
	using FunctionType = decltype(init())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x282d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMultiplayerManager::addComment(gd::string str, int lobbyID) -> decltype(addComment(str, lobbyID)) {
	using FunctionType = decltype(addComment(str, lobbyID))(*)(GJMultiplayerManager*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x283d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, lobbyID);
}

auto GJMultiplayerManager::createAndAddComment(gd::string text, int lobbyID) -> decltype(createAndAddComment(text, lobbyID)) {
	using FunctionType = decltype(createAndAddComment(text, lobbyID))(*)(GJMultiplayerManager*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x283b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, lobbyID);
}

auto GJMultiplayerManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x283ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMultiplayerManager::handleIt(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJMultiplayerManager*, bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x282ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJMultiplayerManager::onJoinLobbyCompleted(gd::string response, gd::string tag) -> decltype(onJoinLobbyCompleted(response, tag)) {
	using FunctionType = decltype(onJoinLobbyCompleted(response, tag))(*)(GJMultiplayerManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x282e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJMultiplayerManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJMultiplayerManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2829b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJMultiplayerManager::ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJMultiplayerManager*, gd::string, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2826a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJMultiplayerManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(GJMultiplayerManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x282dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJMultiplayerManager::uploadComment(gd::string text, int lobbyID) -> decltype(uploadComment(text, lobbyID)) {
	using FunctionType = decltype(uploadComment(text, lobbyID))(*)(GJMultiplayerManager*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2835d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, lobbyID);
}
