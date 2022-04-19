load("//tools:macros.bzl", "copy_file")

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
    name = "Adder",
    srcs = [
        "Adder.cpp",
    ],
    hdrs = [
        "Adder.h",
    ],
)


#swig_python_cc_wrapper(
#    name = "Adder_wrap"
#    interface = "Adder.i"
#)


cc_library(
    name = "AdderWrap",
    srcs = [
        "Adder_wrap.cpp",
    ],
    deps = [
        ":Adder",
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
