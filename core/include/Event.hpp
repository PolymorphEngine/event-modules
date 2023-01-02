/*
** plugin-template, 2022
** Event.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include <utility>

namespace polymorph::engine::event
{
    class Event
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            Event(std::string type, std::string message): type(std::move(type)), message(std::move(message)) {};

            virtual ~Event() = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:
            std::string type;
            std::string message;


        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////

    };
}
