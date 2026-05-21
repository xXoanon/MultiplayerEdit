
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

auto LabelGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LabelGameObject::init), this);
	using FunctionType = decltype(init())(*)(LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LabelGameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&LabelGameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(LabelGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b37b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto LabelGameObject::setupCustomSprites(gd::string frameName) -> decltype(setupCustomSprites(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string>::func(&LabelGameObject::setupCustomSprites), this);
	using FunctionType = decltype(setupCustomSprites(frameName))(*)(LabelGameObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto LabelGameObject::addMainSpriteToParent(bool reorder) -> decltype(addMainSpriteToParent(reorder)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&LabelGameObject::addMainSpriteToParent), this);
	using FunctionType = decltype(addMainSpriteToParent(reorder))(*)(LabelGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, reorder);
}

auto LabelGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LabelGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b40c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LabelGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&LabelGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(LabelGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto LabelGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&LabelGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(LabelGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LabelGameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&LabelGameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(LabelGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto LabelGameObject::updateTextKerning(int kerning) -> decltype(updateTextKerning(kerning)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LabelGameObject::updateTextKerning), this);
	using FunctionType = decltype(updateTextKerning(kerning))(*)(LabelGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, kerning);
}

auto LabelGameObject::getTextKerning() -> decltype(getTextKerning()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LabelGameObject::getTextKerning), this);
	using FunctionType = decltype(getTextKerning())(*)(LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LabelGameObject::createLabel(gd::string text) -> decltype(createLabel(text)) {
	using FunctionType = decltype(createLabel(text))(*)(LabelGameObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto LabelGameObject::removeLabel() -> decltype(removeLabel()) {
	using FunctionType = decltype(removeLabel())(*)(LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b36d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LabelGameObject::updateLabel(gd::string text) -> decltype(updateLabel(text)) {
	using FunctionType = decltype(updateLabel(text))(*)(LabelGameObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto LabelGameObject::updateLabelAlign(int alignment) -> decltype(updateLabelAlign(alignment)) {
	using FunctionType = decltype(updateLabelAlign(alignment))(*)(LabelGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b37f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, alignment);
}

auto LabelGameObject::updatePreviewLabel() -> decltype(updatePreviewLabel()) {
	using FunctionType = decltype(updatePreviewLabel())(*)(LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b3890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
