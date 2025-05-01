// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "util.h"

#define DEBUG 1

#if DEBUG
#define error(...) printf(__VA_ARGS__)
#define debug(...)
#else
#define error(...) printf(__VA_ARGS__)
#define debug(...) printf(__VA_ARGS__)
#endif

#endif

