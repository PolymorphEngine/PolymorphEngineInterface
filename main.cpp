#include <iostream>
#include "Core/Engine.hpp"
#include "Polymorph/Core.hpp"
#include "Polymorph/Debug.hpp"
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
        Polymorph::Engine e = Polymorph::Engine(name, path, "./Plugins/");
#ifdef _WIN32
#else
#endif
        e.loadScriptingAPI(std::make_unique<Polymorph::ScriptFactory>());
        e.loadEngine();
        return e.run() != 0 ? 84 : 0;
    }
    catch (ExceptionLogger &e)
    {
        e.what();
        return 84;
    }

}
