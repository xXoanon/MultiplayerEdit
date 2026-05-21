
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

auto LoadingLayer::scene(bool refresh) -> decltype(scene(refresh)) {
	using FunctionType = decltype(scene(refresh))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(refresh);
}

auto LoadingLayer::getLoadingString() -> decltype(getLoadingString()) {
	using FunctionType = decltype(getLoadingString())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingLayer::init(bool refresh) -> decltype(init(refresh)) {
	using FunctionType = decltype(init(refresh))(*)(LoadingLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, refresh);
}

auto LoadingLayer::loadAssets() -> decltype(loadAssets()) {
	using FunctionType = decltype(loadAssets())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32ed60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingLayer::updateProgress(int progress) -> decltype(updateProgress(progress)) {
	using FunctionType = decltype(updateProgress(progress))(*)(LoadingLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32ece0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, progress);
}
