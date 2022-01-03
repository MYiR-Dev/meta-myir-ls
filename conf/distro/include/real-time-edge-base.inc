# Real-time Edge base conf

DISTRO = "nxp-real-time-edge"
DISTROOVERRIDES = "real-time-edge"
DISTRO_NAME = "NXP Real-time Edge Distro"
DISTRO_VERSION = "2.0"
DISTRO_FEATURES_append_ls1043ardb = " jailhouse"
DISTRO_FEATURES_append_ls1046ardb = " jailhouse"
DISTRO_FEATURES_append_ls1028ardb = " jailhouse real-time-edge-libbee real-time-edge-libblep libnfc-nci \
				      wayland-protocols weston imx-gpu-viv libdrm kmscube \
				      real-time-edge-sysrepo tsn-scripts wayland"
DISTRO_FEATURES_append_mydjls1028 = " jailhouse real-time-edge-libbee real-time-edge-libblep libnfc-nci \
                                      wayland-protocols weston imx-gpu-viv libdrm kmscube \
                                      real-time-edge-sysrepo tsn-scripts wayland sai systemd opengl"

DISTRO_FEATURES_append_mx8mp = " jailhouse real-time-edge-sysrepo"
DISTRO_FEATURES_append_mx8m = " wayland-protocols weston imx-gpu-viv libdrm kmscube"
DISTRO_FEATURES_append_ls1021atsn = " real-time-edge-sysrepo real-time-edge-nodejs-lbt feedgnuplot tsn-scripts real-time-edge-prl"
DISTRO_FEATURES_append_ls1021aiot = " canfestival"

#For ls1028ardb
DISTRO_FEATURES_remove_ls1028ardb = " x11"
PREFERRED_VERSION_weston_ls1028ardb = "9.0.0.imx"
PREFERRED_VERSION_wayland-protocols_ls1028ardb = "1.20.imx"
PREFERRED_VERSION_libdrm_ls1028ardb = "2.4.102.imx"
PREFERRED_PROVIDER_virtual/libgl_ls1028ardb  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/libgles1_ls1028ardb  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/libgles2_ls1028ardb  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/egl_ls1028ardb  = "imx-gpu-viv"
LICENSE_FLAGS_WHITELIST_append_ls1028ardb = " commercial"

DISTRO_FEATURES_remove_mydjls1028 = " x11"
PREFERRED_VERSION_weston_mydjls1028 = "9.0.0.imx"
PREFERRED_VERSION_wayland-protocols_mydjls1028 = "1.20.imx"
PREFERRED_VERSION_libdrm_mydjls1028 = "2.4.102.imx"
PREFERRED_PROVIDER_virtual/libgl_mydjls1028  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/libgles1_mydjls1028  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/libgles2_mydjls1028  = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/egl_mydjls1028  = "imx-gpu-viv"
LICENSE_FLAGS_WHITELIST_append_mydjls1028 = " commercial"


DELTA_KERNEL_DEFCONFIG_append = " \
    linux-rt.config \
"
DELTA_KERNEL_DEFCONFIG_append_mx8mm = " linux-fec.config"
DELTA_KERNEL_DEFCONFIG_append_mx8m = " linux-imx8.config"

#REAL_TIME_EDGE_SYSREPO_ls1028ardb = ""
#REAL_TIME_EDGE_SYSREPO_mydjls1028 = ""
REAL_TIME_EDGE_SYSREPO_ls1021atsn = "real-time-edge-sysrepo-tc"
REAL_TIME_EDGE_SYSREPO_mx8mp = "real-time-edge-sysrepo-tc"
PACKAGECONFIG_append_pn-real-time-edge-sysrepo = "${REAL_TIME_EDGE_SYSREPO}"

# dtb for jailhouse
KERNEL_DEVICETREE_append_ls1043ardb= " freescale/fsl-ls1043a-rdb-sdk-jailhouse.dtb"
KERNEL_DEVICETREE_append_ls1043ardb= " freescale/fsl-ls1043a-rdb-sdk-jailhouse-with-dpaa.dtb"
KERNEL_DEVICETREE_append_ls1046ardb= " freescale/fsl-ls1046a-rdb-sdk-jailhouse.dtb"
KERNEL_DEVICETREE_append_ls1046ardb= " freescale/fsl-ls1046a-rdb-sdk-jailhouse-with-dpaa.dtb"
KERNEL_DEVICETREE_append_ls1028ardb= " freescale/fsl-ls1028a-rdb-jailhouse.dtb"
KERNEL_DEVICETREE_append_mydjls1028= " freescale/myd-jls1028-jailhouse.dtb"
KERNEL_DEVICETREE_append_imx8mpevk = " freescale/imx8mp-evk-root.dtb"

# opcua override default log level
LIBOPEN62541_LOGLEVE = "300"