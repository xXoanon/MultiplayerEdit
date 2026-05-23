#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4d5304
     * @note[short] MacOS (Intel): 0x589f90
     * @note[short] Windows: 0x33cc00
     * @note[short] iOS: 0x1534fc
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x4d617c
     * @note[short] MacOS (Intel): 0x58af00
     * @note[short] Windows: 0x33d1e0
     * @note[short] iOS: 0x153df0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4d6e04
     * @note[short] MacOS (Intel): 0x58bbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4da408
     * @note[short] MacOS (Intel): 0x58f7f0
     * @note[short] Windows: 0x33efc0
     * @note[short] iOS: 0x1569e0
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x4d62fc
     * @note[short] MacOS (Intel): 0x58b0b0
     * @note[short] Windows: 0x33d380
     * @note[short] iOS: 0x153ee8
     * @note[short] Android
     */
    void addMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4d6ea8
     * @note[short] MacOS (Intel): 0x58bc60
     * @note[short] Windows: 0x33da40
     * @note[short] iOS: 0x154624
     * @note[short] Android: Rebinded
     */
    SongInfoObject* addSongObjectFromString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4d96f0
     * @note[short] MacOS (Intel): 0x58e9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1560bc
     * @note[short] Android
     */
    void clearSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x4d98e4
     * @note[short] MacOS (Intel): 0x58eba0
     * @note[short] Windows: 0x33e6a0
     * @note[short] iOS: 0x15620c
     * @note[short] Android
     */
    void clearUnusedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4d85e0
     * @note[short] MacOS (Intel): 0x58d820
     * @note[short] Windows: 0x33e190
     * @note[short] iOS: 0x1557fc
     * @note[short] Android: Rebinded
     */
    cocos2d::CCDictionary* createArtistsInfo(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4d8200
     * @note[short] MacOS (Intel): 0x58d3d0
     * @note[short] Windows: 0x33dde0
     * @note[short] iOS: 0x1552c0
     * @note[short] Android: Rebinded
     */
    void createSongsInfo(gd::string songsStr, gd::string artistsStr);

    /**
     * @note[short] MacOS (ARM): 0x4db168
     * @note[short] MacOS (Intel): 0x5906f0
     * @note[short] Windows: 0x33fa20
     * @note[short] iOS: 0x157124
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e096c
     * @note[short] MacOS (Intel): 0x596ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ae4c
     * @note[short] Android
     */
    void deleteSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d9690
     * @note[short] MacOS (Intel): 0x58e9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15606c
     * @note[short] Android
     */
    void deleteSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d9e64
     * @note[short] MacOS (Intel): 0x58f200
     * @note[short] Windows: 0x340310
     * @note[short] iOS: 0x1565e0
     * @note[short] Android
     */
    void downloadCustomSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4dc2e8
     * @note[short] MacOS (Intel): 0x591ac0
     * @note[short] Windows: 0x340940
     * @note[short] iOS: 0x157ce8
     * @note[short] Android
     */
    void downloadMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4decf8
     * @note[short] MacOS (Intel): 0x594c10
     * @note[short] Windows: 0x342240
     * @note[short] iOS: 0x1598ec
     * @note[short] Android
     */
    void downloadSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4df208
     * @note[short] MacOS (Intel): 0x595150
     * @note[short] Windows: 0x3445b0
     * @note[short] iOS: 0x159ca0
     * @note[short] Android
     */
    void downloadSFXFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x4df27c
     * @note[short] MacOS (Intel): 0x5951c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159d14
     * @note[short] Android
     */
    void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x4df638
     * @note[short] MacOS (Intel): 0x595570
     * @note[short] Windows: 0x3429e0
     * @note[short] iOS: 0x15a034
     * @note[short] Android
     */
    void downloadSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4d9a2c
     * @note[short] MacOS (Intel): 0x58ed00
     * @note[short] Windows: 0x33ea20
     * @note[short] iOS: 0x15631c
     * @note[short] Android
     */
    void downloadSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da508
     * @note[short] MacOS (Intel): 0x58f8e0
     * @note[short] Windows: 0x344530
     * @note[short] iOS: 0x156a4c
     * @note[short] Android
     */
    void downloadSongFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x4da57c
     * @note[short] MacOS (Intel): 0x58f950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x156ac0
     * @note[short] Android
     */
    void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d99b4
     * @note[short] MacOS (Intel): 0x58ec80
     * @note[short] Windows: 0x33e9a0
     * @note[short] iOS: 0x1562ac
     * @note[short] Android
     */
    void downloadSongStarted(int id);

    /**
     * @note[short] MacOS (ARM): 0x4db110
     * @note[short] MacOS (Intel): 0x590690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1570cc
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4de980
     * @note[short] MacOS (Intel): 0x5947e0
     * @note[short] Windows: 0x3420e0
     * @note[short] iOS: 0x15970c
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByArtistID(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x4dead8
     * @note[short] MacOS (Intel): 0x594a00
     * @note[short] Windows: 0x342190
     * @note[short] iOS: 0x1597a4
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByTag(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x4db0a8
     * @note[short] MacOS (Intel): 0x590630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x157094
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4db980
     * @note[short] MacOS (Intel): 0x590f80
     * @note[short] Windows: 0x343aa0
     * @note[short] iOS: 0x1575dc
     * @note[short] Android: Rebinded
     */
    gd::string generateCustomContentURL(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x4d6250
     * @note[short] MacOS (Intel): 0x58aff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x153e3c
     * @note[short] Android
     */
    void generateResourceAssetList();

    /**
     * @note[short] MacOS (ARM): 0x4de874
     * @note[short] MacOS (Intel): 0x5946c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159604
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicArtists(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4de678
     * @note[short] MacOS (Intel): 0x5944a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159458
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicObjects(GJSongType type);

    /**
     * @note[short] MacOS (ARM): 0x4de720
     * @note[short] MacOS (Intel): 0x594560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1594cc
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicTags(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4e08c4
     * @note[short] MacOS (Intel): 0x596a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15addc
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSFXObjects(bool onlySFX);

    /**
     * @note[short] MacOS (ARM): 0x4d950c
     * @note[short] MacOS (Intel): 0x58e800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155f94
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSongs();

    /**
     * @note[short] MacOS (ARM): 0x4db728
     * @note[short] MacOS (Intel): 0x590d30
     * @note[short] Windows: 0x33ff10
     * @note[short] iOS: 0x1573f8
     * @note[short] Android
     */
    void getCustomContentURL();

    /**
     * @note[short] MacOS (ARM): 0x4d65c0
     * @note[short] MacOS (Intel): 0x58b350
     * @note[short] Windows: 0x39d70
     * @note[short] iOS: 0x1540c4
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x4d9208
     * @note[short] MacOS (Intel): 0x58e4b0
     * @note[short] Windows: 0x33e5e0
     * @note[short] iOS: 0x155e10
     * @note[short] Android
     */
    cocos2d::CCArray* getDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4da5e8
     * @note[short] MacOS (Intel): 0x58f9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x156b2c
     * @note[short] Android
     */
    int getDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x4de664
     * @note[short] MacOS (Intel): 0x594480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159444
     * @note[short] Android
     */
    MusicArtistObject* getMusicArtistForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da6d0
     * @note[short] MacOS (Intel): 0x58fa80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    SongInfoObject* getMusicObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da6a8
     * @note[short] MacOS (Intel): 0x58fa60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSFXDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da648
     * @note[short] MacOS (Intel): 0x58fa10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x156b80
     * @note[short] Android
     */
    int getSFXDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e062c
     * @note[short] MacOS (Intel): 0x5966d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ac90
     * @note[short] Android
     */
    SFXFolderObject* getSFXFolderObjectForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e07f8
     * @note[short] MacOS (Intel): 0x596950
     * @note[short] Windows: 0x343880
     * @note[short] iOS: 0x15acfc
     * @note[short] Android
     */
    gd::string getSFXFolderPathForID(int id, bool nextFolder);

    /**
     * @note[short] MacOS (ARM): 0x4e0618
     * @note[short] MacOS (Intel): 0x5966b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ac7c
     * @note[short] Android
     */
    SFXInfoObject* getSFXObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d653c
     * @note[short] MacOS (Intel): 0x58b2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d6990
     * @note[short] MacOS (Intel): 0x58b700
     * @note[short] Windows: 0x33d5d0
     * @note[short] iOS: 0x1542e8
     * @note[short] Android
     */
    void getSongInfo(int id, bool download);

    /**
     * @note[short] MacOS (ARM): 0x4d6514
     * @note[short] MacOS (Intel): 0x58b2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d684c
     * @note[short] MacOS (Intel): 0x58b5a0
     * @note[short] Windows: 0x33f140
     * @note[short] iOS: 0x154224
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d697c
     * @note[short] MacOS (Intel): 0x58b6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSongPriority();

    /**
     * @note[short] MacOS (ARM): 0x4d5818
     * @note[short] MacOS (Intel): 0x58a560
     * @note[short] Windows: 0x33d0f0
     * @note[short] iOS: 0x15392c
     * @note[short] Android: Rebinded
     */
    void handleIt(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x4d5a08
     * @note[short] MacOS (Intel): 0x58a730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x4d5b74
     * @note[short] MacOS (Intel): 0x58a870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0x4d6818
     * @note[short] MacOS (Intel): 0x58b570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1541f0
     * @note[short] Android
     */
    void incrementPriorityForSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d64f8
     * @note[short] MacOS (Intel): 0x58b2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4ddfc0
     * @note[short] MacOS (Intel): 0x593ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4dac18
     * @note[short] MacOS (Intel): 0x5900f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da6e4
     * @note[short] MacOS (Intel): 0x58faa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d6470
     * @note[short] MacOS (Intel): 0x58b230
     * @note[short] Windows: 0x33d4f0
     * @note[short] iOS: 0x153fec
     * @note[short] Android
     */
    bool isRunningActionForSongID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da9ac
     * @note[short] MacOS (Intel): 0x58fe40
     * @note[short] Windows: 0x33f580
     * @note[short] iOS: 0x156cf4
     * @note[short] Android
     */
    bool isSFXDownloaded(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e0334
     * @note[short] MacOS (Intel): 0x5963e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4d92a0
     * @note[short] MacOS (Intel): 0x58e550
     * @note[short] Windows: 0x33f250
     * @note[short] iOS: 0x155ea4
     * @note[short] Android
     */
    bool isSongDownloaded(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d955c
     * @note[short] MacOS (Intel): 0x58e860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155fe4
     * @note[short] Android
     */
    void limitDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4d6e34
     * @note[short] MacOS (Intel): 0x58bbf0
     * @note[short] Windows: 0x3444b0
     * @note[short] iOS: 0x1545b0
     * @note[short] Android
     */
    void loadSongInfoFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x4d6d98
     * @note[short] MacOS (Intel): 0x58bb50
     * @note[short] Windows: 0x344430
     * @note[short] iOS: 0x154544
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4db8a8
     * @note[short] MacOS (Intel): 0x590ea0
     * @note[short] Windows: 0x3446b0
     * @note[short] iOS: 0x157504
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x4db914
     * @note[short] MacOS (Intel): 0x590f10
     * @note[short] Windows: 0x344630
     * @note[short] iOS: 0x157570
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x4debac
     * @note[short] MacOS (Intel): 0x594ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159838
     * @note[short] Android
     */
    gd::string nameForTagID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4dc4e8
     * @note[short] MacOS (Intel): 0x591cb0
     * @note[short] Windows: 0x340bd0
     * @note[short] iOS: 0x157ec4
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4defd0
     * @note[short] MacOS (Intel): 0x594f00
     * @note[short] Windows: 0x3424a0
     * @note[short] iOS: 0x159b5c
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4df814
     * @note[short] MacOS (Intel): 0x595720
     * @note[short] Windows: 0x342c40
     * @note[short] iOS: 0x15a210
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4da190
     * @note[short] MacOS (Intel): 0x58f540
     * @note[short] Windows: 0x33ed20
     * @note[short] iOS: 0x15685c
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4d5f28
     * @note[short] MacOS (Intel): 0x58ac30
     * @note[short] Windows: 0x340180
     * @note[short] iOS: 0x153c64
     * @note[short] Android: Rebinded
     */
    void onGetCustomContentURLCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4d5c98
     * @note[short] MacOS (Intel): 0x58a990
     * @note[short] Windows: 0x33d8b0
     * @note[short] iOS: 0x153aec
     * @note[short] Android: Rebinded
     */
    void onGetSongInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4d5508
     * @note[short] MacOS (Intel): 0x58a230
     * @note[short] Windows: 0x33cff0
     * @note[short] iOS: 0x1536f4
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4dc198
     * @note[short] MacOS (Intel): 0x591970
     * @note[short] Windows: 0x340810
     * @note[short] iOS: 0x157c10
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4df4e8
     * @note[short] MacOS (Intel): 0x595420
     * @note[short] Windows: 0x3428a0
     * @note[short] iOS: 0x159f5c
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x4dc714
     * @note[short] MacOS (Intel): 0x591f00
     * @note[short] Windows: 0x340d80
     * @note[short] iOS: 0x158000
     * @note[short] Android
     */
    void parseMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4df9e4
     * @note[short] MacOS (Intel): 0x5958f0
     * @note[short] Windows: 0x342dd0
     * @note[short] iOS: 0x15a32c
     * @note[short] Android
     */
    void parseSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4dacfc
     * @note[short] MacOS (Intel): 0x590230
     * @note[short] Windows: 0x33f800
     * @note[short] iOS: 0x156de4
     * @note[short] Android
     */
    gd::string pathForSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4dade0
     * @note[short] MacOS (Intel): 0x5902f0
     * @note[short] Windows: 0x33f6b0
     * @note[short] iOS: 0x156eb0
     * @note[short] Android
     */
    gd::string pathForSFXFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d97f8
     * @note[short] MacOS (Intel): 0x58eae0
     * @note[short] Windows: 0x33f4d0
     * @note[short] iOS: 0x156138
     * @note[short] Android
     */
    gd::string pathForSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da7c8
     * @note[short] MacOS (Intel): 0x58fbe0
     * @note[short] Windows: 0x33f380
     * @note[short] iOS: 0x156bd4
     * @note[short] Android
     */
    gd::string pathForSongFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d56f8
     * @note[short] MacOS (Intel): 0x58a3f0
     * @note[short] Windows: 0x33ced0
     * @note[short] iOS: 0x15380c
     * @note[short] Android: Rebinded
     */
    cocos2d::extension::CCHttpRequest* ProcessHttpGetRequest(gd::string url, gd::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout);

    /**
     * @note[short] MacOS (ARM): 0x4d53c8
     * @note[short] MacOS (Intel): 0x58a0a0
     * @note[short] Windows: 0x33cd90
     * @note[short] iOS: 0x1535b4
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x4d66c4
     * @note[short] MacOS (Intel): 0x58b430
     * @note[short] Windows: 0x33f090
     * @note[short] iOS: 0x154130
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4d63f0
     * @note[short] MacOS (Intel): 0x58b1a0
     * @note[short] Windows: 0x33d460
     * @note[short] iOS: 0x153f6c
     * @note[short] Android
     */
    void removeMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4d7148
     * @note[short] MacOS (Intel): 0x58bf00
     * @note[short] Windows: 0x33e390
     * @note[short] iOS: 0x1547d0
     * @note[short] Android: Rebinded
     */
    cocos2d::CCDictionary* responseToDict(gd::string response, char const* delimiter);

    /**
     * @note[short] MacOS (ARM): 0x4dafc4
     * @note[short] MacOS (Intel): 0x590550
     * @note[short] Windows: 0x33f8c0
     * @note[short] iOS: 0x156fd0
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4d67bc
     * @note[short] MacOS (Intel): 0x58b510
     * @note[short] Windows: 0x33d570
     * @note[short] iOS: 0x154194
     * @note[short] Android
     */
    void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x4d6564
     * @note[short] MacOS (Intel): 0x58b300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x154068
     * @note[short] Android
     */
    void stopDownload(int id);

    /**
     * @note[short] MacOS (ARM): 0x4de658
     * @note[short] MacOS (Intel): 0x594460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeMusicObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e0358
     * @note[short] MacOS (Intel): 0x596400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a9c8
     * @note[short] Android
     */
    void storeSFXInfoObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e05a8
     * @note[short] MacOS (Intel): 0x596640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ac18
     * @note[short] Android
     */
    void tryLoadLibraries();

    /**
     * @note[short] MacOS (ARM): 0x4dbf98
     * @note[short] MacOS (Intel): 0x591780
     * @note[short] Windows: 0x340580
     * @note[short] iOS: 0x157a34
     * @note[short] Android
     */
    void tryUpdateMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4df2e8
     * @note[short] MacOS (Intel): 0x595230
     * @note[short] Windows: 0x342600
     * @note[short] iOS: 0x159d80
     * @note[short] Android
     */
    void tryUpdateSFXLibrary();
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    gd::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    gd::map<int, gd::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    int m_ncsSongCount;
    bool m_downloadingMusicLibrary;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    gd::unordered_set<int> m_resourceSfxUnorderedSet;
    gd::unordered_set<int> m_resourceSongUnorderedSet;
};
