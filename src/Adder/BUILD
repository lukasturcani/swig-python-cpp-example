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
    python_hdrs = "@python3.10//:python3.10",
    copts = [
        "-Iexternal/python3.10/Include",
        "-Ibazel-out/k8-opt/bin/src/python",
        "-Ibazel-out/k8-dbg/bin/src/python",
        "-Ibazel-out/k8-fastbuild/bin/src/python",
    ],
    python_configure = "//src/python:ConfigureCPython",
)
