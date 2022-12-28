/*
** plugin-template, 2022
** KeyboardEvent.cpp by 0xMemoryGrinder
*/


#include "input/KeyboardEvent.hpp"

polymorph::engine::event::KeyboardEvent::KeyboardEvent(std::string type, std::string message)
    : Event(std::move(type), std::move(message))
{}
