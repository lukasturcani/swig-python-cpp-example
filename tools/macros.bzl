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
    src,
    hdr,
    visibility = None,
):
    src_ = "{}-SRC".format(name)
    hdr_ = "{}-HDR".format(name)
    native.filegroup(
        name = src_,
        srcs = [src]
    )
    native.filegroup(
        name = hdr_,
        srcs = [hdr]
    )
    native.genrule(
        name = name,
        srcs = [src_, hdr_],
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
            src_,
        ),
        visibility = visibility,
    )
