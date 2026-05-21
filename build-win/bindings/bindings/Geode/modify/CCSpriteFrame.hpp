#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_getOffset
		#define GEODE_STATICS_getOffset
		GEODE_AS_STATIC_FUNCTION(getOffset) 
	#endif

	#ifndef GEODE_STATICS_getOffsetInPixels
		#define GEODE_STATICS_getOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(getOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTextureFilename
		#define GEODE_STATICS_initWithTextureFilename
		GEODE_AS_STATIC_FUNCTION(initWithTextureFilename) 
	#endif

	#ifndef GEODE_STATICS_setOffset
		#define GEODE_STATICS_setOffset
		GEODE_AS_STATIC_FUNCTION(setOffset) 
	#endif

	#ifndef GEODE_STATICS_setOffsetInPixels
		#define GEODE_STATICS_setOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(setOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_setRect
		#define GEODE_STATICS_setRect
		GEODE_AS_STATIC_FUNCTION(setRect) 
	#endif

	#ifndef GEODE_STATICS_setRectInPixels
		#define GEODE_STATICS_setRectInPixels
		GEODE_AS_STATIC_FUNCTION(setRectInPixels) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOffset
		#define GEODE_CONCEPT_CHECK_getOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOffsetInPixels
		#define GEODE_CONCEPT_CHECK_getOffsetInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getOffsetInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTextureFilename
		#define GEODE_CONCEPT_CHECK_initWithTextureFilename
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTextureFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOffset
		#define GEODE_CONCEPT_CHECK_setOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOffsetInPixels
		#define GEODE_CONCEPT_CHECK_setOffsetInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(setOffsetInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRect
		#define GEODE_CONCEPT_CHECK_setRect
		GEODE_CONCEPT_FUNCTION_CHECK(setRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRectInPixels
		#define GEODE_CONCEPT_CHECK_setRectInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(setRectInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteFrame> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>::ModifyBase;
		using Base = cocos2d::CCSpriteFrame;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSpriteFrame@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSpriteFrame)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::create)), Default, cocos2d::CCSpriteFrame, create, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::create)), Default, cocos2d::CCSpriteFrame, create, char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::createWithTexture)), Default, cocos2d::CCSpriteFrame, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::createWithTexture)), Default, cocos2d::CCSpriteFrame, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCSpriteFrame::copyWithZone)), Thiscall, cocos2d::CCSpriteFrame, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOffset)), Thiscall, cocos2d::CCSpriteFrame, getOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOffsetInPixels)), Thiscall, cocos2d::CCSpriteFrame, getOffsetInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getTexture)), Thiscall, cocos2d::CCSpriteFrame, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::initWithTexture)), Thiscall, cocos2d::CCSpriteFrame, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::initWithTexture)), Thiscall, cocos2d::CCSpriteFrame, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::initWithTextureFilename)), Thiscall, cocos2d::CCSpriteFrame, initWithTextureFilename, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::initWithTextureFilename)), Thiscall, cocos2d::CCSpriteFrame, initWithTextureFilename, char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSpriteFrame::setOffset)), Thiscall, cocos2d::CCSpriteFrame, setOffset, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSpriteFrame::setOffsetInPixels)), Thiscall, cocos2d::CCSpriteFrame, setOffsetInPixels, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::setRect)), Thiscall, cocos2d::CCSpriteFrame, setRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::setRectInPixels)), Thiscall, cocos2d::CCSpriteFrame, setRectInPixels, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteFrame::setTexture)), Thiscall, cocos2d::CCSpriteFrame, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
