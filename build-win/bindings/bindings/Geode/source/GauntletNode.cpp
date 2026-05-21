
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

auto GauntletNode::frameForType(GauntletType type) -> decltype(frameForType(type)) {
	using FunctionType = decltype(frameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fde00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::nameForType(GauntletType type) -> decltype(nameForType(type)) {
	using FunctionType = decltype(nameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ff190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::generateNode() -> decltype(generateNode()) {
	using FunctionType = decltype(generateNode())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fc240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletNode::onClaimReward() -> decltype(onClaimReward()) {
	using FunctionType = decltype(onClaimReward())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fddc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
