#include <Geode/Geode.hpp>
#include <Geode/loader/SettingV3.hpp>
#include "SessionManager.hpp"
#include "NetworkManager.hpp"
#include "RemoteActionHandler.hpp"

using namespace geode::prelude;

$on_mod(Loaded) {
    log::info("Multiplayer Edit v{} loaded!", Mod::get()->getVersion().toNonVString());
}

$on_mod(DataSaved) {
    // Clean up on mod data save
    auto& session = mpedit::SessionManager::get();
    if (session.isInSession()) {
        session.leaveSession();
    }
}
