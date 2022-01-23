
cc_library(
    name = "engine",
    hdrs = glob([
        "src/engine/**/*.h*"
    ]),
    includes = ["src/engine"],
    deps = [
        "@graphqlparser//:libgraphql",
    ],
    srcs = glob([
        "src/engine/**/*.c*"
    ]),
    copts = select({
        "@bazel_tools//src/conditions:windows": ["/std:c++17"],
        "//conditions:default": ["-std=c++17"],
    }),
)


cc_binary(
    name = "cli",
    deps = [
        ":engine"
    ],

    srcs = glob([
        "src/cli/**/*.h*",

        "src/cli/**/*.c*"
    ]),
    copts = select({
        "@bazel_tools//src/conditions:windows": ["/std:c++17"],
        "//conditions:default": ["-std=c++17"],
    }),
)