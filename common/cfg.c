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
#include "snd.h"
#include "lang.h"
#include "cfg.pb.h"

nds_pb_cfg mycfg = nds_pb_cfg_init_zero;

#if defined(UT)
TEST_GROUP(common_cfg);

TEST_SETUP(common_cfg)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(common_cfg)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

int update_cfg(const char *path)
{
    int r = -1;
    int fd = -1;
    uint8_t *buf = NULL;

    debug(COM"call %s()\n", __func__);

    if (!path) {
        error(COM"invalid path\n");
        return r;
    }

    buf = malloc(MAX_MALLOC_SIZE);
    if (!buf) {
        error(COM"failed to allocate memory\n");
        return r;
    }

    memset(buf, 0, MAX_MALLOC_SIZE);
    pb_ostream_t stream = pb_ostream_from_buffer(buf, MAX_MALLOC_SIZE);
    pb_encode(&stream, nds_pb_cfg_fields, &mycfg);

    fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    do {
        if (fd < 0) {
            error(COM"failed to create \"%s\"\n", path);
            break;
        }

        ssize_t wlen = write(fd, buf, stream.bytes_written);
        if (wlen < 0) {
            error(COM"failed to write date to \"%s\"\n", path);
        }

        debug(COM"wrote %ld bytes to \"%s\"\n", wlen, path);
        close(fd);
        r = 0;
    } while (0);

    free(buf);
    return r;
}

#if defined(UT)
TEST(common_cfg, update_cfg)
{
    const char *path = "/tmp/cfg.pb";

    TEST_ASSERT_EQUAL_INT(-1, update_cfg(NULL));
    TEST_ASSERT_EQUAL_INT( 0, update_cfg(path));
    unlink(path);
}
#endif

int reset_cfg(void)
{
    debug(COM"call %s()\n", __func__);

    strncpy(mycfg.ver, DEF_CFG_VER, sizeof(mycfg.ver));
    mycfg.lang = DEF_CFG_LANG;
    getcwd(mycfg.home, sizeof(mycfg.home));
    mycfg.dbg = DEF_CFG_DBG;
    mycfg.mode = DEF_CFG_MODE;
    return 0;
}

#if defined(UT)
TEST(common_cfg, reset_cfg)
{
    memset(&mycfg, 0, sizeof(mycfg));
    TEST_ASSERT_EQUAL_INT(0, reset_cfg());
    TEST_ASSERT_EQUAL_INT(DEF_CFG_LOG_LEVEL, mycfg.log_level);
    TEST_ASSERT_EQUAL_STRING(DEF_CFG_VER, mycfg.ver);
    TEST_ASSERT_EQUAL_STRING(DEF_CFG_LANG, mycfg.lang);
}
#endif

int load_cfg(const char *path)
{
    int r = -1;
    uint8_t *buf = NULL;

    debug(COM"call %s()\n", __func__);

    if (!path) {
        error(COM"invalid path\n");
        return r;
    }

    buf = malloc(MAX_MALLOC_SIZE);
    if (!buf) {
        error(COM"failed to allocate memory\n");
        return r;
    }
    memset(buf, 0, MAX_MALLOC_SIZE);

    int fd = open(path, O_RDONLY);
    do {
        if (fd < 0) {
            error(COM"failed to open \"%s\"\n", path);
            break;
        }

        ssize_t rlen = read(fd, buf, MAX_MALLOC_SIZE);
        if (rlen < 0) {
            error(COM"failed to read data from \"%s\"\n", path);
        }
        close(fd);
        debug(COM"read %ld bytes from \"%s\"\n", rlen, path);

        pb_istream_t stream = pb_istream_from_buffer(buf, r);
        pb_decode(&stream, nds_pb_cfg_fields, &mycfg);
        r = 0;
    } while (0);

    debug(COM"cur ver=%s, pb ver=%s\n", DEF_CFG_VER, mycfg.ver);
    free(buf);
    return r;
}

#if defined(UT)
TEST(common_cfg, load_cfg)
{
    const char *path = "/tmp/settings.cfg";

    TEST_ASSERT_EQUAL_INT(-1, load_cfg(NULL));
    TEST_ASSERT_EQUAL_INT( 0, update_cfg(path));
    TEST_ASSERT_EQUAL_INT( 0, load_cfg(path));
    unlink(path);
}
#endif

int init_cfg(void)
{
    char path[MAX_PATH] = { 0 };

    error(COM"call %s()\n", __func__);

    getcwd(mycfg.home, sizeof(mycfg.home));
    error(COM"HOME=\"%s\"\n", mycfg.home);

    snprintf(path, sizeof(path), "%s/%s", mycfg.home, CFG_PATH);
    error(COM"cfg=\"%s\"\n", path);

    if (load_cfg(path) < 0) {
        error(COM"failed to load config, use default settings\n");
        reset_cfg();
        update_cfg(path);
    }

    init_lang();
    return 0;
}

#if defined(UT)
TEST(common_cfg, init_cfg)
{
    TEST_ASSERT_EQUAL_INT(0, init_cfg());
}
#endif

int quit_cfg(void)
{
    debug(COM"call %s()\n", __func__);

    quit_lang();
    return 0;
}

#if defined(UT)
TEST(common_cfg, quit_cfg)
{
    TEST_ASSERT_EQUAL_INT(0, quit_cfg());
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_cfg)
{
    RUN_TEST_CASE(common_cfg, init_cfg);
    RUN_TEST_CASE(common_cfg, quit_cfg);
    RUN_TEST_CASE(common_cfg, load_cfg);
    RUN_TEST_CASE(common_cfg, reset_cfg);
    RUN_TEST_CASE(common_cfg, update_cfg);
}
#endif

