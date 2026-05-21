
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

auto CCAnimateFrameCache::sharedSpriteFrameCache() -> decltype(sharedSpriteFrameCache()) {
	using FunctionType = decltype(sharedSpriteFrameCache())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CCAnimateFrameCache::addDict(DS_Dictionary* dict, char const* filename) -> decltype(addDict(dict, filename)) {
	using FunctionType = decltype(addDict(dict, filename))(*)(CCAnimateFrameCache*, DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict, filename);
}

auto CCAnimateFrameCache::addSpriteFramesWithFile(char const* filename) -> decltype(addSpriteFramesWithFile(filename)) {
	using FunctionType = decltype(addSpriteFramesWithFile(filename))(*)(CCAnimateFrameCache*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto CCAnimateFrameCache::spriteFrameByName(char const* name) -> decltype(spriteFrameByName(name)) {
	using FunctionType = decltype(spriteFrameByName(name))(*)(CCAnimateFrameCache*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name);
}
