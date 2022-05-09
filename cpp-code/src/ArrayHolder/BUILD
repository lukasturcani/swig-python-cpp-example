load("//tools:macros.bzl", "swig_python_cc_wrapper", "python_includes")


cc_library(
    name = "ArrayHolderLib",
    srcs = [
        "ArrayHolder.cpp",
    ],
    hdrs = [
        "ArrayHolder.h",
    ],
    visibility = [
        "//visibility:public",
    ],
)


swig_python_cc_wrapper(
    name = "ArrayHolder",
    swig = "ArrayHolder.i",
    hdr = "ArrayHolder.h",
    src = "ArrayHolder.cpp",
    python_hdrs = "@python3.10//:python3.10",
    copts = python_includes,
    python_configure = "//src/python:ConfigureCPython",
)
