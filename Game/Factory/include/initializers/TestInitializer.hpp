/*
** EPITECH PROJECT, 2020
** SpriteRendererInitializer.hpp
** File description:
** header for SpriteRendererInitializer.c
*/

#ifndef ENGINE_TESTINITIALIZER_HPP
#define ENGINE_TESTINITIALIZER_HPP

#include "polymorph/Core.hpp"
#include "../../../Scripts/include/TestComponent.hpp"

namespace polymorph::engine
{
    class TestComponent;

    class TestInitializer
            : public AComponentInitializer<TestComponent>
    {
///////////////////////////////// Constructors /////////////////////////////////

        public:
            TestInitializer(Config::XmlComponent &data,
                                      GameObject entity);

///////////////////////////--------------------------///////////////////////////



////////////////////////////////// Methods /////////////////////////////////////

        public:
            void build() final;

            void reference() final;

///////////////////////////--------------------------///////////////////////////
    };


}

#endif //ENGINE_TESTINITIALIZER_HPP
