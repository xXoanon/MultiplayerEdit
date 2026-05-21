
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

GJUserScore::GJUserScore() : GJUserScore(geode::CutoffConstructor, sizeof(GJUserScore)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJUserScore::~GJUserScore();

	using FunctionType = void(*)(GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142100, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJUserScore::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1710b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJUserScore::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJUserScore::init), this);
	using FunctionType = decltype(init())(*)(GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x172b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJUserScore::isCurrentUser() -> decltype(isCurrentUser()) {
	using FunctionType = decltype(isCurrentUser())(*)(GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x172ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
