
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

SimplePlayer::~SimplePlayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SimplePlayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2791e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SimplePlayer(geode::CutoffConstructor, sizeof(SimplePlayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SimplePlayer::create(int id) -> decltype(create(id)) {
	using FunctionType = decltype(create(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2793a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto SimplePlayer::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&SimplePlayer::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(SimplePlayer*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27a7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto SimplePlayer::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&SimplePlayer::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(SimplePlayer*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x279c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto SimplePlayer::createSpiderSprite(int frame) -> decltype(createSpiderSprite(frame)) {
	using FunctionType = decltype(createSpiderSprite(frame))(*)(SimplePlayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x279b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto SimplePlayer::init(int id) -> decltype(init(id)) {
	using FunctionType = decltype(init(id))(*)(SimplePlayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x279490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SimplePlayer::setFrames(char const* firstFrame, char const* secondFrame, char const* ufoFrame, char const* glowFrame, char const* extraFrame) -> decltype(setFrames(firstFrame, secondFrame, ufoFrame, glowFrame, extraFrame)) {
	using FunctionType = decltype(setFrames(firstFrame, secondFrame, ufoFrame, glowFrame, extraFrame))(*)(SimplePlayer*, char const*, char const*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27a5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, firstFrame, secondFrame, ufoFrame, glowFrame, extraFrame);
}

auto SimplePlayer::tryEnableCustomGlowColor(int id) -> decltype(tryEnableCustomGlowColor(id)) {
	using FunctionType = decltype(tryEnableCustomGlowColor(id))(*)(SimplePlayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x279c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SimplePlayer::updateColors() -> decltype(updateColors()) {
	using FunctionType = decltype(updateColors())(*)(SimplePlayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x279cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SimplePlayer::updatePlayerFrame(int id, IconType type) -> decltype(updatePlayerFrame(id, type)) {
	using FunctionType = decltype(updatePlayerFrame(id, type))(*)(SimplePlayer*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27a090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}
