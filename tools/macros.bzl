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
