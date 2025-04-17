// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_LOG_H__
#define __COMMON_LOG_H__

    #define LOG_LEVEL_DEBUG     0
    #define LOG_LEVEL_ERROR     1
    #define LOG_FILE_NAME       "mynds.log"
    #define LOG_LEVEL_DEFAULT   LOG_LEVEL_DEBUG

    #define SND "[SND] "
    #define DTR "[DTR] "
    #define COM "[COM] "
    #define SDL "[SDL] "
    #define GUI "[GUI] "

    #define ERROR "[ERROR]"
    #define DEBUG "[DEBUG]"

    #define error(...)  write_log_to_file(LOG_LEVEL_ERROR, ERROR, __VA_ARGS__)
    #define debug(...)  write_log_to_file(LOG_LEVEL_DEBUG, DEBUG, __VA_ARGS__)

    int set_debug_level(int);
    int write_log_to_file(int, const char *, const char *, ...);

#endif

