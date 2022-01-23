#pragma once

#include <string>
#include <memory>


#include <AstNode.h>
#include <Ast.h>


#include "schema.h"

namespace engine
{
    
    class Engine
    {
    public:
        std::unique_ptr<SchemaConfig> config;
        Engine(std::unique_ptr<SchemaConfig> config);


        static std::unique_ptr<facebook::graphql::ast::Document> parseSchema(std::string& schema);
        static std::unique_ptr<Engine> buildSchema(std::unique_ptr<facebook::graphql::ast::Document> ast);
    };
} 
