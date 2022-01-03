
#UBOOT_SRC_real-time-edge = "git://github.com/real-time-edge-sw/real-time-edge-uboot.git;protocol=https"
#UBOOT_BRANCH_real-time-edge = "uboot_v2020.04"
#SRCREV_real-time-edge = "0dac57ee613539106bdf535276e99bb7d58e0fb1"
UBOOT_SRC_real-time-edge = "git:///home/wujl/yocto_sdk/bsp/u-boot;protocol=file"
UBOOT_BRANCH_real-time-edge = "develop"
SRCREV_real-time-edge = "e50409c2443cf10dc6e1dc443968f41a743b3f98"


do_configure_prepend_real-time-edge() {
    mkdir -p ${WORKDIR}/source-date-epoch
    date '+%s' > ${WORKDIR}/source-date-epoch/__source_date_epoch.txt
}
