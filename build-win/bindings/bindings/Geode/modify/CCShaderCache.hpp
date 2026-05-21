#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedShaderCache
		#define GEODE_STATICS_purgeSharedShaderCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedShaderCache) 
	#endif

	#ifndef GEODE_STATICS_sharedShaderCache
		#define GEODE_STATICS_sharedShaderCache
		GEODE_AS_STATIC_FUNCTION(sharedShaderCache) 
	#endif

	#ifndef GEODE_STATICS_addProgram
		#define GEODE_STATICS_addProgram
		GEODE_AS_STATIC_FUNCTION(addProgram) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultShader
		#define GEODE_STATICS_loadDefaultShader
		GEODE_AS_STATIC_FUNCTION(loadDefaultShader) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultShaders
		#define GEODE_STATICS_loadDefaultShaders
		GEODE_AS_STATIC_FUNCTION(loadDefaultShaders) 
	#endif

	#ifndef GEODE_STATICS_programForKey
		#define GEODE_STATICS_programForKey
		GEODE_AS_STATIC_FUNCTION(programForKey) 
	#endif

	#ifndef GEODE_STATICS_reloadDefaultShaders
		#define GEODE_STATICS_reloadDefaultShaders
		GEODE_AS_STATIC_FUNCTION(reloadDefaultShaders) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeSharedShaderCache
		#define GEODE_CONCEPT_CHECK_purgeSharedShaderCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedShaderCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedShaderCache
		#define GEODE_CONCEPT_CHECK_sharedShaderCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedShaderCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addProgram
		#define GEODE_CONCEPT_CHECK_addProgram
		GEODE_CONCEPT_FUNCTION_CHECK(addProgram) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaultShader
		#define GEODE_CONCEPT_CHECK_loadDefaultShader
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaultShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaultShaders
		#define GEODE_CONCEPT_CHECK_loadDefaultShaders
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaultShaders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_programForKey
		#define GEODE_CONCEPT_CHECK_programForKey
		GEODE_CONCEPT_FUNCTION_CHECK(programForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadDefaultShaders
		#define GEODE_CONCEPT_CHECK_reloadDefaultShaders
		GEODE_CONCEPT_FUNCTION_CHECK(reloadDefaultShaders) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCShaderCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>>::ModifyBase;
		using Base = cocos2d::CCShaderCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCShaderCache@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCShaderCache, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCShaderCache@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCShaderCache)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCShaderCache::purgeSharedShaderCache)), Default, cocos2d::CCShaderCache, purgeSharedShaderCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCShaderCache::sharedShaderCache)), Default, cocos2d::CCShaderCache, sharedShaderCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCGLProgram*, char const*>::func(&cocos2d::CCShaderCache::addProgram)), Thiscall, cocos2d::CCShaderCache, addProgram, cocos2d::CCGLProgram*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCShaderCache::init)), Thiscall, cocos2d::CCShaderCache, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCGLProgram*, int>::func(&cocos2d::CCShaderCache::loadDefaultShader)), Thiscall, cocos2d::CCShaderCache, loadDefaultShader, cocos2d::CCGLProgram*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCShaderCache::loadDefaultShaders)), Thiscall, cocos2d::CCShaderCache, loadDefaultShaders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCShaderCache::programForKey)), Thiscall, cocos2d::CCShaderCache, programForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCShaderCache::reloadDefaultShaders)), Thiscall, cocos2d::CCShaderCache, reloadDefaultShaders, )
		}
	};
}
