/*
** EPITECH PROJECT, 2020
** SpriteRendererComponent.cpp
** File description:
** SpriteRendererComponent.cpp
*/

#include <polymorph/Core.hpp>
#include <polymorph/Types.hpp>
#include "../include/TestComponent.hpp"
#include "polymorph/render-2D.hpp"

namespace polymorph::engine
{

    TestComponent::TestComponent(GameObject gameObject)
            : Component("Test", gameObject)
    {

    }

    void TestComponent::onKeyEvent(event::KeyboardEvent &event)
    {
        if (event.key == event::KeyCode::ENTER && event.inputType == event::InputType::PRESSED) {
            _hitCount++;
            std::string msg = "Key enter pressed "+std::to_string(_hitCount)+" times";
            //text->text->setString(msg);
            Debug.log("Key enter pressed.");
        }
    }

    void TestComponent::update()
    {
        
    }

    void TestComponent::start()
    {
        text = getComponent<TextRendererComponent>();
        //text->text->setString("Key enter pressed 0 times");
    }
}