#include "engine.h"
#include "Ast.h"
#include "GraphQLParser.h"
#include "AstVisitor.h"

#include "schema.h"

using namespace engine;
using namespace facebook::graphql::ast;



Engine::Engine(std::unique_ptr<SchemaConfig> config)
    : config(std::move(config))
{

}

std::unique_ptr<Document> Engine::parseSchema(std::string& schema)
{
    const char* errorString;
    auto node = facebook::graphql::parseStringWithExperimentalSchemaSupport(schema.c_str(), &errorString);

    // if(errorString != 0) {
    //     throw std::exception()
    // }

    // return;

    //dv.

    auto *np = dynamic_cast<Document*>(node.release());
    if(np != nullptr) {
        return std::unique_ptr<Document>(np);
    }
    else {
        throw std::exception();
    }

    
}

std::unique_ptr<Engine> Engine::buildSchema(std::unique_ptr<Document> document)
{
    auto config = SchemaConfig::makeConfig(std::move(document));
    return std::make_unique<Engine>(std::move(config));
}


