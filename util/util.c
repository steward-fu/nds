// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
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

