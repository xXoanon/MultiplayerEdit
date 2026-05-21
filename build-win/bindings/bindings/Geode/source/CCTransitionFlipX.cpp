
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

cocos2d::CCTransitionFlipX::CCTransitionFlipX() : cocos2d::CCTransitionFlipX(geode::CutoffConstructor, sizeof(cocos2d::CCTransitionFlipX)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCTransitionFlipX::~CCTransitionFlipX();

	using FunctionType = void(*)(cocos2d::CCTransitionFlipX*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionFlipX@cocos2d@@QEAA@XZ")), tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCTransitionFlipX::~CCTransitionFlipX() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCTransitionFlipX*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionFlipX@cocos2d@@UEAA@XZ")), tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCTransitionFlipX(geode::CutoffConstructor, sizeof(cocos2d::CCTransitionFlipX));
		geode::DestructorLock::addLock(this);
	}
}
