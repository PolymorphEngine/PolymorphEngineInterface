/*
** EPITECH PROJECT, 2020
** ObjectFactory.cpp
** File description:
** ObjectFactory.cpp
*/

#include "../include/ObjectFactory.hpp"

std::shared_ptr<polymorph::engine::ASerializableObject>
polymorph::engine::ObjectFactory::createS(std::string type,
                                          std::shared_ptr<myxmlpp::Node> &data,
                                          polymorph::engine::Config::XmlComponent &manager, PluginManager &Plugins)
{
    return _factoriesS[type](data, manager, Plugins);
}
std::shared_ptr<polymorph::engine::ASerializableObject>
polymorph::engine::ObjectFactory::createEmpty(std::string type,
                                          PluginManager &Plugins)
{
    return _factoriesE[type](Plugins);
}

bool polymorph::engine::ObjectFactory::hasType(std::string &type)
{
    return _factoriesS.find(type) != _factoriesS.end();
}
