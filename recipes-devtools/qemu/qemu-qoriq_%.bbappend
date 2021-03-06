SRCREV= "0b88a503e43ca629d6e8165638ac6b312e5c66bd"

PACKAGECONFIG_append = " vhost"

do_install_ptest() {
        cp -rL ${B}/tests ${D}${PTEST_PATH}
        find ${D}${PTEST_PATH}/tests -type f -name "*.[Sshcod]" | xargs -i rm -rf {}

        cp ${S}/tests/Makefile.include ${D}${PTEST_PATH}/tests
        # Don't check the file genreated by configure
        sed -i -e '/wildcard config-host.mak/d' \
               -e '$ {/endif/d}' ${D}${PTEST_PATH}/tests/Makefile.include
        sed -i -e 's,${HOSTTOOLS_DIR}/python3,${bindir}/python3,' \
            ${D}/${PTEST_PATH}/tests/qemu-iotests/common.env
}

