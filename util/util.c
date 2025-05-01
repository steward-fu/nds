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
#include <sys/mman.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "debug.h"

#if defined(UT)
TEST_GROUP(util);

TEST_SETUP(util)
{
}

TEST_TEAR_DOWN(util)
{
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
