// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_H__
#define __COMMON_H__

#define DEBUG 0

#if DEBUG
#define debug(...) printf("[DEBUG] "__VA_ARGS__)
#else
#define debug(...)
#endif

#if !defined(UT)
#define error(...) printf("[ERROR] "__VA_ARGS__)
#else
#define error(...)
#endif

#define LOG_FILE_NAME "mynds.log"

#if !defined(MAX_PATH)
#define MAX_PATH        128
#endif

#define JSON_VOL_KEY "vol"

void* neon_memcpy(void *, const void *, size_t);
int write_file(const char *, const void *, int);
int write_log_to_file(const char *, const char *, ...);

#endif

