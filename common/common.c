// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <time.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/mman.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "common.h"
#include "nds_firmware.h"
#include "nds_bios_arm7.h"
#include "nds_bios_arm9.h"
#include "drastic_bios_arm7.h"
#include "drastic_bios_arm9.h"

nds_config myconfig = { 0 };

#if defined(UT)
TEST_GROUP(common);

TEST_SETUP(common)
{
}

TEST_TEAR_DOWN(common)
{
}
#endif

int read_file(const char *fpath, void *buf, int len)
{
    int r = 0;
    int fd = -1;

    debug("call %s()\n", __func__);

    if (!fpath || !buf) {
        error("invalid parameters(0x%x, 0x%x)\n", fpath, buf);
        return -1;
    }

    fd = open(fpath, O_RDONLY);
    if (fd < 0) {
        error("failed to open \"%s\"\n", fpath);
        return -1;
    }

    r = read(fd, buf, len);
    debug("read %d bytes\n", r);

    close(fd);
    return r;
}

#if defined(UT)
TEST(common, read_file)
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

int write_file(const char *path, const void *buf, int len)
{
    int r = 0;
    int fd = -1;

    debug("call %s(path=%s, buf=%p, len=%d)\n", __func__, path, buf, len);

    if (!path || !buf) {
        error("invalid parameters(0x%x, 0x%x)\n", path, buf);
        return -1;
    }

    fd = open(path, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        error("failed to create \"%s\"\n", path);
        return -1;
    }

    r = write(fd, buf, len);
    debug("wrote %d bytes\n", r);

    close(fd);
    return r;
}

#if defined(UT)
TEST(common, write_file)
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

int write_log(const char *msg, const char *fmt, ...)
{
    static int need_init = 1;

    FILE *file = fopen(LOG_FILE_NAME, need_init ? "w" : "a+"); 
    if (NULL == file) {
        return -1;
    }

    va_list va = { 0 };
    time_t rawtime = { 0 };
    struct tm *timeinfo = { 0 };
    
    need_init = 0;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    
    fprintf(file, "[%04d/%02d/%02d-%02d:%02d:%02d]",
        timeinfo->tm_year + 1900,
        timeinfo->tm_mon + 1,
        timeinfo->tm_mday,
        timeinfo->tm_hour,
        timeinfo->tm_min,
        timeinfo->tm_sec
    );

    va_start(va, fmt);
    fprintf(file, "%s", msg);
    vfprintf(file, fmt, va);
    va_end(va);
    fclose(file);

    return 0;
}

int load_config(const char *path)
{
    struct stat st = { 0 };
    char buf[MAX_PATH] = { 0 };

    printf("call %s()\n", __func__);

    strncpy(buf, path, sizeof(buf));
    strcat(buf, CFG_PATH);
    printf("cfg=\"%s\"\n", buf);

    read_file(buf, &myconfig, sizeof(myconfig));

    strncpy(buf, path, sizeof(buf));
    strcat(buf, BIOS_PATH);
    printf("drop bios files to \"%s\"\n", buf);
    drop_bios_files(buf);

    if (myconfig.state_path[0] && stat(myconfig.state_path, &st) == -1) {
        mkdir(myconfig.state_path, 0755);
        debug("created \"%s\" folder\n", myconfig.state_path);
    }

    return 0;
}

int update_config(const char *path)
{
    char buf[MAX_PATH] = { 0 };

    printf("call %s()\n", __func__);

    strncpy(buf, path, sizeof(buf));
    strcat(buf, CFG_PATH);
    printf("cfg=\"%s\"\n", buf);

    write_file(buf, &myconfig, sizeof(myconfig));
    return 0;
}

int drop_bios_files(const char *path)
{
    int r = 0;
    char buf[MAX_PATH] = { 0 };

    sprintf(buf, "%s/" DRASTIC_BIOS_ARM7_FILE, path);
    r += write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7));

    sprintf(buf, "%s/" DRASTIC_BIOS_ARM9_FILE, path);
    r += write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9));

    sprintf(buf, "%s/" NDS_BIOS_ARM7_FILE, path);
    r += write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7));

    sprintf(buf, "%s/" NDS_BIOS_ARM9_FILE, path);
    r += write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9));

    sprintf(buf, "%s/" NDS_FIRMWARE_FILE, path);
    r += write_file(buf, nds_firmware, sizeof(nds_firmware));

    return r;
}

#if defined(UT)
TEST(common, drop_bios_files)
{
    #define VALID_PATH    "/tmp"
    #define INVALID_PATH  "/XXX/XXXX"

    mkdir(VALID_PATH "/" BIOS_PATH, 0755);
    TEST_ASSERT_EQUAL_INT(303104, drop_bios_files(VALID_PATH "/" BIOS_PATH));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" BIOS_PATH "/" DRASTIC_BIOS_ARM7_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" BIOS_PATH "/" DRASTIC_BIOS_ARM9_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" BIOS_PATH "/" NDS_BIOS_ARM7_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" BIOS_PATH "/" NDS_BIOS_ARM9_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" BIOS_PATH "/" NDS_FIRMWARE_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(-5, drop_bios_files(INVALID_PATH));
    unlink(VALID_PATH "/" BIOS_PATH "/" DRASTIC_BIOS_ARM7_FILE);
    unlink(VALID_PATH "/" BIOS_PATH "/" DRASTIC_BIOS_ARM9_FILE);
    unlink(VALID_PATH "/" BIOS_PATH "/" NDS_BIOS_ARM7_FILE);
    unlink(VALID_PATH "/" BIOS_PATH "/" NDS_BIOS_ARM9_FILE);
    unlink(VALID_PATH "/" BIOS_PATH "/" NDS_FIRMWARE_FILE);
    rmdir(VALID_PATH "/" BIOS_PATH);
}
#endif

