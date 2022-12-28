/*
** plugin-template, 2022
** IInput.hpp by 0xMemoryGrinder
*/

#pragma once

#include <vector>
#include <string>
#include "polymorph/engine/api/plugin/Symbols.hpp"
#include "MouseEvent.hpp"
#include "KeyboardEvent.hpp"

namespace polymorph::engine::event
{

    class IInput
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            virtual ~IInput() = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            virtual void update() = 0;

            virtual std::vector<MouseEvent> getMouseEvents() = 0;
            virtual std::vector<KeyboardEvent> getKeyboardEvents() = 0;
            virtual float getMousePositionX() = 0;
            virtual float getMousePositionY() = 0;


        private:


//////////////////////--------------------------/////////////////////////

    };
}

SYMBOL_EXPORT(polymorph::engine::event, Input, IInput, ());
