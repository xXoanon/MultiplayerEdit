
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

auto ObjectManager::instance() -> decltype(instance()) {
	using FunctionType = decltype(instance())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ObjectManager::replaceAllOccurencesOfString(cocos2d::CCString* target, cocos2d::CCString* replacement, cocos2d::CCDictionary* dict) -> decltype(replaceAllOccurencesOfString(target, replacement, dict)) {
	using FunctionType = decltype(replaceAllOccurencesOfString(target, replacement, dict))(*)(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f1d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, replacement, dict);
}

auto ObjectManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ObjectManager::init), this);
	using FunctionType = decltype(init())(*)(ObjectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ObjectManager::getDefinition(char const* definitionKey) -> decltype(getDefinition(definitionKey)) {
	using FunctionType = decltype(getDefinition(definitionKey))(*)(ObjectManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f8a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definitionKey);
}

auto ObjectManager::loadCopiedAnimations() -> decltype(loadCopiedAnimations()) {
	using FunctionType = decltype(loadCopiedAnimations())(*)(ObjectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ObjectManager::loadCopiedSets() -> decltype(loadCopiedSets()) {
	using FunctionType = decltype(loadCopiedSets())(*)(ObjectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ed80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ObjectManager::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(ObjectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
