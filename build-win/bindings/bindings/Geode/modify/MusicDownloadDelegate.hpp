#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongStarted
		#define GEODE_CONCEPT_CHECK_downloadSongStarted
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongStarted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadDelegate> : ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>::ModifyBase;
		using Base = MusicDownloadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, loadSongInfoFinished, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, loadSongInfoFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, downloadSongStarted, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, downloadSongFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadDelegate, musicActionFailed, GJMusicAction)
		}
	};
}
