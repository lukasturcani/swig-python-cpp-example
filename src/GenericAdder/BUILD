load("//tools:macros.bzl", "swig_python_h_wrapper", "python_includes")


cc_library(
    name = "GenericAdderLib",
    hdrs = [
        "GenericAdder.h",
    ],
    visibility = [
        "//visibility:public",
    ],
)


swig_python_h_wrapper(
    name = "GenericAdder",
    swig = "GenericAdder.i",
    hdr = "GenericAdder.h",
    python_hdrs = "@python3.10//:python3.10",
    copts = python_includes,
    python_configure = "//src/python:ConfigureCPython",
)
