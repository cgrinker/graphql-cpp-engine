#include "engine.h"
#include <fstream>
#include <sstream>




int main(int argc, char** argv)
{


    std::ifstream t(argv[1]);
    std::stringstream buffer;
    buffer << t.rdbuf();

    auto ast = engine::Engine::parseSchema(buffer.str());
    auto engine = engine::Engine::buildSchema(std::move(ast));
    
    return 0;
}