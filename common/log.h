// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_LOG_H__
#define __COMMON_LOG_H__

    #include "cfg.pb.h"
    extern nds_pb_cfg mycfg;

    #define LOG_FILE_NAME "mynds.log"

    #define SND "[SND] "
    #define DTR "[DTR] "
    #define COM "[COM] "
    #define SDL "[SDL] "
    #define GUI "[GUI] "

    #define ERROR "[ERROR]"
    #define DEBUG "[DEBUG]"

    #define error(...)  write_log_to_file(ERROR, __VA_ARGS__)
    #define debug(...)  \
        do { \
            if (mycfg.dbg) { \
                write_log_to_file(DEBUG, __VA_ARGS__); \
            } \
        } while(0)

    int write_log_to_file(const char *, const char *, ...);

#endif

