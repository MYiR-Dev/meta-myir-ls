WESTON_SRC = "git://bitbucket.sw.nxp.com/gtec/weston-imx.git;protocol=ssh"

PACKAGECONFIG[cairo-glesv2] = " "
PACKAGECONFIG_append_qoriq   = " imxgpu"
INSANE_SKIP_weston-examples += "dev-deps"
INSANE_SKIP_libweston-7 += "dev-deps"
COMPATIBLE_MACHINE = "(imxfbdev|imxgpu|qoriq)"