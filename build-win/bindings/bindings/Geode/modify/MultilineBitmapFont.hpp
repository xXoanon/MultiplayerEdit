#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MultilineBitmapFont.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_initWithFont
		#define GEODE_STATICS_initWithFont
		GEODE_AS_STATIC_FUNCTION(initWithFont) 
	#endif

	#ifndef GEODE_STATICS_moveSpecialDescriptors
		#define GEODE_STATICS_moveSpecialDescriptors
		GEODE_AS_STATIC_FUNCTION(moveSpecialDescriptors) 
	#endif

	#ifndef GEODE_STATICS_readColorInfo
		#define GEODE_STATICS_readColorInfo
		GEODE_AS_STATIC_FUNCTION(readColorInfo) 
	#endif

	#ifndef GEODE_STATICS_stringWithMaxWidth
		#define GEODE_STATICS_stringWithMaxWidth
		GEODE_AS_STATIC_FUNCTION(stringWithMaxWidth) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithFont
		#define GEODE_CONCEPT_CHECK_createWithFont
		GEODE_CONCEPT_FUNCTION_CHECK(createWithFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFont
		#define GEODE_CONCEPT_CHECK_initWithFont
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveSpecialDescriptors
		#define GEODE_CONCEPT_CHECK_moveSpecialDescriptors
		GEODE_CONCEPT_FUNCTION_CHECK(moveSpecialDescriptors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readColorInfo
		#define GEODE_CONCEPT_CHECK_readColorInfo
		GEODE_CONCEPT_FUNCTION_CHECK(readColorInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringWithMaxWidth
		#define GEODE_CONCEPT_CHECK_stringWithMaxWidth
		GEODE_CONCEPT_FUNCTION_CHECK(stringWithMaxWidth) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MultilineBitmapFont> : ModifyBase<ModifyDerive<Der, MultilineBitmapFont>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MultilineBitmapFont>>;
		using ModifyBase<ModifyDerive<Der, MultilineBitmapFont>>::ModifyBase;
		using Base = MultilineBitmapFont;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MultilineBitmapFont, createWithFont, char const*, gd::string, float, float, cocos2d::CCPoint, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6c780, Thiscall, MultilineBitmapFont, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bed0, Thiscall, MultilineBitmapFont, initWithFont, char const*, gd::string, float, float, cocos2d::CCPoint, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d0d0, Thiscall, MultilineBitmapFont, moveSpecialDescriptors, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6c800, Thiscall, MultilineBitmapFont, readColorInfo, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d160, Thiscall, MultilineBitmapFont, stringWithMaxWidth, gd::string, float, float)
		}
	};
}
