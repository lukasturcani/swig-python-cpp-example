load("//tools:macros.bzl", "swig_python_cc_wrapper", "python_includes")


cc_library(
    name = "AdderLib",
    srcs = [
        "Adder.cpp",
    ],
    hdrs = [
        "Adder.h",
    ],
    visibility = [
        "//visibility:public",
    ],
)


swig_python_cc_wrapper(
    name = "Adder",
    swig = "Adder.i",
    hdr = "Adder.h",
    src = "Adder.cpp",
    python_hdrs = "@python3.10//:python3.10",
    copts = python_includes,
)
