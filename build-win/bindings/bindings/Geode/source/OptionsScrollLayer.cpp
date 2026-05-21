
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

auto OptionsScrollLayer::create(cocos2d::CCArray* objects, bool recreate, int minimum) -> decltype(create(objects, recreate, minimum)) {
	using FunctionType = decltype(create(objects, recreate, minimum))(*)(cocos2d::CCArray*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ab70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, recreate, minimum);
}

auto OptionsScrollLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsScrollLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(OptionsScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsScrollLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsScrollLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(OptionsScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsScrollLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&OptionsScrollLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(OptionsScrollLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto OptionsScrollLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(OptionsScrollLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33af90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsScrollLayer::setupList(cocos2d::CCArray* objects) -> decltype(setupList(objects)) {
	using FunctionType = decltype(setupList(objects))(*)(OptionsScrollLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33adc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}
