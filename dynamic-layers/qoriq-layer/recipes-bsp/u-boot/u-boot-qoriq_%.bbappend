
#UBOOT_SRC_real-time-edge = "git://github.com/real-time-edge-sw/real-time-edge-uboot.git;protocol=https"
#UBOOT_BRANCH_real-time-edge = "uboot_v2020.04"
#SRCREV_real-time-edge = "0dac57ee613539106bdf535276e99bb7d58e0fb1"
UBOOT_SRC_real-time-edge = "git://github.com/MYiR-Dev/myir-ls-uboot.git;protocol=https"
UBOOT_BRANCH_real-time-edge = "uboot-edge_v2020.04"
SRCREV_real-time-edge = "afd0919bffa8e560d75759e9353d4f82597baef5"


do_configure_prepend_real-time-edge() {
    mkdir -p ${WORKDIR}/source-date-epoch
    date '+%s' > ${WORKDIR}/source-date-epoch/__source_date_epoch.txt
}
