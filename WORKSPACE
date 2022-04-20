load(
    "@bazel_tools//tools/build_defs/repo:git.bzl",
    "new_git_repository",
    "git_repository",
)


new_git_repository(
    name = "python3.10",
    remote = "https://github.com/python/cpython",
    commit = "9d38120e335357a3b294277fd5eff0a10e46e043",
    build_file = "@//third_party:python3.10.BUILD",
    shallow_since = "1648066324 +0000",
)


git_repository(
    name = "gtest",
    remote = "https://github.com/google/googletest",
    commit = "8ccdb9d56d07b9169ecd17f1164f251a637c250e",
    shallow_since = "1650311823 -0700",
)


git_repository(
    name = "benchmark",
    remote = "https://github.com/google/benchmark",
    commit = "dc901ff9090e2b931433790cc44afc3af3b09ab2",
)
