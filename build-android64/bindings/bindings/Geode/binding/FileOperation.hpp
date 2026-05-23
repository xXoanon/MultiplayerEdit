#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FileOperation {
public:
    static constexpr auto CLASS_NAME = "FileOperation";

    /**
     * @note[short] MacOS (ARM): 0x549120
     * @note[short] MacOS (Intel): 0x625ab0
     * @note[short] Android
     */
    static gd::string getFilePath();

    /**
     * @note[short] MacOS (ARM): 0x54912c
     * @note[short] MacOS (Intel): 0x625ac0
     * @note[short] Android
     */
    static void readFile();

    /**
     * @note[short] MacOS (ARM): 0x54908c
     * @note[short] MacOS (Intel): 0x625a40
     * @note[short] Android
     */
    static void saveFile();
};
