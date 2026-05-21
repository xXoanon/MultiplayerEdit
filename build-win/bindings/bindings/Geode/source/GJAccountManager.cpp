
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

auto GJAccountManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fffd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJAccountManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountManager::init), this);
	using FunctionType = decltype(init())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountManager::addDLToActive(char const* tag) -> decltype(addDLToActive(tag)) {
	using FunctionType = decltype(addDLToActive(tag))(*)(GJAccountManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2005d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJAccountManager::backupAccount(gd::string url) -> decltype(backupAccount(url)) {
	using FunctionType = decltype(backupAccount(url))(*)(GJAccountManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x201970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::getAccountBackupURL() -> decltype(getAccountBackupURL()) {
	using FunctionType = decltype(getAccountBackupURL())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x201350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getAccountSyncURL() -> decltype(getAccountSyncURL()) {
	using FunctionType = decltype(getAccountSyncURL())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2022b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getShaPassword(gd::string password) -> decltype(getShaPassword(password)) {
	using FunctionType = decltype(getShaPassword(password))(*)(GJAccountManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x204060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, password);
}

auto GJAccountManager::handleIt(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJAccountManager*, bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::linkToAccount(gd::string username, gd::string gjp2, int accountID, int userID) -> decltype(linkToAccount(username, gjp2, accountID, userID)) {
	using FunctionType = decltype(linkToAccount(username, gjp2, accountID, userID))(*)(GJAccountManager*, gd::string, gd::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2038a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2, accountID, userID);
}

auto GJAccountManager::loginAccount(gd::string username, gd::string gjp2) -> decltype(loginAccount(username, gjp2)) {
	using FunctionType = decltype(loginAccount(username, gjp2))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2);
}

auto GJAccountManager::onBackupAccountCompleted(gd::string response, gd::string tag) -> decltype(onBackupAccountCompleted(response, tag)) {
	using FunctionType = decltype(onBackupAccountCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x201ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountBackupURLCompleted(gd::string response, gd::string tag) -> decltype(onGetAccountBackupURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountBackupURLCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2016a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountSyncURLCompleted(gd::string response, gd::string tag) -> decltype(onGetAccountSyncURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountSyncURLCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2025f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onLoginAccountCompleted(gd::string response, gd::string tag) -> decltype(onLoginAccountCompleted(response, tag)) {
	using FunctionType = decltype(onLoginAccountCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJAccountManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJAccountManager::onRegisterAccountCompleted(gd::string response, gd::string tag) -> decltype(onRegisterAccountCompleted(response, tag)) {
	using FunctionType = decltype(onRegisterAccountCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x200970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onSyncAccountCompleted(gd::string response, gd::string tag) -> decltype(onSyncAccountCompleted(response, tag)) {
	using FunctionType = decltype(onSyncAccountCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x202b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onUpdateAccountSettingsCompleted(gd::string response, gd::string tag) -> decltype(onUpdateAccountSettingsCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateAccountSettingsCompleted(response, tag))(*)(GJAccountManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x203f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJAccountManager*, gd::string, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2000f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJAccountManager::registerAccount(gd::string response, gd::string tag, gd::string data) -> decltype(registerAccount(response, tag, data)) {
	using FunctionType = decltype(registerAccount(response, tag, data))(*)(GJAccountManager*, gd::string, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2006a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, data);
}

auto GJAccountManager::syncAccount(gd::string url) -> decltype(syncAccount(url)) {
	using FunctionType = decltype(syncAccount(url))(*)(GJAccountManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2028c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::updateAccountSettings(int messageStatus, int friendRequestStatus, int commentStatus, gd::string youtube, gd::string twitter, gd::string twitch, gd::string instagram, gd::string tiktok, gd::string discord, gd::string custom) -> decltype(updateAccountSettings(messageStatus, friendRequestStatus, commentStatus, youtube, twitter, twitch, instagram, tiktok, discord, custom)) {
	using FunctionType = decltype(updateAccountSettings(messageStatus, friendRequestStatus, commentStatus, youtube, twitter, twitch, instagram, tiktok, discord, custom))(*)(GJAccountManager*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x203ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, messageStatus, friendRequestStatus, commentStatus, youtube, twitter, twitch, instagram, tiktok, discord, custom);
}
