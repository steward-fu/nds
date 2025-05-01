// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __UTIL_H__
#define __UTIL_H__

#define LOG_FILE_NAME "mynds.log"

#if !defined(MAX_PATH)
#define MAX_PATH        128
#endif

int write_log_to_file(const char *, const char *, ...);

#endif

