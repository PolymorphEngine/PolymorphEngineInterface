/*
** EPITECH PROJECT, 2020
** SpriteRenderComponent.hpp
** File description:
** header for SpriteRenderComponent.c
*/

#ifndef ENGINE_TESTCOMPONENT_HPP
#define ENGINE_TESTCOMPONENT_HPP


#include "polymorph/Core.hpp"
#include "polymorph/input.hpp"
#include "polymorph/render-2D.hpp"

namespace polymorph::engine
{
    class TestComponent;

    using Test = safe_ptr<TestComponent>;
    using TestBase = std::shared_ptr<TestComponent>;

    class TestComponent : public Component, public event::IKeyboardHandler
    {
        public:
            explicit TestComponent(GameObject gameObject);

            void onKeyEvent(event::KeyboardEvent &event) override;

            void update() override;

            void start() override;

        public:
            TextRenderer text;


        public:
            int _hitCount = 0;

    };
}

#endif //ENGINE_TESTCOMPONENT_HPP
