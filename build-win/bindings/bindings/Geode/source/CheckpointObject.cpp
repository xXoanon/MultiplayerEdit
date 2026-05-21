
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

CheckpointObject::CheckpointObject() : CheckpointObject(geode::CutoffConstructor, sizeof(CheckpointObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CheckpointObject::~CheckpointObject();

	using FunctionType = void(*)(CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a51c0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto CheckpointObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CheckpointObject::init), this);
	using FunctionType = decltype(init())(*)(CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
