/*
** plugin-template, 2022
** MouseEvent.hpp by 0xMemoryGrinder
*/

#pragma once

#include "../Event.hpp"
#include "MouseButton.hpp"
#include "InputType.hpp"
#include "polymorph/engine/types/vector/Vector2.hpp"

namespace polymorph::engine::event
{
    class MouseEvent : public Event
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            MouseEvent(std::string type, std::string message) : Event(std::move(type), std::move(message)) {};

            ~MouseEvent() = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:
            InputType inputType;
            MouseButton button;
            float moved = 0.0f;
            engine::Vector2 position;

        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////

    };
}
