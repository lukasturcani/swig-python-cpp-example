load("//tools:macros.bzl", "copy_file", "swig_python_cc_wrapper")

cc_binary(
    name = "main",
    srcs = [
        "main.cpp"
    ],
    deps = [
        ":AdderWrap",
    ],
)

cc_library(
    name = "AdderLib",
    srcs = [
        "Adder.cpp",
    ],
    hdrs = [
        "Adder.h",
    ],
)


filegroup(
    name = "AdderInterface",
    srcs = ["Adder.i"],
)

filegroup(
    name = "AdderHeader",
    srcs = ["Adder.h"]
)


swig_python_cc_wrapper(
    name = "Adder",
    src = ":AdderInterface",
    hdr = ":AdderHeader",
)


cc_library(
    name = "AdderWrap",
    hdrs = [
        ":Adder",
    ],
    srcs = [
        ":Adder",
        "Adder.cpp",
        "Adder.h",
    ],
    deps = [
        "@python3.10//:python3.10",
    ],
    copts = [
        "-Iexternal/python3.10",
    ],
)


copy_file(
    name = "_Adder",
    dep = ":AdderWrap",
    src = "libAdderWrap.so",
    dst = "_Adder.so",
)
