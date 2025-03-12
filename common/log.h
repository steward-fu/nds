// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_LOG_H__
#define __COMMON_LOG_H__

    #define LOG_LEVEL_DEBUG 0
    #define LOG_LEVEL_INFO 1
    #define LOG_LEVEL_WARN 2
    #define LOG_LEVEL_ERROR 3

    #define LOG_FILE_NAME "miyoo_drastic_log.txt"
    #define LOG_LEVEL_DEFAULT LOG_LEVEL_DEBUG

    #define SND "[SND]"
    #define DTR "[DTR]"
    #define COM "[COM]"
    #define SDL "[SDL]"

    #define ERROR "[ERROR]"
    #define WARN "[WARN]"
    #define INFO "[INFO]"
    #define DEBUG "[DEBUG]"

    #define err(...) write_log_to_file(LOG_LEVEL_ERROR, ERROR, __VA_ARGS__)
    #define warn(...) write_log_to_file(LOG_LEVEL_WARN, WARN, __VA_ARGS__)
    #define info(...) write_log_to_file(LOG_LEVEL_INFO, INFO, __VA_ARGS__)
    #define debug(...) write_log_to_file(LOG_LEVEL_DEBUG, DEBUG, __VA_ARGS__)

    int set_debug_level(int newlevel);
    int write_log_to_file(int level, const char *msg, const char *fmt, ...);

#endif

