
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

MusicSearchResult::MusicSearchResult() : MusicSearchResult(geode::CutoffConstructor, sizeof(MusicSearchResult)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	MusicSearchResult::~MusicSearchResult();

	using FunctionType = void(*)(MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b880, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto MusicSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&MusicSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(MusicSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto MusicSearchResult::stateChanged(OptionsObject* object) -> decltype(stateChanged(object)) {
	auto self = addresser::thunkAdjust(Resolve<OptionsObject*>::func(&MusicSearchResult::stateChanged), this);
	using FunctionType = decltype(stateChanged(object))(*)(MusicSearchResult*, OptionsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto MusicSearchResult::applyTagFilters(cocos2d::CCArray* objects) -> decltype(applyTagFilters(objects)) {
	using FunctionType = decltype(applyTagFilters(objects))(*)(MusicSearchResult*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto MusicSearchResult::getFilesMatchingSearch(cocos2d::CCArray* objects, gd::string query) -> decltype(getFilesMatchingSearch(objects, query)) {
	using FunctionType = decltype(getFilesMatchingSearch(objects, query))(*)(MusicSearchResult*, cocos2d::CCArray*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, query);
}
