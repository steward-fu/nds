// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "log.h"
#include "hook.h"

#if defined(UT)
TEST_GROUP(common_log);

TEST_SETUP(common_log)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(common_log)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

int write_log_to_file(const char *msg, const char *fmt, ...)
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

#if defined(UT)
TEST(common_log, write_log_to_file)
{
    TEST_ASSERT_EQUAL_INT(0, write_log_to_file(COM, "run unit-test with error level\n"));
    TEST_ASSERT_EQUAL_INT(-1, write_log_to_file(COM, "run unit-test with debug level\n"));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_log)
{
    RUN_TEST_CASE(common_log, write_log_to_file);
}
#endif

