load("//tools:macros.bzl", "configure_cpython")


configure_cpython(
    name = "ConfigureCPython",
    files = "@python3.10//:python3.10-files",
    configure = "@python3.10//:python3.10-configure",
    visibility = [
        "//visibility:public",
    ],
)
