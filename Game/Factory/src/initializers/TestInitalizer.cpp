/*
** EPITECH PROJECT, 2020
** TestInitalizer.cpp
** File description:
** TestInitalizer.cpp
*/

#include <polymorph/Core.hpp>
#include <polymorph/Config.hpp>
#include "../../include/initializers/TestInitializer.hpp"


using namespace polymorph::engine;

TestInitializer::TestInitializer(Config::XmlComponent &data, GameObject entity)
        : AComponentInitializer("Test", data, entity)
{

}

void TestInitializer::build()
{
}

void TestInitializer::reference()
{

}
