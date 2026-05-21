
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

auto ListButtonPage::create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset) -> decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset)) {
	using FunctionType = decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset))(*)(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, position, columns, rows, columnOffset, rowOffset, offset);
}
