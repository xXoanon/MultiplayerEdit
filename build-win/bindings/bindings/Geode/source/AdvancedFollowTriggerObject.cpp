
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

AdvancedFollowTriggerObject::AdvancedFollowTriggerObject() : AdvancedFollowTriggerObject(geode::CutoffConstructor, sizeof(AdvancedFollowTriggerObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject();

	using FunctionType = void(*)(AdvancedFollowTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495bf0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto AdvancedFollowTriggerObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&AdvancedFollowTriggerObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(AdvancedFollowTriggerObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto AdvancedFollowTriggerObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&AdvancedFollowTriggerObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(AdvancedFollowTriggerObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49b630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}
