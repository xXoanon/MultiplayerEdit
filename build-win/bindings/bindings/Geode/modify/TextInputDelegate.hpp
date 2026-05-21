#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allowTextInput
		#define GEODE_CONCEPT_CHECK_allowTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(allowTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterPressed
		#define GEODE_CONCEPT_CHECK_enterPressed
		GEODE_CONCEPT_FUNCTION_CHECK(enterPressed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextInputDelegate> : ModifyBase<ModifyDerive<Der, TextInputDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextInputDelegate>>;
		using ModifyBase<ModifyDerive<Der, TextInputDelegate>>::ModifyBase;
		using Base = TextInputDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, allowTextInput, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextInputDelegate, enterPressed, CCTextInputNode*)
		}
	};
}
