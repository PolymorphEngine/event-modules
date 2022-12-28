/*
** plugin-template, 2022
** InputType.hpp by 0xMemoryGrinder
*/

#pragma once

namespace polymorph::engine::event
{
    enum InputType : int
    {
        RELEASED = 1,
        PRESSED = 2,
        T_DOWN = 3,
        T_UP = 4,
        MOVED = 5,
        SCROLL = 6,
    };
}