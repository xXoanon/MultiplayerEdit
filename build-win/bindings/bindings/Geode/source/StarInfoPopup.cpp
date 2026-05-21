
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

auto StarInfoPopup::create(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer) -> decltype(create(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer)) {
	using FunctionType = decltype(create(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer))(*)(int, int, int, int, int, int, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer);
}

auto StarInfoPopup::createFromString(gd::string str) -> decltype(createFromString(str)) {
	using FunctionType = decltype(createFromString(str))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c7ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto StarInfoPopup::createFromStringMoons(gd::string str) -> decltype(createFromStringMoons(str)) {
	using FunctionType = decltype(createFromStringMoons(str))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c7dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto StarInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StarInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(StarInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StarInfoPopup::init(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer) -> decltype(init(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer)) {
	using FunctionType = decltype(init(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer))(*)(StarInfoPopup*, int, int, int, int, int, int, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c81b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer);
}

auto StarInfoPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(StarInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
