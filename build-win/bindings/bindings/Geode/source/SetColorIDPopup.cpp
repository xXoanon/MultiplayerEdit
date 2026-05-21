
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

auto SetColorIDPopup::colorSelectClosed(GJSpecialColorSelect* select, int id) -> decltype(colorSelectClosed(select, id)) {
	auto self = addresser::thunkAdjust(Resolve<GJSpecialColorSelect*, int>::func(&SetColorIDPopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(select, id))(*)(SetColorIDPopup*, GJSpecialColorSelect*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, select, id);
}

auto SetColorIDPopup::init(int id) -> decltype(init(id)) {
	using FunctionType = decltype(init(id))(*)(SetColorIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SetColorIDPopup::onSelectSpecialColor(cocos2d::CCObject* sender) -> decltype(onSelectSpecialColor(sender)) {
	using FunctionType = decltype(onSelectSpecialColor(sender))(*)(SetColorIDPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
