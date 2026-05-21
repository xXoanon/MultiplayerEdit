#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addAttribute
		#define GEODE_STATICS_addAttribute
		GEODE_AS_STATIC_FUNCTION(addAttribute) 
	#endif

	#ifndef GEODE_STATICS_compileShader
		#define GEODE_STATICS_compileShader
		GEODE_AS_STATIC_FUNCTION(compileShader) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_fragmentShaderLog
		#define GEODE_STATICS_fragmentShaderLog
		GEODE_AS_STATIC_FUNCTION(fragmentShaderLog) 
	#endif

	#ifndef GEODE_STATICS_getUniformLocationForName
		#define GEODE_STATICS_getUniformLocationForName
		GEODE_AS_STATIC_FUNCTION(getUniformLocationForName) 
	#endif

	#ifndef GEODE_STATICS_initWithVertexShaderByteArray
		#define GEODE_STATICS_initWithVertexShaderByteArray
		GEODE_AS_STATIC_FUNCTION(initWithVertexShaderByteArray) 
	#endif

	#ifndef GEODE_STATICS_initWithVertexShaderFilename
		#define GEODE_STATICS_initWithVertexShaderFilename
		GEODE_AS_STATIC_FUNCTION(initWithVertexShaderFilename) 
	#endif

	#ifndef GEODE_STATICS_link
		#define GEODE_STATICS_link
		GEODE_AS_STATIC_FUNCTION(link) 
	#endif

	#ifndef GEODE_STATICS_logForOpenGLObject
		#define GEODE_STATICS_logForOpenGLObject
		GEODE_AS_STATIC_FUNCTION(logForOpenGLObject) 
	#endif

	#ifndef GEODE_STATICS_programLog
		#define GEODE_STATICS_programLog
		GEODE_AS_STATIC_FUNCTION(programLog) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith1f
		#define GEODE_STATICS_setUniformLocationWith1f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith1f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith1i
		#define GEODE_STATICS_setUniformLocationWith1i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith1i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2f
		#define GEODE_STATICS_setUniformLocationWith2f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2fv
		#define GEODE_STATICS_setUniformLocationWith2fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2i
		#define GEODE_STATICS_setUniformLocationWith2i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2iv
		#define GEODE_STATICS_setUniformLocationWith2iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3f
		#define GEODE_STATICS_setUniformLocationWith3f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3fv
		#define GEODE_STATICS_setUniformLocationWith3fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3i
		#define GEODE_STATICS_setUniformLocationWith3i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3iv
		#define GEODE_STATICS_setUniformLocationWith3iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4f
		#define GEODE_STATICS_setUniformLocationWith4f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4fv
		#define GEODE_STATICS_setUniformLocationWith4fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4i
		#define GEODE_STATICS_setUniformLocationWith4i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4iv
		#define GEODE_STATICS_setUniformLocationWith4iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWithMatrix3fv
		#define GEODE_STATICS_setUniformLocationWithMatrix3fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWithMatrix3fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWithMatrix4fv
		#define GEODE_STATICS_setUniformLocationWithMatrix4fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWithMatrix4fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformsForBuiltins
		#define GEODE_STATICS_setUniformsForBuiltins
		GEODE_AS_STATIC_FUNCTION(setUniformsForBuiltins) 
	#endif

	#ifndef GEODE_STATICS_updateUniformLocation
		#define GEODE_STATICS_updateUniformLocation
		GEODE_AS_STATIC_FUNCTION(updateUniformLocation) 
	#endif

	#ifndef GEODE_STATICS_updateUniforms
		#define GEODE_STATICS_updateUniforms
		GEODE_AS_STATIC_FUNCTION(updateUniforms) 
	#endif

	#ifndef GEODE_STATICS_use
		#define GEODE_STATICS_use
		GEODE_AS_STATIC_FUNCTION(use) 
	#endif

	#ifndef GEODE_STATICS_vertexShaderLog
		#define GEODE_STATICS_vertexShaderLog
		GEODE_AS_STATIC_FUNCTION(vertexShaderLog) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addAttribute
		#define GEODE_CONCEPT_CHECK_addAttribute
		GEODE_CONCEPT_FUNCTION_CHECK(addAttribute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_compileShader
		#define GEODE_CONCEPT_CHECK_compileShader
		GEODE_CONCEPT_FUNCTION_CHECK(compileShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fragmentShaderLog
		#define GEODE_CONCEPT_CHECK_fragmentShaderLog
		GEODE_CONCEPT_FUNCTION_CHECK(fragmentShaderLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniformLocationForName
		#define GEODE_CONCEPT_CHECK_getUniformLocationForName
		GEODE_CONCEPT_FUNCTION_CHECK(getUniformLocationForName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithVertexShaderByteArray
		#define GEODE_CONCEPT_CHECK_initWithVertexShaderByteArray
		GEODE_CONCEPT_FUNCTION_CHECK(initWithVertexShaderByteArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithVertexShaderFilename
		#define GEODE_CONCEPT_CHECK_initWithVertexShaderFilename
		GEODE_CONCEPT_FUNCTION_CHECK(initWithVertexShaderFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_link
		#define GEODE_CONCEPT_CHECK_link
		GEODE_CONCEPT_FUNCTION_CHECK(link) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logForOpenGLObject
		#define GEODE_CONCEPT_CHECK_logForOpenGLObject
		GEODE_CONCEPT_FUNCTION_CHECK(logForOpenGLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_programLog
		#define GEODE_CONCEPT_CHECK_programLog
		GEODE_CONCEPT_FUNCTION_CHECK(programLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith1f
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith1f
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith1f) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith1i
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith1i
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith1i) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith2f
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith2f
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith2f) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith2fv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith2fv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith2fv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith2i
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith2i
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith2i) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith2iv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith2iv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith2iv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith3f
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith3f
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith3f) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith3fv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith3fv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith3fv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith3i
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith3i
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith3i) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith3iv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith3iv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith3iv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith4f
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith4f
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith4f) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith4fv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith4fv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith4fv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith4i
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith4i
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith4i) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWith4iv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWith4iv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWith4iv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWithMatrix3fv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWithMatrix3fv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWithMatrix3fv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformLocationWithMatrix4fv
		#define GEODE_CONCEPT_CHECK_setUniformLocationWithMatrix4fv
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformLocationWithMatrix4fv) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniformsForBuiltins
		#define GEODE_CONCEPT_CHECK_setUniformsForBuiltins
		GEODE_CONCEPT_FUNCTION_CHECK(setUniformsForBuiltins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUniformLocation
		#define GEODE_CONCEPT_CHECK_updateUniformLocation
		GEODE_CONCEPT_FUNCTION_CHECK(updateUniformLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUniforms
		#define GEODE_CONCEPT_CHECK_updateUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(updateUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_use
		#define GEODE_CONCEPT_CHECK_use
		GEODE_CONCEPT_FUNCTION_CHECK(use) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_vertexShaderLog
		#define GEODE_CONCEPT_CHECK_vertexShaderLog
		GEODE_CONCEPT_FUNCTION_CHECK(vertexShaderLog) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGLProgram> : ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>::ModifyBase;
		using Base = cocos2d::CCGLProgram;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCGLProgram@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCGLProgram, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCGLProgram@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCGLProgram)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::CCGLProgram::addAttribute)), Thiscall, cocos2d::CCGLProgram, addAttribute, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int, char const*>::func(&cocos2d::CCGLProgram::compileShader)), Thiscall, cocos2d::CCGLProgram, compileShader, unsigned int*, unsigned int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::description)), Thiscall, cocos2d::CCGLProgram, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::fragmentShaderLog)), Thiscall, cocos2d::CCGLProgram, fragmentShaderLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCGLProgram::getUniformLocationForName)), Thiscall, cocos2d::CCGLProgram, getUniformLocationForName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCGLProgram::initWithVertexShaderByteArray)), Thiscall, cocos2d::CCGLProgram, initWithVertexShaderByteArray, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCGLProgram::initWithVertexShaderFilename)), Thiscall, cocos2d::CCGLProgram, initWithVertexShaderFilename, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::link)), Thiscall, cocos2d::CCGLProgram, link, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, GLInfoFunction, GLLogFunction>::func(&cocos2d::CCGLProgram::logForOpenGLObject)), Thiscall, cocos2d::CCGLProgram, logForOpenGLObject, unsigned int, GLInfoFunction, GLLogFunction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::programLog)), Thiscall, cocos2d::CCGLProgram, programLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::reset)), Thiscall, cocos2d::CCGLProgram, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&cocos2d::CCGLProgram::setUniformLocationWith1f)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith1f, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&cocos2d::CCGLProgram::setUniformLocationWith1i)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith1i, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float>::func(&cocos2d::CCGLProgram::setUniformLocationWith2f)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith2f, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith2fv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith2fv, int, float*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&cocos2d::CCGLProgram::setUniformLocationWith2i)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith2i, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith2iv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith2iv, int, int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float, float>::func(&cocos2d::CCGLProgram::setUniformLocationWith3f)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith3f, int, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith3fv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith3fv, int, float*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int>::func(&cocos2d::CCGLProgram::setUniformLocationWith3i)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith3i, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith3iv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith3iv, int, int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float, float, float>::func(&cocos2d::CCGLProgram::setUniformLocationWith4f)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith4f, int, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith4fv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith4fv, int, float*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, int>::func(&cocos2d::CCGLProgram::setUniformLocationWith4i)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith4i, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWith4iv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWith4iv, int, int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWithMatrix3fv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWithMatrix3fv, int, float*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, unsigned int>::func(&cocos2d::CCGLProgram::setUniformLocationWithMatrix4fv)), Thiscall, cocos2d::CCGLProgram, setUniformLocationWithMatrix4fv, int, float*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::setUniformsForBuiltins)), Thiscall, cocos2d::CCGLProgram, setUniformsForBuiltins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, void*, unsigned int>::func(&cocos2d::CCGLProgram::updateUniformLocation)), Thiscall, cocos2d::CCGLProgram, updateUniformLocation, int, void*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::updateUniforms)), Thiscall, cocos2d::CCGLProgram, updateUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::use)), Thiscall, cocos2d::CCGLProgram, use, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGLProgram::vertexShaderLog)), Thiscall, cocos2d::CCGLProgram, vertexShaderLog, )
		}
	};
}
