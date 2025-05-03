// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "util.h"

#define DEBUG 0

#if DEBUG
#define debug(...) printf("[DEBUG] "__VA_ARGS__)
#else
#define debug(...)
#endif

#define error(...) printf("[ERROR] "__VA_ARGS__)

#endif

