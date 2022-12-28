/*
** plugin-template, 2022
** Event.cpp by 0xMemoryGrinder
*/


#include "Event.hpp"

polymorph::engine::event::Event::Event(std::string type, std::string message)
    : type(std::move(type)), message(std::move(message))
{}
