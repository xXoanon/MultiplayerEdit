
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

auto GJCommentListLayer::create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder) -> decltype(create(listView, title, color, width, height, blueBorder)) {
	using FunctionType = decltype(create(listView, title, color, width, height, blueBorder))(*)(BoomListView*, char const*, cocos2d::ccColor4B, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(listView, title, color, width, height, blueBorder);
}

auto GJCommentListLayer::init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder) -> decltype(init(listView, title, color, width, height, blueBorder)) {
	using FunctionType = decltype(init(listView, title, color, width, height, blueBorder))(*)(GJCommentListLayer*, BoomListView*, char const*, cocos2d::ccColor4B, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, listView, title, color, width, height, blueBorder);
}
