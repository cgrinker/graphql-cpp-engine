#include "schema.h"

#include <iostream>
#include <map>

using namespace engine;
using namespace facebook::graphql::ast;

std::unique_ptr<SchemaConfig> SchemaConfig::makeConfig(std::unique_ptr<Document> ast)
{
  

    auto& defs = ast->getDefinitions();
    std::map<std::string, facebook::graphql::ast::Definition> typeMap;

    // First Pass for Forward Declarations;
    for(auto& it: defs)
    {
        if(auto n = dynamic_cast<ObjectTypeDefinition*>(it.get()))
        {
            auto name = n->getName().getValue();
            defs[std::string(name)] = n;
            std::cout << name;
        }
        else if(auto n = dynamic_cast<InputObjectTypeDefinition*>(it.get()))
        {
            auto name = n->getName().getValue();
            std::cout << name;
        }
        else if(auto n = dynamic_cast<ScalarTypeDefinition*>(it.get()))
        {
            auto name = n->getName().getValue();
            std::cout << name;
        }
    }

    for(auto& it: defs)
    {
        
        // if(it.get())
        int i = 0;
        i += 1;
        //it->
    }

    return std::make_unique<SchemaConfig>();
}