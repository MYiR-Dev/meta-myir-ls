
#KERNEL_SRC_real-time-edge = "git://github.com/real-time-edge-sw/real-time-edge-linux.git;protocol=https"
#SRCBRANCH_real-time-edge = "linux_5.10.y"
#SRCREV_real-time-edge = "baf692faaebd0fc5f085274124128ffdc1b09403"
KERNEL_SRC_real-time-edge = "git:///home/wujl/yocto_sdk/bsp/linux-5.10.9;protocol=file"
SRCBRANCH_real-time-edge = "develop"
SRCREV_real-time-edge = "3862aa0a0efe8de150d24e601cd2bf81425b90f0"


FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
SRC_URI_append_real-time-edge = " \
    file://linux-rt.config \
    file://linux-wifi.config \
    file://linux-baremetal-ls104xa.config \
    file://linux-baremetal-ls1021a.config \
    file://linux-baremetal-ls1028a.config \
    file://linux-baremetal-lx2160a.config \
    file://linux-selinux.config \
"

do_configure_prepend_real-time-edge() {
    mkdir -p ${WORKDIR}/source-date-epoch
    date '+%s' > ${WORKDIR}/source-date-epoch/__source_date_epoch.txt
}
