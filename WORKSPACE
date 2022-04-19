load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")


new_git_repository(
    name = "python3.10",
    remote = "https://github.com/python/cpython",
    commit = "9d38120e335357a3b294277fd5eff0a10e46e043",
    build_file = "@//third_party:python3.10.BUILD",
    shallow_since = "1648066324 +0000",
)
