#pragma once

#include "AstVisitor.h"
#include <string>
#include <vector>
#include <memory>

#include "types/definition.h"

namespace engine
{

    class SchemaConfig
    {
    public:
        //std::string description;
        //std::vector<types::GraphQLNamedType> types;


        static std::unique_ptr<SchemaConfig> makeConfig(std::unique_ptr<facebook::graphql::ast::Document> ast);
    };
}