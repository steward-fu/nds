// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "util.h"

#define DEBUG 0

//#if defined(UT) || defined(GKD2)

#define error(...)
#define debug(...)

/*#elif defined(RUNNER)

#define error(...)  printf(__VA_ARGS__)
#define debug(...)  printf(__VA_ARGS__)

#else

#define error(...)  write_log_to_file("[ERROR] ", __VA_ARGS__)
#define debug(...)  \
    do { \
        if (DEBUG) { \
            write_log_to_file("[DEBUG] ", __VA_ARGS__); \
        } \
    } while(0)
#endif
*/
#endif

