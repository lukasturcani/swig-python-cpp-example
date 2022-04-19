def copy_file(
    name,
    dep,
    src,
    dst,
    visibility = None,
):
    native.genrule(
        name = name,
        srcs = [dep],
        outs = [dst],
        cmd = "cp $(RULEDIR)/{} $(RULEDIR)/{}".format(src, dst),
        visibility = visibility,
    )


def swig_python_cc_wrapper(
    name,
    swig,
    hdr,
    src,
    deps,
    copts,
    visibility = None,
):
    swig_ = "{}-SWIG".format(name)
    hdr_ = "{}-HDR".format(name)
    src_ = "{}-SRC".format(name)

    native.filegroup(
        name = swig_,
        srcs = [swig]
    )
    native.filegroup(
        name = hdr_,
        srcs = [hdr]
    )
    native.genrule(
        name = name,
        srcs = [swig_, hdr_],
        outs = ["{}_wrap.cpp".format(name), "{}.py".format(name)],
        cmd = """ \
            swig \
                -c++ \
                -python \
                -builtin \
                -fastproxy \
                -o $(RULEDIR)/{}_wrap.cpp \
                $(location {}) \
        """.format(
            name,
            swig_,
        ),
        visibility = visibility,
    )
    native.cc_library(
        name = "{}Wrap".format(name),
        hdrs = [
            ":{}".format(name),
        ],
        srcs = [
            ":{}".format(name),
            src,
            hdr,
        ],
        deps = deps,
        copts = copts,
    )
    copy_file(
        name = "_{}".format(name),
        dep = ":{}Wrap".format(name),
        src = "lib{}Wrap.so".format(name),
        dst = "_{}.so".format(name),
    )
