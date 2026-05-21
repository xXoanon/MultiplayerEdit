
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

auto CCSpriteGrayscale::createWithSpriteFrameName(gd::string const& frameName) -> decltype(createWithSpriteFrameName(frameName)) {
	using FunctionType = decltype(createWithSpriteFrameName(frameName))(*)(gd::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frameName);
}

auto CCSpriteGrayscale::getShaderName() -> decltype(getShaderName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteGrayscale::getShaderName), this);
	using FunctionType = decltype(getShaderName())(*)(CCSpriteGrayscale*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteGrayscale::shaderBody() -> decltype(shaderBody()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteGrayscale::shaderBody), this);
	using FunctionType = decltype(shaderBody())(*)(CCSpriteGrayscale*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
