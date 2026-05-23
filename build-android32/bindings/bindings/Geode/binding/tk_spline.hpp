#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class tk_spline {
public:
    static constexpr auto CLASS_NAME = "tk_spline";
    gd::vector<double> m_x;
    gd::vector<double> m_y;
    gd::vector<double> m_b;
    gd::vector<double> m_c;
    gd::vector<double> m_d;
    double m_c0;
    int m_type;
    int m_left;
    int m_right;
    double m_leftValue;
    double m_rightValue;
    bool m_madeMonotonic;
};
