#pragma once

#include <variant>

namespace engine {
namespace types {

    struct GraphQLNamedInputType {};
    struct GraphQLNamedOutputType {};

    typedef std::variant<GraphQLNamedInputType, GraphQLNamedOutputType> GraphQLNamedType;


    

}}