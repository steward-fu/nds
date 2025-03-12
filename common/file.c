// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/stat.h>
#include <pb_encode.h>
#include <pb_decode.h>
#include <json-c/json.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "log.h"
#include "cfg.h"
#include "file.h"
#include "cfg.pb.h"

#include "nds_firmware.h"
#include "nds_bios_arm7.h"
#include "nds_bios_arm9.h"
#include "drastic_bios_arm7.h"
#include "drastic_bios_arm9.h"

extern miyoo_settings mycfg;

#if defined(UT)
TEST_GROUP(common_file);

TEST_SETUP(common_file)
{
    init_config_settings();
}

TEST_TEAR_DOWN(common_file)
{
}
#endif

static int write_file(const char *fpath, const void *buf, int len)
{
    int fd = -1;

    if (!fpath || !buf) {
        err(COM"invalid parameters(0x%x, 0x%x) in %s\n", fpath, buf, __func__);
        return -1;
    }

    if (access(fpath, F_OK) == 0) {
        warn(COM"file exists(%s), skip writing in %s\n", fpath, __func__);
        return 0;
    }

    fd = open(fpath, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        err(COM"failed to create file \"%s\" in %s\n", fpath, __func__);
        return -1;
    }

    if (write(fd, buf, len) != len) {
        err(COM"failed to write data to \"%s\" in %s\n", fpath, __func__);
    }

    close(fd);
    return 0;
}

#if defined(UT)
TEST(common_file, write_file)
{
    char buf[32] = { 0 };
    const char *FPATH = "/tmp/xxx";

    TEST_ASSERT_EQUAL_INT(-1, write_file(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, write_file(FPATH, buf, sizeof(buf)));
    unlink(FPATH);
}
#endif

int create_bios_files(void)
{
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf),
        "%s%s/drastic_bios_arm7.bin", mycfg.home_folder, BIOS_PATH);
    if (write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7)) < 0)  {
        return -1;
    }
    debug(COM"wrote \"%s\" in %s\n", buf, __func__);

    snprintf(buf, sizeof(buf), "%s%s/drastic_bios_arm9.bin",
        mycfg.home_folder, BIOS_PATH);
    if (write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\" in %s\n", buf, __func__);

#if GENERATE_ALL_BIOS_FILES
    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_bios_arm7.bin",
        mycfg.home_folder,
        BIOS_PATH
    );

    if (write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\" in %s\n", buf, __func__);

    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_bios_arm9.bin",
        mycfg.home_folder,
        BIOS_PATH
    );

    if (write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\" in %s\n", buf, __func__);

    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_firmware.bin",
        mycfg.home_folder,
        BIOS_PATH
    );

    if (write_file(buf, nds_firmware, sizeof(nds_firmware)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\" in %s\n", buf, __func__);
#endif

    return 0;
}

#if defined(UT)
TEST(common_file, create_bios_files)
{
    char buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(0, create_bios_files());

    snprintf(buf, sizeof(buf), "%s%s/drastic_bios_arm7.bin",
        mycfg.home_folder, BIOS_PATH);

    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));

    snprintf(buf, sizeof(buf), "%s%s/drastic_bios_arm9.bin",
        mycfg.home_folder, BIOS_PATH);
    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));

#if GENERATE_ALL_BIOS_FILES
    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_bios_arm7.bin",
        mycfg.home_folder,
        BIOS_PATH
    );

    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));

    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_bios_arm9.bin",
        mycfg.home_folder,
        BIOS_PATH
    );

    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));

    snprintf(
        buf,
        sizeof(buf),
        "%s%s/nds_firmware.bin",
        mycfg.home_folder,
        BIOS_PATH
    );
    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));
#endif
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_file)
{
    RUN_TEST_CASE(common_file, write_file);
    RUN_TEST_CASE(common_file, create_bios_files);
}
#endif

