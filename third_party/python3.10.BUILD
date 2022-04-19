cc_library(
    name = "python3.10",
    hdrs = glob(["Include/**/*.h"]),
    visibility = [
        "//visibility:public",
    ],
)

filegroup(
    name = "python3.10-files",
    srcs = glob(
        include=["**"],
        exclude=["pyconfig.h"],
    ),
    visibility = [
        "//visibility:public",
    ],
)

filegroup(
    name = "python3.10-configure",
    srcs = ["configure"],
    visibility = [
        "//visibility:public",
    ],
)
