/*
** plugin-template, 2022
** KeyboardEvent.hpp by 0xMemoryGrinder
*/

#pragma once

#include "../Event.hpp"
#include "KeyCode.hpp"
#include "InputType.hpp"

namespace polymorph::engine::event
{
    class KeyboardEvent : Event
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            KeyboardEvent(std::string type, std::string message);

            ~KeyboardEvent() override = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:
            InputType inputType;
            KeyCode key;


        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////

    };
}
