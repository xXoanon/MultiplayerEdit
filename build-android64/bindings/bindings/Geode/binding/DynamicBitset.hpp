#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DynamicBitset {
public:
    static constexpr auto CLASS_NAME = "DynamicBitset";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3a4d00
     * @note[short] iOS: 0x123ad4
     * @note[short] Android: Out of line
     */
    void resize(size_t size);
    gd::vector<unsigned int> m_bits;
};
