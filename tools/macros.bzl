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
    native.genrule(
        name = name,
        srcs = [src, hdr],
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
            src,
        ),
        visibility = visibility,
    )
