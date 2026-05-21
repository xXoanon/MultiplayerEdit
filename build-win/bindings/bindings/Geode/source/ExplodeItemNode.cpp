
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

auto ExplodeItemNode::create(cocos2d::CCRenderTexture* texture) -> decltype(create(texture)) {
	using FunctionType = decltype(create(texture))(*)(cocos2d::CCRenderTexture*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3844f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(texture);
}

auto ExplodeItemNode::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ExplodeItemNode::update), this);
	using FunctionType = decltype(update(dt))(*)(ExplodeItemNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ExplodeItemNode::createSprites(int countX, int countY, float xVel, float xVar, float yVel, float yVar, float dur, float durVar, cocos2d::ccColor4F startColor, cocos2d::ccColor4F endColor, bool noParticles) -> decltype(createSprites(countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles)) {
	using FunctionType = decltype(createSprites(countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles))(*)(ExplodeItemNode*, int, int, float, float, float, float, float, float, cocos2d::ccColor4F, cocos2d::ccColor4F, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3845b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles);
}
