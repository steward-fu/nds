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

static int debug_level = LOG_LEVEL_DEFAULT;

#if defined(UT)
TEST_GROUP(common_log);

TEST_SETUP(common_log)
{
}

TEST_TEAR_DOWN(common_log)
{
}
#endif

int set_debug_level(int level)
{
    debug_level = level;
    info(COM"set debug level as %d\n", debug_level);

    return debug_level;
}

#if defined(UT)
TEST(common_log, set_debug_level)
{
    TEST_ASSERT_EQUAL_INT(LOG_LEVEL_ERROR, set_debug_level(LOG_LEVEL_ERROR));
    TEST_ASSERT_EQUAL_INT(LOG_LEVEL_DEBUG, set_debug_level(LOG_LEVEL_DEBUG));
}
#endif

int write_log_to_file(int level, const char *msg, const char *fmt, ...)
{
    if (level < debug_level) {
        return -1;
    }

    FILE *file = fopen(LOG_FILE_NAME, "a+"); 
    if (NULL == file) {
        return -1;
    }

    va_list va = { 0 };
    time_t rawtime = { 0 };
    struct tm *timeinfo = { 0 };
    
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    
    fprintf(file, "[%04d/%02d/%02d-%02d:%02d:%02d]",
        timeinfo->tm_year + 1900,
        timeinfo->tm_mday,
        timeinfo->tm_mon + 1,
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
    TEST_ASSERT_EQUAL_INT(LOG_LEVEL_ERROR, set_debug_level(LOG_LEVEL_ERROR));
    TEST_ASSERT_EQUAL_INT(0, write_log_to_file(LOG_LEVEL_ERROR, INFO, COM"run test with error level\n"));
    TEST_ASSERT_EQUAL_INT(-1, write_log_to_file(LOG_LEVEL_DEBUG, INFO, COM"run test with debug level\n"));

    TEST_ASSERT_EQUAL_INT(LOG_LEVEL_DEBUG, set_debug_level(LOG_LEVEL_DEBUG));
    TEST_ASSERT_EQUAL_INT(0, write_log_to_file(LOG_LEVEL_ERROR, INFO, COM"run test with error level\n"));
    TEST_ASSERT_EQUAL_INT(0, write_log_to_file(LOG_LEVEL_DEBUG, INFO, COM"run test with debug level\n"));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(common_log)
{
    RUN_TEST_CASE(common_log, set_debug_level);
    RUN_TEST_CASE(common_log, write_log_to_file);
}
#endif

