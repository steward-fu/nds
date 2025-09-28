// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <time.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
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

int enable_debug_log = 0;
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

uint64_t get_tick_count_ms(void)
{
    struct timespec ts = { 0 };

    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (ts.tv_sec * 1000ULL) + (ts.tv_nsec / 1000000ULL);
}

int read_file(const char *path, void *buf, int len)
{
    int r = 0;
    int fd = -1;

    debug("call %s(path=%p, buf=%p, len=%d)\n", __func__, path, buf, len);

    if (!path || !buf || !len) {
        error("invalid input\n");
        return -1;
    }

    fd = open(path, O_RDONLY);
    if (fd < 0) {
        error("failed to open \"%s\"\n", path);
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

    debug("call %s(path=%p, buf=%p, len=%d)\n", __func__, path, buf, len);

    if (!path || !buf) {
        error("invalid input\n");
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

    FILE *file = fopen(LOG_FILE, need_init ? "w" : "a+");

    if (NULL == file) {
        return -1;
    }

    if (!msg || !fmt) {
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

#if defined(UT)
TEST(common, write_log)
{
    TEST_ASSERT_EQUAL_INT(-1, write_log(NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, write_log("[TEST]", "123"));
    unlink(LOG_FILE);
}
#endif

int reset_config(void)
{
    debug("call %s()\n", __func__);

    memset(&myconfig, 0, sizeof(myconfig));

    myconfig.magic = REL_VER;
    myconfig.layout.mode.sel = DEF_LAYOUT_MODE;
    myconfig.layout.swin.alpha = DEF_SWIN_ALPHA;
    myconfig.layout.swin.border = DEF_SWIN_BORDER;
    myconfig.pen.speed = DEF_PEN_SPEED;
    myconfig.fast_forward = DEF_FAST_FORWARD;
    myconfig.layout.cust.lcd[0].x = 0;
    myconfig.layout.cust.lcd[0].y = 0;
    myconfig.layout.cust.lcd[0].w = LAYOUT_BG_W;
    myconfig.layout.cust.lcd[0].h = LAYOUT_BG_H;
    myconfig.layout.cust.lcd[1].x = 0;
    myconfig.layout.cust.lcd[1].y = 0;
    myconfig.layout.cust.lcd[1].w = 0;
    myconfig.layout.cust.lcd[1].h = 0;

#if defined(A30) || defined(FLIP) || defined(UT)
    myconfig.joy.dzone = DEF_JOY_DZONE;
    myconfig.joy.cust_key[0] = 0;
    myconfig.joy.cust_key[1] = 1;
    myconfig.joy.cust_key[2] = 2;
    myconfig.joy.cust_key[3] = 3;

    myconfig.rjoy.dzone = DEF_JOY_DZONE;
    myconfig.rjoy.cust_key[0] = 4;
    myconfig.rjoy.cust_key[1] = 5;
    myconfig.rjoy.cust_key[2] = 6;
    myconfig.rjoy.cust_key[3] = 7;
#endif

    return 0;
}

#if defined(UT)
TEST(common, reset_config)
{
    myconfig.fast_forward = 100;
    TEST_ASSERT_EQUAL_INT(0, reset_config());
    TEST_ASSERT_EQUAL_INT(DEF_FAST_FORWARD, myconfig.fast_forward);
}
#endif

int load_config(const char *path)
{
    int err = 0;
    struct stat st = { 0 };
    char buf[MAX_PATH] = { 0 };
    const char *debug = NULL;

    debug("call %s()\n", __func__);

    enable_debug_log = 0;
    debug = getenv(NDS_DEBUG);

    // export NDS_DEBU_LOG=1
    if (debug && !strcmp(debug, "1")) {
        enable_debug_log = 1;
    }

    debug("enable_debug_log=%d\n", enable_debug_log);

    strncpy(buf, path, sizeof(buf));
    strcat(buf, CFG_FILE);
    debug("config=\"%s\"\n", buf);

    if (read_file(buf, &myconfig, sizeof(myconfig)) < 0) {
        err = 1;
        reset_config();
    }

    if (myconfig.magic != REL_VER) {
        error("reset config due to invalid magic number\n");

        err = 1;
        reset_config();
    }

    if (myconfig.state_path[0] && stat(myconfig.state_path, &st) == -1) {
        mkdir(myconfig.state_path, 0755);
        debug("created \"%s\" folder\n", myconfig.state_path);
    }

    return err;
}

#if defined(UT)
TEST(common, load_config)
{
    #define MYDIR "/tmp/"

    myconfig.fast_forward = DEF_FAST_FORWARD + 10;
    mkdir(MYDIR RES_PATH, 0755);
    unlink(MYDIR CFG_FILE);
    rmdir(MYDIR RES_PATH);
    TEST_ASSERT_EQUAL_INT(1, load_config(MYDIR));
    TEST_ASSERT_EQUAL_INT(DEF_FAST_FORWARD, myconfig.fast_forward);
}
#endif

int update_config(const char *path)
{
    int ret = 0;
    char buf[MAX_PATH] = { 0 };

    debug("call %s()\n", __func__);

    strncpy(buf, path, sizeof(buf));
    strcat(buf, CFG_FILE);
    debug("config=\"%s\"\n", buf);

    ret = write_file(buf, &myconfig, sizeof(myconfig));
    if (ret != sizeof(myconfig)) {
        error("failed to update config(ret=%d)\n", ret);
    }

    return ret;
}

#if defined(UT)
TEST(common, update_config)
{
    #define MYDIR "/tmp/"

    mkdir(MYDIR RES_PATH, 0755);
    myconfig.fast_forward = 123;
    TEST_ASSERT_EQUAL_INT(sizeof(myconfig), update_config(MYDIR));

    myconfig.fast_forward = 0;
    TEST_ASSERT_EQUAL_INT(0, load_config(MYDIR));
    TEST_ASSERT_EQUAL_INT(123, myconfig.fast_forward);

    unlink(MYDIR CFG_FILE);
    rmdir(MYDIR RES_PATH);
}
#endif

int drop_bios_files(const char *path)
{
    int ret = 0;
    char buf[MAX_PATH] = { 0 };

    debug("call %s(path=%p)\n", __func__, path);

    if (!path) {
        error("invalid input\n");
        return -1;
    }

    sprintf(buf, "%s" DRASTIC_BIOS_ARM7_FILE, path);
    ret += write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7));

    sprintf(buf, "%s" DRASTIC_BIOS_ARM9_FILE, path);
    ret += write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9));

    sprintf(buf, "%s" NDS_BIOS_ARM7_FILE, path);
    ret += write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7));

    sprintf(buf, "%s" NDS_BIOS_ARM9_FILE, path);
    ret += write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9));

    sprintf(buf, "%s" NDS_FIRMWARE_FILE, path);
    ret += write_file(buf, nds_firmware, sizeof(nds_firmware));

    return ret;
}

#if defined(UT)
TEST(common, drop_bios_files)
{
    #define VALID_PATH    "/tmp/"
    #define INVALID_PATH  "/XXX/XXXX/"

    int len = 0;

    len += sizeof(drastic_bios_arm7);
    len += sizeof(drastic_bios_arm9);
    len += sizeof(nds_bios_arm7);
    len += sizeof(nds_bios_arm9);
    len += sizeof(nds_firmware);
    mkdir(VALID_PATH "/" BIOS_PATH, 0755);

    TEST_ASSERT_EQUAL_INT(len, drop_bios_files(VALID_PATH BIOS_PATH));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH BIOS_PATH "/" DRASTIC_BIOS_ARM7_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH BIOS_PATH "/" DRASTIC_BIOS_ARM9_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH BIOS_PATH "/" NDS_BIOS_ARM7_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH BIOS_PATH "/" NDS_BIOS_ARM9_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH BIOS_PATH "/" NDS_FIRMWARE_FILE, F_OK));
    TEST_ASSERT_EQUAL_INT(-5, drop_bios_files(INVALID_PATH));

    unlink(VALID_PATH BIOS_PATH "/" DRASTIC_BIOS_ARM7_FILE);
    unlink(VALID_PATH BIOS_PATH "/" DRASTIC_BIOS_ARM9_FILE);
    unlink(VALID_PATH BIOS_PATH "/" NDS_BIOS_ARM7_FILE);
    unlink(VALID_PATH BIOS_PATH "/" NDS_BIOS_ARM9_FILE);
    unlink(VALID_PATH BIOS_PATH "/" NDS_FIRMWARE_FILE);
    rmdir(VALID_PATH BIOS_PATH);
}
#endif

int get_path_by_idx(const char *path, int idx, char *buf)
{
    int cc = 0;
    int ret = -1;
    DIR *d = NULL;
    struct dirent *dir = NULL;

    debug("call %s(path=%p, idx=%d, buf=%p)\n", __func__, path, idx, buf);

    if (!path) {
        error("invalid input\n");
        return ret;
    }

    d = opendir(path);
    if (!d) {
        error("failed to open dir \"%s\"\n", path);
        return ret;
    }

    buf[0] = 0;
    while ((dir = readdir(d)) != NULL) {
        if (strcmp(dir->d_name, ".") == 0) {
            continue;
        }

        if (strcmp(dir->d_name, "..") == 0) {
            continue;
        }

        if (dir->d_type == DT_DIR) {
            continue;
        }

        if (cc == idx) {
            ret = 0;
            snprintf(buf, MAX_PATH, "%s/%s", path, dir->d_name);
            break;
        }
        cc += 1;
    }
    closedir(d);

    debug("path=\"%s\"\n", buf);

    return ret;
}

#if defined(UT)
TEST(common, get_path_by_idx)
{
    char buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, get_path_by_idx(NULL, 0, 0));
    TEST_ASSERT_EQUAL_INT(0, get_path_by_idx(".", 0, buf));
    TEST_ASSERT_EQUAL_INT(1, !!buf[0]);
}
#endif

int get_dir_cnt(const char *path)
{
    int cc = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;

    debug("call %s(path=%p)\n", __func__, path);

    if (!path) {
        error("invalid input\n");
        return -1;
    }

    d = opendir(path);
    if (!d) {
        error("failed to open \"%s\"\n", path);
        return -1;
    }

    while ((dir = readdir(d)) != NULL) {
        if (strcmp(dir->d_name, ".") == 0) {
            continue;
        }

        if (strcmp(dir->d_name, "..") == 0) {
            continue;
        }

        if (dir->d_type != DT_DIR) {
            continue;
        }

        cc += 1;
    }
    closedir(d);

    debug("dir count=%d\n", cc);

    return cc;
}

#if defined(UT)
TEST(common, get_dir_cnt)
{
    TEST_ASSERT_EQUAL_INT(-1, get_dir_cnt("/XXX"));
    TEST_ASSERT_EQUAL_INT(4, get_dir_cnt("."));
}
#endif

int get_file_cnt(const char *path)
{
    int cc = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;

    debug("call %s(path=%p)\n", __func__, path);

    if (!path) {
        error("invalid input\n");
        return -1;
    }

    d = opendir(path);
    if (!d) {
        error("failed to open \"%s\"\n", path);
        return -1;
    }

    while ((dir = readdir(d)) != NULL) {
        if (strcmp(dir->d_name, ".") == 0) {
            continue;
        }

        if (strcmp(dir->d_name, "..") == 0) {
            continue;
        }

        if (dir->d_type == DT_DIR) {
            continue;
        }

        cc += 1;
    }
    closedir(d);

    debug("file count=%d\n", cc);

    return cc;
}

#if defined(UT)
TEST(common, get_file_cnt)
{
    TEST_ASSERT_EQUAL_INT(-1, get_file_cnt("/XXX"));
    TEST_ASSERT_EQUAL_INT(4, get_file_cnt("src"));
}
#endif

