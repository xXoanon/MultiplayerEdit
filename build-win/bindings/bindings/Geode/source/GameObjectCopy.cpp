
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

auto GameObjectCopy::create(GameObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e8940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto GameObjectCopy::resetObject() -> decltype(resetObject()) {
	using FunctionType = decltype(resetObject())(*)(GameObjectCopy*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e8a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
