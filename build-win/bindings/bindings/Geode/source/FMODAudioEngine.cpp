
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

FMODAudioEngine::FMODAudioEngine() : FMODAudioEngine(geode::CutoffConstructor, sizeof(FMODAudioEngine)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	FMODAudioEngine::~FMODAudioEngine();

	using FunctionType = void(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53100, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::pitchForIdx(int index) -> decltype(pitchForIdx(index)) {
	using FunctionType = decltype(pitchForIdx(index))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(index);
}

auto FMODAudioEngine::reverbToString(FMODReverbPreset preset) -> decltype(reverbToString(preset)) {
	using FunctionType = decltype(reverbToString(preset))(*)(FMODReverbPreset);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(preset);
}

auto FMODAudioEngine::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&FMODAudioEngine::update), this);
	using FunctionType = decltype(update(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x553c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto FMODAudioEngine::channelForChannelID(int id) -> decltype(channelForChannelID(id)) {
	using FunctionType = decltype(channelForChannelID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelIDForUniqueID(int id) -> decltype(channelIDForUniqueID(id)) {
	using FunctionType = decltype(channelIDForUniqueID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelStopped(FMOD::Channel* channel, bool remove) -> decltype(channelStopped(channel, remove)) {
	using FunctionType = decltype(channelStopped(channel, remove))(*)(FMODAudioEngine*, FMOD::Channel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, remove);
}

auto FMODAudioEngine::channelUnlinkSound(int id) -> decltype(channelUnlinkSound(id)) {
	using FunctionType = decltype(channelUnlinkSound(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::clearAllAudio() -> decltype(clearAllAudio()) {
	using FunctionType = decltype(clearAllAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::createStream(gd::string path) -> decltype(createStream(path)) {
	using FunctionType = decltype(createStream(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::fadeInMusic(float duration, int channel) -> decltype(fadeInMusic(duration, channel)) {
	using FunctionType = decltype(fadeInMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::fadeMusic(float duration, int channel, float startVolume, float endVolume) -> decltype(fadeMusic(duration, channel, startVolume, endVolume)) {
	using FunctionType = decltype(fadeMusic(duration, channel, startVolume, endVolume))(*)(FMODAudioEngine*, float, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel, startVolume, endVolume);
}

auto FMODAudioEngine::fadeOutMusic(float duration, int channel) -> decltype(fadeOutMusic(duration, channel)) {
	using FunctionType = decltype(fadeOutMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::getChannelGroup(int id, bool reverb) -> decltype(getChannelGroup(id, reverb)) {
	using FunctionType = decltype(getChannelGroup(id, reverb))(*)(FMODAudioEngine*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, reverb);
}

auto FMODAudioEngine::getFMODStatus(int unused) -> decltype(getFMODStatus(unused)) {
	using FunctionType = decltype(getFMODStatus(unused))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto FMODAudioEngine::getMusicLengthMS(int channel) -> decltype(getMusicLengthMS(channel)) {
	using FunctionType = decltype(getMusicLengthMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::getMusicTimeMS(int channel) -> decltype(getMusicTimeMS(channel)) {
	using FunctionType = decltype(getMusicTimeMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::isMusicPlaying(int musicID) -> decltype(isMusicPlaying(musicID)) {
	using FunctionType = decltype(isMusicPlaying(musicID))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID);
}

auto FMODAudioEngine::isMusicPlaying(gd::string path, int musicID) -> decltype(isMusicPlaying(path, musicID)) {
	using FunctionType = decltype(isMusicPlaying(path, musicID))(*)(FMODAudioEngine*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, musicID);
}

auto FMODAudioEngine::isPersistentMatchPlaying(gd::string path, int musicID) -> decltype(isPersistentMatchPlaying(path, musicID)) {
	using FunctionType = decltype(isPersistentMatchPlaying(path, musicID))(*)(FMODAudioEngine*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, musicID);
}

auto FMODAudioEngine::lengthForSound(gd::string path) -> decltype(lengthForSound(path)) {
	using FunctionType = decltype(lengthForSound(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::loadAndPlayMusic(gd::string path, unsigned int time, int musicID) -> decltype(loadAndPlayMusic(path, time, musicID)) {
	using FunctionType = decltype(loadAndPlayMusic(path, time, musicID))(*)(FMODAudioEngine*, gd::string, unsigned int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, time, musicID);
}

auto FMODAudioEngine::loadAudioState(FMODAudioState& state) -> decltype(loadAudioState(state)) {
	using FunctionType = decltype(loadAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::loadMusic(gd::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset) -> decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset)) {
	using FunctionType = decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset))(*)(FMODAudioEngine*, gd::string, float, float, float, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset);
}

auto FMODAudioEngine::playEffect(gd::string path) -> decltype(playEffect(path)) {
	using FunctionType = decltype(playEffect(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::playEffect(gd::string path, float speed, float unknown, float volume) -> decltype(playEffect(path, speed, unknown, volume)) {
	using FunctionType = decltype(playEffect(path, speed, unknown, volume))(*)(FMODAudioEngine*, gd::string, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume);
}

auto FMODAudioEngine::playEffectAdvanced(gd::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup) -> decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup)) {
	using FunctionType = decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup))(*)(FMODAudioEngine*, gd::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup);
}

auto FMODAudioEngine::playMusic(gd::string path, bool shouldLoop, float fadeInTime, int channel) -> decltype(playMusic(path, shouldLoop, fadeInTime, channel)) {
	using FunctionType = decltype(playMusic(path, shouldLoop, fadeInTime, channel))(*)(FMODAudioEngine*, gd::string, bool, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, shouldLoop, fadeInTime, channel);
}

auto FMODAudioEngine::preloadEffect(gd::string path) -> decltype(preloadEffect(path)) {
	using FunctionType = decltype(preloadEffect(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadEffectAsync(gd::string path) -> decltype(preloadEffectAsync(path)) {
	using FunctionType = decltype(preloadEffectAsync(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadMusic(gd::string path, bool noRelease, int musicID) -> decltype(preloadMusic(path, noRelease, musicID)) {
	using FunctionType = decltype(preloadMusic(path, noRelease, musicID))(*)(FMODAudioEngine*, gd::string, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, noRelease, musicID);
}

auto FMODAudioEngine::queuedEffectFinishedLoading(gd::string path) -> decltype(queuedEffectFinishedLoading(path)) {
	using FunctionType = decltype(queuedEffectFinishedLoading(path))(*)(FMODAudioEngine*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::queuePlayEffect(gd::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group) -> decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group)) {
	using FunctionType = decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group))(*)(FMODAudioEngine*, gd::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group);
}

auto FMODAudioEngine::queueStartMusic(gd::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset) -> decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset)) {
	using FunctionType = decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset))(*)(FMODAudioEngine*, gd::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset);
}

auto FMODAudioEngine::registerChannel(FMOD::Channel* channel, int channelID, int effectID) -> decltype(registerChannel(channel, channelID, effectID)) {
	using FunctionType = decltype(registerChannel(channel, channelID, effectID))(*)(FMODAudioEngine*, FMOD::Channel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, channelID, effectID);
}

auto FMODAudioEngine::resumeAllMusic() -> decltype(resumeAllMusic()) {
	using FunctionType = decltype(resumeAllMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::saveAudioState(FMODAudioState& state) -> decltype(saveAudioState(state)) {
	using FunctionType = decltype(saveAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::setChannelPitch(int id, AudioTargetType type, float pitch) -> decltype(setChannelPitch(id, type, pitch)) {
	using FunctionType = decltype(setChannelPitch(id, type, pitch))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, pitch);
}

auto FMODAudioEngine::setChannelVolume(int id, AudioTargetType type, float volume) -> decltype(setChannelVolume(id, type, volume)) {
	using FunctionType = decltype(setChannelVolume(id, type, volume))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, volume);
}

auto FMODAudioEngine::setChannelVolumeMod(int id, AudioTargetType type, float volumeMod) -> decltype(setChannelVolumeMod(id, type, volumeMod)) {
	using FunctionType = decltype(setChannelVolumeMod(id, type, volumeMod))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, volumeMod);
}

auto FMODAudioEngine::setMusicTimeMS(unsigned int time, bool dontWait, int musicID) -> decltype(setMusicTimeMS(time, dontWait, musicID)) {
	using FunctionType = decltype(setMusicTimeMS(time, dontWait, musicID))(*)(FMODAudioEngine*, unsigned int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, time, dontWait, musicID);
}

auto FMODAudioEngine::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::setupAudioEngine() -> decltype(setupAudioEngine()) {
	using FunctionType = decltype(setupAudioEngine())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::start() -> decltype(start()) {
	using FunctionType = decltype(start())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x552b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset) -> decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset)) {
	using FunctionType = decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset))(*)(FMODAudioEngine*, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset);
}

auto FMODAudioEngine::stopAllEffects() -> decltype(stopAllEffects()) {
	using FunctionType = decltype(stopAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::stopAllMusic(bool clear) -> decltype(stopAllMusic(clear)) {
	using FunctionType = decltype(stopAllMusic(clear))(*)(FMODAudioEngine*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, clear);
}

auto FMODAudioEngine::stopAndGetFade(FMOD::Channel* channel) -> decltype(stopAndGetFade(channel)) {
	using FunctionType = decltype(stopAndGetFade(channel))(*)(FMODAudioEngine*, FMOD::Channel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::stopAndRemoveMusic(int id) -> decltype(stopAndRemoveMusic(id)) {
	using FunctionType = decltype(stopAndRemoveMusic(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::stopChannel(FMOD::Channel* channel, bool loop, float delay) -> decltype(stopChannel(channel, loop, delay)) {
	using FunctionType = decltype(stopChannel(channel, loop, delay))(*)(FMODAudioEngine*, FMOD::Channel*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, loop, delay);
}

auto FMODAudioEngine::stopChannel(int id, AudioTargetType type, bool loop, float delay) -> decltype(stopChannel(id, type, loop, delay)) {
	using FunctionType = decltype(stopChannel(id, type, loop, delay))(*)(FMODAudioEngine*, int, AudioTargetType, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, loop, delay);
}

auto FMODAudioEngine::storeEffect(FMOD::Sound* sound, gd::string path) -> decltype(storeEffect(sound, path)) {
	using FunctionType = decltype(storeEffect(sound, path))(*)(FMODAudioEngine*, FMOD::Sound*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sound, path);
}

auto FMODAudioEngine::swapMusicIndex(int musicID, int channelID) -> decltype(swapMusicIndex(musicID, channelID)) {
	using FunctionType = decltype(swapMusicIndex(musicID, channelID))(*)(FMODAudioEngine*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bd10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID, channelID);
}

auto FMODAudioEngine::triggerQueuedMusic(FMODQueuedMusic music) -> decltype(triggerQueuedMusic(music)) {
	using FunctionType = decltype(triggerQueuedMusic(music))(*)(FMODAudioEngine*, FMODQueuedMusic);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, music);
}

auto FMODAudioEngine::unloadAllEffects() -> decltype(unloadAllEffects()) {
	using FunctionType = decltype(unloadAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::unregisterChannel(int id) -> decltype(unregisterChannel(id)) {
	using FunctionType = decltype(unregisterChannel(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value) -> decltype(updateChannel(channel, target, mod, duration, value)) {
	using FunctionType = decltype(updateChannel(channel, target, mod, duration, value))(*)(FMODAudioEngine*, int, AudioTargetType, AudioModType, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, target, mod, duration, value);
}

auto FMODAudioEngine::updateChannelTweens(float dt) -> decltype(updateChannelTweens(dt)) {
	using FunctionType = decltype(updateChannelTweens(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto FMODAudioEngine::updateQueuedEffects() -> decltype(updateQueuedEffects()) {
	using FunctionType = decltype(updateQueuedEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateQueuedMusic() -> decltype(updateQueuedMusic()) {
	using FunctionType = decltype(updateQueuedMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateReverb(FMODReverbPreset preset, bool force) -> decltype(updateReverb(preset, force)) {
	using FunctionType = decltype(updateReverb(preset, force))(*)(FMODAudioEngine*, FMODReverbPreset, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, preset, force);
}

auto FMODAudioEngine::updateTemporaryEffects() -> decltype(updateTemporaryEffects()) {
	using FunctionType = decltype(updateTemporaryEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
