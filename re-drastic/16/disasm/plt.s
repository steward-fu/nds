                             //
                             // .plt 
                             // SHT_PROGBITS  [0x8002c60 - 0x8003663]
                             // ram:08002c60-ram:08003663
                             //
                             LAB_08002c60                                    XREF[423]:   080fa14c(*), 080fa150(*), 
                                                                                          080fa154(*), 080fa158(*), 
                                                                                          080fa15c(*), 080fa160(*), 
                                                                                          080fa164(*), 080fa168(*), 
                                                                                          080fa16c(*), 080fa170(*), 
                                                                                          080fa174(*), 080fa178(*), 
                                                                                          080fa17c(*), 080fa180(*), 
                                                                                          080fa184(*), 080fa188(*), 
                                                                                          080fa18c(*), 080fa190(*), 
                                                                                          080fa194(*), 080fa198(*), [more]
        08002c60 04 e0 2d e5     str        lr,[sp,#-0x4]!
        08002c64 04 e0 9f e5     ldr        lr,[DAT_08002c70]                                = 000F74D0h
        08002c68 0e e0 8f e0     add        lr,pc,lr
        08002c6c 08 f0 be e5     ldr        pc,[lr,#0x8]!=>PTR_080fa148                      = 00000000
                             DAT_08002c70                                    XREF[1]:     08002c64(R)  
        08002c70 d0 74 0f 00     undefined4 000F74D0h
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __sighandler_t signal(int __sig, __sighandler_t __
                               Thunked-Function: <EXTERNAL>::signal
             __sighandler_t    r0:4           <RETURN>
             int               r0:4           __sig
             __sighandler_t    r1:4           __handler
                             <EXTERNAL>::signal                              XREF[4]:     Entry Point(*), 
                                                                                          FUN_08078588:080788f8(c), 
                                                                                          FUN_080b7384:080b73cc(c), 
                                                                                          FUN_080b7384:080b73f4(c)  
        08002c74 00 c6 8f e2     adr        r12,0x8002c7c
        08002c78 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002c7c d0 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4d0]!=>PTR_LAB_080fa14c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_init(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
             pthread_condat    r1:4           __cond_attr
                             <EXTERNAL>::pthread_cond_init                   XREF[3]:     Entry Point(*), 
                                                                                          FUN_080d64ec:080d65b8(c), 
                                                                                          FUN_080d64ec:080d65f8(c)  
        08002c80 00 c6 8f e2     adr        r12,0x8002c88
        08002c84 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002c88 c8 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4c8]!=>PTR_LAB_080fa150 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chdir(char * __path)
                               Thunked-Function: <EXTERNAL>::chdir
             int               r0:4           <RETURN>
             char *            r0:4           __path
                             <EXTERNAL>::chdir                               XREF[4]:     Entry Point(*), 
                                                                                          FUN_08062bc8:08063dd4(c), 
                                                                                          FUN_08062bc8:08063f94(c), 
                                                                                          FUN_08067420:08067524(c)  
        08002c8c 00 c6 8f e2     adr        r12,0x8002c94
        08002c90 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002c94 c0 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4c0]!=>PTR_LAB_080fa154 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new(uint param_1)
                               Thunked-Function: <EXTERNAL>::operator.new
             void *            r0:4           <RETURN>
             uint              r0:4           param_1
                             <EXTERNAL>::operator.new                        XREF[8]:     Entry Point(*), 
                                                                                          FUN_0809cec4:0809cf24(c), 
                                                                                          FUN_080a7108:080a71f8(c), 
                                                                                          FUN_080be130:080be1c4(c), 
                                                                                          FUN_080cbea8:080cc01c(c), 
                                                                                          FUN_080cbea8:080cc0c4(c), 
                                                                                          FUN_080d6190:080d61d4(c), 
                                                                                          FUN_080dddd8:080de0c4(c)  
        08002c98 00 c6 8f e2     adr        r12,0x8002ca0
        08002c9c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ca0 b8 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4b8]!=>PTR_LAB_080fa158 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk passwd * getpwnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getpwnam
             passwd *          r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getpwnam                            XREF[4]:     Entry Point(*), 
                                                                                          FUN_080e4778:080e4814(c), 
                                                                                          FUN_080e49d4:080e4b08(c), 
                                                                                          FUN_080e4cd4:080e4d3c(c)  
        08002ca4 00 c6 8f e2     adr        r12,0x8002cac
        08002ca8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cac b0 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4b0]!=>PTR_LAB_080fa15c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_lock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_lock                  XREF[7]:     Entry Point(*), 
                                                                                          FUN_080d63bc:080d63d0(c), 
                                                                                          FUN_080d6700:080d6730(c), 
                                                                                          FUN_080d6844:080d68b8(c), 
                                                                                          FUN_080d6924:080d6944(c), 
                                                                                          FUN_080d6afc:080d6b74(c), 
                                                                                          FUN_080d6afc:080d6bc0(c)  
        08002cb0 00 c6 8f e2     adr        r12,0x8002cb8
        08002cb4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cb8 a8 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4a8]!=>PTR_LAB_080fa160 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcslen(wchar_t * __s)
                               Thunked-Function: <EXTERNAL>::wcslen
             size_t            r0:4           <RETURN>
             wchar_t *         r0:4           __s
                             <EXTERNAL>::wcslen                              XREF[39]:    Entry Point(*), 
                                                                                          FUN_08012248:080122d0(c), 
                                                                                          FUN_0809f558:0809f59c(c), 
                                                                                          FUN_0809f80c:0809f898(c), 
                                                                                          FUN_080a06f0:080a070c(c), 
                                                                                          FUN_080a0c2c:080a0c40(c), 
                                                                                          FUN_080a0cf8:080a0d0c(c), 
                                                                                          FUN_080a1368:080a1380(c), 
                                                                                          FUN_080a17b8:080a17cc(c), 
                                                                                          FUN_080a1938:080a19c0(c), 
                                                                                          FUN_080a1938:080a1ad8(c), 
                                                                                          FUN_080a2134:080a216c(c), 
                                                                                          FUN_080a62c4:080a6ae0(c), 
                                                                                          FUN_080a62c4:080a6d14(c), 
                                                                                          FUN_080a6dfc:080a6fa8(c), 
                                                                                          FUN_080b76e8:080b7740(c), 
                                                                                          FUN_080c1c1c:080c1d24(c), 
                                                                                          FUN_080c1c1c:080c1d3c(c), 
                                                                                          FUN_080dae00:080dae28(c), 
                                                                                          FUN_080e03e8:080e0428(c), [more]
        08002cbc 00 c6 8f e2     adr        r12,0x8002cc4
        08002cc0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cc4 a0 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x4a0]!=>PTR_LAB_080fa164 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_init(pthread_mutex_t * __mutex, 
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
             pthread_mutexa    r1:4           __mutexattr
                             <EXTERNAL>::pthread_mutex_init                  XREF[4]:     Entry Point(*), 
                                                                                          FUN_080d64ec:080d6598(c), 
                                                                                          FUN_080d64ec:080d65d8(c), 
                                                                                          FUN_080d64ec:080d6618(c)  
        08002cc8 00 c6 8f e2     adr        r12,0x8002cd0
        08002ccc f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cd0 98 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x498]!=>PTR_LAB_080fa168 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uldivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_uld
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uldivmod                    XREF[12]:    Entry Point(*), 
                                                                                          FUN_0802b5a8:0802b918(c), 
                                                                                          FUN_0802b5a8:0802b940(c), 
                                                                                          FUN_08058b30:08058bf0(c), 
                                                                                          FUN_0805949c:080597bc(c), 
                                                                                          FUN_0805949c:080597e8(c), 
                                                                                          FUN_0805cd0c:0805ce1c(c), 
                                                                                          FUN_0805cd0c:0805cf84(c), 
                                                                                          FUN_0805d17c:0805d27c(c), 
                                                                                          FUN_0805d2a4:0805d3a8(c), 
                                                                                          FUN_0806001c:08060144(c), 
                                                                                          FUN_080b530c:080b5358(c)  
        08002cd4 00 c6 8f e2     adr        r12,0x8002cdc
        08002cd8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cdc 90 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x490]!=>PTR_LAB_080fa16c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towlower(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towlower
             wint_t            r0:4           <RETURN>
             wint_t            r0:4           __wc
                             <EXTERNAL>::towlower                            XREF[3]:     Entry Point(*), 
                                                                                          FUN_080b0c94:080b0cbc(c), 
                                                                                          FUN_080b0d88:080b0da0(c)  
        08002ce0 00 c6 8f e2     adr        r12,0x8002ce8
        08002ce4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ce8 88 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x488]!=>PTR_LAB_080fa170 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ftruncate(int __fd, __off_t __length)
                               Thunked-Function: <EXTERNAL>::ftruncate
             int               r0:4           <RETURN>
             int               r0:4           __fd
             __off_t           r1:4           __length
                             <EXTERNAL>::ftruncate                           XREF[3]:     Entry Point(*), 
                                                                                          FUN_08012674:080126c4(c), 
                                                                                          FUN_08012928:0801297c(c)  
        08002cec 00 c6 8f e2     adr        r12,0x8002cf4
        08002cf0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002cf4 80 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x480]!=>PTR_LAB_080fa174 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __pid_t getpid(void)
                               Thunked-Function: <EXTERNAL>::getpid
             __pid_t           r0:4           <RETURN>
                             <EXTERNAL>::getpid                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080b7888:080b78a4(c)  
        08002cf8 00 c6 8f e2     adr        r12,0x8002d00
        08002cfc f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d00 78 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x478]!=>PTR_LAB_080fa178 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int gettimeofday(timeval * __tv, __timezone_ptr_t 
                               Thunked-Function: <EXTERNAL>::gettimeofday
             int               r0:4           <RETURN>
             timeval *         r0:4           __tv
             __timezone_ptr    r1:4           __tz
                             <EXTERNAL>::gettimeofday                        XREF[2]:     Entry Point(*), 
                                                                                          FUN_0807b7f0:0807b804(c)  
        08002d04 00 c6 8f e2     adr        r12,0x8002d0c
        08002d08 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d0c 70 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x470]!=>PTR_LAB_080fa17c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_destroy(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_destroy                XREF[3]:     Entry Point(*), 
                                                                                          FUN_080d6700:080d67d8(c), 
                                                                                          FUN_080d6700:080d67f8(c)  
        08002d10 00 c6 8f e2     adr        r12,0x8002d18
        08002d14 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d18 68 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x468]!=>PTR_LAB_080fa180 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_start()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sta
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_start                       XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078d74(c), 
                                                                                          FUN_08078e48:08078fc0(c)  
        08002d1c 00 c6 8f e2     adr        r12,0x8002d24
        08002d20 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d24 60 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x460]!=>PTR_LAB_080fa184 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compress()
                               Thunked-Function: <EXTERNAL>::compress
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::compress                            XREF[2]:     Entry Point(*), 0805f8b0(c)  
        08002d28 00 c6 8f e2     adr        r12,0x8002d30
        08002d2c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d30 58 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x458]!=>PTR_LAB_080fa188 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseeko64(FILE * __stream, __off64_t __off, int
                               Thunked-Function: <EXTERNAL>::fseeko64
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             __off64_t         Stack[0x0]:8   __off
             int               r1:4           __whence
                             <EXTERNAL>::fseeko64                            XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a4a0c:080a4ad0(c)  
        08002d34 00 c6 8f e2     adr        r12,0x8002d3c
        08002d38 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d3c 50 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x450]!=>PTR_LAB_080fa18c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcasecmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcasecmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
                             <EXTERNAL>::strcasecmp                          XREF[43]:    Entry Point(*), 
                                                                                          FUN_0805e6dc:0805e7d8(c), 
                                                                                          FUN_0805e6dc:0805e840(c), 
                                                                                          FUN_0805e6dc:0805e864(c), 
                                                                                          FUN_0805e6dc:0805e908(c), 
                                                                                          FUN_0805e6dc:0805e950(c), 
                                                                                          FUN_0805e6dc:0805eb3c(c), 
                                                                                          FUN_0805e6dc:0805ec18(c), 
                                                                                          FUN_08060658:080606b8(c), 
                                                                                          FUN_08060658:08060898(c), 
                                                                                          FUN_08060658:080608b0(c), 
                                                                                          FUN_08060658:080608c8(c), 
                                                                                          FUN_08060d5c:08060d8c(c), 
                                                                                          FUN_08060d5c:08060da4(c), 
                                                                                          FUN_08060d5c:08060dbc(c), 
                                                                                          FUN_08060d5c:08060dd4(c), 
                                                                                          FUN_08062bc8:08062ea4(c), 
                                                                                          FUN_08094678:08094a1c(c), 
                                                                                          FUN_08095488:08095848(c), 
                                                                                          FUN_08096b94:08096c50(c), [more]
        08002d40 00 c6 8f e2     adr        r12,0x8002d48
        08002d44 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d48 48 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x448]!=>PTR_LAB_080fa190 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int utime(char * __file, utimbuf * __file_times)
                               Thunked-Function: <EXTERNAL>::utime
             int               r0:4           <RETURN>
             char *            r0:4           __file
             utimbuf *         r1:4           __file_times
                             <EXTERNAL>::utime                               XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a4cb0:080a4dcc(c)  
        08002d4c 00 c6 8f e2     adr        r12,0x8002d54
        08002d50 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d54 40 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x440]!=>PTR_LAB_080fa194 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fdopen(int __fd, char * __modes)
                               Thunked-Function: <EXTERNAL>::fdopen
             FILE *            r0:4           <RETURN>
             int               r0:4           __fd
             char *            r1:4           __modes
                             <EXTERNAL>::fdopen                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080a3dec:080a3f80(c), 
                                                                                          FUN_080a44e8:080a4548(c)  
        08002d58 00 c6 8f e2     adr        r12,0x8002d60
        08002d5c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d60 38 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x438]!=>PTR_LAB_080fa198 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long strtol(char * __nptr, char * * __endptr, int 
                               Thunked-Function: <EXTERNAL>::strtol
             long              r0:4           <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtol                              XREF[5]:     Entry Point(*), 
                                                                                          FUN_08005414:080054e8(c), 
                                                                                          FUN_08005414:08005598(c), 
                                                                                          FUN_08005414:080055d0(c), 
                                                                                          FUN_080725a8:08074e80(c)  
        08002d64 00 c6 8f e2     adr        r12,0x8002d6c
        08002d68 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d6c 30 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x430]!=>PTR_LAB_080fa19c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_access()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_access        XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078cc4(c), 
                                                                                          FUN_08078e48:08078ec4(c)  
        08002d70 00 c6 8f e2     adr        r12,0x8002d78
        08002d74 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d78 28 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x428]!=>PTR_LAB_080fa1a0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void free(void * __ptr)
                               Thunked-Function: <EXTERNAL>::free
             void              <VOID>         <RETURN>
             void *            r0:4           __ptr
                             <EXTERNAL>::free                                XREF[131]:   Entry Point(*), 
                                                                                          FUN_08010900:08010ca8(c), 
                                                                                          FUN_08010900:08010cb0(c), 
                                                                                          FUN_08010900:08010cd0(c), 
                                                                                          FUN_08010e2c:08010e4c(c), 
                                                                                          FUN_08010e2c:08010e64(c), 
                                                                                          FUN_08010e2c:08010e7c(c), 
                                                                                          FUN_08058810:080588f4(c), 
                                                                                          FUN_08058810:08058904(c), 
                                                                                          FUN_08058810:08058910(c), 
                                                                                          FUN_08058980:080589e8(c), 
                                                                                          FUN_08058980:080589f8(c), 
                                                                                          FUN_08058980:08058a04(c), 
                                                                                          FUN_0805ab48:0805ad6c(c), 
                                                                                          FUN_0805ab48:0805ad7c(c), 
                                                                                          FUN_0805c170:0805c1a4(c), 
                                                                                          FUN_0805f9fc:0805fac0(c), 
                                                                                          FUN_0805f9fc:0805fc1c(c), 
                                                                                          FUN_0805f9fc:0805fdc8(c), 
                                                                                          FUN_0805f9fc:0805fdfc(c), [more]
        08002d7c 00 c6 8f e2     adr        r12,0x8002d84
        08002d80 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d84 20 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x420]!=>PTR_LAB_080fa1a4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent * readdir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir
             dirent *          r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::readdir                             XREF[3]:     Entry Point(*), 
                                                                                          FUN_08062bc8:08062de8(c), 
                                                                                          FUN_08062bc8:08062f8c(c)  
        08002d88 00 c6 8f e2     adr        r12,0x8002d90
        08002d8c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d90 18 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x418]!=>PTR_LAB_080fa1a8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseek(FILE * __stream, long __off, int __whence)
                               Thunked-Function: <EXTERNAL>::fseek
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             long              r1:4           __off
             int               r2:4           __whence
                             <EXTERNAL>::fseek                               XREF[32]:    Entry Point(*), 
                                                                                          FUN_08004eb0:08004f1c(c), 
                                                                                          FUN_08004eb0:08004f38(c), 
                                                                                          FUN_0805ab48:0805abd4(c), 
                                                                                          FUN_0805ab48:0805abf0(c), 
                                                                                          FUN_0805ab48:0805acc4(c), 
                                                                                          FUN_0805ab48:0805ace0(c), 
                                                                                          FUN_0805dac8:0805db6c(c), 
                                                                                          FUN_0805dac8:0805db88(c), 
                                                                                          FUN_0805f9fc:0805fc7c(c), 
                                                                                          FUN_0805f9fc:0805fc9c(c), 
                                                                                          FUN_08060658:080609f4(c), 
                                                                                          FUN_08060658:08060b3c(c), 
                                                                                          FUN_08060d5c:08060e40(c), 
                                                                                          FUN_08060d5c:08060e5c(c), 
                                                                                          FUN_080683a4:08068438(c), 
                                                                                          FUN_08068904:08068a64(c), 
                                                                                          FUN_0807840c:080784f0(c), 
                                                                                          FUN_0807840c:0807850c(c), 
                                                                                          FUN_080963b4:080965fc(c), [more]
        08002d94 00 c6 8f e2     adr        r12,0x8002d9c
        08002d98 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002d9c 10 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x410]!=>PTR_LAB_080fa1ac = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat64(int __ver, char * __filename, stat64
                               Thunked-Function: <EXTERNAL>::__xstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__xstat64                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_080e54e8:080e54f4(c)  
        08002da0 00 c6 8f e2     adr        r12,0x8002da8
        08002da4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002da8 08 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x408]!=>PTR_LAB_080fa1b0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void qsort(void * __base, size_t __nmemb, size_t _
                               Thunked-Function: <EXTERNAL>::qsort
             void              <VOID>         <RETURN>
             void *            r0:4           __base
             size_t            r1:4           __nmemb
             size_t            r2:4           __size
             __compar_fn_t     r3:4           __compar
                             <EXTERNAL>::qsort                               XREF[8]:     Entry Point(*), 
                                                                                          FUN_0805e6dc:0805f170(c), 
                                                                                          FUN_0805e6dc:0805f18c(c), 
                                                                                          FUN_080624c0:0806269c(c), 
                                                                                          FUN_08062bc8:08063084(c), 
                                                                                          FUN_08062bc8:0806309c(c), 
                                                                                          FUN_080683a4:0806859c(c), 
                                                                                          FUN_080711e8:080712ac(c)  
        08002dac 00 c6 8f e2     adr        r12,0x8002db4
        08002db0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002db4 00 f4 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x400]!=>PTR_LAB_080fa1b4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncat(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncat
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncat                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a06f0:080a0744(c)  
        08002db8 00 c6 8f e2     adr        r12,0x8002dc0
        08002dbc f7 ca 8c e2     add        r12,r12,#0xf7000
        08002dc0 f8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3f8]!=>PTR_LAB_080fa1b8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk clock_t clock(void)
                               Thunked-Function: <EXTERNAL>::clock
             clock_t           r0:4           <RETURN>
                             <EXTERNAL>::clock                               XREF[2]:     Entry Point(*), 
                                                                                          FUN_080b3a80:080b3b38(c)  
        08002dc4 00 c6 8f e2     adr        r12,0x8002dcc
        08002dc8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002dcc f0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3f0]!=>PTR_LAB_080fa1bc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncmp(char * __s1, char * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::strncmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::strncmp                             XREF[16]:    Entry Point(*), 
                                                                                          FUN_0805ae28:0805b30c(c), 
                                                                                          FUN_0805ae28:0805b344(c), 
                                                                                          FUN_0805e080:0805e0e4(c), 
                                                                                          FUN_0805e080:0805e108(c), 
                                                                                          FUN_0805e080:0805e12c(c), 
                                                                                          FUN_0805e080:0805e168(c), 
                                                                                          FUN_0805e080:0805e190(c), 
                                                                                          FUN_0805e6dc:0805ee40(c), 
                                                                                          FUN_0805e6dc:0805ee64(c), 
                                                                                          FUN_0805e6dc:0805ef64(c), 
                                                                                          FUN_0805e6dc:0805efb8(c), 
                                                                                          FUN_0805e6dc:0805efe0(c), 
                                                                                          FUN_0806706c:08067114(c), 
                                                                                          FUN_08067420:080674c8(c), 
                                                                                          FUN_080e5208:080e5280(c)  
        08002dd0 00 c6 8f e2     adr        r12,0x8002dd8
        08002dd4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002dd8 e8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3e8]!=>PTR_LAB_080fa1c0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t mbstowcs(wchar_t * __pwcs, char * __s, size
                               Thunked-Function: <EXTERNAL>::mbstowcs
             size_t            r0:4           <RETURN>
             wchar_t *         r0:4           __pwcs
             char *            r1:4           __s
             size_t            r2:4           __n
                             <EXTERNAL>::mbstowcs                            XREF[2]:     Entry Point(*), 
                                                                                          FUN_080afc9c:080afcd4(c)  
        08002ddc 00 c6 8f e2     adr        r12,0x8002de4
        08002de0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002de4 e0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3e0]!=>PTR_LAB_080fa1c4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined uncompress()
                               Thunked-Function: <EXTERNAL>::uncompress
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::uncompress                          XREF[2]:     Entry Point(*), 
                                                                                          FUN_0805f9fc:0805fe30(c)  
        08002de8 00 c6 8f e2     adr        r12,0x8002df0
        08002dec f7 ca 8c e2     add        r12,r12,#0xf7000
        08002df0 d8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3d8]!=>PTR_LAB_080fa1c8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mbtowc(wchar_t * __pwc, char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mbtowc
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __pwc
             char *            r1:4           __s
             size_t            r2:4           __n
                             <EXTERNAL>::mbtowc                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080affb8:080b0048(c), 
                                                                                          FUN_080affb8:080b0084(c)  
        08002df4 00 c6 8f e2     adr        r12,0x8002dfc
        08002df8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002dfc d0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3d0]!=>PTR_LAB_080fa1cc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_readi()
                               Thunked-Function: <EXTERNAL>::snd_pcm_rea
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_readi                       XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078b1c:08078bd0(c), 
                                                                                          FUN_08078bf4:08078c44(c)  
        08002e00 00 c6 8f e2     adr        r12,0x8002e08
        08002e04 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e08 c8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3c8]!=>PTR_LAB_080fa1d0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsrchr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcsrchr
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t           r1:4           __wc
                             <EXTERNAL>::wcsrchr                             XREF[5]:     Entry Point(*), 
                                                                                          FUN_080a11bc:080a11ec(c), 
                                                                                          FUN_080a251c:080a2544(c), 
                                                                                          FUN_080dddd8:080de5e0(c), 
                                                                                          FUN_080dddd8:080de6e0(c)  
        08002e0c 00 c6 8f e2     adr        r12,0x8002e14
        08002e10 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e14 c0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3c0]!=>PTR_LAB_080fa1d4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_recover()
                               Thunked-Function: <EXTERNAL>::snd_pcm_rec
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_recover                     XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078b1c:08078be0(c)  
        08002e18 00 c6 8f e2     adr        r12,0x8002e20
        08002e1c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e20 b8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3b8]!=>PTR_LAB_080fa1d8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcsncmp(wchar_t * __s1, wchar_t * __s2, size_t
                               Thunked-Function: <EXTERNAL>::wcsncmp
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncmp                             XREF[3]:     Entry Point(*), 
                                                                                          FUN_080e0e24:080e0e58(c), 
                                                                                          FUN_080e0e24:080e0e70(c)  
        08002e24 00 c6 8f e2     adr        r12,0x8002e2c
        08002e28 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e2c b0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3b0]!=>PTR_LAB_080fa1dc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_begin_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_begin
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_begin_catch                   XREF[1]:     Entry Point(*)  
        08002e30 00 c6 8f e2     adr        r12,0x8002e38
        08002e34 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e38 a8 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3a8]!=>PTR_LAB_080fa1e0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uidivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_uid
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uidivmod                    XREF[11]:    Entry Point(*), 
                                                                                          FUN_0802d2d8:0802d344(c), 
                                                                                          FUN_0802d4cc:0802d520(c), 
                                                                                          FUN_0802d4cc:0802d680(c), 
                                                                                          FUN_080b24ec:080b2a68(c), 
                                                                                          FUN_080b3054:080b32bc(c), 
                                                                                          FUN_080c5cc4:080c6104(c), 
                                                                                          FUN_080d6924:080d6a00(c), 
                                                                                          FUN_080d6a34:080d6a64(c), 
                                                                                          FUN_080d6a34:080d6ae0(c), 
                                                                                          FUN_080d6afc:080d6b34(c)  
        08002e3c 00 c6 8f e2     adr        r12,0x8002e44
        08002e40 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e44 a0 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x3a0]!=>PTR_LAB_080fa1e4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcspbrk(wchar_t * __wcs, wchar_t * __acc
                               Thunked-Function: <EXTERNAL>::wcspbrk
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t *         r1:4           __accept
                             <EXTERNAL>::wcspbrk                             XREF[5]:     Entry Point(*), 
                                                                                          FUN_080a1270:080a1298(c), 
                                                                                          FUN_080a1c78:080a1ca4(c), 
                                                                                          FUN_080d7d3c:080d8f68(c), 
                                                                                          FUN_080e0b1c:080e0c90(c)  
        08002e48 00 c6 8f e2     adr        r12,0x8002e50
        08002e4c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e50 98 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x398]!=>PTR_LAB_080fa1e8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_join(pthread_t __th, void * * __thread
                               Thunked-Function: <EXTERNAL>::pthread_join
             int               r0:4           <RETURN>
             pthread_t         r0:4           __th
             void * *          r1:4           __thread_return
                             <EXTERNAL>::pthread_join                        XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d6398:080d63b0(c)  
        08002e54 00 c6 8f e2     adr        r12,0x8002e5c
        08002e58 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e5c 90 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x390]!=>PTR_LAB_080fa1ec = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fgetc(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgetc
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fgetc                               XREF[33]:    Entry Point(*), 
                                                                                          FUN_080963b4:0809643c(c), 
                                                                                          FUN_080963b4:08096448(c), 
                                                                                          FUN_080963b4:08096458(c), 
                                                                                          FUN_080963b4:08096464(c), 
                                                                                          FUN_080963b4:08096474(c), 
                                                                                          FUN_080963b4:08096480(c), 
                                                                                          FUN_080963b4:08096490(c), 
                                                                                          FUN_080963b4:0809649c(c), 
                                                                                          FUN_080963b4:080964ac(c), 
                                                                                          FUN_080963b4:080964b8(c), 
                                                                                          FUN_080963b4:080964c8(c), 
                                                                                          FUN_080963b4:080964d4(c), 
                                                                                          FUN_080963b4:080964e0(c), 
                                                                                          FUN_080963b4:080964f4(c), 
                                                                                          FUN_080963b4:08096508(c), 
                                                                                          FUN_080963b4:08096514(c), 
                                                                                          FUN_080963b4:08096520(c), 
                                                                                          FUN_080963b4:08096534(c), 
                                                                                          FUN_080963b4:08096548(c), [more]
        08002e60 00 c6 8f e2     adr        r12,0x8002e68
        08002e64 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e68 88 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x388]!=>PTR_LAB_080fa1f0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_open(char * __name, int __oflag, mode_t __
                               Thunked-Function: <EXTERNAL>::shm_open
             int               r0:4           <RETURN>
             char *            r0:4           __name
             int               r1:4           __oflag
             mode_t            r2:4           __mode
                             <EXTERNAL>::shm_open                            XREF[3]:     Entry Point(*), 
                                                                                          FUN_08012674:080126ac(c), 
                                                                                          FUN_08012928:08012968(c)  
        08002e6c 00 c6 8f e2     adr        r12,0x8002e74
        08002e70 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e74 80 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x380]!=>PTR_LAB_080fa1f4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_malloc()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_malloc            XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078f88(c)  
        08002e78 00 c6 8f e2     adr        r12,0x8002e80
        08002e7c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e80 78 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x378]!=>PTR_LAB_080fa1f8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_free()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_free              XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078d64(c), 
                                                                                          FUN_08078e48:08078f80(c)  
        08002e84 00 c6 8f e2     adr        r12,0x8002e8c
        08002e88 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e8c 70 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x370]!=>PTR_LAB_080fa1fc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int closedir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::closedir
             int               r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::closedir                            XREF[3]:     Entry Point(*), 
                                                                                          FUN_08062bc8:080630a4(c), 
                                                                                          FUN_080c3a74:080c3aa8(c)  
        08002e90 00 c6 8f e2     adr        r12,0x8002e98
        08002e94 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002e98 68 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x368]!=>PTR_LAB_080fa200 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_allocate_exception()
                               Thunked-Function: <EXTERNAL>::__cxa_alloc
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_allocate_exception            XREF[6]:     Entry Point(*), 
                                                                                          FUN_080b7400:080b744c(c), 
                                                                                          FUN_080d0dc4:080d0ea8(c), 
                                                                                          FUN_080d0dc4:080d0f54(c), 
                                                                                          FUN_080d1774:080d1878(c), 
                                                                                          FUN_080d1774:080d18bc(c)  
        08002e9c 00 c6 8f e2     adr        r12,0x8002ea4
        08002ea0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ea4 60 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x360]!=>PTR_LAB_080fa204 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int swprintf(wchar_t * __s, size_t __n, wchar_t * 
                               Thunked-Function: <EXTERNAL>::swprintf
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s
             size_t            r1:4           __n
             wchar_t *         r2:4           __format
                             <EXTERNAL>::swprintf                            XREF[9]:     Entry Point(*), 
                                                                                          FUN_080a23d8:080a2428(c), 
                                                                                          FUN_080ad800:080ae144(c), 
                                                                                          FUN_080b5674:080b5710(c), 
                                                                                          FUN_080b5674:080b5758(c), 
                                                                                          FUN_080b5674:080b57b4(c), 
                                                                                          FUN_080d62d4:080d634c(c), 
                                                                                          FUN_080d7d3c:080d8f9c(c), 
                                                                                          FUN_080e03e8:080e0524(c)  
        08002ea8 00 c6 8f e2     adr        r12,0x8002eb0
        08002eac f7 ca 8c e2     add        r12,r12,#0xf7000
        08002eb0 58 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x358]!=>PTR_LAB_080fa208 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void exit(int __status)
                               Thunked-Function: <EXTERNAL>::exit
             void              <VOID>         <RETURN>
             int               r0:4           __status
                             <EXTERNAL>::exit                                XREF[10]:    Entry Point(*), 
                                                                                          FUN_08004cd4:08004e8c(c), 
                                                                                          FUN_08012674:080128cc(c), 
                                                                                          FUN_08012674:080128f4(c), 
                                                                                          FUN_08012674:08012924(c), 
                                                                                          FUN_08012928:08012ae0(c), 
                                                                                          FUN_08012928:08012b00(c), 
                                                                                          FUN_08015824:08015ac8(c), 
                                                                                          FUN_0808892c:08089298(c), 
                                                                                          FUN_080b7308:080b7378(c)  
        08002eb4 00 c6 8f e2     adr        r12,0x8002ebc
        08002eb8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ebc 50 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x350]!=>PTR_LAB_080fa20c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_format()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_format        XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078cdc(c), 
                                                                                          FUN_08078e48:08078ed4(c)  
        08002ec0 00 c6 8f e2     adr        r12,0x8002ec8
        08002ec4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ec8 48 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x348]!=>PTR_LAB_080fa210 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mblen(char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mblen
             int               r0:4           <RETURN>
             char *            r0:4           __s
             size_t            r1:4           __n
                             <EXTERNAL>::mblen                               XREF[5]:     Entry Point(*), 
                                                                                          FUN_080afd80:080aff34(c), 
                                                                                          FUN_080afd80:080aff5c(c), 
                                                                                          FUN_080affb8:080b015c(c), 
                                                                                          FUN_080affb8:080b0184(c)  
        08002ecc 00 c6 8f e2     adr        r12,0x8002ed4
        08002ed0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ed4 40 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x340]!=>PTR_LAB_080fa214 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int printf(char * __format, ...)
                               Thunked-Function: <EXTERNAL>::printf
             int               r0:4           <RETURN>
             char *            r0:4           __format
                             <EXTERNAL>::printf                              XREF[416]:   Entry Point(*), 
                                                                                          FUN_08004eb0:08004f84(c), 
                                                                                          FUN_08004eb0:08004f9c(c), 
                                                                                          FUN_08004eb0:08004fb4(c), 
                                                                                          FUN_0800586c:080058ac(c), 
                                                                                          FUN_08005bdc:08005bf4(c), 
                                                                                          FUN_08005dd4:08006074(c), 
                                                                                          FUN_0800cbc4:0800cbfc(c), 
                                                                                          FUN_0800d114:0800d168(c), 
                                                                                          FUN_0801351c:080139d8(c), 
                                                                                          FUN_0801351c:08013b14(c), 
                                                                                          FUN_080167d8:08017ac4(c), 
                                                                                          FUN_0801d60c:0801d69c(c), 
                                                                                          FUN_08050498:080505f0(c), 
                                                                                          FUN_08022f08:08050d30(c), 
                                                                                          FUN_080581a4:0805850c(c), 
                                                                                          FUN_0805ae28:0805aeec(c), 
                                                                                          FUN_0805ae28:0805aefc(c), 
                                                                                          FUN_0805ae28:0805af18(c), 
                                                                                          FUN_0805ae28:0805af28(c), [more]
        08002ed8 00 c6 8f e2     adr        r12,0x8002ee0
        08002edc f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ee0 38 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x338]!=>PTR_LAB_080fa218 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sigaltstack(sigaltstack * __ss, sigaltstack * 
                               Thunked-Function: <EXTERNAL>::sigaltstack
             int               r0:4           <RETURN>
             sigaltstack *     r0:4           __ss
             sigaltstack *     r1:4           __oss
                             <EXTERNAL>::sigaltstack                         XREF[2]:     Entry Point(*), 
                                                                                          FUN_080789fc:08078a44(c)  
        08002ee4 00 c6 8f e2     adr        r12,0x8002eec
        08002ee8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002eec 30 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x330]!=>PTR_LAB_080fa21c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int puts(char * __s)
                               Thunked-Function: <EXTERNAL>::puts
             int               r0:4           <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::puts                                XREF[156]:   Entry Point(*), 
                                                                                          FUN_08005414:08005430(c), 
                                                                                          FUN_0800586c:080058d0(c), 
                                                                                          FUN_0800586c:080058e8(c), 
                                                                                          FUN_08005bdc:08005c9c(c), 
                                                                                          FUN_08005bdc:08005ce8(c), 
                                                                                          FUN_08005bdc:08005cfc(c), 
                                                                                          FUN_08005bdc:08005d20(c), 
                                                                                          FUN_08005bdc:08005d44(c), 
                                                                                          FUN_08005bdc:08005d58(c), 
                                                                                          FUN_08005bdc:08005d7c(c), 
                                                                                          FUN_08005bdc:08005db4(c), 
                                                                                          FUN_0800d114:0800d4c4(c), 
                                                                                          FUN_0801351c:080137d4(c), 
                                                                                          FUN_0801351c:080138c0(c), 
                                                                                          FUN_0801351c:08013d60(c), 
                                                                                          FUN_0805aaa4:0805aafc(c), 
                                                                                          FUN_0805aaa4:0805ab24(c), 
                                                                                          FUN_0805ae28:0805b1b4(c), 
                                                                                          FUN_0805ae28:0805b1f8(c), [more]
        08002ef0 00 c6 8f e2     adr        r12,0x8002ef8
        08002ef4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ef8 28 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x328]!=>PTR_LAB_080fa220 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_signal(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_signal                 XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d6844:080d68d4(c)  
        08002efc 00 c6 8f e2     adr        r12,0x8002f04
        08002f00 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f04 20 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x320]!=>PTR_LAB_080fa224 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long wcstol(wchar_t * __nptr, wchar_t * * __endptr
                               Thunked-Function: <EXTERNAL>::wcstol
             long              r0:4           <RETURN>
             wchar_t *         r0:4           __nptr
             wchar_t * *       r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::wcstol                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080db660:080db69c(c)  
        08002f08 00 c6 8f e2     adr        r12,0x8002f10
        08002f0c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f10 18 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x318]!=>PTR_LAB_080fa228 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void perror(char * __s)
                               Thunked-Function: <EXTERNAL>::perror
             void              <VOID>         <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::perror                              XREF[52]:    Entry Point(*), 
                                                                                          FUN_0805ae28:0805b6b8(c), 
                                                                                          FUN_0807a0d0:0807a160(c), 
                                                                                          FUN_0807a374:0807ad8c(c), 
                                                                                          FUN_0807a374:0807addc(c), 
                                                                                          FUN_0807a374:0807ae64(c), 
                                                                                          FUN_0807a374:0807ae74(c), 
                                                                                          FUN_0807a374:0807ae84(c), 
                                                                                          FUN_0807a374:0807ae94(c), 
                                                                                          FUN_0807a374:0807aea4(c), 
                                                                                          FUN_0807a374:0807aeb4(c), 
                                                                                          FUN_0807a374:0807aec4(c), 
                                                                                          FUN_0807a374:0807aed4(c), 
                                                                                          FUN_0807a374:0807aee4(c), 
                                                                                          FUN_0807a374:0807aef4(c), 
                                                                                          FUN_0807a374:0807af04(c), 
                                                                                          FUN_0807a374:0807af14(c), 
                                                                                          FUN_0807a374:0807af24(c), 
                                                                                          FUN_0807a374:0807af34(c), 
                                                                                          FUN_0807a374:0807af44(c), [more]
        08002f14 00 c6 8f e2     adr        r12,0x8002f1c
        08002f18 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f1c 10 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x310]!=>PTR_LAB_080fa22c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined flock()
                               Thunked-Function: <EXTERNAL>::flock
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::flock                               XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a3dec:080a3f18(c)  
        08002f20 00 c6 8f e2     adr        r12,0x8002f28
        08002f24 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f28 08 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x308]!=>PTR_LAB_080fa230 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int lchown(char * __file, __uid_t __owner, __gid_t
                               Thunked-Function: <EXTERNAL>::lchown
             int               r0:4           <RETURN>
             char *            r0:4           __file
             __uid_t           r1:4           __owner
             __gid_t           r2:4           __group
                             <EXTERNAL>::lchown                              XREF[4]:     Entry Point(*), 
                                                                                          FUN_080e4778:080e496c(c), 
                                                                                          FUN_080e49d4:080e4c48(c), 
                                                                                          FUN_080e4cd4:080e4ed0(c)  
        08002f2c 00 c6 8f e2     adr        r12,0x8002f34
        08002f30 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f34 00 f3 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x300]!=>PTR_LAB_080fa234 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent64 * readdir64(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir64
             dirent64 *        r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::readdir64                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_080c3af8:080c3cec(c)  
        08002f38 00 c6 8f e2     adr        r12,0x8002f40
        08002f3c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f40 f8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2f8]!=>PTR_LAB_080fa238 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __thiscall ~bad_alloc(bad_alloc * this)
                               Thunked-Function: <EXTERNAL>::std::bad_al
             undefined         r0:1           <RETURN>
             bad_alloc *       r0:4 (auto)    this
                             <EXTERNAL>::std::bad_alloc::~bad_alloc          XREF[5]:     Entry Point(*), 
                                                                                          FUN_080d0dc4:080d0ec8(*), 
                                                                                          FUN_080d0dc4:080d0f74(*), 
                                                                                          FUN_080d1774:080d1898(*), 
                                                                                          FUN_080d1774:080d18dc(*)  
        08002f44 00 c6 8f e2     adr        r12,0x8002f4c
        08002f48 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f4c f0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2f0]!=>PTR_LAB_080fa23c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int link(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::link
             int               r0:4           <RETURN>
             char *            r0:4           __from
             char *            r1:4           __to
                             <EXTERNAL>::link                                XREF[2]:     Entry Point(*), 
                                                                                          FUN_080e4400:080e4534(c)  
        08002f50 00 c6 8f e2     adr        r12,0x8002f58
        08002f54 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f58 e8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2e8]!=>PTR_LAB_080fa240 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBack()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBack                         XREF[2]:     Entry Point(*), 
                                                                                          FUN_08095e94:080962bc(c)  
        08002f5c 00 c6 8f e2     adr        r12,0x8002f64
        08002f60 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f64 e0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2e0]!=>PTR_LAB_080fa244 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulong strtoul(char * __nptr, char * * __endptr, in
                               Thunked-Function: <EXTERNAL>::strtoul
             ulong             r0:4           <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtoul                             XREF[66]:    Entry Point(*), 
                                                                                          FUN_0805e6dc:0805e9d4(c), 
                                                                                          FUN_0805e6dc:0805ea40(c), 
                                                                                          FUN_0805e6dc:0805eaa8(c), 
                                                                                          FUN_0805e6dc:0805ebac(c), 
                                                                                          FUN_0805e6dc:0805ec94(c), 
                                                                                          FUN_080624c0:080625b0(c), 
                                                                                          FUN_08068d70:08068ee0(c), 
                                                                                          FUN_08068d70:08068f34(c), 
                                                                                          FUN_080725a8:08073020(c), 
                                                                                          FUN_080725a8:08073070(c), 
                                                                                          FUN_080725a8:080731dc(c), 
                                                                                          FUN_080725a8:0807322c(c), 
                                                                                          FUN_080725a8:08073240(c), 
                                                                                          FUN_080725a8:08073288(c), 
                                                                                          FUN_080725a8:0807329c(c), 
                                                                                          FUN_080725a8:080732e4(c), 
                                                                                          FUN_080725a8:080732f8(c), 
                                                                                          FUN_080725a8:0807330c(c), 
                                                                                          FUN_080725a8:0807338c(c), [more]
        08002f68 00 c6 8f e2     adr        r12,0x8002f70
        08002f6c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f70 d8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2d8]!=>PTR_LAB_080fa248 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int putchar(int __c)
                               Thunked-Function: <EXTERNAL>::putchar
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::putchar                             XREF[22]:    Entry Point(*), 08069558(c), 
                                                                                          080696cc(c), 
                                                                                          FUN_080716b8:080716e4(c), 
                                                                                          FUN_080716b8:08071740(c), 
                                                                                          FUN_08071770:080717a8(c), 
                                                                                          FUN_08071770:080717e4(c), 
                                                                                          FUN_080718c0:08071a28(c), 
                                                                                          FUN_08071f34:08072300(c), 
                                                                                          FUN_08071f34:08072358(c), 
                                                                                          FUN_08071f34:0807240c(c), 
                                                                                          FUN_08071f34:08072440(c), 
                                                                                          FUN_080725a8:08072624(c), 
                                                                                          FUN_080725a8:080734c4(c), 
                                                                                          FUN_080725a8:08074418(c), 
                                                                                          FUN_080725a8:08074684(c), 
                                                                                          FUN_080725a8:08074750(c), 
                                                                                          FUN_080725a8:080747dc(c), 
                                                                                          FUN_080725a8:08074848(c), 
                                                                                          FUN_080725a8:080748d8(c), [more]
        08002f74 00 c6 8f e2     adr        r12,0x8002f7c
        08002f78 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f7c d0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2d0]!=>PTR_LAB_080fa24c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memset(void * __s, int __c, size_t __n)
                               Thunked-Function: <EXTERNAL>::memset
             void *            r0:4           <RETURN>
             void *            r0:4           __s
             int               r1:4           __c
             size_t            r2:4           __n
                             <EXTERNAL>::memset                              XREF[195]:   Entry Point(*), 
                                                                                          FUN_0801351c:0801353c(c), 
                                                                                          FUN_0801351c:08013558(c), 
                                                                                          FUN_0801351c:08013600(c), 
                                                                                          FUN_0801351c:08013610(c), 
                                                                                          FUN_0801351c:08013620(c), 
                                                                                          FUN_0801351c:08013630(c), 
                                                                                          FUN_0801351c:08013640(c), 
                                                                                          FUN_0801351c:08013658(c), 
                                                                                          FUN_0801351c:08013670(c), 
                                                                                          FUN_0801351c:08013688(c), 
                                                                                          FUN_0801351c:080136a0(c), 
                                                                                          FUN_0801351c:080136b8(c), 
                                                                                          FUN_0801351c:080136d0(c), 
                                                                                          FUN_0801351c:080136e8(c), 
                                                                                          FUN_0801351c:08013700(c), 
                                                                                          FUN_0801351c:08013718(c), 
                                                                                          FUN_0801351c:0801372c(c), 
                                                                                          FUN_0801351c:08013748(c), 
                                                                                          FUN_0801351c:0801375c(c), [more]
        08002f80 00 c6 8f e2     adr        r12,0x8002f88
        08002f84 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f88 c8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2c8]!=>PTR_LAB_080fa250 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __fxstat64(int __ver, int __fildes, stat64 * _
                               Thunked-Function: <EXTERNAL>::__fxstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             int               r1:4           __fildes
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__fxstat64                          XREF[2]:     Entry Point(*), 
                                                                                          FUN_080e54f8:080e5504(c)  
        08002f8c 00 c6 8f e2     adr        r12,0x8002f94
        08002f90 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002f94 c0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2c0]!=>PTR_LAB_080fa254 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk DIR * opendir(char * __name)
                               Thunked-Function: <EXTERNAL>::opendir
             DIR *             r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::opendir                             XREF[3]:     Entry Point(*), 
                                                                                          FUN_08062bc8:08062d7c(c), 
                                                                                          FUN_080c3af8:080c3c44(c)  
        08002f98 00 c6 8f e2     adr        r12,0x8002fa0
        08002f9c f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fa0 b8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2b8]!=>PTR_LAB_080fa258 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_open()
                               Thunked-Function: <EXTERNAL>::snd_pcm_open
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_open                        XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078c90(c), 
                                                                                          FUN_08078e48:08078e90(c)  
        08002fa4 00 c6 8f e2     adr        r12,0x8002fac
        08002fa8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fac b0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2b0]!=>PTR_LAB_080fa25c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int remove(char * __filename)
                               Thunked-Function: <EXTERNAL>::remove
             int               r0:4           <RETURN>
             char *            r0:4           __filename
                             <EXTERNAL>::remove                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a6018:080a6054(c)  
        08002fb0 00 c6 8f e2     adr        r12,0x8002fb8
        08002fb4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fb8 a8 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2a8]!=>PTR_LAB_080fa260 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fcntl(int __fd, int __cmd, ...)
                               Thunked-Function: <EXTERNAL>::fcntl
             int               r0:4           <RETURN>
             int               r0:4           __fd
             int               r1:4           __cmd
                             <EXTERNAL>::fcntl                               XREF[5]:     Entry Point(*), 
                                                                                          FUN_08079e70:08079e9c(c), 
                                                                                          FUN_08079e70:08079eac(c), 
                                                                                          FUN_08079e70:08079fbc(c), 
                                                                                          FUN_08079e70:08079fcc(c)  
        08002fbc 00 c6 8f e2     adr        r12,0x8002fc4
        08002fc0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fc4 a0 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x2a0]!=>PTR_LAB_080fa264 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcschr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcschr
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t           r1:4           __wc
                             <EXTERNAL>::wcschr                              XREF[18]:    Entry Point(*), 
                                                                                          FUN_080a0d48:080a0ec8(c), 
                                                                                          FUN_080a0d48:080a0eec(c), 
                                                                                          FUN_080a17b8:080a18cc(c), 
                                                                                          FUN_080a1d7c:080a1dd0(c), 
                                                                                          FUN_080a23d8:080a2464(c), 
                                                                                          FUN_080a23d8:080a2488(c), 
                                                                                          FUN_080a2980:080a32b8(c), 
                                                                                          FUN_080a2980:080a3438(c), 
                                                                                          FUN_080a6ff4:080a7078(c), 
                                                                                          FUN_080afd80:080afda4(c), 
                                                                                          FUN_080d7078:080d73d4(c), 
                                                                                          FUN_080d7d3c:080d8f20(c), 
                                                                                          FUN_080d7d3c:080d97c0(c), 
                                                                                          FUN_080db038:080db0d0(c), 
                                                                                          FUN_080db038:080db24c(c), 
                                                                                          FUN_080e0b1c:080e0c24(c), 
                                                                                          FUN_080e0b1c:080e0cb0(c)  
        08002fc8 00 c6 8f e2     adr        r12,0x8002fd0
        08002fcc f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fd0 98 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x298]!=>PTR_LAB_080fa268 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int snprintf(char * __s, size_t __maxlen, char * _
                               Thunked-Function: <EXTERNAL>::snprintf
             int               r0:4           <RETURN>
             char *            r0:4           __s
             size_t            r1:4           __maxlen
             char *            r2:4           __format
                             <EXTERNAL>::snprintf                            XREF[10]:    Entry Point(*), 
                                                                                          FUN_0800586c:0800589c(c), 
                                                                                          FUN_0805ab48:0805ab8c(c), 
                                                                                          FUN_0805ab48:0805ac94(c), 
                                                                                          FUN_0805ae28:0805b154(c), 
                                                                                          FUN_08060658:08060888(c), 
                                                                                          FUN_08060658:08060a5c(c), 
                                                                                          FUN_08060658:08060ca0(c), 
                                                                                          FUN_08062bc8:080630d4(c), 
                                                                                          FUN_08062bc8:080636ac(c)  
        08002fd4 00 c6 8f e2     adr        r12,0x8002fdc
        08002fd8 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fdc 90 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x290]!=>PTR_LAB_080fa26c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int close(int __fd)
                               Thunked-Function: <EXTERNAL>::close
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::close                               XREF[25]:    Entry Point(*), 
                                                                                          FUN_0805ae28:0805b5dc(c), 
                                                                                          FUN_0805b738:0805b828(c), 
                                                                                          FUN_08060658:080607bc(c), 
                                                                                          FUN_08060658:080607e4(c), 
                                                                                          FUN_08060d14:08060d4c(c), 
                                                                                          FUN_08079e70:08079f3c(c), 
                                                                                          FUN_0807a374:0807a4c0(c), 
                                                                                          FUN_0807a374:0807a4d8(c), 
                                                                                          FUN_0807a374:0807a9c4(c), 
                                                                                          FUN_0807a374:0807a9d4(c), 
                                                                                          FUN_0807b1a4:0807b244(c), 
                                                                                          FUN_0807b1a4:0807b290(c), 
                                                                                          FUN_0807b1a4:0807b310(c), 
                                                                                          FUN_0807b4cc:0807b548(c), 
                                                                                          FUN_0807b4cc:0807b560(c), 
                                                                                          FUN_08095e94:08096018(c), 
                                                                                          FUN_08095e94:0809614c(c), 
                                                                                          FUN_08095e94:08096160(c), 
                                                                                          FUN_08095e94:080962cc(c), [more]
        08002fe0 00 c6 8f e2     adr        r12,0x8002fe8
        08002fe4 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002fe8 88 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x288]!=>PTR_LAB_080fa270 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_strerror()
                               Thunked-Function: <EXTERNAL>::snd_strerror
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_strerror                        XREF[10]:    Entry Point(*), 
                                                                                          FUN_08078c64:08078d84(c), 
                                                                                          FUN_08078c64:08078d9c(c), 
                                                                                          FUN_08078c64:08078dbc(c), 
                                                                                          FUN_08078c64:08078dd4(c), 
                                                                                          FUN_08078c64:08078dec(c), 
                                                                                          FUN_08078c64:08078e04(c), 
                                                                                          FUN_08078e48:08079034(c), 
                                                                                          FUN_08078e48:0807904c(c), 
                                                                                          FUN_08078e48:08079064(c)  
        08002fec 00 c6 8f e2     adr        r12,0x8002ff4
        08002ff0 f7 ca 8c e2     add        r12,r12,#0xf7000
        08002ff4 80 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x280]!=>PTR_LAB_080fa274 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_broadcast(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_broadcast              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080d6700:080d6768(c), 
                                                                                          FUN_080d6afc:080d6bb0(c)  
        08002ff8 00 c6 8f e2     adr        r12,0x8003000
        08002ffc f7 ca 8c e2     add        r12,r12,#0xf7000
        08003000 78 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x278]!=>PTR_LAB_080fa278 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen
             FILE *            r0:4           <RETURN>
             char *            r0:4           __filename
             char *            r1:4           __modes
                             <EXTERNAL>::fopen                               XREF[45]:    Entry Point(*), 
                                                                                          FUN_08004eb0:08004efc(c), 
                                                                                          FUN_0805aaa4:0805aae8(c), 
                                                                                          FUN_0805ab48:0805aba0(c), 
                                                                                          FUN_0805ab48:0805aca4(c), 
                                                                                          FUN_0805b738:0805b7b8(c), 
                                                                                          FUN_0805c170:0805c1ec(c), 
                                                                                          FUN_0805d844:0805d870(c), 
                                                                                          FUN_0805d97c:0805d9c4(c), 
                                                                                          FUN_0805dac8:0805db20(c), 
                                                                                          FUN_0805f9fc:0805fa74(c), 
                                                                                          FUN_0806001c:08060084(c), 
                                                                                          FUN_08060658:080609e0(c), 
                                                                                          FUN_08060658:08060a1c(c), 
                                                                                          FUN_08060658:08060b28(c), 
                                                                                          FUN_08060658:08060c6c(c), 
                                                                                          FUN_08066730:08066888(c), 
                                                                                          FUN_0806706c:080670bc(c), 
                                                                                          FUN_08067798:080677fc(c), 
                                                                                          FUN_08068904:08068a38(c), [more]
        08003004 00 c6 8f e2     adr        r12,0x800300c
        08003008 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800300c 70 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x270]!=>PTR_LAB_080fa27c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new[](uint param_1)
                               Thunked-Function: <EXTERNAL>::operator.ne
             void *            r0:4           <RETURN>
             uint              r0:4           param_1
                             <EXTERNAL>::operator.new[]                      XREF[6]:     Entry Point(*), 
                                                                                          FUN_080c5a8c:080c5abc(c), 
                                                                                          FUN_080c5a8c:080c5b2c(c), 
                                                                                          FUN_080dee4c:080deec0(c), 
                                                                                          FUN_080e0f4c:080e0f74(c), 
                                                                                          FUN_080e2b50:080e2b90(c)  
        08003010 00 c6 8f e2     adr        r12,0x8003018
        08003014 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003018 68 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x268]!=>PTR_LAB_080fa280 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_period_size_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_period_size_  XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078f20(c)  
        0800301c 00 c6 8f e2     adr        r12,0x8003024
        08003020 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003024 60 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x260]!=>PTR_LAB_080fa284 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflate()
                               Thunked-Function: <EXTERNAL>::inflate
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflate                             XREF[4]:     Entry Point(*), 
                                                                                          FUN_08095e94:080962f0(c), 
                                                                                          FUN_080963b4:080968f8(c), 
                                                                                          FUN_080963b4:08096978(c)  
        08003028 00 c6 8f e2     adr        r12,0x8003030
        0800302c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003030 58 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x258]!=>PTR_LAB_080fa288 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t read(int __fd, void * __buf, size_t __nbyt
                               Thunked-Function: <EXTERNAL>::read
             ssize_t           r0:4           <RETURN>
             int               r0:4           __fd
             void *            r1:4           __buf
             size_t            r2:4           __nbytes
                             <EXTERNAL>::read                                XREF[11]:    Entry Point(*), 
                                                                                          FUN_0805beb0:0805c014(c), 
                                                                                          FUN_080604e4:080605a0(c), 
                                                                                          FUN_08060658:08060770(c), 
                                                                                          FUN_08079758:08079794(c), 
                                                                                          FUN_08079758:0807982c(c), 
                                                                                          FUN_08079b70:08079bc0(c), 
                                                                                          FUN_08079b70:08079be4(c), 
                                                                                          FUN_08095e94:08095f10(c), 
                                                                                          FUN_08095e94:08096204(c), 
                                                                                          FUN_08095e94:08096328(c)  
        08003034 00 c6 8f e2     adr        r12,0x800303c
        08003038 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800303c 50 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x250]!=>PTR_LAB_080fa28c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void clearerr(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::clearerr
             void              <VOID>         <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::clearerr                            XREF[3]:     Entry Point(*), 
                                                                                          FUN_080a44e8:080a4624(c), 
                                                                                          FUN_080a48b0:080a4924(c)  
        08003040 00 c6 8f e2     adr        r12,0x8003048
        08003044 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003048 48 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x248]!=>PTR_LAB_080fa290 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void abort(void)
                               Thunked-Function: <EXTERNAL>::abort
             void              <VOID>         <RETURN>
                             <EXTERNAL>::abort                               XREF[2]:     Entry Point(*), 
                                                                                          entry:08004b10(c)  
        0800304c 00 c6 8f e2     adr        r12,0x8003054
        08003050 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003054 40 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x240]!=>PTR_LAB_080fa294 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * bsearch(void * __key, void * __base, size_t
                               Thunked-Function: <EXTERNAL>::bsearch
             void *            r0:4           <RETURN>
             void *            r0:4           __key
             void *            r1:4           __base
             size_t            r2:4           __nmemb
             size_t            r3:4           __size
             __compar_fn_t     Stack[0x0]:4   __compar
                             <EXTERNAL>::bsearch                             XREF[6]:     Entry Point(*), 
                                                                                          FUN_0805f474:0805f4b0(c), 
                                                                                          FUN_0805f634:0805f664(c), 
                                                                                          FUN_08062bc8:0806336c(c), 
                                                                                          FUN_08068620:0806865c(c), 
                                                                                          FUN_08068904:08068940(c)  
        08003058 00 c6 8f e2     adr        r12,0x8003060
        0800305c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003060 38 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x238]!=>PTR_LAB_080fa298 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t ftello64(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftello64
             __off64_t         r1:4,r0:4      <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ftello64                            XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a4b08:080a4b68(c)  
        08003064 00 c6 8f e2     adr        r12,0x800306c
        08003068 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800306c 30 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x230]!=>PTR_LAB_080fa29c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memmove(void * __dest, void * __src, size_t
                               Thunked-Function: <EXTERNAL>::memmove
             void *            r0:4           <RETURN>
             void *            r0:4           __dest
             void *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::memmove                             XREF[14]:    Entry Point(*), 
                                                                                          FUN_0801b184:0801b210(c), 
                                                                                          FUN_0801b304:0801b3b0(c), 
                                                                                          FUN_0801b4ac:0801b51c(c), 
                                                                                          0801c0a4(c), 
                                                                                          FUN_0804b5f0:0804b660(c), 
                                                                                          08050488(c), 
                                                                                          FUN_0806922c:08069274(c), 
                                                                                          FUN_0806922c:0806928c(c), 
                                                                                          FUN_080c5cc4:080c636c(c), 
                                                                                          FUN_080c5cc4:080c6534(c), 
                                                                                          FUN_080cca98:080ccb1c(c), 
                                                                                          FUN_080ceb2c:080cebd8(c), 
                                                                                          FUN_080e18cc:080e1940(c)  
        08003070 00 c6 8f e2     adr        r12,0x8003078
        08003074 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003078 28 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x228]!=>PTR_LAB_080fa2a0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_writei()
                               Thunked-Function: <EXTERNAL>::snd_pcm_wri
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_writei                      XREF[4]:     Entry Point(*), 
                                                                                          FUN_08078ae0:08078b04(c), 
                                                                                          FUN_08078b1c:08078b6c(c), 
                                                                                          FUN_08078e48:0807900c(c)  
        0800307c 00 c6 8f e2     adr        r12,0x8003084
        08003080 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003084 20 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x220]!=>PTR_LAB_080fa2a4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params                   XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078d44(c), 
                                                                                          FUN_08078e48:08078f70(c)  
        08003088 00 c6 8f e2     adr        r12,0x8003090
        0800308c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003090 18 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x218]!=>PTR_LAB_080fa2a8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::shm_unlink
             int               r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::shm_unlink                          XREF[3]:     Entry Point(*), 
                                                                                          FUN_08012674:080126e0(c), 
                                                                                          FUN_08012928:08012998(c)  
        08003094 00 c6 8f e2     adr        r12,0x800309c
        08003098 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800309c 10 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x210]!=>PTR_LAB_080fa2ac = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * ctime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::ctime
             char *            r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::ctime                               XREF[3]:     Entry Point(*), 
                                                                                          FUN_0805d104:0805d158(c), 
                                                                                          FUN_08066498:080665b8(c)  
        080030a0 00 c6 8f e2     adr        r12,0x80030a8
        080030a4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030a8 08 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x208]!=>PTR_LAB_080fa2b0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateInit2_()
                               Thunked-Function: <EXTERNAL>::inflateInit
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateInit2_                       XREF[3]:     Entry Point(*), 
                                                                                          FUN_08095e94:08096124(c), 
                                                                                          FUN_080963b4:0809670c(c)  
        080030ac 00 c6 8f e2     adr        r12,0x80030b4
        080030b0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030b4 00 f2 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x200]!=>PTR_LAB_080fa2b4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::unlink
             int               r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::unlink                              XREF[5]:     Entry Point(*), 08062228(c), 
                                                                                          FUN_08062bc8:08062d34(c), 
                                                                                          FUN_08062bc8:08063008(c), 
                                                                                          FUN_08062bc8:0806304c(c)  
        080030b8 00 c6 8f e2     adr        r12,0x80030c0
        080030bc f7 ca 8c e2     add        r12,r12,#0xf7000
        080030c0 f8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1f8]!=>PTR_LAB_080fa2b8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_prepare()
                               Thunked-Function: <EXTERNAL>::snd_pcm_pre
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_prepare                     XREF[6]:     Entry Point(*), 
                                                                                          FUN_08078ae0:08078b18(c), 
                                                                                          FUN_08078b1c:08078bec(c), 
                                                                                          FUN_08078bf4:08078c5c(c), 
                                                                                          FUN_08078c64:08078d6c(c), 
                                                                                          FUN_08078e48:08078fb8(c)  
        080030c4 00 c6 8f e2     adr        r12,0x80030cc
        080030c8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030cc f0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1f0]!=>PTR_LAB_080fa2bc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ioctl(int __fd, ulong __request, ...)
                               Thunked-Function: <EXTERNAL>::ioctl
             int               r0:4           <RETURN>
             int               r0:4           __fd
             ulong             r1:4           __request
                             <EXTERNAL>::ioctl                               XREF[61]:    Entry Point(*), 
                                                                                          FUN_08079e70:08079ef4(c), 
                                                                                          FUN_0807a058:0807a084(c), 
                                                                                          FUN_0807a374:0807a524(c), 
                                                                                          FUN_0807a374:0807a564(c), 
                                                                                          FUN_0807a374:0807a584(c), 
                                                                                          FUN_0807a374:0807a5c4(c), 
                                                                                          FUN_0807a374:0807a698(c), 
                                                                                          FUN_0807a374:0807a6b0(c), 
                                                                                          FUN_0807a374:0807a9a8(c), 
                                                                                          FUN_0807a374:0807aa30(c), 
                                                                                          FUN_0807a374:0807aa70(c), 
                                                                                          FUN_0807a374:0807aa90(c), 
                                                                                          FUN_0807a374:0807aad4(c), 
                                                                                          FUN_0807a374:0807aafc(c), 
                                                                                          FUN_0807a374:0807ab3c(c), 
                                                                                          FUN_0807a374:0807ab64(c), 
                                                                                          FUN_0807a374:0807aba8(c), 
                                                                                          FUN_0807a374:0807ad1c(c), 
                                                                                          FUN_0807a374:0807ad34(c), [more]
        080030d0 00 c6 8f e2     adr        r12,0x80030d8
        080030d4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030d8 e8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1e8]!=>PTR_LAB_080fa2c0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_buffer_size_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_buffer_size_  XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078f0c(c)  
        080030dc 00 c6 8f e2     adr        r12,0x80030e4
        080030e0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030e4 e0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1e0]!=>PTR_LAB_080fa2c4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk tm * localtime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::localtime
             tm *              r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::localtime                           XREF[4]:     Entry Point(*), 
                                                                                          FUN_0805cd0c:0805ce34(c), 
                                                                                          FUN_0805cd0c:0805cf9c(c), 
                                                                                          FUN_080b537c:080b53a8(c)  
        080030e8 00 c6 8f e2     adr        r12,0x80030f0
        080030ec f7 ca 8c e2     add        r12,r12,#0xf7000
        080030f0 d8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1d8]!=>PTR_LAB_080fa2c8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * realloc(void * __ptr, size_t __size)
                               Thunked-Function: <EXTERNAL>::realloc
             void *            r0:4           <RETURN>
             void *            r0:4           __ptr
             size_t            r1:4           __size
                             <EXTERNAL>::realloc                             XREF[50]:    Entry Point(*), 
                                                                                          FUN_0805dc98:0805dd10(c), 
                                                                                          FUN_08060658:08060d08(c), 
                                                                                          FUN_08062bc8:08062f54(c), 
                                                                                          FUN_080687e0:08068864(c), 
                                                                                          FUN_080687e0:080688d0(c), 
                                                                                          FUN_080687e0:080688e8(c), 
                                                                                          FUN_08068904:08068c40(c), 
                                                                                          FUN_08068904:08068c50(c), 
                                                                                          FUN_08068d70:08068f74(c), 
                                                                                          FUN_08068d70:08069038(c), 
                                                                                          FUN_08068d70:08069058(c), 
                                                                                          FUN_08068d70:08069068(c), 
                                                                                          FUN_08068d70:08069090(c), 
                                                                                          FUN_08068d70:080690a0(c), 
                                                                                          FUN_08068d70:080690e4(c), 
                                                                                          FUN_08068d70:080690f8(c), 
                                                                                          FUN_08068d70:08069108(c), 
                                                                                          FUN_0806991c:08069a3c(c), 
                                                                                          FUN_0806b4e0:0806bce8(c), [more]
        080030f4 00 c6 8f e2     adr        r12,0x80030fc
        080030f8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080030fc d0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1d0]!=>PTR_LAB_080fa2cc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compressBound()
                               Thunked-Function: <EXTERNAL>::compressBou
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::compressBound                       XREF[2]:     Entry Point(*), 0805f880(c)  
        08003100 00 c6 8f e2     adr        r12,0x8003108
        08003104 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003108 c8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1c8]!=>PTR_LAB_080fa2d0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strcpy(char * __dest, char * __src)
                               Thunked-Function: <EXTERNAL>::strcpy
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
                             <EXTERNAL>::strcpy                              XREF[29]:    Entry Point(*), 
                                                                                          FUN_0800599c:080059d4(c), 
                                                                                          FUN_0805e270:0805e2a4(c), 
                                                                                          FUN_0805e6dc:0805e8dc(c), 
                                                                                          FUN_0805e6dc:0805eb0c(c), 
                                                                                          FUN_08061940:080619d8(c), 
                                                                                          FUN_08061940:080619e8(c), 
                                                                                          FUN_080629b8:08062a68(c), 
                                                                                          FUN_08062bc8:08062c24(c), 
                                                                                          FUN_08062bc8:08062eec(c), 
                                                                                          FUN_08062bc8:08062f34(c), 
                                                                                          FUN_08062bc8:080633d8(c), 
                                                                                          FUN_08062bc8:080633fc(c), 
                                                                                          FUN_08062bc8:08063614(c), 
                                                                                          FUN_080640a4:080643ec(c), 
                                                                                          FUN_080683a4:080683d0(c), 
                                                                                          FUN_080751a0:08075284(c), 
                                                                                          FUN_0807565c:08075724(c), 
                                                                                          FUN_08075790:08075f58(c), 
                                                                                          FUN_080a1e2c:080a1e94(c), [more]
        0800310c 00 c6 8f e2     adr        r12,0x8003114
        08003110 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003114 c0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1c0]!=>PTR_LAB_080fa2d4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_setdetachstate(pthread_attr_t * _
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               r0:4           <RETURN>
             pthread_attr_t    r0:4           __attr
             int               r1:4           __detachstate
                             <EXTERNAL>::pthread_attr_setdetachstate         XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d62d4:080d6300(c)  
        08003118 00 c6 8f e2     adr        r12,0x8003120
        0800311c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003120 b8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1b8]!=>PTR_LAB_080fa2d8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * mmap(void * __addr, size_t __len, int __pro
                               Thunked-Function: <EXTERNAL>::mmap
             void *            r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
             int               r2:4           __prot
             int               r3:4           __flags
             int               Stack[0x0]:4   __fd
             __off_t           Stack[0x4]:4   __offset
                             <EXTERNAL>::mmap                                XREF[12]:    Entry Point(*), 
                                                                                          FUN_08012674:08012704(c), 
                                                                                          FUN_08012674:08012774(c), 
                                                                                          FUN_08012674:0801285c(c), 
                                                                                          FUN_08012928:080129b8(c), 
                                                                                          FUN_08012928:080129f0(c), 
                                                                                          FUN_080604e4:080605fc(c), 
                                                                                          FUN_08060658:08060720(c), 
                                                                                          FUN_0807a374:0807a5f0(c), 
                                                                                          FUN_0807a374:0807abdc(c), 
                                                                                          FUN_0807a374:0807ac00(c), 
                                                                                          FUN_0807b4cc:0807b670(c)  
        08003124 00 c6 8f e2     adr        r12,0x800312c
        08003128 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800312c b0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1b0]!=>PTR_LAB_080fa2dc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open64(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open64
             int               r0:4           <RETURN>
             char *            r0:4           __file
             int               r1:4           __oflag
                             <EXTERNAL>::open64                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_08095e94:08095ec0(c), 
                                                                                          FUN_080a3dec:080a3ed8(c)  
        08003130 00 c6 8f e2     adr        r12,0x8003138
        08003134 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003138 a8 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1a8]!=>PTR_LAB_080fa2e0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncpy(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncpy
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncpy                             XREF[11]:    Entry Point(*), 
                                                                                          FUN_0809dd8c:0809dfcc(c), 
                                                                                          FUN_0809dd8c:0809e010(c), 
                                                                                          FUN_0809e4f8:0809e824(c), 
                                                                                          FUN_080a0620:080a0658(c), 
                                                                                          FUN_080a14cc:080a1558(c), 
                                                                                          FUN_080a23d8:080a24f8(c), 
                                                                                          FUN_080a3a8c:080a3ae0(c), 
                                                                                          FUN_080a52ac:080a53d0(c), 
                                                                                          FUN_080b6a60:080b6b30(c), 
                                                                                          FUN_080d7078:080d71f0(c)  
        0800313c 00 c6 8f e2     adr        r12,0x8003144
        08003140 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003144 a0 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x1a0]!=>PTR_LAB_080fa2e4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcscmp(wchar_t * __s1, wchar_t * __s2)
                               Thunked-Function: <EXTERNAL>::wcscmp
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
                             <EXTERNAL>::wcscmp                              XREF[11]:    Entry Point(*), 
                                                                                          FUN_0809f900:0809f968(c), 
                                                                                          FUN_080a058c:080a05a8(c), 
                                                                                          FUN_080a444c:080a4470(c), 
                                                                                          FUN_080af950:080af974(c), 
                                                                                          FUN_080b77d0:080b7830(c), 
                                                                                          FUN_080c3500:080c363c(c), 
                                                                                          FUN_080c3500:080c3758(c), 
                                                                                          FUN_080c3af8:080c4020(c), 
                                                                                          FUN_080c3af8:080c4044(c), 
                                                                                          FUN_080e0dcc:080e0dfc(c)  
        08003148 00 c6 8f e2     adr        r12,0x8003150
        0800314c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003150 98 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x198]!=>PTR_LAB_080fa2e8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete(void * param_1)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            r0:4           param_1
                             <EXTERNAL>::operator.delete                     XREF[19]:    Entry Point(*), 
                                                                                          FUN_0809cec4:0809d13c(c), 
                                                                                          FUN_0809cec4:0809d254(c), 
                                                                                          FUN_0809da0c:0809da6c(c), 
                                                                                          FUN_080a3cc0:080a3d38(c), 
                                                                                          FUN_080a3d50:080a3d6c(c), 
                                                                                          FUN_080a7560:080a75b0(c), 
                                                                                          FUN_080a7560:080a7634(c), 
                                                                                          FUN_080a76d0:080a76ec(c), 
                                                                                          FUN_080be260:080be290(c), 
                                                                                          FUN_080cbea8:080cc064(c), 
                                                                                          FUN_080ccbd8:080cd034(c), 
                                                                                          FUN_080ccbd8:080cd33c(c), 
                                                                                          FUN_080cdd84:080cddf8(c), 
                                                                                          FUN_080cdd84:080cde90(c), 
                                                                                          FUN_080d621c:080d62c8(c), 
                                                                                          FUN_080dd9e0:080dda38(c), 
                                                                                          FUN_080dddd8:080de47c(c), 
                                                                                          FUN_080deef4:080def44(c)  
        08003154 00 c6 8f e2     adr        r12,0x800315c
        08003158 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800315c 90 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x190]!=>PTR_LAB_080fa2ec = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_rate_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_rate_near     XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078cfc(c), 
                                                                                          FUN_08078e48:08078eec(c)  
        08003160 00 c6 8f e2     adr        r12,0x8003168
        08003164 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003168 88 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x188]!=>PTR_LAB_080fa2f0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open
             int               r0:4           <RETURN>
             char *            r0:4           __file
             int               r1:4           __oflag
                             <EXTERNAL>::open                                XREF[12]:    Entry Point(*), 
                                                                                          FUN_0805a458:0805a4bc(c), 
                                                                                          FUN_0805ae28:0805b60c(c), 
                                                                                          FUN_080604e4:08060518(c), 
                                                                                          FUN_08060658:08060678(c), 
                                                                                          FUN_08079e70:08079edc(c), 
                                                                                          FUN_0807a374:0807a4f4(c), 
                                                                                          FUN_0807a374:0807a9ec(c), 
                                                                                          FUN_0807a374:0807aa00(c), 
                                                                                          FUN_0807b1a4:0807b2a8(c), 
                                                                                          FUN_0807b4cc:0807b578(c), 
                                                                                          FUN_0807b734:0807b748(c)  
        0800316c 00 c6 8f e2     adr        r12,0x8003174
        08003170 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003174 80 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x180]!=>PTR_LAB_080fa2f4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mprotect(void * __addr, size_t __len, int __pr
                               Thunked-Function: <EXTERNAL>::mprotect
             int               r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
             int               r2:4           __prot
                             <EXTERNAL>::mprotect                            XREF[4]:     Entry Point(*), 
                                                                                          FUN_08012674:08012794(c), 
                                                                                          FUN_080896f8:08089724(c), 
                                                                                          FUN_080896f8:08089738(c)  
        08003178 00 c6 8f e2     adr        r12,0x8003180
        0800317c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003180 78 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x178]!=>PTR_LAB_080fa2f8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chmod(char * __file, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::chmod
             int               r0:4           <RETURN>
             char *            r0:4           __file
             __mode_t          r1:4           __mode
                             <EXTERNAL>::chmod                               XREF[3]:     Entry Point(*), 
                                                                                          FUN_080a5994:080a59e0(c), 
                                                                                          FUN_080a5a7c:080a5ac0(c)  
        08003184 00 c6 8f e2     adr        r12,0x800318c
        08003188 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800318c 70 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x170]!=>PTR_LAB_080fa2fc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateEnd()
                               Thunked-Function: <EXTERNAL>::inflateEnd
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateEnd                          XREF[4]:     Entry Point(*), 
                                                                                          FUN_08095e94:08096338(c), 
                                                                                          FUN_08095e94:08096350(c), 
                                                                                          FUN_080963b4:08096754(c)  
        08003190 00 c6 8f e2     adr        r12,0x8003198
        08003194 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003198 68 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x168]!=>PTR_LAB_080fa300 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_destroy(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_destroy               XREF[4]:     Entry Point(*), 
                                                                                          FUN_080d6700:080d67c8(c), 
                                                                                          FUN_080d6700:080d67e8(c), 
                                                                                          FUN_080d6700:080d6808(c)  
        0800319c 00 c6 8f e2     adr        r12,0x80031a4
        080031a0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031a4 60 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x160]!=>PTR_LAB_080fa304 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined ts_open()
                               Thunked-Function: <EXTERNAL>::ts_open
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::ts_open                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_08079e70:08079f74(c)  
        080031a8 00 c6 8f e2     adr        r12,0x80031b0
        080031ac f7 ca 8c e2     add        r12,r12,#0xf7000
        080031b0 58 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x158]!=>PTR_LAB_080fa308 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int getpagesize(void)
                               Thunked-Function: <EXTERNAL>::getpagesize
             int               r0:4           <RETURN>
                             <EXTERNAL>::getpagesize                         XREF[2]:     Entry Point(*), 
                                                                                          FUN_08012b04:08012ce8(c)  
        080031b4 00 c6 8f e2     adr        r12,0x80031bc
        080031b8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031bc 50 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x150]!=>PTR_LAB_080fa30c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t fread(void * __ptr, size_t __size, size_t _
                               Thunked-Function: <EXTERNAL>::fread
             size_t            r0:4           <RETURN>
             void *            r0:4           __ptr
             size_t            r1:4           __size
             size_t            r2:4           __n
             FILE *            r3:4           __stream
                             <EXTERNAL>::fread                               XREF[73]:    Entry Point(*), 
                                                                                          FUN_08004eb0:08004f54(c), 
                                                                                          FUN_0805ab48:0805ac30(c), 
                                                                                          FUN_0805ab48:0805ad00(c), 
                                                                                          FUN_0805dac8:0805db3c(c), 
                                                                                          FUN_0805f9fc:0805fa9c(c), 
                                                                                          FUN_0805f9fc:0805fbe0(c), 
                                                                                          FUN_0805f9fc:0805fc0c(c), 
                                                                                          FUN_0805f9fc:0805fcb0(c), 
                                                                                          FUN_0806706c:080670d8(c), 
                                                                                          FUN_0806706c:080670ec(c), 
                                                                                          FUN_0806706c:08067100(c), 
                                                                                          FUN_0806706c:0806714c(c), 
                                                                                          FUN_0806706c:08067164(c), 
                                                                                          FUN_0806706c:08067178(c), 
                                                                                          FUN_0806706c:0806718c(c), 
                                                                                          FUN_0806706c:080671a0(c), 
                                                                                          FUN_0806706c:080671b4(c), 
                                                                                          FUN_0806706c:080671c8(c), 
                                                                                          FUN_0806706c:080671dc(c), [more]
        080031c0 00 c6 8f e2     adr        r12,0x80031c8
        080031c4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031c8 48 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x148]!=>PTR_LAB_080fa310 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fileno(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fileno
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fileno                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080a4de0:080a4e00(c), 
                                                                                          FUN_080a4edc:080a4f10(c)  
        080031cc 00 c6 8f e2     adr        r12,0x80031d4
        080031d0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031d4 40 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x140]!=>PTR_LAB_080fa314 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemset(wchar_t * __s, wchar_t __c, size
                               Thunked-Function: <EXTERNAL>::wmemset
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __s
             wchar_t           r1:4           __c
             size_t            r2:4           __n
                             <EXTERNAL>::wmemset                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a2980:080a2ce8(c)  
        080031d8 00 c6 8f e2     adr        r12,0x80031e0
        080031dc f7 ca 8c e2     add        r12,r12,#0xf7000
        080031e0 38 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x138]!=>PTR_LAB_080fa318 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_end_cleanup()
                               Thunked-Function: <EXTERNAL>::__cxa_end_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_end_cleanup                   XREF[1]:     Entry Point(*)  
        080031e4 00 c6 8f e2     adr        r12,0x80031ec
        080031e8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031ec 30 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x130]!=>PTR_LAB_080fa31c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int statvfs64(char * __file, statvfs64 * __buf)
                               Thunked-Function: <EXTERNAL>::statvfs64
             int               r0:4           <RETURN>
             char *            r0:4           __file
             statvfs64 *       r1:4           __buf
                             <EXTERNAL>::statvfs64                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a55a8:080a5664(c)  
        080031f0 00 c6 8f e2     adr        r12,0x80031f8
        080031f4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080031f8 28 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x128]!=>PTR_LAB_080fa320 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackInit_()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBackInit_                    XREF[2]:     Entry Point(*), 
                                                                                          FUN_08095e94:0809626c(c)  
        080031fc 00 c6 8f e2     adr        r12,0x8003204
        08003200 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003204 20 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x120]!=>PTR_LAB_080fa324 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int access(char * __name, int __type)
                               Thunked-Function: <EXTERNAL>::access
             int               r0:4           <RETURN>
             char *            r0:4           __name
             int               r1:4           __type
                             <EXTERNAL>::access                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a5704:080a5744(c)  
        08003208 00 c6 8f e2     adr        r12,0x8003210
        0800320c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003210 18 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x118]!=>PTR_LAB_080fa328 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int isatty(int __fd)
                               Thunked-Function: <EXTERNAL>::isatty
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::isatty                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a4edc:080a4f1c(c)  
        08003214 00 c6 8f e2     adr        r12,0x800321c
        08003218 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800321c 10 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x110]!=>PTR_LAB_080fa32c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_ldivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_ldi
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_ldivmod                     XREF[62]:    Entry Point(*), 
                                                                                          FUN_0800d88c:0800d990(c), 
                                                                                          FUN_0800d88c:0800d9b4(c), 
                                                                                          FUN_0800d88c:0800d9e0(c), 
                                                                                          FUN_0800d88c:0800da08(c), 
                                                                                          FUN_0802b5a8:0802b714(c), 
                                                                                          FUN_0802b5a8:0802b754(c), 
                                                                                          FUN_0802b5a8:0802b7a4(c), 
                                                                                          FUN_0802b5a8:0802b840(c), 
                                                                                          FUN_0802f2b8:0802f3d0(c), 
                                                                                          FUN_0802f2b8:0802f414(c), 
                                                                                          FUN_0802f2b8:0802f460(c), 
                                                                                          FUN_0802f2b8:0802f4b8(c), 
                                                                                          FUN_0802f2b8:0802f4ec(c), 
                                                                                          FUN_0802f2b8:0802f52c(c), 
                                                                                          FUN_0802f2b8:0802f53c(c), 
                                                                                          FUN_0802f2b8:0802f584(c), 
                                                                                          FUN_0802f2b8:0802f5a8(c), 
                                                                                          FUN_0802f2b8:0802f5dc(c), 
                                                                                          FUN_080a8f44:080aa46c(c), [more]
        08003220 00 c6 8f e2     adr        r12,0x8003228
        08003224 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003228 08 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x108]!=>PTR_LAB_080fa330 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mkdir(char * __path, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::mkdir
             int               r0:4           <RETURN>
             char *            r0:4           __path
             __mode_t          r1:4           __mode
                             <EXTERNAL>::mkdir                               XREF[3]:     Entry Point(*), 
                                                                                          FUN_0800586c:080058f4(c), 
                                                                                          FUN_080a51f0:080a525c(c)  
        0800322c 00 c6 8f e2     adr        r12,0x8003234
        08003230 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003234 00 f1 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x100]!=>PTR_LAB_080fa334 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wctomb(char * __s, wchar_t __wchar)
                               Thunked-Function: <EXTERNAL>::wctomb
             int               r0:4           <RETURN>
             char *            r0:4           __s
             wchar_t           r1:4           __wchar
                             <EXTERNAL>::wctomb                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080afd80:080afec0(c), 
                                                                                          FUN_080afd80:080afef4(c)  
        08003238 00 c6 8f e2     adr        r12,0x8003240
        0800323c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003240 f8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf8]!=>PTR_LAB_080fa338  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_malloc()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_malloc            XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078ca8(c), 
                                                                                          FUN_08078e48:08078ea8(c)  
        08003244 00 c6 8f e2     adr        r12,0x800324c
        08003248 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800324c f0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf0]!=>PTR_LAB_080fa33c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_get_exception_ptr()
                               Thunked-Function: <EXTERNAL>::__cxa_get_e
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_get_exception_ptr             XREF[1]:     Entry Point(*)  
        08003250 00 c6 8f e2     adr        r12,0x8003258
        08003254 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003258 e8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe8]!=>PTR_LAB_080fa340  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncasecmp(char * __s1, char * __s2, size_t _
                               Thunked-Function: <EXTERNAL>::strncasecmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::strncasecmp                         XREF[6]:     Entry Point(*), 
                                                                                          FUN_0805e6dc:0805e75c(c), 
                                                                                          FUN_08062bc8:080639a8(c), 
                                                                                          FUN_08062bc8:080639c4(c), 
                                                                                          FUN_08062bc8:08063a10(c), 
                                                                                          FUN_080640a4:08064754(c)  
        0800325c 00 c6 8f e2     adr        r12,0x8003264
        08003260 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003264 e0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe0]!=>PTR_LAB_080fa344  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_close()
                               Thunked-Function: <EXTERNAL>::snd_pcm_clo
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_close                       XREF[3]:     Entry Point(*), 
                                                                                          FUN_0805989c:08078e38(c), 
                                                                                          FUN_080790bc:080790c8(c)  
        08003268 00 c6 8f e2     adr        r12,0x8003270
        0800326c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003270 d8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xd8]!=>PTR_LAB_080fa348  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete[](void * param_1)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            r0:4           param_1
                             <EXTERNAL>::operator.delete[]                   XREF[8]:     Entry Point(*), 
                                                                                          FUN_080d14dc:080d1548(c), 
                                                                                          FUN_080d14dc:080d15b8(c), 
                                                                                          FUN_080dede0:080dee14(c), 
                                                                                          FUN_080deef4:080def3c(c), 
                                                                                          FUN_080e0f00:080e0f2c(c), 
                                                                                          FUN_080e2bd8:080e2c1c(c), 
                                                                                          FUN_080e2c80:080e2cd8(c)  
        08003274 00 c6 8f e2     adr        r12,0x800327c
        08003278 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800327c d0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xd0]!=>PTR_LAB_080fa34c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined getopt_long()
                               Thunked-Function: <EXTERNAL>::getopt_long
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::getopt_long                         XREF[2]:     Entry Point(*), 
                                                                                          FUN_08005414:08005478(c)  
        08003280 00 c6 8f e2     adr        r12,0x8003288
        08003284 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003288 c8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xc8]!=>PTR_LAB_080fa350  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off_t lseek(int __fd, __off_t __offset, int __wh
                               Thunked-Function: <EXTERNAL>::lseek
             __off_t           r0:4           <RETURN>
             int               r0:4           __fd
             __off_t           r1:4           __offset
             int               r2:4           __whence
                             <EXTERNAL>::lseek                               XREF[8]:     Entry Point(*), 
                                                                                          FUN_0805b9d4:0805bcb0(c), 
                                                                                          FUN_080604e4:08060534(c), 
                                                                                          FUN_080604e4:08060590(c), 
                                                                                          FUN_080604e4:080605e4(c), 
                                                                                          FUN_08060658:080606dc(c), 
                                                                                          FUN_08060658:08060704(c), 
                                                                                          FUN_08060658:08060760(c)  
        0800328c 00 c6 8f e2     adr        r12,0x8003294
        08003290 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003294 c0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xc0]!=>PTR_LAB_080fa354  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int symlink(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::symlink
             int               r0:4           <RETURN>
             char *            r0:4           __from
             char *            r1:4           __to
                             <EXTERNAL>::symlink                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080e4f2c:080e4f84(c)  
        08003298 00 c6 8f e2     adr        r12,0x80032a0
        0800329c f7 ca 8c e2     add        r12,r12,#0xf7000
        080032a0 b8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xb8]!=>PTR_LAB_080fa358  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_channels()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_channels      XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078d30(c), 
                                                                                          FUN_08078e48:08078efc(c)  
        080032a4 00 c6 8f e2     adr        r12,0x80032ac
        080032a8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032ac b0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xb0]!=>PTR_LAB_080fa35c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int raise(int __sig)
                               Thunked-Function: <EXTERNAL>::raise
             int               r0:4           <RETURN>
             int               r0:4           __sig
                             <EXTERNAL>::raise                               XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078588:08078900(c)  
        080032b0 00 c6 8f e2     adr        r12,0x80032b8
        080032b4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032b8 a8 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xa8]!=>PTR_LAB_080fa360  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_atexit()
                               Thunked-Function: <EXTERNAL>::__aeabi_ate
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_atexit                      XREF[2]:     Entry Point(*), 
                                                                                          FUN_080b3c50:080b3cc0(c)  
        080032bc 00 c6 8f e2     adr        r12,0x80032c4
        080032c0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032c4 a0 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0xa0]!=>PTR_LAB_080fa364  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_idivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_idi
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_idivmod                     XREF[4]:     Entry Point(*), 
                                                                                          FUN_0800d88c:0800d944(c), 
                                                                                          FUN_0802d2d8:0802d310(c), 
                                                                                          FUN_0802d4cc:0802d638(c)  
        080032c8 00 c6 8f e2     adr        r12,0x80032d0
        080032cc f7 ca 8c e2     add        r12,r12,#0xf7000
        080032d0 98 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x98]!=>PTR_LAB_080fa368  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ushort * * __ctype_b_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_b_l
             ushort * *        r0:4           <RETURN>
                             <EXTERNAL>::__ctype_b_loc                       XREF[8]:     Entry Point(*), 
                                                                                          FUN_0805e1a8:0805e1b0(c), 
                                                                                          FUN_0805e1d8:0805e1e0(c), 
                                                                                          FUN_0805e270:0805e2a8(c), 
                                                                                          FUN_08068d40:08068d48(c), 
                                                                                          FUN_08068d70:08068e94(c), 
                                                                                          FUN_080725a8:08073188(c), 
                                                                                          FUN_080725a8:080736f4(c)  
        080032d4 00 c6 8f e2     adr        r12,0x80032dc
        080032d8 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032dc 90 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x90]!=>PTR_LAB_080fa36c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_wait(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
             pthread_mutex_    r1:4           __mutex
                             <EXTERNAL>::pthread_cond_wait                   XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d63fc:080d6418(c)  
        080032e0 00 c6 8f e2     adr        r12,0x80032e8
        080032e4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032e8 88 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x88]!=>PTR_LAB_080fa370  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulonglong strtoull(char * __nptr, char * * __endpt
                               Thunked-Function: <EXTERNAL>::strtoull
             ulonglong         r1:4,r0:4      <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtoull                            XREF[4]:     Entry Point(*), 
                                                                                          FUN_080053d8:08005404(c), 
                                                                                          FUN_08005414:08005680(c), 
                                                                                          FUN_08005414:080056e4(c)  
        080032ec 00 c6 8f e2     adr        r12,0x80032f4
        080032f0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080032f4 80 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x80]!=>PTR_LAB_080fa374  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __clear_cache()
                               Thunked-Function: <EXTERNAL>::__clear_cac
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__clear_cache                       XREF[68]:    Entry Point(*), 
                                                                                          FUN_0806d394:0806d540(c), 
                                                                                          FUN_0806d394:0806d564(c), 
                                                                                          FUN_0806d394:0806d594(c), 
                                                                                          FUN_0806d394:0806d5d0(c), 
                                                                                          FUN_0806d394:0806d5f0(c), 
                                                                                          FUN_0806d394:0806d61c(c), 
                                                                                          FUN_0806d394:0806d65c(c), 
                                                                                          FUN_0806d394:0806d67c(c), 
                                                                                          FUN_0806d394:0806d6a8(c), 
                                                                                          FUN_0806d394:0806d6e4(c), 
                                                                                          FUN_0806d394:0806d704(c), 
                                                                                          FUN_0806d394:0806d730(c), 
                                                                                          FUN_0806d394:0806d76c(c), 
                                                                                          FUN_0806d394:0806d78c(c), 
                                                                                          FUN_0806d394:0806d7b8(c), 
                                                                                          FUN_0806d394:0806d7f4(c), 
                                                                                          FUN_0806d394:0806d814(c), 
                                                                                          FUN_0806d394:0806d840(c), 
                                                                                          FUN_0806d394:0806d958(c), [more]
        080032f8 00 c6 8f e2     adr        r12,0x8003300
        080032fc f7 ca 8c e2     add        r12,r12,#0xf7000
        08003300 78 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#offset PTR_LAB_080fa378]! = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sigaction(int __sig, sigaction * __act, sigact
                               Thunked-Function: <EXTERNAL>::sigaction
             int               r0:4           <RETURN>
             int               r0:4           __sig
             sigaction *       r1:4           __act
             sigaction *       r2:4           __oact
                             <EXTERNAL>::sigaction                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_080789fc:08078a74(c)  
        08003304 00 c6 8f e2     adr        r12,0x800330c
        08003308 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800330c 70 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x70]!=>PTR_LAB_080fa37c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_init(pthread_attr_t * __attr)
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               r0:4           <RETURN>
             pthread_attr_t    r0:4           __attr
                             <EXTERNAL>::pthread_attr_init                   XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d62d4:080d62f0(c)  
        08003310 00 c6 8f e2     adr        r12,0x8003318
        08003314 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003318 68 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x68]!=>PTR_LAB_080fa380  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long sysconf(int __name)
                               Thunked-Function: <EXTERNAL>::sysconf
             long              r0:4           <RETURN>
             int               r0:4           __name
                             <EXTERNAL>::sysconf                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080d6460:080d6470(c)  
        0800331c 00 c6 8f e2     adr        r12,0x8003324
        08003320 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003324 60 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x60]!=>PTR_LAB_080fa384  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncat(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncat
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::strncat                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a0688:080a06dc(c)  
        08003328 00 c6 8f e2     adr        r12,0x8003330
        0800332c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003330 58 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x58]!=>PTR_LAB_080fa388  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long ftell(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftell
             long              r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ftell                               XREF[20]:    Entry Point(*), 
                                                                                          FUN_08004eb0:08004f08(c), 
                                                                                          FUN_08004eb0:08004f24(c), 
                                                                                          FUN_0805ab48:0805abdc(c), 
                                                                                          FUN_0805ab48:0805accc(c), 
                                                                                          FUN_0805dac8:0805db58(c), 
                                                                                          FUN_0805dac8:0805db74(c), 
                                                                                          FUN_0805f9fc:0805fc64(c), 
                                                                                          FUN_0805f9fc:0805fc84(c), 
                                                                                          FUN_08060658:080609fc(c), 
                                                                                          FUN_08060658:08060b44(c), 
                                                                                          FUN_08060d5c:08060e48(c), 
                                                                                          FUN_08060ff8:08061150(c), 
                                                                                          FUN_080683a4:0806856c(c), 
                                                                                          FUN_08069734:0806976c(c), 
                                                                                          FUN_08078318:0807834c(c), 
                                                                                          FUN_0807840c:080784f8(c), 
                                                                                          08098fdc(c), 
                                                                                          FUN_080991a8:080991b8(c), 
                                                                                          FUN_080991a8:080991d8(c)  
        08003334 00 c6 8f e2     adr        r12,0x800333c
        08003338 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800333c 50 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x50]!=>PTR_LAB_080fa38c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined ts_config()
                               Thunked-Function: <EXTERNAL>::ts_config
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::ts_config                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_08079e70:08079f8c(c)  
        08003340 00 c6 8f e2     adr        r12,0x8003348
        08003344 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003348 48 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x48]!=>PTR_LAB_080fa390  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ferror(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ferror
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ferror                              XREF[8]:     Entry Point(*), 
                                                                                          FUN_08098eb0:08098eec(c), 
                                                                                          FUN_08098ef8:08098f3c(c), 
                                                                                          FUN_08098f50:08098f94(c), 
                                                                                          FUN_080990ac:080990f4(c), 
                                                                                          FUN_080990f8:08099140(c), 
                                                                                          FUN_080a44e8:080a459c(c), 
                                                                                          FUN_080a48b0:080a4954(c)  
        0800334c 00 c6 8f e2     adr        r12,0x8003354
        08003350 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003354 40 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x40]!=>PTR_LAB_080fa394  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uidiv()
                               Thunked-Function: <EXTERNAL>::__aeabi_uid
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uidiv                       XREF[28]:    Entry Point(*), 
                                                                                          FUN_08005058:08005294(c), 
                                                                                          FUN_08005058:080053b0(c), 
                                                                                          FUN_08009808:0800982c(c), 
                                                                                          FUN_0800cbc4:0800cdf8(c), 
                                                                                          FUN_0800cbc4:0800cee8(c), 
                                                                                          FUN_0800cf5c:0800d0b0(c), 
                                                                                          FUN_0800d114:0800d374(c), 
                                                                                          FUN_0800d114:0800d44c(c), 
                                                                                          FUN_0800d114:0800d4f8(c), 
                                                                                          FUN_0801351c:08013c84(c), 
                                                                                          FUN_0801351c:08013d90(c), 
                                                                                          FUN_08013dbc:08014224(c), 
                                                                                          FUN_08043c64:08044050(c), 
                                                                                          FUN_08023174:080469bc(c), 
                                                                                          FUN_08023174:080469cc(c), 
                                                                                          FUN_08066730:08066b6c(c), 
                                                                                          FUN_0807b3e8:0807b470(c), 
                                                                                          FUN_0807b3e8:0807b484(c), 
                                                                                          FUN_080d0dc4:080d0e10(c), [more]
        08003358 00 c6 8f e2     adr        r12,0x8003360
        0800335c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003360 38 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x38]!=>PTR_LAB_080fa398  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * fgets(char * __s, int __n, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgets
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __n
             FILE *            r2:4           __stream
                             <EXTERNAL>::fgets                               XREF[6]:     Entry Point(*), 
                                                                                          FUN_0805e270:0805e290(c), 
                                                                                          FUN_0805e6dc:0805e740(c), 
                                                                                          FUN_080624c0:0806251c(c), 
                                                                                          FUN_08068d70:08068e88(c), 
                                                                                          FUN_080725a8:08072ff0(c)  
        08003364 00 c6 8f e2     adr        r12,0x800336c
        08003368 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800336c 30 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x30]!=>PTR_LAB_080fa39c  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_idiv()
                               Thunked-Function: <EXTERNAL>::__aeabi_idiv
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_idiv                        XREF[14]:    Entry Point(*), 
                                                                                          FUN_0800d88c:0800d920(c), 
                                                                                          FUN_0802b5a8:0802b600(c), 
                                                                                          FUN_0802b5a8:0802b620(c), 
                                                                                          FUN_0802b5a8:0802b970(c), 
                                                                                          FUN_0802b5a8:0802b990(c), 
                                                                                          FUN_0802bc38:0802bc94(c), 
                                                                                          FUN_0802bc38:0802bcb4(c), 
                                                                                          FUN_0802bc38:0802bf94(c), 
                                                                                          FUN_0802bc38:0802bfa8(c), 
                                                                                          FUN_0802f2b8:0802f2f0(c), 
                                                                                          FUN_0802f2b8:0802f314(c), 
                                                                                          FUN_08045cb0:08045d54(c), 
                                                                                          FUN_080c4a20:080c4c90(c)  
        08003370 00 c6 8f e2     adr        r12,0x8003378
        08003374 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003378 28 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x28]!=>PTR_LAB_080fa3a0  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fputc(int __c, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fputc
             int               r0:4           <RETURN>
             int               r0:4           __c
             FILE *            r1:4           __stream
                             <EXTERNAL>::fputc                               XREF[39]:    Entry Point(*), 
                                                                                          FUN_0804c75c:0804c9dc(c), 
                                                                                          FUN_0804c75c:0804ca04(c), 
                                                                                          FUN_0804c75c:0804ca2c(c), 
                                                                                          FUN_0804c75c:0804ca4c(c), 
                                                                                          FUN_0804c75c:0804ca74(c), 
                                                                                          FUN_0804c75c:0804ca94(c), 
                                                                                          FUN_0804c75c:0804cac0(c), 
                                                                                          FUN_0804c75c:0804cae0(c), 
                                                                                          FUN_0804c75c:0804cb0c(c), 
                                                                                          FUN_080629b8:08062aac(c), 
                                                                                          FUN_080629b8:08062ab8(c), 
                                                                                          FUN_080692d8:08069370(c), 
                                                                                          FUN_080692d8:080693c0(c), 
                                                                                          FUN_080692d8:080693f8(c), 
                                                                                          FUN_080711e8:08071414(c), 
                                                                                          FUN_080882c8:080883d8(c), 
                                                                                          FUN_080882c8:0808845c(c), 
                                                                                          FUN_080882c8:0808846c(c), 
                                                                                          FUN_080893c8:080894e4(c), [more]
        0800337c 00 c6 8f e2     adr        r12,0x8003384
        08003380 f7 ca 8c e2     add        r12,r12,#0xf7000
        08003384 20 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x20]!=>PTR_LAB_080fa3a4  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t fwrite(void * __ptr, size_t __size, size_t 
                               Thunked-Function: <EXTERNAL>::fwrite
             size_t            r0:4           <RETURN>
             void *            r0:4           __ptr
             size_t            r1:4           __size
             size_t            r2:4           __n
             FILE *            r3:4           __s
                             <EXTERNAL>::fwrite                              XREF[75]:    Entry Point(*), 
                                                                                          FUN_08050498:08050610(c), 
                                                                                          FUN_08050498:08050634(c), 
                                                                                          FUN_08022f08:08050d50(c), 
                                                                                          FUN_08022f08:08050d74(c), 
                                                                                          FUN_0805aaa4:0805ab10(c), 
                                                                                          FUN_0805b738:0805b7e0(c), 
                                                                                          FUN_0805c170:0805c214(c), 
                                                                                          FUN_0805d844:0805d8a0(c), 
                                                                                          FUN_0805d844:0805d958(c), 
                                                                                          FUN_0805d97c:0805d9f0(c), 
                                                                                          FUN_0805d97c:0805daa8(c), 
                                                                                          FUN_08060658:08060cc0(c), 
                                                                                          FUN_08060658:08060cd4(c), 
                                                                                          FUN_08060658:08060ce8(c), 
                                                                                          FUN_080629b8:08062a88(c), 
                                                                                          FUN_080629b8:08062aa0(c), 
                                                                                          FUN_080629b8:08062acc(c), 
                                                                                          FUN_08067798:08067864(c), 
                                                                                          FUN_080711e8:0807142c(c), [more]
        08003388 00 c6 8f e2     adr        r12,0x8003390
        0800338c f7 ca 8c e2     add        r12,r12,#0xf7000
        08003390 18 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x18]!=>PTR_LAB_080fa3a8  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void longjmp(__jmp_buf_tag * __env, int _
                               Thunked-Function: <EXTERNAL>::longjmp
             void              <VOID>         <RETURN>
             __jmp_buf_tag *   r0:4           __env
             int               r1:4           __val
                             <EXTERNAL>::longjmp                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_08066730:08066d48(c)  
        08003394 00 c6 8f e2     adr        r12,0x800339c
        08003398 f7 ca 8c e2     add        r12,r12,#0xf7000
        0800339c 10 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x10]!=>PTR_LAB_080fa3ac  = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memcpy(void * __dest, void * __src, size_t 
                               Thunked-Function: <EXTERNAL>::memcpy
             void *            r0:4           <RETURN>
             void *            r0:4           __dest
             void *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::memcpy                              XREF[199]:   Entry Point(*), 
                                                                                          FUN_08009c5c:08009dd8(c), 
                                                                                          FUN_0801351c:08013cec(c), 
                                                                                          FUN_0802ff90:080304d8(c), 
                                                                                          FUN_0802ff90:08030f7c(c), 
                                                                                          FUN_08030f98:080318c8(c), 
                                                                                          FUN_08050498:08050514(c), 
                                                                                          FUN_08050498:080505a8(c), 
                                                                                          FUN_08022f08:08050b18(c), 
                                                                                          FUN_08022f08:08050ce8(c), 
                                                                                          FUN_080581a4:0805839c(c), 
                                                                                          FUN_080581a4:080583c4(c), 
                                                                                          FUN_0805a114:0805a160(c), 
                                                                                          FUN_0805ae28:0805ae6c(c), 
                                                                                          FUN_0805ae28:0805b0f4(c), 
                                                                                          FUN_0805ae28:0805b384(c), 
                                                                                          FUN_0805d844:0805d8b4(c), 
                                                                                          FUN_0805d97c:0805da04(c), 
                                                                                          FUN_0805f9fc:0805fe98(c), 
                                                                                          FUN_0805f9fc:0805feb4(c), [more]
        080033a0 00 c6 8f e2     adr        r12,0x80033a8
        080033a4 f7 ca 8c e2     add        r12,r12,#0xf7000
        080033a8 08 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x8]!=>PTR_LAB_080fa3b0   = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __mode_t umask(__mode_t __mask)
                               Thunked-Function: <EXTERNAL>::umask
             __mode_t          r0:4           <RETURN>
             __mode_t          r0:4           __mask
                             <EXTERNAL>::umask                               XREF[3]:     Entry Point(*), 
                                                                                          FUN_080aed38:080aed60(c), 
                                                                                          FUN_080aed38:080aed84(c)  
        080033ac 00 c6 8f e2     adr        r12,0x80033b4
        080033b0 f7 ca 8c e2     add        r12,r12,#0xf7000
        080033b4 00 f0 bc e5     ldr        pc=>LAB_08002c60,[r12,#0x0]!=>PTR_LAB_080fa3b4   = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * malloc(size_t __size)
                               Thunked-Function: <EXTERNAL>::malloc
             void *            r0:4           <RETURN>
             size_t            r0:4           __size
                             <EXTERNAL>::malloc                              XREF[215]:   Entry Point(*), 
                                                                                          FUN_08010900:08010910(c), 
                                                                                          FUN_08010900:08010954(c), 
                                                                                          FUN_08010900:08010970(c), 
                                                                                          FUN_080581a4:080585a8(c), 
                                                                                          FUN_08058628:08058698(c), 
                                                                                          FUN_08058628:08058724(c), 
                                                                                          FUN_0805a54c:0805a6b4(c), 
                                                                                          FUN_0805ab48:0805ac1c(c), 
                                                                                          FUN_0805ae28:0805b200(c), 
                                                                                          FUN_0805f9fc:0805fa20(c), 
                                                                                          FUN_0805f9fc:0805fbf8(c), 
                                                                                          FUN_08067798:080677d8(c), 
                                                                                          FUN_080687e0:080687ec(c), 
                                                                                          FUN_08068904:08068a48(c), 
                                                                                          FUN_08068904:08068ac8(c), 
                                                                                          FUN_08068904:08068ae0(c), 
                                                                                          FUN_08068d70:08068e58(c), 
                                                                                          FUN_08068d70:08068e6c(c), 
                                                                                          FUN_08068d70:08068ff0(c), [more]
        080033b8 00 c6 8f e2     adr        r12,0x80033c0
        080033bc f6 ca 8c e2     add        r12,r12,#0xf6000
        080033c0 f8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xff8]!=>PTR_LAB_080fa3b8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t strlen(char * __s)
                               Thunked-Function: <EXTERNAL>::strlen
             size_t            r0:4           <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::strlen                              XREF[44]:    Entry Point(*), 
                                                                                          FUN_0805ae28:0805b66c(c), 
                                                                                          FUN_0805e6dc:0805ed88(c), 
                                                                                          FUN_0805e6dc:0805ede4(c), 
                                                                                          FUN_080624c0:08062594(c), 
                                                                                          FUN_080629b8:080629d8(c), 
                                                                                          FUN_08062bc8:08062dfc(c), 
                                                                                          FUN_08062bc8:080630ac(c), 
                                                                                          FUN_08062bc8:080632a0(c), 
                                                                                          FUN_08062bc8:080633e8(c), 
                                                                                          FUN_08062bc8:08063754(c), 
                                                                                          FUN_08068904:08068a9c(c), 
                                                                                          FUN_08068904:08068b38(c), 
                                                                                          FUN_08068904:08068b4c(c), 
                                                                                          FUN_08068904:08068ba0(c), 
                                                                                          FUN_08068904:08068be8(c), 
                                                                                          FUN_0809cec4:0809d5d4(c), 
                                                                                          FUN_080a1f2c:080a1f64(c), 
                                                                                          FUN_080a8f44:080aa0dc(c), 
                                                                                          FUN_080e49d4:080e4a5c(c), [more]
        080033c4 00 c6 8f e2     adr        r12,0x80033cc
        080033c8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080033cc f0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xff0]!=>PTR_LAB_080fa3bc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getcwd(char * __buf, size_t __size)
                               Thunked-Function: <EXTERNAL>::getcwd
             char *            r0:4           <RETURN>
             char *            r0:4           __buf
             size_t            r1:4           __size
                             <EXTERNAL>::getcwd                              XREF[6]:     Entry Point(*), 
                                                                                          FUN_0800599c:080059b8(c), 
                                                                                          FUN_0804c75c:0804c9a0(c), 
                                                                                          FUN_0805b738:0805b934(c), 
                                                                                          FUN_08062bc8:08062c98(c), 
                                                                                          FUN_080a223c:080a22c4(c)  
        080033d0 00 c6 8f e2     adr        r12,0x80033d8
        080033d4 f6 ca 8c e2     add        r12,r12,#0xf6000
        080033d8 e8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfe8]!=>PTR_LAB_080fa3c0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int munmap(void * __addr, size_t __len)
                               Thunked-Function: <EXTERNAL>::munmap
             int               r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
                             <EXTERNAL>::munmap                              XREF[11]:    Entry Point(*), 
                                                                                          FUN_08012674:0801288c(c), 
                                                                                          FUN_08060d14:08060d44(c), 
                                                                                          FUN_0807a374:0807a47c(c), 
                                                                                          FUN_0807a374:0807a4a8(c), 
                                                                                          FUN_0807a374:0807a950(c), 
                                                                                          FUN_0807a374:0807a984(c), 
                                                                                          FUN_0807b1a4:0807b1d4(c), 
                                                                                          FUN_0807b1a4:0807b200(c), 
                                                                                          FUN_0807b4cc:0807b504(c), 
                                                                                          FUN_0807b4cc:0807b530(c)  
        080033dc 00 c6 8f e2     adr        r12,0x80033e4
        080033e0 f6 ca 8c e2     add        r12,r12,#0xf6000
        080033e4 e0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfe0]!=>PTR_LAB_080fa3c4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int usleep(__useconds_t __useconds)
                               Thunked-Function: <EXTERNAL>::usleep
             int               r0:4           <RETURN>
             __useconds_t      r0:4           __useconds
                             <EXTERNAL>::usleep                              XREF[2]:     Entry Point(*), 
                                                                                          usleep:0807b834(T), 
                                                                                          usleep:0807b834(j)  
        080033e8 00 c6 8f e2     adr        r12,0x80033f0
        080033ec f6 ca 8c e2     add        r12,r12,#0xf6000
        080033f0 d8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfd8]!=>PTR_LAB_080fa3c8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fprintf(FILE * __stream, char * __format, ...)
                               Thunked-Function: <EXTERNAL>::fprintf
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             char *            r1:4           __format
                             <EXTERNAL>::fprintf                             XREF[27]:    Entry Point(*), 
                                                                                          FUN_0805f21c:0805f30c(c), 
                                                                                          FUN_0805f21c:0805f33c(c), 
                                                                                          FUN_0805f21c:0805f35c(c), 
                                                                                          FUN_0805f21c:0805f37c(c), 
                                                                                          FUN_0805f21c:0805f46c(c), 
                                                                                          FUN_08062bc8:0806367c(c), 
                                                                                          FUN_08062bc8:080636c8(c), 
                                                                                          FUN_080692d8:08069354(c), 
                                                                                          FUN_080692d8:080693a8(c), 
                                                                                          FUN_080711e8:080713dc(c), 
                                                                                          FUN_080882c8:08088328(c), 
                                                                                          FUN_080882c8:08088384(c), 
                                                                                          FUN_080882c8:080883c4(c), 
                                                                                          FUN_080882c8:08088410(c), 
                                                                                          FUN_080887d8:08088834(c), 
                                                                                          FUN_080893c8:08089450(c), 
                                                                                          FUN_080893c8:08089468(c), 
                                                                                          FUN_080893c8:080894c4(c), 
                                                                                          FUN_080893c8:08089530(c), [more]
        080033f4 00 c6 8f e2     adr        r12,0x80033fc
        080033f8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080033fc d0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfd0]!=>PTR_LAB_080fa3cc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fclose(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fclose
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fclose                              XREF[77]:    Entry Point(*), 
                                                                                          FUN_0805ab48:0805ac4c(c), 
                                                                                          FUN_0805ab48:0805ad1c(c), 
                                                                                          FUN_0805ab48:0805adc0(c), 
                                                                                          FUN_0805c170:0805c230(c), 
                                                                                          FUN_0805d844:0805d960(c), 
                                                                                          FUN_0805d97c:0805dab0(c), 
                                                                                          FUN_0805dac8:0805db90(c), 
                                                                                          FUN_0805f9fc:0805fab8(c), 
                                                                                          FUN_0805f9fc:0805fdc0(c), 
                                                                                          FUN_0805f9fc:0805fdf4(c), 
                                                                                          FUN_0805f9fc:0805fe0c(c), 
                                                                                          FUN_0805f9fc:0805fff8(c), 
                                                                                          FUN_08066730:080668d8(c), 
                                                                                          FUN_0806706c:080673b8(c), 
                                                                                          FUN_0806706c:080673f4(c), 
                                                                                          FUN_08067798:0806786c(c), 
                                                                                          FUN_08068904:08068a88(c), 
                                                                                          FUN_08068904:08068cb8(c), 
                                                                                          FUN_08068904:08068d1c(c), [more]
        08003400 00 c6 8f e2     adr        r12,0x8003408
        08003404 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003408 c8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfc8]!=>PTR_LAB_080fa3d0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t write(int __fd, void * __buf, size_t __n)
                               Thunked-Function: <EXTERNAL>::write
             ssize_t           r0:4           <RETURN>
             int               r0:4           __fd
             void *            r1:4           __buf
             size_t            r2:4           __n
                             <EXTERNAL>::write                               XREF[2]:     Entry Point(*), 
                                                                                          FUN_0805c03c:0805c084(c)  
        0800340c 00 c6 8f e2     adr        r12,0x8003414
        08003410 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003414 c0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfc0]!=>PTR_LAB_080fa3d4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t lseek64(int __fd, __off64_t __offset, in
                               Thunked-Function: <EXTERNAL>::lseek64
             __off64_t         r1:4,r0:4      <RETURN>
             int               r0:4           __fd
             __off64_t         Stack[0x0]:8   __offset
             int               r1:4           __whence
                             <EXTERNAL>::lseek64                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_08095e94:08095ff4(c)  
        08003418 00 c6 8f e2     adr        r12,0x8003420
        0800341c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003420 b8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfb8]!=>PTR_LAB_080fa3d8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sprintf(char * __s, char * __format, ...)
                               Thunked-Function: <EXTERNAL>::sprintf
             int               r0:4           <RETURN>
             char *            r0:4           __s
             char *            r1:4           __format
                             <EXTERNAL>::sprintf                             XREF[130]:   Entry Point(*), 
                                                                                          FUN_08004eb0:08004eec(c), 
                                                                                          FUN_08005dd4:08005df8(c), 
                                                                                          FUN_08022f08:080230f0(c), 
                                                                                          FUN_0805ae28:0805b600(c), 
                                                                                          FUN_0805ae28:0805b62c(c), 
                                                                                          FUN_0805b738:0805b988(c), 
                                                                                          FUN_0806001c:08060064(c), 
                                                                                          FUN_08060398:080603cc(c), 
                                                                                          FUN_08060398:080603e8(c), 
                                                                                          FUN_08060414:0806045c(c), 
                                                                                          FUN_08060658:08060830(c), 
                                                                                          FUN_08060658:0806084c(c), 
                                                                                          FUN_08060658:0806094c(c), 
                                                                                          FUN_08060658:08060968(c), 
                                                                                          FUN_08061350:08061570(c), 
                                                                                          FUN_08066730:08066878(c), 
                                                                                          FUN_0806706c:0806709c(c), 
                                                                                          FUN_08067798:080677d0(c), 
                                                                                          FUN_08068d70:08068e14(c), [more]
        08003424 00 c6 8f e2     adr        r12,0x800342c
        08003428 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800342c b0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfb0]!=>PTR_LAB_080fa3dc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_ul2d()
                               Thunked-Function: <EXTERNAL>::__aeabi_ul2d
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_ul2d                        XREF[20]:    Entry Point(*), 
                                                                                          FUN_08004cd4:08004d40(c), 
                                                                                          FUN_08004cd4:08004d54(c), 
                                                                                          FUN_08004cd4:08004d8c(c), 
                                                                                          FUN_08004cd4:08004d9c(c), 
                                                                                          FUN_08004cd4:08004dbc(c), 
                                                                                          FUN_08004cd4:08004dcc(c), 
                                                                                          FUN_08004cd4:08004dec(c), 
                                                                                          FUN_08004cd4:08004dfc(c), 
                                                                                          FUN_08004cd4:08004e1c(c), 
                                                                                          FUN_08004cd4:08004e2c(c), 
                                                                                          FUN_08061350:08061498(c), 
                                                                                          FUN_08061350:08061518(c), 
                                                                                          FUN_08062bc8:080630fc(c), 
                                                                                          FUN_080711e8:080712d0(c), 
                                                                                          FUN_080711e8:080712e4(c), 
                                                                                          FUN_080711e8:0807131c(c), 
                                                                                          FUN_080711e8:08071340(c), 
                                                                                          FUN_080711e8:08071364(c), 
                                                                                          FUN_080711e8:08071380(c)  
        08003430 00 c6 8f e2     adr        r12,0x8003438
        08003434 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003438 a8 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfa8]!=>PTR_LAB_080fa3e0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcstombs(char * __s, wchar_t * __pwcs, size
                               Thunked-Function: <EXTERNAL>::wcstombs
             size_t            r0:4           <RETURN>
             char *            r0:4           __s
             wchar_t *         r1:4           __pwcs
             size_t            r2:4           __n
                             <EXTERNAL>::wcstombs                            XREF[2]:     Entry Point(*), 
                                                                                          FUN_080afbc8:080afc28(c)  
        0800343c 00 c6 8f e2     adr        r12,0x8003444
        08003440 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003444 a0 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xfa0]!=>PTR_LAB_080fa3e4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat(int __ver, char * __filename, stat * _
                               Thunked-Function: <EXTERNAL>::__xstat
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat *            r2:4           __stat_buf
                             <EXTERNAL>::__xstat                             XREF[10]:    Entry Point(*), 
                                                                                          FUN_0800586c:080058bc(c), 
                                                                                          FUN_0805e6dc:0805e718(c), 
                                                                                          FUN_08060484:080604c8(c), 
                                                                                          FUN_08060658:0806085c(c), 
                                                                                          FUN_08060658:0806097c(c), 
                                                                                          FUN_08062bc8:08062cc0(c), 
                                                                                          FUN_08062bc8:08062cfc(c), 
                                                                                          FUN_08062bc8:08062e10(c), 
                                                                                          FUN_0807840c:08078460(c)  
        08003448 00 c6 8f e2     adr        r12,0x8003450
        0800344c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003450 98 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf98]!=>PTR_LAB_080fa3e8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_end_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_end_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_end_catch                     XREF[1]:     Entry Point(*)  
        08003454 00 c6 8f e2     adr        r12,0x800345c
        08003458 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800345c 90 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf90]!=>PTR_LAB_080fa3ec = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscat(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscat
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
                             <EXTERNAL>::wcscat                              XREF[8]:     Entry Point(*), 
                                                                                          FUN_080a10c0:080a1144(c), 
                                                                                          FUN_080a10c0:080a1150(c), 
                                                                                          FUN_080a1368:080a13d4(c), 
                                                                                          FUN_080a2980:080a3860(c), 
                                                                                          FUN_080a2980:080a3884(c), 
                                                                                          FUN_080c3af8:080c3e9c(c), 
                                                                                          FUN_080da8ac:080daa0c(c)  
        08003460 00 c6 8f e2     adr        r12,0x8003468
        08003464 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003468 88 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf88]!=>PTR_LAB_080fa3f0 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __popcountsi2()
                               Thunked-Function: <EXTERNAL>::__popcounts
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__popcountsi2                       XREF[2]:     Entry Point(*), 
                                                                                          FUN_0801c670:0801c6a4(c)  
        0800346c 00 c6 8f e2     adr        r12,0x8003474
        08003470 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003474 80 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf80]!=>PTR_LAB_080fa3f4 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __gxx_personality_v0()
                               Thunked-Function: <EXTERNAL>::__gxx_perso
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__gxx_personality_v0                XREF[1]:     Entry Point(*)  
        08003478 00 c6 8f e2     adr        r12,0x8003480
        0800347c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003480 78 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf78]!=>PTR_LAB_080fa3f8 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t __ctype_get_mb_cur_max(void)
                               Thunked-Function: <EXTERNAL>::__ctype_get
             size_t            r0:4           <RETURN>
                             <EXTERNAL>::__ctype_get_mb_cur_max              XREF[5]:     Entry Point(*), 
                                                                                          FUN_080afd80:080aff4c(c), 
                                                                                          FUN_080afd80:080aff7c(c), 
                                                                                          FUN_080affb8:080b0070(c), 
                                                                                          FUN_080affb8:080b0174(c)  
        08003484 00 c6 8f e2     adr        r12,0x800348c
        08003488 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800348c 70 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf70]!=>PTR_LAB_080fa3fc = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int remap_file_pages(void * __start, size_t __size
                               Thunked-Function: <EXTERNAL>::remap_file_
             int               r0:4           <RETURN>
             void *            r0:4           __start
             size_t            r1:4           __size
             int               r2:4           __prot
             size_t            r3:4           __pgoff
             int               Stack[0x0]:4   __flags
                             <EXTERNAL>::remap_file_pages                    XREF[14]:    Entry Point(*), 
                                                                                          FUN_080097b4:080097fc(c), 
                                                                                          FUN_08009808:08009844(c), 
                                                                                          FUN_0800a708:0800a8dc(c), 
                                                                                          FUN_0800cbc4:0800ce10(c), 
                                                                                          FUN_0800cbc4:0800cf04(c), 
                                                                                          FUN_0800cf5c:0800d0d0(c), 
                                                                                          FUN_0800d114:0800d38c(c), 
                                                                                          FUN_0800d114:0800d464(c), 
                                                                                          FUN_0800d114:0800d510(c), 
                                                                                          FUN_08012674:08012804(c), 
                                                                                          FUN_0801351c:08013ca8(c), 
                                                                                          FUN_0801351c:08013da8(c), 
                                                                                          FUN_08013dbc:08014244(c)  
        08003490 00 c6 8f e2     adr        r12,0x8003498
        08003494 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003498 68 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf68]!=>PTR_LAB_080fa400 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_create(pthread_t * __newthread, pthrea
                               Thunked-Function: <EXTERNAL>::pthread_cre
             int               r0:4           <RETURN>
             pthread_t *       r0:4           __newthread
             pthread_attr_t    r1:4           __attr
             __start_routin    r2:4           __start_routine
             void *            r3:4           __arg
                             <EXTERNAL>::pthread_create                      XREF[3]:     Entry Point(*), 
                                                                                          FUN_0806001c:08060250(c), 
                                                                                          FUN_080d62d4:080d631c(c)  
        0800349c 00 c6 8f e2     adr        r12,0x80034a4
        080034a0 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034a4 60 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf60]!=>PTR_LAB_080fa404 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_l2d()
                               Thunked-Function: <EXTERNAL>::__aeabi_l2d
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_l2d                         XREF[2]:     Entry Point(*), 
                                                                                          FUN_08061350:0806158c(c)  
        080034a8 00 c6 8f e2     adr        r12,0x80034b0
        080034ac f6 ca 8c e2     add        r12,r12,#0xf6000
        080034b0 58 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf58]!=>PTR_LAB_080fa408 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
                             <EXTERNAL>::strcmp                              XREF[80]:    Entry Point(*), 
                                                                                          FUN_0805e6dc:0805e8b4(c), 
                                                                                          FUN_0805e6dc:0805e9a4(c), 
                                                                                          FUN_0805e6dc:0805ea10(c), 
                                                                                          FUN_0805e6dc:0805ea7c(c), 
                                                                                          FUN_0805e6dc:0805eae4(c), 
                                                                                          FUN_0805e6dc:0805eb7c(c), 
                                                                                          FUN_0805e6dc:0805ebe8(c), 
                                                                                          FUN_0805e6dc:0805ec64(c), 
                                                                                          FUN_0805f474:0805f510(c), 
                                                                                          FUN_0805f474:0805f578(c), 
                                                                                          FUN_08060658:08060c10(c), 
                                                                                          FUN_08062bc8:0806314c(c), 
                                                                                          FUN_08062bc8:08063458(c), 
                                                                                          FUN_08062bc8:080638c0(c), 
                                                                                          FUN_08079e70:08079f04(c), 
                                                                                          FUN_08079e70:08079f1c(c), 
                                                                                          FUN_08095e94:08095fb8(c), 
                                                                                          FUN_080963b4:0809661c(c), 
                                                                                          FUN_080c3af8:080c3d20(c), [more]
        080034b4 00 c6 8f e2     adr        r12,0x80034bc
        080034b8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034bc 50 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf50]!=>PTR_LAB_080fa40c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int toupper(int __c)
                               Thunked-Function: <EXTERNAL>::toupper
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::toupper                             XREF[7]:     Entry Point(*), 
                                                                                          FUN_0809fd3c:0809fd90(c), 
                                                                                          FUN_0809fd3c:0809fda4(c), 
                                                                                          FUN_0809fddc:0809fe74(c), 
                                                                                          FUN_0809fddc:0809fe88(c), 
                                                                                          FUN_080a006c:080a0088(c), 
                                                                                          FUN_080a00a0:080a00d0(c)  
        080034c0 00 c6 8f e2     adr        r12,0x80034c8
        080034c4 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034c8 48 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf48]!=>PTR_LAB_080fa410 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_free()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_free              XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078fb0(c)  
        080034cc 00 c6 8f e2     adr        r12,0x80034d4
        080034d0 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034d4 40 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf40]!=>PTR_LAB_080fa414 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t time(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::time
             time_t            r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::time                                XREF[9]:     Entry Point(*), 
                                                                                          FUN_0805cd0c:0805d0e0(c), 
                                                                                          FUN_0805cd0c:0805d0f0(c), 
                                                                                          FUN_0805d104:0805d144(c), 
                                                                                          FUN_0805d17c:0805d264(c), 
                                                                                          FUN_0805d2a4:0805d390(c), 
                                                                                          FUN_08066680:08066698(c), 
                                                                                          FUN_08066730:08066854(c), 
                                                                                          FUN_080b5b88:080b5ba0(c)  
        080034d8 00 c6 8f e2     adr        r12,0x80034e0
        080034dc f6 ca 8c e2     add        r12,r12,#0xf6000
        080034e0 38 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf38]!=>PTR_LAB_080fa418 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __cxa_throw()
                               Thunked-Function: <EXTERNAL>::__cxa_throw
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_throw                         XREF[6]:     Entry Point(*), 
                                                                                          FUN_080b7400:080b746c(c), 
                                                                                          FUN_080d0dc4:080d0ecc(c), 
                                                                                          FUN_080d0dc4:080d0f78(c), 
                                                                                          FUN_080d1774:080d189c(c), 
                                                                                          FUN_080d1774:080d18e0(c)  
        080034e4 00 c6 8f e2     adr        r12,0x80034ec
        080034e8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034ec 30 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf30]!=>PTR_LAB_080fa41c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemmove(wchar_t * __s1, wchar_t * __s2,
                               Thunked-Function: <EXTERNAL>::wmemmove
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::wmemmove                            XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a2980:080a2cc0(c)  
        080034f0 00 c6 8f e2     adr        r12,0x80034f8
        080034f4 f6 ca 8c e2     add        r12,r12,#0xf6000
        080034f8 28 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf28]!=>PTR_LAB_080fa420 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int * __errno_location(void)
                               Thunked-Function: <EXTERNAL>::__errno_loc
             int *             r0:4           <RETURN>
                             <EXTERNAL>::__errno_location                    XREF[13]:    Entry Point(*), 
                                                                                          FUN_08099018:08099044(c), 
                                                                                          FUN_08099050:0809907c(c), 
                                                                                          FUN_080a3dec:080a3fa0(c), 
                                                                                          FUN_080a51f0:080a5270(c), 
                                                                                          FUN_080b7494:080b74a4(c), 
                                                                                          FUN_080b74bc:080b74d0(c), 
                                                                                          FUN_080c3af8:080c3c94(c), 
                                                                                          FUN_080c40a4:080c4138(c), 
                                                                                          FUN_080c40a4:080c41a4(c), 
                                                                                          FUN_080e4778:080e47f4(c), 
                                                                                          FUN_080e4778:080e489c(c), 
                                                                                          FUN_080e4f2c:080e4fa4(c)  
        080034fc 00 c6 8f e2     adr        r12,0x8003504
        08003500 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003504 20 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf20]!=>PTR_LAB_080fa424 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int tolower(int __c)
                               Thunked-Function: <EXTERNAL>::tolower
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::tolower                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a0038:080a0054(c)  
        08003508 00 c6 8f e2     adr        r12,0x8003510
        0800350c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003510 18 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf18]!=>PTR_LAB_080fa428 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackEnd()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBackEnd                      XREF[2]:     Entry Point(*), 
                                                                                          FUN_08095e94:080962c4(c)  
        08003514 00 c6 8f e2     adr        r12,0x800351c
        08003518 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800351c 10 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf10]!=>PTR_LAB_080fa42c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sscanf(char * __s, char * __format, ...)
                               Thunked-Function: <EXTERNAL>::sscanf
             int               r0:4           <RETURN>
             char *            r0:4           __s
             char *            r1:4           __format
                             <EXTERNAL>::sscanf                              XREF[3]:     Entry Point(*), 
                                                                                          FUN_080725a8:080731b4(c), 
                                                                                          FUN_080725a8:08073720(c)  
        08003520 00 c6 8f e2     adr        r12,0x8003528
        08003524 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003528 08 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf08]!=>PTR_LAB_080fa430 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __lxstat64(int __ver, char * __filename, stat6
                               Thunked-Function: <EXTERNAL>::__lxstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__lxstat64                          XREF[2]:     Entry Point(*), 
                                                                                          FUN_080e5508:080e5514(c)  
        0800352c 00 c6 8f e2     adr        r12,0x8003534
        08003530 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003534 00 ff bc e5     ldr        pc=>LAB_08002c60,[r12,#0xf00]!=>PTR_LAB_080fa434 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncpy(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncpy
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::strncpy                             XREF[11]:    Entry Point(*), 
                                                                                          FUN_0805ae28:0805ae80(c), 
                                                                                          FUN_0805b6d4:0805b710(c), 
                                                                                          FUN_0805b738:0805b884(c), 
                                                                                          FUN_0805b738:0805b8ac(c), 
                                                                                          FUN_0805b738:0805b8ec(c), 
                                                                                          FUN_0805dac8:0805dbbc(c), 
                                                                                          FUN_0806001c:08060224(c), 
                                                                                          FUN_0806001c:08060234(c), 
                                                                                          FUN_080a05bc:080a05f4(c), 
                                                                                          FUN_080e49d4:080e4ae0(c)  
        08003538 00 c6 8f e2     adr        r12,0x8003540
        0800353c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003540 f8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xef8]!=>PTR_LAB_080fa438 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towupper(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towupper
             wint_t            r0:4           <RETURN>
             wint_t            r0:4           __wc
                             <EXTERNAL>::towupper                            XREF[7]:     Entry Point(*), 
                                                                                          FUN_080b0b10:080b0b64(c), 
                                                                                          FUN_080b0b10:080b0b78(c), 
                                                                                          FUN_080b0bb0:080b0c48(c), 
                                                                                          FUN_080b0bb0:080b0c5c(c), 
                                                                                          FUN_080b0cf8:080b0d20(c), 
                                                                                          FUN_080b0d5c:080b0d74(c)  
        08003544 00 c6 8f e2     adr        r12,0x800354c
        08003548 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800354c f0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xef0]!=>PTR_LAB_080fa43c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fflush(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fflush
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fflush                              XREF[19]:    Entry Point(*), 0802c820(c), 
                                                                                          FUN_0802c990:0802cfb0(c), 
                                                                                          FUN_0805e6dc:0805e790(c), 
                                                                                          FUN_0805e6dc:0805ef24(c), 
                                                                                          FUN_0805f9fc:0805fd8c(c), 
                                                                                          FUN_0805f9fc:0805ff50(c), 
                                                                                          FUN_08061350:08061430(c), 
                                                                                          FUN_080624c0:080626bc(c), 
                                                                                          FUN_080624c0:08062700(c), 
                                                                                          FUN_080627d0:08062964(c), 
                                                                                          FUN_080627d0:080629b0(c), 
                                                                                          FUN_080678b4:08067ebc(c), 
                                                                                          FUN_0806b4e0:0806c3f4(c), 
                                                                                          FUN_0806de38:0806ea78(c), 
                                                                                          FUN_080711e8:080713f4(c), 
                                                                                          FUN_080779b4:08077c78(c), 
                                                                                          FUN_080a43a4:080a43c0(c), 
                                                                                          FUN_080a48b0:080a4908(c)  
        08003550 00 c6 8f e2     adr        r12,0x8003558
        08003554 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003558 e8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xee8]!=>PTR_LAB_080fa440 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen64(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen64
             FILE *            r0:4           <RETURN>
             char *            r0:4           __filename
             char *            r1:4           __modes
                             <EXTERNAL>::fopen64                             XREF[8]:     Entry Point(*), 
                                                                                          FUN_080963b4:080963d4(c), 
                                                                                          FUN_080963b4:080963f0(c), 
                                                                                          FUN_08096b94:08096c94(c), 
                                                                                          FUN_08099018:0809902c(c), 
                                                                                          FUN_08099050:08099064(c), 
                                                                                          FUN_080a40ec:080a41a0(c), 
                                                                                          FUN_080b3a80:080b3aac(c)  
        0800355c 00 c6 8f e2     adr        r12,0x8003564
        08003560 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003564 e0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xee0]!=>PTR_LAB_080fa444 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int _setjmp(__jmp_buf_tag * __env)
                               Thunked-Function: <EXTERNAL>::_setjmp
             int               r0:4           <RETURN>
             __jmp_buf_tag *   r0:4           __env
                             <EXTERNAL>::_setjmp                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_08006540:080065e4(c)  
        08003568 00 c6 8f e2     adr        r12,0x8003570
        0800356c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003570 d8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xed8]!=>PTR_LAB_080fa448 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int memcmp(void * __s1, void * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::memcmp
             int               r0:4           <RETURN>
             void *            r0:4           __s1
             void *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::memcmp                              XREF[12]:    Entry Point(*), 
                                                                                          FUN_0805a114:0805a328(c), 
                                                                                          FUN_0805f9fc:0805fb98(c), 
                                                                                          FUN_080683a4:0806841c(c), 
                                                                                          FUN_08069418:08069468(c), 
                                                                                          FUN_080abd68:080abfb0(c), 
                                                                                          FUN_080abd68:080ac874(c), 
                                                                                          FUN_080ad800:080ade18(c), 
                                                                                          FUN_080b24ec:080b25f8(c), 
                                                                                          FUN_080b3054:080b30f4(c), 
                                                                                          FUN_080bd9f4:080bdad0(c), 
                                                                                          FUN_080bf144:080c069c(c)  
        08003574 00 c6 8f e2     adr        r12,0x800357c
        08003578 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800357c d0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xed0]!=>PTR_LAB_080fa44c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_avail()
                               Thunked-Function: <EXTERNAL>::snd_pcm_ava
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_avail                       XREF[7]:     Entry Point(*), 
                                                                                          FUN_08078aac:08078abc(c), 
                                                                                          FUN_08078ae0:08078af4(c), 
                                                                                          FUN_08078b1c:08078b40(c), 
                                                                                          FUN_08078b1c:08078bb4(c), 
                                                                                          FUN_08078bf4:08078c24(c), 
                                                                                          FUN_08078bf4:08078c4c(c)  
        08003580 00 c6 8f e2     adr        r12,0x8003588
        08003584 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003588 c8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xec8]!=>PTR_LAB_080fa450 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memmem(void * __haystack, size_t __haystack
                               Thunked-Function: <EXTERNAL>::memmem
             void *            r0:4           <RETURN>
             void *            r0:4           __haystack
             size_t            r1:4           __haystacklen
             void *            r2:4           __needle
             size_t            r3:4           __needlelen
                             <EXTERNAL>::memmem                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_0805dac8:0805dc24(c)  
        0800358c 00 c6 8f e2     adr        r12,0x8003594
        08003590 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003594 c0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xec0]!=>PTR_LAB_080fa454 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_lib_error_set_handler()
                               Thunked-Function: <EXTERNAL>::snd_lib_err
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_lib_error_set_handler           XREF[2]:     Entry Point(*), 
                                                                                          FUN_0807b85c:0807b86c(c)  
        08003598 00 c6 8f e2     adr        r12,0x80035a0
        0800359c f6 ca 8c e2     add        r12,r12,#0xf6000
        080035a0 b8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xeb8]!=>PTR_LAB_080fa458 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strrchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strrchr
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __c
                             <EXTERNAL>::strrchr                             XREF[16]:    Entry Point(*), 
                                                                                          FUN_0805b738:0805b864(c), 
                                                                                          FUN_0805b738:0805b890(c), 
                                                                                          FUN_0805b738:0805b8c8(c), 
                                                                                          FUN_0805b738:0805b914(c), 
                                                                                          FUN_08060658:0806069c(c), 
                                                                                          FUN_08060d5c:08060d78(c), 
                                                                                          FUN_08060f08:08060f18(c), 
                                                                                          FUN_08060ff8:08061008(c), 
                                                                                          FUN_08068d70:08068f88(c), 
                                                                                          FUN_08094678:08094a08(c), 
                                                                                          FUN_08095488:08095834(c), 
                                                                                          FUN_08095e94:08095fa4(c), 
                                                                                          FUN_080963b4:08096608(c), 
                                                                                          FUN_08096b94:08096c3c(c), 
                                                                                          FUN_08096ddc:08096e8c(c)  
        080035a4 00 c6 8f e2     adr        r12,0x80035ac
        080035a8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035ac b0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xeb0]!=>PTR_LAB_080fa45c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscpy(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscpy
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
                             <EXTERNAL>::wcscpy                              XREF[36]:    Entry Point(*), 
                                                                                          FUN_0809e4f8:0809e8ac(c), 
                                                                                          FUN_0809f558:0809f5d0(c), 
                                                                                          FUN_080a0d48:080a104c(c), 
                                                                                          FUN_080a10c0:080a1168(c), 
                                                                                          FUN_080a1938:080a1a48(c), 
                                                                                          FUN_080a1938:080a1be8(c), 
                                                                                          FUN_080a202c:080a2094(c), 
                                                                                          FUN_080a2134:080a219c(c), 
                                                                                          FUN_080a25a4:080a262c(c), 
                                                                                          FUN_080a25a4:080a2780(c), 
                                                                                          FUN_080a25a4:080a28bc(c), 
                                                                                          FUN_080a79e8:080a828c(c), 
                                                                                          FUN_080c2c20:080c2f60(c), 
                                                                                          FUN_080c2c20:080c303c(c), 
                                                                                          FUN_080c2c20:080c30c0(c), 
                                                                                          FUN_080c3500:080c3594(c), 
                                                                                          FUN_080c3abc:080c3adc(c), 
                                                                                          FUN_080c3af8:080c3c04(c), 
                                                                                          FUN_080c3af8:080c3e0c(c), [more]
        080035b0 00 c6 8f e2     adr        r12,0x80035b8
        080035b4 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035b8 a8 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xea8]!=>PTR_LAB_080fa460 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_any()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_any               XREF[3]:     Entry Point(*), 
                                                                                          FUN_08078c64:08078cb4(c), 
                                                                                          FUN_08078e48:08078eb4(c)  
        080035bc 00 c6 8f e2     adr        r12,0x80035c4
        080035c0 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035c4 a0 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xea0]!=>PTR_LAB_080fa464 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t mktime(tm * __tp)
                               Thunked-Function: <EXTERNAL>::mktime
             time_t            r0:4           <RETURN>
             tm *              r0:4           __tp
                             <EXTERNAL>::mktime                              XREF[2]:     Entry Point(*), 
                                                                                          FUN_080b5470:080b54e8(c)  
        080035c8 00 c6 8f e2     adr        r12,0x80035d0
        080035cc f6 ca 8c e2     add        r12,r12,#0xf6000
        080035d0 98 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe98]!=>PTR_LAB_080fa468 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_current()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_current           XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078f94(c)  
        080035d4 00 c6 8f e2     adr        r12,0x80035dc
        080035d8 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035dc 90 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe90]!=>PTR_LAB_080fa46c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getenv(char * __name)
                               Thunked-Function: <EXTERNAL>::getenv
             char *            r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getenv                              XREF[4]:     Entry Point(*), 
                                                                                          FUN_08079e70:08079f50(c), 
                                                                                          FUN_080a1620:080a1650(c), 
                                                                                          FUN_080d78e4:080d78fc(c)  
        080035e0 00 c6 8f e2     adr        r12,0x80035e8
        080035e4 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035e8 88 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe88]!=>PTR_LAB_080fa470 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __libc_start_main()
                               Thunked-Function: <EXTERNAL>::__libc_star
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__libc_start_main                   XREF[2]:     Entry Point(*), 
                                                                                          entry:08004b0c(c)  
        080035ec 00 c6 8f e2     adr        r12,0x80035f4
        080035f0 f6 ca 8c e2     add        r12,r12,#0xf6000
        080035f4 80 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe80]!=>PTR_LAB_080fa474 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int dup(int __fd)
                               Thunked-Function: <EXTERNAL>::dup
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::dup                                 XREF[2]:     Entry Point(*), 
                                                                                          FUN_080a44e8:080a4534(c)  
        080035f8 00 c6 8f e2     adr        r12,0x8003600
        080035fc f6 ca 8c e2     add        r12,r12,#0xf6000
        08003600 78 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe78]!=>PTR_LAB_080fa478 = 08002c60
                             LAB_08003604                                    XREF[1]:     08004b38(j)  
        08003604 00 c6 8f e2     adr        r12,0x800360c
        08003608 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800360c 70 fe bc e5     ldr        pc=><EXTERNAL>::__gmon_start__,[r12,#0xe70]!=>   undefined __gmon_start__()
                                                                                             = 0aafc00c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int vswprintf(wchar_t * __s, size_t __n, wchar_t *
                               Thunked-Function: <EXTERNAL>::vswprintf
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s
             size_t            r1:4           __n
             wchar_t *         r2:4           __format
             __gnuc_va_list    r3:4           __arg
                             <EXTERNAL>::vswprintf                           XREF[2]:     Entry Point(*), 
                                                                                          FUN_080b7044:080b7090(c)  
        08003610 00 c6 8f e2     adr        r12,0x8003618
        08003614 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003618 68 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe68]!=>PTR_LAB_080fa480 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params                   XREF[2]:     Entry Point(*), 
                                                                                          FUN_08078e48:08078fa0(c)  
        0800361c 00 c6 8f e2     adr        r12,0x8003624
        08003620 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003624 60 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe60]!=>PTR_LAB_080fa484 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int rename(char * __old, char * __new)
                               Thunked-Function: <EXTERNAL>::rename
             int               r0:4           <RETURN>
             char *            r0:4           __old
             char *            r1:4           __new
                             <EXTERNAL>::rename                              XREF[4]:     Entry Point(*), 0805f9ac(c), 
                                                                                          FUN_08062bc8:08062ce8(c), 
                                                                                          FUN_080a5f64:080a5fec(c)  
        08003628 00 c6 8f e2     adr        r12,0x8003630
        0800362c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003630 58 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe58]!=>PTR_LAB_080fa488 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk group * getgrnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getgrnam
             group *           r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getgrnam                            XREF[4]:     Entry Point(*), 
                                                                                          FUN_080e4778:080e48bc(c), 
                                                                                          FUN_080e49d4:080e4b90(c), 
                                                                                          FUN_080e4cd4:080e4e04(c)  
        08003634 00 c6 8f e2     adr        r12,0x800363c
        08003638 f6 ca 8c e2     add        r12,r12,#0xf6000
        0800363c 50 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe50]!=>PTR_LAB_080fa48c = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strchr
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __c
                             <EXTERNAL>::strchr                              XREF[10]:    Entry Point(*), 
                                                                                          FUN_0805e270:0805e398(c), 
                                                                                          FUN_0805e270:0805e4c0(c), 
                                                                                          FUN_080624c0:08062534(c), 
                                                                                          FUN_080624c0:08062554(c), 
                                                                                          FUN_08072534:0807254c(c), 
                                                                                          FUN_08072534:0807257c(c), 
                                                                                          FUN_080725a8:08072700(c), 
                                                                                          FUN_080725a8:08072730(c), 
                                                                                          FUN_080a1ccc:080a1d20(c)  
        08003640 00 c6 8f e2     adr        r12,0x8003648
        08003644 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003648 48 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe48]!=>PTR_LAB_080fa490 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_unlock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_unlock                XREF[7]:     Entry Point(*), 
                                                                                          FUN_080d63dc:080d63f0(c), 
                                                                                          FUN_080d6700:080d6758(c), 
                                                                                          FUN_080d6844:080d68e4(c), 
                                                                                          FUN_080d6924:080d6998(c), 
                                                                                          FUN_080d6afc:080d6ba0(c), 
                                                                                          FUN_080d6afc:080d6c00(c)  
        0800364c 00 c6 8f e2     adr        r12,0x8003654
        08003650 f6 ca 8c e2     add        r12,r12,#0xf6000
        08003654 40 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe40]!=>PTR_LAB_080fa494 = 08002c60
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined ts_read()
                               Thunked-Function: <EXTERNAL>::ts_read
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::ts_read                             XREF[2]:     Entry Point(*), 
                                                                                          FUN_08079758:08079870(c)  
        08003658 00 c6 8f e2     adr        r12,0x8003660
        0800365c f6 ca 8c e2     add        r12,r12,#0xf6000
        08003660 38 fe bc e5     ldr        pc=>LAB_08002c60,[r12,#0xe38]!=>PTR_LAB_080fa498 = 08002c60
