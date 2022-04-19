load("//tools:macros.bzl", "swig_python_cc_wrapper")


cc_library(
    name = "AdderLib",
    srcs = [
        "Adder.cpp",
    ],
    hdrs = [
        "Adder.h",
    ],
)


swig_python_cc_wrapper(
    name = "Adder",
    swig = "Adder.i",
    hdr = "Adder.h",
    src = "Adder.cpp",
    deps = [
        "@python3.10//:python3.10",
    ],
    copts = [
        "-Iexternal/python3.10",
    ],
)
