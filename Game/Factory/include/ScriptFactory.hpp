/*
** EPITECH PROJECT, 2022
** ScriptFactory.hpp
** File description:
** header for ScriptFactory.cpp
*/

#pragma once

#include "polymorph/Core.hpp"

//@Initalizers
//${INITIALIZERS_INCLUDES}
#include "initializers/TestInitializer.hpp"


//@Scripts
//${SCRIPTS_INCLUDES}


namespace polymorph::engine
{
    class ScriptFactory : public IScriptFactory
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////
        public:
            ~ScriptFactory() override = default;


//////////////////////--------------------------/////////////////////////

//Builder template : {"${SCRIPT_NAME}", [](Config::XmlComponent &data, GameObject entity) -> Initializer{ return Initializer(new ${SCRIPT_NAME}Initializer(data, entity));}},

///////////////////////////// PROPERTIES ////////////////////////////////
        private:
            using FactoryLambda = std::function<Initializer (Config::XmlComponent &data, GameObject entity)>;
            using F = auto (Config::XmlComponent &data, GameObject entity) -> Initializer;
            const std::map<std::string, FactoryLambda>
                _buildables =
                {
                    SCRIPT(Test)
                    //${BUILDERS}
                };
//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            Initializer create(std::string &type, Config::XmlComponent &data,
            GameObject entity) override;
            bool hasType(std::string &type) final;
//////////////////////--------------------------/////////////////////////

    };
}



