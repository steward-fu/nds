// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __DEBUG_H__
#define __DEBUG_H__

#if defined(UT)
#define error(...)
#define debug(...)
#else
#define DEBUG 0
#define error(...)  printf("[NDS] "__VA_ARGS__);
#define debug(...)  if (DEBUG) { printf("[NDS] "__VA_ARGS__); }
#endif

#endif

