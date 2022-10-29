#include <iostream>
#include "Core/Engine.hpp"
#include "polymorph/Core.hpp"
#include "polymorph/Debug.hpp"
#include "ScriptFactory.hpp"

int main() {
#ifdef _WIN32
    std::string path = R"(.\R-TypeClient\Game\Assets)";
    std::string name = "R-TypeClient";
#else
    std::string path = "./Game/Assets";
    std::string name = "R-TypeClient";
#endif
    try
    {
        polymorph::engine::Engine e = polymorph::engine::Engine(name, path, "./Plugins/");
#ifdef _WIN32
#else
#endif
        e.loadScriptingAPI(std::make_unique<polymorph::engine::ScriptFactory>());
        e.loadEngine();
        return e.run() != 0 ? 84 : 0;
    }
    catch (polymorph::engine::ExceptionLogger &e)
    {
        e.what();
        return 84;
    }

}
