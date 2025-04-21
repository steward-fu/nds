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
#include <dirent.h>
#include <iconv.h>
#include <errno.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "log.h"
#include "cfg.h"
#include "file.h"
#include "lang.h"
#include "cfg.pb.h"

extern nds_pb_cfg mycfg;

static char *LANG_FILE[] = {
    "en_US",
    "zh_CN",
    "zh_TW",
    NULL
};

static char **lang[LANG_MAX] = { 0 };

#if defined(UT)
TEST_GROUP(common_lang);

TEST_SETUP(common_lang)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(common_lang)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static int get_lang_idx(const char *fname)
{
    int cc = 0;

    debug(COM"call %s()\n", __func__);

    if (!fname) {
        error(COM"invalid file name\n");
        return -1;
    }

    for (cc = 0; cc < LANG_MAX; cc++) {
        if (!strcmp(fname, LANG_FILE[cc])) {
            return cc;
        }
    }

    return -1;
}

#if defined(UT)
TEST(common_lang, get_lang_idx)
{
    TEST_ASSERT_EQUAL_INT(-1, get_lang_idx(NULL));
    TEST_ASSERT_EQUAL_INT(0, get_lang_idx("en_US"));
}
#endif

static int gbk_to_utf8(const char* src, char* dst, int len)
{
    int r = -1;
    iconv_t cd = 0;

    size_t inlen = 0;
    char *inbuf = NULL;
    char *inbuf_hold = NULL;

    size_t outlen = len;
    char *outbuf2 = NULL;
    char *outbuf = dst;

    debug(COM"call %s()\n", __func__);

    if (!src || !dst) {
        error(COM"invalid parameters(0x%x, 0x%x, %d)\n", src, dst, len);
        return r;
    }

    inlen = strlen(src) + 1;
    inbuf = (char *)malloc(len);
    inbuf_hold = inbuf;

    memcpy(inbuf, src, len);
    if (src == dst) {
        outbuf2 = (char*)malloc(len);
        memset(outbuf2, 0, len);
        outbuf = outbuf2;
    }

    cd = iconv_open("UTF-8", "GBK");
    if (cd != (iconv_t)-1) {
        r = 0;
        if (iconv(cd, &inbuf, &inlen, &outbuf, &outlen) != 0) {
            error(COM"failed to do iconv\n");
            r = -1;
        }

        if (outbuf2 != NULL) {
            strcpy(dst, outbuf2);
            free(outbuf2);
        }
        iconv_close(cd);
    }
    else {
        error(COM"failed to open iconv(ret=%d)\n", cd);
    }

    free(inbuf_hold);

    return r;
}

#if defined(UT)
TEST(common_lang, gbk_to_utf8)
{
    TEST_ASSERT_EQUAL_INT(-1, gbk_to_utf8(NULL, NULL, 0));
}
#endif

static int utf8_to_gbk(const char* src, char* dst, int len)
{
    int r = -1;
    iconv_t cd = 0;
    size_t inlen = 0;
    char* inbuf = NULL;
    char* inbuf_hold = NULL;
    size_t outlen = len;
    char* outbuf = dst;

    debug(COM"call %s()\n", __func__);

    if (!src || !dst) {
        error(COM"invalid parameters(0x%x, 0x%x, %d)\n", src, dst, len);
        return r;
    }

    inlen = strlen(src) + 1;
    inbuf = (char *)malloc(len);
    inbuf_hold = inbuf;

    memcpy(inbuf, src, len);
    cd = iconv_open("GBK", "UTF-8");
    if (cd != (iconv_t)-1) {
        r = 0;
        if (iconv(cd, &inbuf, &inlen, &outbuf, &outlen) != 0) {
            error(COM"failed to do iconv\n");
            r = -1;
        }
        iconv_close(cd);
    }
    else {
        error(COM"failed to open iconv(ret=%d)\n", cd);
    }

    free(inbuf_hold);
    return r;
}

#if defined(UT)
TEST(common_lang, utf8_to_gbk)
{
    TEST_ASSERT_EQUAL_INT(-1, utf8_to_gbk(NULL, NULL, 0));
}
#endif

static int strip_newline(char *s)
{
    int cc = 0;
    int len = 0;

    debug(COM"call %s()\n", __func__);

    if (!s) {
        error(COM"invalid buffer\n");
        return -1;
    }

    len = strlen(s);
    for (cc = 0; cc < len; cc++) {
        if (s[cc] == '\r') {
            s[cc] = 0;
        }
        else if (s[cc] == '\n') {
            s[cc] = 0;
        }
    }

    return 0;
}

#if defined(UT)
TEST(common_lang, strip_newline)
{
    TEST_ASSERT_EQUAL_INT(-1, strip_newline(NULL));
}
#endif

static int is_iconv_supported(void)
{
    iconv_t cd = 0;

    debug(COM"call %s()\n", __func__);

    cd = iconv_open("GBK", "UTF-8");
    if (cd == (iconv_t)-1) {
        error(COM"iconv doesn't be supported in this platform(errno=%d)\n", errno);
        return -1;
    }
    iconv_close(cd);
    return 0; 
}

#if defined(UT)
TEST(common_lang, is_iconv_supported)
{
    TEST_ASSERT_EQUAL_INT(0, is_iconv_supported());
}
#endif

static int parse_lang_file(const char *path, int idx)
{
    int r = -1;
    int len = 0;
    FILE *f = NULL;
    char buf[MAX_PATH] = { 0 };

    debug(COM"call %s(\"%s\")\n", __func__, path);

    if (!path) {
        error(COM"invalid path\n", __func__);
        return r;
    }

    if (is_iconv_supported() < 0) {
        return r;
    }

    f = fopen(path, "r");
    if (!f) {
        error(COM"failed to open \"%s\"\n", path);
        return r;
    }

    r = 0;
    while (fgets(buf, sizeof(buf), f)) {
        strip_newline(buf);
        len = strlen(buf);
        if (len == 0) {
            continue;
        }

        len += 1;
        lang[idx][r] = malloc(len);
        if (!lang[idx][r]) {
            error(COM"failed to allocate buffer for string\n");
            break;
        }
        memset(lang[idx][r], 0, len);

        utf8_to_gbk(buf, lang[idx][r], len);
        debug(COM"read string \"%s\"(len=%d)\n", lang[idx][r], strlen(lang[idx][r]));
        r += 1;
    }

    fclose(f);
    return 0;
}

#if defined(UT)
TEST(common_lang, parse_lang_file)
{
    TEST_ASSERT_EQUAL_INT(-1, parse_lang_file(NULL, -1));
}
#endif

int init_lang(void)
{
    int cc = 0;
    int idx = 0;
    int line = 0;
    DIR *dir = NULL;
    struct dirent *ent = NULL;
    char path[MAX_PATH] = { 0 };
 
    snprintf(path, sizeof(path), "%s/lang", mycfg.home);
    dir = opendir(path);

    if (!dir) {
        error(COM"failed to open \"%s\"\n", path);
        return -1;
    }

    while ((ent = readdir(dir)) != NULL) {
        idx = get_lang_idx(ent->d_name);
        if (idx <= 0) {
            continue;
        }

        snprintf(path, sizeof(path), "%s/lang/%s", mycfg.home, ent->d_name);
        line = get_file_line(path);
        if (line <= 0) {
            continue;
        }
        line += 1;

        lang[idx] = malloc(sizeof(char *) * line);
        if (lang[idx] == NULL) {
            error(COM"failed to allocate buffer to \"%s\" language\n", ent->d_name);
            continue;
        }

        for (cc = 0; cc < line; cc++) {
            lang[idx][cc] = NULL;
        }

        parse_lang_file(path, idx);
    }
 
    closedir(dir);
    return 0;
}

#if defined(UT)
TEST(common_lang, init_lang)
{
    TEST_ASSERT_EQUAL_INT(0, init_lang());
}
#endif

int quit_lang(void)
{
    int c0 = 0;
    int c1 = 0;

    debug(COM"call %s()\n", __func__);

    for (c0 = 0; c0 < LANG_MAX; c0++) {
        if (!lang[c0]) {
            continue;
        }

        c1 = 0;
        while (lang[c0][c1]) {
            free(lang[c0][c1]);
            lang[c0][c1] = NULL;
            c1 += 1;
        }
        free(lang[c0]);
        lang[c0] = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(common_lang, quit_lang)
{
    TEST_ASSERT_EQUAL_INT(0, quit_lang());
}
#endif

const char* l10n(const char *s)
{
    int idx = 0 ;
    int len = strlen(s);

    debug(COM"call %s(\"%s\")\n", __func__, s);

    if (mycfg.lang == LANG_en_US) {
        debug(COM"en_US, use same string\n");
        return s;
    }

    idx = 0;
    while (lang[mycfg.lang][idx]) {
        if ((memcmp(lang[mycfg.lang][idx], s, len) == 0) && (lang[mycfg.lang][idx][len] == '=')) {
            debug(COM"ret=\"%s\"\n", &lang[mycfg.lang][idx][len + 1]);
            return &lang[mycfg.lang][idx][len + 1];
        }
        idx += 1;
    }

    debug(COM"not find matching string\n");
    return s;
}

#if defined(UT)
TEST(common_lang, l10n)
{
    TEST_ASSERT_EQUAL_STRING("", l10n(""));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_lang)
{
    RUN_TEST_CASE(common_lang, get_lang_idx)
    RUN_TEST_CASE(common_lang, gbk_to_utf8)
    RUN_TEST_CASE(common_lang, utf8_to_gbk)
    RUN_TEST_CASE(common_lang, strip_newline)
    RUN_TEST_CASE(common_lang, is_iconv_supported)
    RUN_TEST_CASE(common_lang, parse_lang_file)
    RUN_TEST_CASE(common_lang, init_lang)
    RUN_TEST_CASE(common_lang, quit_lang)
    RUN_TEST_CASE(common_lang, l10n)
}
#endif

