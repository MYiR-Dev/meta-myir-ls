SUMMARY = "for sdcard program"
DESCRIPTION = "use sdcard boot up and program full image to emmc"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://licenses/GPL-2;md5=94d55d512a9ba36caa9b7df079bae19f"

inherit  systemd

S = "${WORKDIR}"

SRC_URI = "file://home/root/burn_emmc.sh \
           file://fac-burn-emmc.service \
           file://licenses/GPL-2 \
          "

do_install(){
  install -d ${D}${systemd_system_unitdir}
        install -d ${D}/home/root/
        install -d ${D}/home/root/mfgimage
        install -d ${D}/home/root/mfgimage/kernel_dtb

        install -m 755 ${WORKDIR}/fac-burn-emmc.service ${D}${systemd_system_unitdir}/fac-burn-emmc.service

        install -m 755 ${WORKDIR}/home/root/burn_emmc.sh ${D}/home/root/burn_emmc.sh
 
		install -m 755 ${DEPLOY_DIR_IMAGE}/atf/bl2_emmc.pbl ${D}/home/root/mfgimage/bl2_emmc.pbl
		install -m 755 ${DEPLOY_DIR_IMAGE}/atf/fip_uboot.bin ${D}/home/root/mfgimage/fip_uboot.bin

        
        install -m 755 ${DEPLOY_DIR_IMAGE}/myd-jls1028.dtb ${D}/home/root/mfgimage/kernel_dtb/myd-jls1028.dtb
		install -m 755 ${DEPLOY_DIR_IMAGE}/myd-jls1028-jailhouse.dtb ${D}/home/root/mfgimage/kernel_dtb/myd-jls1028-jailhouse.dtb
		install -m 755 ${DEPLOY_DIR_IMAGE}/myd-jls1028-dpdk.dtb ${D}/home/root/mfgimage/kernel_dtb/myd-jls1028-dpdk.dtb
		install -m 755 ${DEPLOY_DIR_IMAGE}/myd-jls1028-qds.dtb ${D}/home/root/mfgimage/kernel_dtb/myd-jls1028-qds.dtb
		install -m 755 ${DEPLOY_DIR_IMAGE}/mydj1028_boot.scr ${D}/home/root/mfgimage/kernel_dtb/mydjls1028_boot.scr
		install -m 755 ${DEPLOY_DIR_IMAGE}/Image ${D}/home/root/mfgimage/kernel_dtb/Image
    

        install -m 755 ${DEPLOY_DIR_IMAGE}/myir-image-real-time-edge-${MACHINE}.ext2  ${D}/home/root/mfgimage/rootfs-full.ext2
}


FILES_${PN} = "/"

SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE_${PN} = "fac-burn-emmc.service"
SYSTEMD_AUTO_ENABLE = "enable"
