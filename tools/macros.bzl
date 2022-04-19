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
    visibility = None,
):
    swig_ = "{}-SWIG".format(name)
    hdr_ = "{}-HDR".format(name)
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
