/*
** plugin-template, 2022
** MouseEvent.cpp by 0xMemoryGrinder
*/


#include "input/MouseEvent.hpp"

polymorph::engine::event::MouseEvent::MouseEvent(std::string type, std::string message)
    : Event(std::move(type), std::move(message))
{}
