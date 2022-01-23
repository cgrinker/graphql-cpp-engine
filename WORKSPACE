workspace(name = "ninja_ob1_snuifw")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "6d6fd834281cb8f8e758dd9ad76df86304bf1869",
    remote = "https://github.com/nelhage/rules_boost",
    shallow_since = "1543903644 -0800",
)

http_archive(
    name = "boost",
    build_file = "@com_github_nelhage_rules_boost//:BUILD.boost",
    sha256 = "882b48708d211a5f48e60b0124cf5863c1534cd544ecd0664bb534a4b5d506e9",
    strip_prefix = "boost_1_70_0",
    urls = [
        "https://%s.dl.sourceforge.net/project/boost/boost/1.70.0/boost_1_70_0.tar.gz" % m
        for m in [
            "phoenixnap",
            "newcontinuum",
            "cfhcable",
            "superb-sea2",
            "cytranet",
            "iweb",
            "gigenet",
            "ayera",
            "astuteinternet",
            "pilotfiber",
            "svwh",
        ]
    ],
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()


git_repository(
    name = "ninja_ob1_bazel",
    commit = "1a214398cb97bcbaf4d757fe225b5ddee7a229e7",
    remote = "https://github.com/OffByOneStudios/ob1-bazel",
    shallow_since = "1642638472 -0800"
    
)

load("@ninja_ob1_bazel//:bazel/deps.bzl", "ob1_deps")
ob1_deps()

load("@ninja_ob1_bazel//:bazel/setup.bzl", "ob1_setup")
ob1_setup()