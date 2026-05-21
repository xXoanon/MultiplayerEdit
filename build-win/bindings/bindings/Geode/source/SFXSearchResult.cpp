
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

auto SFXSearchResult::create(int folderID) -> decltype(create(folderID)) {
	using FunctionType = decltype(create(folderID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(folderID);
}

auto SFXSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&SFXSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(SFXSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto SFXSearchResult::getSelectedPage(int id, int count) -> decltype(getSelectedPage(id, count)) {
	using FunctionType = decltype(getSelectedPage(id, count))(*)(SFXSearchResult*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3482a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, count);
}
