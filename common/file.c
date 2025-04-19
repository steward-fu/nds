// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <dirent.h>
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

extern nds_pb_cfg mycfg;

#if defined(UT)
TEST_GROUP(common_file);

TEST_SETUP(common_file)
{
    debug(SDL"call %s()\n", __func__);

    init_cfg();
}

TEST_TEAR_DOWN(common_file)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

int get_file_line(const char *fpath)
{
    int r = 0;
    FILE *f = NULL;
    char buf[MAX_PATH] = { 0 };

    debug(COM"call %s()\n", __func__);

    if (!fpath) {
        error(COM"invalid file path\n");
        return -1;
    }

    f = fopen(fpath, "r");
    if (!f) {
        error(COM"failed to open file \"%s\"\n", fpath);
        return -1;
    }

    r = 0;
    while (fgets(buf, sizeof(buf), f)) {
        r += 1;
    }
    debug(COM"line count=%d\n", r);

    fclose(f);    
    return r;
}

#if defined(UT)
TEST(common_file, get_file_line)
{
    FILE *f = NULL;
    const char *path = "/tmp/test";

    TEST_ASSERT_EQUAL_INT(-1, get_file_line(NULL));

    f = fopen(path, "w");
    TEST_ASSERT_NOT_NULL(f);
    fprintf(f, "1234567890");
    fclose(f);
    TEST_ASSERT_EQUAL_INT(1, get_file_line(path));

    f = fopen(path, "w");
    TEST_ASSERT_NOT_NULL(f);
    fprintf(f, "1234567890\n");
    fprintf(f, "1234567890");
    fclose(f);

    TEST_ASSERT_EQUAL_INT(2, get_file_line(path));

    unlink(path);
}
#endif

int get_file_size(const char *fpath)
{
    int r = 0;
    FILE *f = NULL;

    debug(COM"call %s()\n", __func__);

    if (!fpath) {
        error(COM"invalid file path\n");
        return -1;
    }

    f = fopen(fpath, "r");
    if (!f) {
        error(COM"failed to open file \"%s\"\n", fpath);
        return -1;
    }

    fseek(f, 0, SEEK_END);
    r = ftell(f);
    fclose(f);
    
    return r;
}

#if defined(UT)
TEST(common_file, get_file_size)
{
    FILE *f = NULL;
    const char *path = "/tmp/test";

    f = fopen(path, "w");
    TEST_ASSERT_NOT_NULL(f);

    fprintf(f, "1234567890");
    fclose(f);

    TEST_ASSERT_EQUAL_INT(-1, get_file_size(NULL));
    TEST_ASSERT_EQUAL_INT(10, get_file_size(path));

    unlink(path);
}
#endif

int read_file(const char *fpath, void *buf, int len)
{
    int r = 0;
    int fd = -1;

    debug(COM"call %s()\n", __func__);

    if (!fpath || !buf) {
        error(COM"invalid parameters(0x%x, 0x%x)\n", fpath, buf);
        return -1;
    }

    fd = open(fpath, O_RDONLY);
    if (fd < 0) {
        error(COM"failed to open \"%s\"\n", fpath);
        return -1;
    }

    r = read(fd, buf, len);
    debug(COM"read %d bytes\n", r);

    close(fd);
    return r;
}

#if defined(UT)
TEST(common_file, read_file)
{
    int len = 0;
    char buf[32] = { "1234567890" };
    const char *path = "/tmp/xxx";

    TEST_ASSERT_EQUAL_INT(-1, read_file(NULL, NULL, 0));

    len = strlen(buf);
    TEST_ASSERT_EQUAL_INT(len, write_file(path, buf, len));
    TEST_ASSERT_EQUAL_INT(len, read_file(path, buf, sizeof(buf)));
    unlink(path);
}
#endif

int write_file(const char *fpath, const void *buf, int len)
{
    int r = 0;
    int fd = -1;

    debug(COM"call %s()\n", __func__);

    if (!fpath || !buf) {
        error(COM"invalid parameters(0x%x, 0x%x)\n", fpath, buf);
        return -1;
    }

    if (access(fpath, F_OK) == 0) {
        debug(COM"\"%s\" existed already\n", fpath);
        return 0;
    }

    fd = open(fpath, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        error(COM"failed to create \"%s\"\n", fpath);
        return -1;
    }

    r = write(fd, buf, len);
    debug(COM"wrote %d bytes\n", r);

    close(fd);
    return r;
}

#if defined(UT)
TEST(common_file, write_file)
{
    int len = 0;
    char buf[32] = { "1234567890" };
    const char *path = "/tmp/test";

    TEST_ASSERT_EQUAL_INT(-1, write_file(NULL, NULL, 0));

    len = strlen(buf);
    TEST_ASSERT_EQUAL_INT(len, write_file(path, buf, len));
    unlink(path);
}
#endif

int create_bios_files(void)
{
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf), "%s%s/"NDS_BIOS_ARM7".bin", mycfg.home, BIOS_PATH);
    if (write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\"\n", buf);

    snprintf(buf, sizeof(buf), "%s%s/"NDS_BIOS_ARM9".bin", mycfg.home, BIOS_PATH);
    if (write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\"\n", buf);

    snprintf(buf, sizeof(buf), "%s%s/"NDS_FIRMWARE".bin", mycfg.home, BIOS_PATH);
    if (write_file(buf, nds_firmware, sizeof(nds_firmware)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\"\n", buf);

    snprintf(buf, sizeof(buf), "%s%s/"DRASTIC_BIOS_ARM7".bin", mycfg.home, BIOS_PATH);
    if (write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7)) < 0)  {
        return -1;
    }
    debug(COM"wrote \"%s\"\n", buf);

    snprintf(buf, sizeof(buf), "%s%s/"DRASTIC_BIOS_ARM9".bin", mycfg.home, BIOS_PATH);
    if (write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9)) < 0) {
        return -1;
    }
    debug(COM"wrote \"%s\"\n", buf);

    return 0;
}

#if defined(UT)
TEST(common_file, create_bios_files)
{
    char buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(0, create_bios_files());

    snprintf(buf, sizeof(buf), "%s%s/"DRASTIC_BIOS_ARM7".bin", mycfg.home, BIOS_PATH);
    TEST_ASSERT_EQUAL_INT(0, access(buf, F_OK));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_file)
{
    RUN_TEST_CASE(common_file, get_file_line);
    RUN_TEST_CASE(common_file, get_file_size);
    RUN_TEST_CASE(common_file, read_file);
    RUN_TEST_CASE(common_file, write_file);
    RUN_TEST_CASE(common_file, create_bios_files);
}
#endif

