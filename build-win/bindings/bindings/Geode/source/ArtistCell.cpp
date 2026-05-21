
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

auto ArtistCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ArtistCell::init), this);
	using FunctionType = decltype(init())(*)(ArtistCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ArtistCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ArtistCell::draw), this);
	using FunctionType = decltype(draw())(*)(ArtistCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xade20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ArtistCell::loadFromObject(SongInfoObject* object) -> decltype(loadFromObject(object)) {
	using FunctionType = decltype(loadFromObject(object))(*)(ArtistCell*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb5610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto ArtistCell::onNewgrounds(cocos2d::CCObject* sender) -> decltype(onNewgrounds(sender)) {
	using FunctionType = decltype(onNewgrounds(sender))(*)(ArtistCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb5940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ArtistCell::onYouTube(cocos2d::CCObject* sender) -> decltype(onYouTube(sender)) {
	using FunctionType = decltype(onYouTube(sender))(*)(ArtistCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb59e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
