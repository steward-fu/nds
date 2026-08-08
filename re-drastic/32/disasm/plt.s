                             //
                             // .plt 
                             // SHT_PROGBITS  [0x8003c64 - 0x8004a1b]
                             // ram:08003c64-ram:08004a1b
                             //
                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_08003c64()
             undefined         r0:1           <RETURN>
             undefined4        Stack[-0x4]:4  local_4                                 XREF[1]:     08003c64(W)  
                             FUN_08003c64                                    XREF[3]:     ~bad_alloc:080040c8(T), 
                                                                                          ~bad_alloc:080040d0(c), 
                                                                                          0815a17c(*), 
                                                                                          _elfSectionHeaders::000001ec(*)  
        08003c64 04 e0 2d e5     str        lr,[sp,#local_4]!
        08003c68 04 e0 9f e5     ldr        lr,[DAT_08003c74]                                = 0015638Ch
        08003c6c 0e e0 8f e0     add        lr,pc,lr
        08003c70 08 f0 be e5     ldr        pc,[lr,#offset PTR_0815a008]!                    = 00000000
                             DAT_08003c74                                    XREF[1]:     FUN_08003c64:08003c68(R)  
        08003c74 8c 63 15 00     undefined4 0015638Ch
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __sighandler_t signal(int __sig, __sighandler_t __
                               Thunked-Function: <EXTERNAL>::signal
             __sighandler_t    r0:4           <RETURN>
             int               r0:4           __sig
             __sighandler_t    r1:4           __handler
                             <EXTERNAL>::signal                              XREF[4]:     signal_segv_handler:080c6938(c), 
                                                                                          SetSignalHandlers:080e2d30(c), 
                                                                                          SetSignalHandlers:080e2d4c(c), 
                                                                                          SetSignalHandlers:080e2d58(c)  
        08003c78 01 c6 8f e2     adr        r12,0x8103c80
        08003c7c 56 ca 8c e2     add        r12,r12,#0x56000
        08003c80 8c f3 bc e5     ldr        pc=><EXTERNAL>::signal,[r12,#0x38c]!=>-><EXTER   __sighandler_t signal(int __sig,
                                                                                             = 0aef044c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_init(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
             pthread_condat    r1:4           __cond_attr
                             <EXTERNAL>::pthread_cond_init                   XREF[9]:     initialize_video:08036570(c), 
                                                                                          initialize_video:08036584(c), 
                                                                                          initialize_video_3d:08078cf8(c), 
                                                                                          initialize_video_3d:08078d04(c), 
                                                                                          initialize_video_3d:08078d84(c), 
                                                                                          initialize_video_3d:08078d98(c), 
                                                                                          initialize_video_3d:08078dac(c), 
                                                                                          ThreadPool:081031e0(c), 
                                                                                          ThreadPool:08103200(c)  
        08003c84 01 c6 8f e2     adr        r12,0x8103c8c
        08003c88 56 ca 8c e2     add        r12,r12,#0x56000
        08003c8c 84 f3 bc e5     ldr        pc=><EXTERNAL>::pthread_cond_init,[r12,#0x384]   int pthread_cond_init(pthread_co
                                                                                             = 0aef01c0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chdir(char * __path)
                               Thunked-Function: <EXTERNAL>::chdir
             int               r0:4           <RETURN>
             char *            r0:4           __path
                             <EXTERNAL>::chdir                               XREF[3]:     load_directory_config_file:08097
                                                                                          load_file:0809d7e4(c), 
                                                                                          load_file:0809d844(c)  
        08003c90 01 c6 8f e2     adr        r12,0x8103c98
        08003c94 56 ca 8c e2     add        r12,r12,#0x56000
        08003c98 7c f3 bc e5     ldr        pc=><EXTERNAL>::chdir,[r12,#0x37c]!=>-><EXTERN   int chdir(char * __path)
                                                                                             = 0aef0198
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __swprintf_chk()
                               Thunked-Function: <EXTERNAL>::__swprintf_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__swprintf_chk                      XREF[7]:     ProcessExtra50:080d9568(c), 
                                                                                          GetText:080e1ac4(c), 
                                                                                          GetText:080e1b10(c), 
                                                                                          GetText:080e1b4c(c), 
                                                                                          ThreadCreate:08102e9c(c), 
                                                                                          ProcessSwitch:08104778(c), 
                                                                                          GetAutoRenamedName:08109df8(c)  
        08003c9c 01 c6 8f e2     adr        r12,0x8103ca4
        08003ca0 56 ca 8c e2     add        r12,r12,#0x56000
        08003ca4 74 f3 bc e5     ldr        pc=><EXTERNAL>::__swprintf_chk,[r12,#0x374]!=>   undefined __swprintf_chk()
                                                                                             = 0aef00d0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateRenderer()
                               Thunked-Function: <EXTERNAL>::SDL_CreateR
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateRenderer                  XREF[1]:     initialize_screen:080a86bc(c)  
        08003ca8 01 c6 8f e2     adr        r12,0x8103cb0
        08003cac 56 ca 8c e2     add        r12,r12,#0x56000
        08003cb0 6c f3 bc e5     ldr        pc=><EXTERNAL>::SDL_CreateRenderer,[r12,#0x36c   undefined SDL_CreateRenderer()
                                                                                             = 0aef035c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int _IO_getc(_IO_FILE * __fp)
                               Thunked-Function: <EXTERNAL>::_IO_getc
             int               r0:4           <RETURN>
             _IO_FILE *        r0:4           __fp
                             <EXTERNAL>::_IO_getc                            XREF[9]:     luaL_loadfilex:08126578(c), 
                                                                                          luaL_loadfilex:08126638(c), 
                                                                                          luaL_loadfilex:08126648(c), 
                                                                                          luaL_loadfilex:0812665c(c), 
                                                                                          luaL_loadfilex:08126718(c), 
                                                                                          luaL_loadfilex:08126808(c), 
                                                                                          luaL_loadfilex:0812681c(c), 
                                                                                          luaL_loadfilex:08126834(c), 
                                                                                          g_read:0812a1f0(c)  
        08003cb4 01 c6 8f e2     adr        r12,0x8103cbc
        08003cb8 56 ca 8c e2     add        r12,r12,#0x56000
        08003cbc 64 f3 bc e5     ldr        pc=><EXTERNAL>::_IO_getc,[r12,#0x364]!=>-><EXT   int _IO_getc(_IO_FILE * __fp)
                                                                                             = 0aef01bc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateWindow()
                               Thunked-Function: <EXTERNAL>::SDL_CreateW
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateWindow                    XREF[1]:     initialize_screen:080a86ac(c)  
        08003cc0 01 c6 8f e2     adr        r12,0x8103cc8
        08003cc4 56 ca 8c e2     add        r12,r12,#0x56000
        08003cc8 5c f3 bc e5     ldr        pc=><EXTERNAL>::SDL_CreateWindow,[r12,#0x35c]!   undefined SDL_CreateWindow()
                                                                                             = 0aef0310
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new(uint param_1)
                               Thunked-Function: <EXTERNAL>::operator.new
             void *            r0:4           <RETURN>
             uint              r0:4           param_1
                             <EXTERNAL>::operator.new                        XREF[7]:     RAROpenArchiveEx:080d0368(c), 
                                                                                          Archive:080d77c4(c), 
                                                                                          CmdExtract:080e9a1c(c), 
                                                                                          AddVMCode:080fbfe0(c), 
                                                                                          AddVMCode:080fc580(c), 
                                                                                          CreateThreadPool:08103260(c), 
                                                                                          FindProc:08108620(c)  
        08003ccc 01 c6 8f e2     adr        r12,0x8103cd4
        08003cd0 56 ca 8c e2     add        r12,r12,#0x56000
        08003cd4 54 f3 bc e5     ldr        pc=><EXTERNAL>::operator.new,[r12,#0x354]!=>->   void * operator.new(uint param_1)
                                                                                             = 0aef02f8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk passwd * getpwnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getpwnam
             passwd *          r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getpwnam                            XREF[3]:     ExtractUnixOwner20:0810d4dc(c), 
                                                                                          ExtractUnixOwner30:0810d658(c), 
                                                                                          SetUnixOwner:0810d7f0(c)  
        08003cd8 01 c6 8f e2     adr        r12,0x8103ce0
        08003cdc 56 ca 8c e2     add        r12,r12,#0x56000
        08003ce0 4c f3 bc e5     ldr        pc=><EXTERNAL>::getpwnam,[r12,#0x34c]!=>-><EXT   passwd * getpwnam(char * __name)
                                                                                             = 0aef0334
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_lock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_lock                  XREF[31]:    video_render_thread:08028844(c), 
                                                                                          video_render_thread:08028890(c), 
                                                                                          video_render_scanlines:08035fcc(
                                                                                          video_render_scanlines:08036010(
                                                                                          update_frame_3d_1x:08074ccc(c), 
                                                                                          update_frame_3d_1x:08074d4c(c), 
                                                                                          video_3d_render_thread:0807831c(
                                                                                          video_3d_render_thread:08078368(
                                                                                          update_frame_3d_4x:080785f0(c), 
                                                                                          update_frame_3d_4x:08078670(c), 
                                                                                          video_3d_run_thread:08078978(c), 
                                                                                          video_3d_run_thread:080789e0(c), 
                                                                                          video_3d_start_rendering:08078ae
                                                                                          video_3d_finish_rendering:08078b
                                                                                          DestroyThreadPool:08102f7c(c), 
                                                                                          DestroyThreadPool:08103030(c), 
                                                                                          DestroyThreadPool:08103068(c), 
                                                                                          AddTask:081036c0(c), 
                                                                                          AddTask:081036f0(c), 
                                                                                          WaitDone:081037a0(c), [more]
        08003ce4 01 c6 8f e2     adr        r12,0x8103cec
        08003ce8 56 ca 8c e2     add        r12,r12,#0x56000
        08003cec 44 f3 bc e5     ldr        pc=><EXTERNAL>::pthread_mutex_lock,[r12,#0x344   int pthread_mutex_lock(pthread_m
                                                                                             = 0aef0098
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcslen(wchar_t * __s)
                               Thunked-Function: <EXTERNAL>::wcslen
             size_t            r0:4           <RETURN>
             wchar_t *         r0:4           __s
                             <EXTERNAL>::wcslen                              XREF[66]:    patch_firmware_user_data:08015b6
                                                                                          wcsncatz:080d2708(c), 
                                                                                          PointToName:080d39e8(c), 
                                                                                          PointToLastChar:080d3a50(c), 
                                                                                          GetExt:080d3e74(c), 
                                                                                          GetFilePath:080d4160(c), 
                                                                                          RemoveNameFromPath:080d41ec(c), 
                                                                                          GetVolNumPart:080d4458(c), 
                                                                                          GetVolNumPart:080d4510(c), 
                                                                                          NextVolumeName:080d4590(c), 
                                                                                          NextVolumeName:080d4664(c), 
                                                                                          NextVolumeName:080d47cc(c), 
                                                                                          DosSlashToUnix:080d4c34(c), 
                                                                                          SecPassword:080e2e04(c), 
                                                                                          Set:080e3c78(c), 
                                                                                          Next:080ed570(c), 
                                                                                          Next:080ed57c(c), 
                                                                                          GetAutoRenamedName:08109e64(c), 
                                                                                          FileCreate:08109ed4(c), 
                                                                                          CmpName:0810a834(c), [more]
        08003cf0 01 c6 8f e2     adr        r12,0x8103cf8
        08003cf4 56 ca 8c e2     add        r12,r12,#0x56000
        08003cf8 3c f3 bc e5     ldr        pc=><EXTERNAL>::wcslen,[r12,#0x33c]!=>-><EXTER   size_t wcslen(wchar_t * __s)
                                                                                             = 0aef0354
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_init(pthread_mutex_t * __mutex, 
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
             pthread_mutexa    r1:4           __mutexattr
                             <EXTERNAL>::pthread_mutex_init                  XREF[10]:    initialize_video:08036548(c), 
                                                                                          initialize_video:0803655c(c), 
                                                                                          initialize_video_3d:08078ce0(c), 
                                                                                          initialize_video_3d:08078cec(c), 
                                                                                          initialize_video_3d:08078d48(c), 
                                                                                          initialize_video_3d:08078d5c(c), 
                                                                                          initialize_video_3d:08078d70(c), 
                                                                                          ThreadPool:08103158(c), 
                                                                                          ThreadPool:081031f0(c), 
                                                                                          ThreadPool:08103210(c)  
        08003cfc 01 c6 8f e2     adr        r12,0x8103d04
        08003d00 56 ca 8c e2     add        r12,r12,#0x56000
        08003d04 34 f3 bc e5     ldr        pc=><EXTERNAL>::pthread_mutex_init,[r12,#0x334   int pthread_mutex_init(pthread_m
                                                                                             = 0aef03d0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             LAB_08003d08                                    XREF[1]:     080a7f58(j)  
        08003d08 01 c6 8f e2     adr        r12,0x8103d10
        08003d0c 56 ca 8c e2     add        r12,r12,#0x56000
        08003d10 2c f3 bc e5     ldr        pc=><EXTERNAL>::SDL_Quit,[r12,#0x32c]!=>-><EXT   undefined SDL_Quit()
                                                                                             = 0aef048c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uldivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_uld
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uldivmod                    XREF[18]:    render_scanline_update_affine_va
                                                                                          render_scanline_update_affine_va
                                                                                          render_scanline_update_affine_va
                                                                                          render_scanline_update_affine_va
                                                                                          spu_update_channel_settings:0808
                                                                                          initialize_spu:0808e03c(c), 
                                                                                          initialize_spu:0808e05c(c), 
                                                                                          rtc_current_time:08091f60(c), 
                                                                                          rtc_write:080920d0(c), 
                                                                                          rtc_write:08092230(c), 
                                                                                          rtc_load_savestate:0809254c(c), 
                                                                                          rtc_store_savestate:080926b4(c), 
                                                                                          save_state:08095958(c), 
                                                                                          unarchive_get_progress:080c71d8(
                                                                                          GetUnix:080e1680(c), 
                                                                                          GetLocal:080e16e8(c), 
                                                                                          GetDos:080e187c(c), 
                                                                                          GetText:080e1a58(c)  
        08003d14 01 c6 8f e2     adr        r12,0x8103d1c
        08003d18 56 ca 8c e2     add        r12,r12,#0x56000
        08003d1c 24 f3 bc e5     ldr        pc=><EXTERNAL>::__aeabi_uldivmod,[r12,#0x324]!   undefined __aeabi_uldivmod()
                                                                                             = 0aef0020
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int rand(void)
                               Thunked-Function: <EXTERNAL>::rand
             int               r0:4           <RETURN>
                             <EXTERNAL>::rand                                XREF[1]:     math_randomseed:0812b0e4(c)  
        08003d20 01 c6 8f e2     adr        r12,0x8103d28
        08003d24 56 ca 8c e2     add        r12,r12,#0x56000
        08003d28 1c f3 bc e5     ldr        pc=><EXTERNAL>::rand,[r12,#0x31c]!=>-><EXTERNA   int rand(void)
                                                                                             = 0aef0394
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towlower(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towlower
             wint_t            r0:4           <RETURN>
             wint_t            r0:4           __wc
                             <EXTERNAL>::towlower                            XREF[2]:     wcslower:080dd604(c), 
                                                                                          tolowerw:080dd678(j)  
        08003d2c 01 c6 8f e2     adr        r12,0x8103d34
        08003d30 56 ca 8c e2     add        r12,r12,#0x56000
        08003d34 14 f3 bc e5     ldr        pc=><EXTERNAL>::towlower,[r12,#0x314]!=>-><EXT   wint_t towlower(wint_t __wc)
                                                                                             = 0aef034c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ftruncate(int __fd, __off_t __length)
                               Thunked-Function: <EXTERNAL>::ftruncate
             int               r0:4           <RETURN>
             int               r0:4           __fd
             __off_t           r1:4           __length
                             <EXTERNAL>::ftruncate                           XREF[3]:     initialize_memory:08016190(c), 
                                                                                          initialize_memory:08016410(c), 
                                                                                          backup_save:08092954(c)  
        08003d38 01 c6 8f e2     adr        r12,0x8103d40
        08003d3c 56 ca 8c e2     add        r12,r12,#0x56000
        08003d40 0c f3 bc e5     ldr        pc=><EXTERNAL>::ftruncate,[r12,#0x30c]!=>-><EX   int ftruncate(int __fd, __off_t 
                                                                                             = 0aef0424
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderPresent()
                               Thunked-Function: <EXTERNAL>::SDL_RenderP
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderPresent                   XREF[6]:     update_screen_menu:080a8060(c), 
                                                                                          clear_screen:080a81d8(c), 
                                                                                          clear_screen:080a81e8(c), 
                                                                                          clear_screen:080a81f8(c), 
                                                                                          clear_screen:080a8208(c), 
                                                                                          update_screen:080a849c(c)  
        08003d44 01 c6 8f e2     adr        r12,0x8103d4c
        08003d48 56 ca 8c e2     add        r12,r12,#0x56000
        08003d4c 04 f3 bc e5     ldr        pc=><EXTERNAL>::SDL_RenderPresent,[r12,#0x304]   undefined SDL_RenderPresent()
                                                                                             = 0aef01e0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * popen(char * __command, char * __modes)
                               Thunked-Function: <EXTERNAL>::popen
             FILE *            r0:4           <RETURN>
             char *            r0:4           __command
             char *            r1:4           __modes
                             <EXTERNAL>::popen                               XREF[1]:     io_popen:0812954c(c)  
        08003d50 01 c6 8f e2     adr        r12,0x8103d58
        08003d54 56 ca 8c e2     add        r12,r12,#0x56000
        08003d58 fc f2 bc e5     ldr        pc=><EXTERNAL>::popen,[r12,#0x2fc]!=>-><EXTERN   FILE * popen(char * __command, c
                                                                                             = 0aef031c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __vswprintf_chk()
                               Thunked-Function: <EXTERNAL>::__vswprintf
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__vswprintf_chk                     XREF[1]:     GeneralErrMsg:080e2b7c(c)  
        08003d5c 01 c6 8f e2     adr        r12,0x8103d64
        08003d60 56 ca 8c e2     add        r12,r12,#0x56000
        08003d64 f4 f2 bc e5     ldr        pc=><EXTERNAL>::__vswprintf_chk,[r12,#0x2f4]!=   undefined __vswprintf_chk()
                                                                                             = 0aef00dc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __pid_t getpid(void)
                               Thunked-Function: <EXTERNAL>::getpid
             __pid_t           r0:4           <RETURN>
                             <EXTERNAL>::getpid                              XREF[8]:     SecPassword:080e2e28(c), 
                                                                                          Process:080e3368(c), 
                                                                                          Get:080e37f4(c), Set:080e3c98(c), 
                                                                                          Length:080e41dc(c), 
                                                                                          operator==:080e4358(c), 
                                                                                          operator==:080e43f0(c), 
                                                                                          SecHideData:080e44a0(c)  
        08003d68 01 c6 8f e2     adr        r12,0x8103d70
        08003d6c 56 ca 8c e2     add        r12,r12,#0x56000
        08003d70 ec f2 bc e5     ldr        pc=><EXTERNAL>::getpid,[r12,#0x2ec]!=>-><EXTER   __pid_t getpid(void)
                                                                                             = 0aef0220
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __memcpy_chk()
                               Thunked-Function: <EXTERNAL>::__memcpy_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__memcpy_chk                        XREF[6]:     render_scanline_2d:0804c5e0(c), 
                                                                                          render_scanline_2d:0804c660(c), 
                                                                                          texture_cache_create:0808cbb8(c), 
                                                                                          pbkdf2:080df60c(c), 
                                                                                          GetStreamNameNTFS:0810d3f8(c), 
                                                                                          str_format:0812c940(c)  
        08003d74 01 c6 8f e2     adr        r12,0x8103d7c
        08003d78 56 ca 8c e2     add        r12,r12,#0x56000
        08003d7c e4 f2 bc e5     ldr        pc=><EXTERNAL>::__memcpy_chk,[r12,#0x2e4]!=>->   undefined __memcpy_chk()
                                                                                             = 0aef0360
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             LAB_08003d80                                    XREF[1]:     080e04e0(j)  
        08003d80 01 c6 8f e2     adr        r12,0x8103d88
        08003d84 56 ca 8c e2     add        r12,r12,#0x56000
        08003d88 dc f2 bc e5     ldr        pc=><EXTERNAL>::__aeabi_atexit,[r12,#0x2dc]!=>   undefined __aeabi_atexit()
                                                                                             = 0aef029c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderGetLogicalSize()
                               Thunked-Function: <EXTERNAL>::SDL_RenderG
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderGetLogicalSize            XREF[1]:     clear_screen:080a818c(c)  
        08003d8c 01 c6 8f e2     adr        r12,0x8103d94
        08003d90 56 ca 8c e2     add        r12,r12,#0x56000
        08003d94 d4 f2 bc e5     ldr        pc=><EXTERNAL>::SDL_RenderGetLogicalSize,[r12,   undefined SDL_RenderGetLogicalSi
                                                                                             = 0aef0064
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlerror()
                               Thunked-Function: <EXTERNAL>::dlerror
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::dlerror                             XREF[4]:     lookforfunc:0813281c(c), 
                                                                                          lookforfunc:081328c0(c), 
                                                                                          ll_loadlib:081330c0(c), 
                                                                                          ll_loadlib:0813318c(c)  
        08003d98 01 c6 8f e2     adr        r12,0x8103da0
        08003d9c 56 ca 8c e2     add        r12,r12,#0x56000
        08003da0 cc f2 bc e5     ldr        pc=><EXTERNAL>::dlerror,[r12,#0x2cc]!=>-><EXTE   undefined dlerror()
                                                                                             = 0aef0340
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int gettimeofday(timeval * __tv, __timezone_ptr_t 
                               Thunked-Function: <EXTERNAL>::gettimeofday
             int               r0:4           <RETURN>
             timeval *         r0:4           __tv
             __timezone_ptr    r1:4           __tz
                             <EXTERNAL>::gettimeofday                        XREF[5]:     get_ticks_us:080a7d78(c), 
                                                                                          synchronize:080a7e18(c), 
                                                                                          synchronize:080a7e6c(c), 
                                                                                          synchronize:080a7e9c(c), 
                                                                                          synchronize:080a7ec4(c)  
        08003da4 01 c6 8f e2     adr        r12,0x8103dac
        08003da8 56 ca 8c e2     add        r12,r12,#0x56000
        08003dac c4 f2 bc e5     ldr        pc=><EXTERNAL>::gettimeofday,[r12,#0x2c4]!=>->   int gettimeofday(timeval * __tv,
                                                                                             = 0aef0180
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __open64_2()
                               Thunked-Function: <EXTERNAL>::__open64_2
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__open64_2                          XREF[1]:     Open:080d5960(c)  
        08003db0 01 c6 8f e2     adr        r12,0x8103db8
        08003db4 56 ca 8c e2     add        r12,r12,#0x56000
        08003db8 bc f2 bc e5     ldr        pc=><EXTERNAL>::__open64_2,[r12,#0x2bc]!=>-><E   undefined __open64_2()
                                                                                             = 0aef0168
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __longjmp_chk()
                               Thunked-Function: <EXTERNAL>::__longjmp_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__longjmp_chk                       XREF[2]:     menu:080a1004(c), 
                                                                                          luaD_throw:08112e44(c)  
        08003dbc 01 c6 8f e2     adr        r12,0x8103dc4
        08003dc0 56 ca 8c e2     add        r12,r12,#0x56000
        08003dc4 b4 f2 bc e5     ldr        pc=><EXTERNAL>::__longjmp_chk,[r12,#0x2b4]!=>-   undefined __longjmp_chk()
                                                                                             = 0aef0418
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_destroy(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_destroy                XREF[4]:     DestroyThreadPool:08102fd8(c), 
                                                                                          DestroyThreadPool:08102fe8(c), 
                                                                                          ~ThreadPool:08103334(c), 
                                                                                          ~ThreadPool:08103344(c)  
        08003dc8 01 c6 8f e2     adr        r12,0x8103dd0
        08003dcc 56 ca 8c e2     add        r12,r12,#0x56000
        08003dd0 ac f2 bc e5     ldr        pc=><EXTERNAL>::pthread_cond_destroy,[r12,#0x2   int pthread_cond_destroy(pthread
                                                                                             = 0aef016c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_start()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sta
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_start                       XREF[2]:     initialize_audio_capture:080aaa3
                                                                                          initialize_audio:080aace4(c)  
        08003dd4 01 c6 8f e2     adr        r12,0x8103ddc
        08003dd8 56 ca 8c e2     add        r12,r12,#0x56000
        08003ddc a4 f2 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_start,[r12,#0x2a4]!=>-   undefined snd_pcm_start()
                                                                                             = 0aef023c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compress()
                               Thunked-Function: <EXTERNAL>::compress
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::compress                            XREF[1]:     save_state_thread_function:08094
        08003de0 01 c6 8f e2     adr        r12,0x8103de8
        08003de4 56 ca 8c e2     add        r12,r12,#0x56000
        08003de8 9c f2 bc e5     ldr        pc=><EXTERNAL>::compress,[r12,#0x29c]!=>-><EXT   undefined compress()
                                                                                             = 0aef0428
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseeko64(FILE * __stream, __off64_t __off, int
                               Thunked-Function: <EXTERNAL>::fseeko64
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             __off64_t         Stack[0x0]:8   __off
             int               r1:4           __whence
                             <EXTERNAL>::fseeko64                            XREF[3]:     Seek:080d57b8(c), 
                                                                                          RawSeek:080d6178(c), 
                                                                                          f_seek:08129c94(c)  
        08003dec 01 c6 8f e2     adr        r12,0x8103df4
        08003df0 56 ca 8c e2     add        r12,r12,#0x56000
        08003df4 94 f2 bc e5     ldr        pc=><EXTERNAL>::fseeko64,[r12,#0x294]!=>-><EXT   int fseeko64(FILE * __stream, __
                                                                                             = 0aef0454
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float coshf(float __x)
                               Thunked-Function: <EXTERNAL>::coshf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::coshf                               XREF[1]:     math_cosh:0812b000(c)  
        08003df8 01 c6 8f e2     adr        r12,0x8103e00
        08003dfc 56 ca 8c e2     add        r12,r12,#0x56000
        08003e00 8c f2 bc e5     ldr        pc=><EXTERNAL>::coshf,[r12,#0x28c]!=>-><EXTERN   float coshf(float __x)
                                                                                             = 0aef0388
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float ldexpf(float __x, int __exponent)
                               Thunked-Function: <EXTERNAL>::ldexpf
             float             s0:4           <RETURN>
             float             s0:4           __x
             int               r0:4           __exponent
                             <EXTERNAL>::ldexpf                              XREF[1]:     math_ldexp:0812aeb0(c)  
        08003e04 01 c6 8f e2     adr        r12,0x8103e0c
        08003e08 56 ca 8c e2     add        r12,r12,#0x56000
        08003e0c 84 f2 bc e5     ldr        pc=><EXTERNAL>::ldexpf,[r12,#0x284]!=>-><EXTER   float ldexpf(float __x, int __ex
                                                                                             = 0aef01d4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcasecmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcasecmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
                             <EXTERNAL>::strcasecmp                          XREF[143]:   initialize_game_database:08093d8
                                                                                          initialize_game_database:08093e1
                                                                                          initialize_game_database:08093e3
                                                                                          initialize_game_database:08093ee
                                                                                          initialize_game_database:08093f2
                                                                                          initialize_game_database:080940f
                                                                                          initialize_game_database:080941c
                                                                                          initialize_game_database:080941e
                                                                                          initialize_game_database:0809427
                                                                                          initialize_game_database:080942a
                                                                                          initialize_game_database:080942d
                                                                                          initialize_game_database:0809457
                                                                                          initialize_game_database:0809463
                                                                                          nds_file_open:080960b8(c), 
                                                                                          nds_file_open:08096324(c), 
                                                                                          nds_file_open:0809633c(c), 
                                                                                          nds_file_open:08096354(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_read_to_memory_partial:
                                                                                          [more]
        08003e10 01 c6 8f e2     adr        r12,0x8103e18
        08003e14 56 ca 8c e2     add        r12,r12,#0x56000
        08003e18 7c f2 bc e5     ldr        pc=><EXTERNAL>::strcasecmp,[r12,#0x27c]!=>-><E   int strcasecmp(char * __s1, char
                                                                                             = 0aef00e8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int utime(char * __file, utimbuf * __file_times)
                               Thunked-Function: <EXTERNAL>::utime
             int               r0:4           <RETURN>
             char *            r0:4           __file
             utimbuf *         r1:4           __file_times
                             <EXTERNAL>::utime                               XREF[1]:     SetCloseFileTimeByName:080d62f8(
        08003e1c 01 c6 8f e2     adr        r12,0x8103e24
        08003e20 56 ca 8c e2     add        r12,r12,#0x56000
        08003e24 74 f2 bc e5     ldr        pc=><EXTERNAL>::utime,[r12,#0x274]!=>-><EXTERN   int utime(char * __file, utimbuf
                                                                                             = 0aef0430
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fdopen(int __fd, char * __modes)
                               Thunked-Function: <EXTERNAL>::fdopen
             FILE *            r0:4           <RETURN>
             int               r0:4           __fd
             char *            r1:4           __modes
                             <EXTERNAL>::fdopen                              XREF[2]:     Write:080d54c0(c), 
                                                                                          Open:080d59a8(c)  
        08003e28 01 c6 8f e2     adr        r12,0x8103e30
        08003e2c 56 ca 8c e2     add        r12,r12,#0x56000
        08003e30 6c f2 bc e5     ldr        pc=><EXTERNAL>::fdopen,[r12,#0x26c]!=>-><EXTER   FILE * fdopen(int __fd, char * _
                                                                                             = 0aef0404
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long strtol(char * __nptr, char * * __endptr, int 
                               Thunked-Function: <EXTERNAL>::strtol
             long              r0:4           <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtol                              XREF[109]:   load_config_file:08099e34(c), 
                                                                                          load_config_file:08099e4c(c), 
                                                                                          load_config_file:08099e64(c), 
                                                                                          load_config_file:08099e7c(c), 
                                                                                          load_config_file:08099e94(c), 
                                                                                          load_config_file:08099eac(c), 
                                                                                          load_config_file:08099ec4(c), 
                                                                                          load_config_file:08099edc(c), 
                                                                                          load_config_file:08099ef4(c), 
                                                                                          load_config_file:08099f0c(c), 
                                                                                          load_config_file:08099f24(c), 
                                                                                          load_config_file:08099f3c(c), 
                                                                                          load_config_file:08099f54(c), 
                                                                                          load_config_file:08099f6c(c), 
                                                                                          load_config_file:08099f84(c), 
                                                                                          load_config_file:08099f9c(c), 
                                                                                          load_config_file:08099fb4(c), 
                                                                                          load_config_file:08099fcc(c), 
                                                                                          load_config_file:08099fe4(c), 
                                                                                          load_config_file:08099ffc(c), 
                                                                                          [more]
        08003e34 01 c6 8f e2     adr        r12,0x8103e3c
        08003e38 56 ca 8c e2     add        r12,r12,#0x56000
        08003e3c 64 f2 bc e5     ldr        pc=><EXTERNAL>::strtol,[r12,#0x264]!=>-><EXTER   long strtol(char * __nptr, char 
                                                                                             = 0aef03ec
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_access()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_access        XREF[2]:     initialize_audio_capture:080aa99
                                                                                          initialize_audio:080aabe8(c)  
        08003e40 01 c6 8f e2     adr        r12,0x8103e48
        08003e44 56 ca 8c e2     add        r12,r12,#0x56000
        08003e48 5c f2 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_access,[   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef0030
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined terminate(void)
                               Thunked-Function: <EXTERNAL>::std::termin
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::std::terminate
        08003e4c 01 c6 8f e2     adr        r12,0x8103e54
        08003e50 56 ca 8c e2     add        r12,r12,#0x56000
        08003e54 54 f2 bc e5     ldr        pc=><EXTERNAL>::std::terminate,[r12,#0x254]!=>   undefined terminate(void)
                                                                                             = 0aef0154
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void free(void * __ptr)
                               Thunked-Function: <EXTERNAL>::free
             void              <VOID>         <RETURN>
             void *            r0:4           __ptr
                             <EXTERNAL>::free                                XREF[219]:   CalcFileSum:080d6f0c(c), 
                                                                                          ~Archive:080d7254(c), 
                                                                                          ~Archive:080d7268(c), 
                                                                                          IsArchive:080d8a88(c), 
                                                                                          IsArchive:080d8e74(c), 
                                                                                          ReadHeader15:080d9d20(c), 
                                                                                          ReadHeader14:080db2c8(c), 
                                                                                          ReadHeader50:080db878(c), 
                                                                                          ~RAROptions:080e29cc(c), 
                                                                                          InitFilters30:080f14e8(c), 
                                                                                          InitFilters30:080f1530(c), 
                                                                                          InitFilters30:080f1540(c), 
                                                                                          InitFilters30:080f1550(c), 
                                                                                          InitFilters30:080f1574(c), 
                                                                                          InitFilters30:080f15b8(c), 
                                                                                          InitFilters30:080f15c8(c), 
                                                                                          InitFilters30:080f15d8(c), 
                                                                                          InitFilters30:080f15fc(c), 
                                                                                          UnpInitData:080f64c4(c), 
                                                                                          ~QuickOpen:08108bd0(c), [more]
        08003e58 01 c6 8f e2     adr        r12,0x8103e60
        08003e5c 56 ca 8c e2     add        r12,r12,#0x56000
        08003e60 4c f2 bc e5     ldr        pc=><EXTERNAL>::free,[r12,#0x24c]!=>-><EXTERNA   void free(void * __ptr)
                                                                                             = 0aef019c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float atan2f(float __y, float __x)
                               Thunked-Function: <EXTERNAL>::atan2f
             float             s0:4           <RETURN>
             float             s0:4           __y
             float             s1:4           __x
                             <EXTERNAL>::atan2f                              XREF[1]:     math_atan:0812b4fc(c)  
        08003e64 01 c6 8f e2     adr        r12,0x8103e6c
        08003e68 56 ca 8c e2     add        r12,r12,#0x56000
        08003e6c 44 f2 bc e5     ldr        pc=><EXTERNAL>::atan2f,[r12,#0x244]!=>-><EXTER   float atan2f(float __y, float __x)
                                                                                             = 0aef026c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent * readdir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir
             dirent *          r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::readdir                             XREF[2]:     load_file:0809c554(c), 
                                                                                          load_file:0809c6c4(c)  
        08003e70 01 c6 8f e2     adr        r12,0x8103e78
        08003e74 56 ca 8c e2     add        r12,r12,#0x56000
        08003e78 3c f2 bc e5     ldr        pc=><EXTERNAL>::readdir,[r12,#0x23c]!=>-><EXTE   dirent * readdir(DIR * __dirp)
                                                                                             = 0aef0278
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseek(FILE * __stream, long __off, int __whence)
                               Thunked-Function: <EXTERNAL>::fseek
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             long              r1:4           __off
             int               r2:4           __whence
                             <EXTERNAL>::fseek                               XREF[31]:    load_system_file:080066d4(c), 
                                                                                          load_system_file:080066f0(c), 
                                                                                          gamecard_load_gba:0808fa54(c), 
                                                                                          gamecard_load_gba:0808fa70(c), 
                                                                                          gamecard_load_gba:0808fb54(c), 
                                                                                          gamecard_load_gba:0808fb70(c), 
                                                                                          backup_save:080927cc(c), 
                                                                                          backup_save:080928d4(c), 
                                                                                          initialize_backup:08093014(c), 
                                                                                          initialize_backup:08093034(c), 
                                                                                          load_state:080954e4(c), 
                                                                                          load_state:08095504(c), 
                                                                                          nds_file_open:08096480(c), 
                                                                                          nds_file_open:080965c8(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_read_to_memory_partial:
                                                                                          load_config_file:08098f50(c), 
                                                                                          load_cheat_directory:080a1d20(c), 
                                                                                          load_cheat_directory:080a1dc4(c), 
                                                                                          load_cheat_directory:080a1e80(c), 
                                                                                          [more]
        08003e7c 01 c6 8f e2     adr        r12,0x8103e84
        08003e80 56 ca 8c e2     add        r12,r12,#0x56000
        08003e84 34 f2 bc e5     ldr        pc=><EXTERNAL>::fseek,[r12,#0x234]!=>-><EXTERN   int fseek(FILE * __stream, long 
                                                                                             = 0aef02d8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderSetLogicalSize()
                               Thunked-Function: <EXTERNAL>::SDL_RenderS
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderSetLogicalSize            XREF[4]:     clear_screen:080a81ac(c), 
                                                                                          clear_screen:080a8218(c), 
                                                                                          set_screen_menu_off:080a8318(c), 
                                                                                          set_screen_menu_on:080a8a58(c)  
        08003e88 01 c6 8f e2     adr        r12,0x8103e90
        08003e8c 56 ca 8c e2     add        r12,r12,#0x56000
        08003e90 2c f2 bc e5     ldr        pc=><EXTERNAL>::SDL_RenderSetLogicalSize,[r12,   undefined SDL_RenderSetLogicalSi
                                                                                             = 0aef024c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcsncpy_chk()
                               Thunked-Function: <EXTERNAL>::__wcsncpy_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__wcsncpy_chk                       XREF[3]:     GenArcName:080d3810(c), 
                                                                                          CreatePath:080d675c(c), 
                                                                                          OutComment:080e288c(c)  
        08003e94 01 c6 8f e2     adr        r12,0x8103e9c
        08003e98 56 ca 8c e2     add        r12,r12,#0x56000
        08003e9c 24 f2 bc e5     ldr        pc=><EXTERNAL>::__wcsncpy_chk,[r12,#0x224]!=>-   undefined __wcsncpy_chk()
                                                                                             = 0aef01e8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float tanf(float __x)
                               Thunked-Function: <EXTERNAL>::tanf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::tanf                                XREF[1]:     math_tan:0812b030(c)  
        08003ea0 01 c6 8f e2     adr        r12,0x8103ea8
        08003ea4 56 ca 8c e2     add        r12,r12,#0x56000
        08003ea8 1c f2 bc e5     ldr        pc=><EXTERNAL>::tanf,[r12,#0x21c]!=>-><EXTERNA   float tanf(float __x)
                                                                                             = 0aef0068
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat64(int __ver, char * __filename, stat64
                               Thunked-Function: <EXTERNAL>::__xstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__xstat64                           XREF[2]:     GetFileAttr:080d6b9c(c), 
                                                                                          FastFind:080ed3f8(c)  
        08003eac 01 c6 8f e2     adr        r12,0x8103eb4
        08003eb0 56 ca 8c e2     add        r12,r12,#0x56000
        08003eb4 14 f2 bc e5     ldr        pc=><EXTERNAL>::__xstat64,[r12,#0x214]!=>-><EX   int __xstat64(int __ver, char * 
                                                                                             = 0aef00f8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::qsort                               XREF[7]:     cpu_block_log_all:080283a4(c), 
                                                                                          initialize_game_database:0809476
                                                                                          initialize_game_database:0809478
                                                                                          file_info_cache_load:0809bbc4(c), 
                                                                                          load_file:0809c7ac(c), 
                                                                                          load_file:0809c7c4(c), 
                                                                                          load_cheat_directory:080a1ebc(c)  
        08003eb8 01 c6 8f e2     adr        r12,0x8103ec0
        08003ebc 56 ca 8c e2     add        r12,r12,#0x56000
        08003ec0 0c f2 bc e5     ldr        pc=><EXTERNAL>::qsort,[r12,#0x20c]!=>-><EXTERN   void qsort(void * __base, size_t
                                                                                             = 0aef0478
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncat(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncat
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncat                             XREF[1]:     wcsncatz:080d2728(c)  
        08003ec4 01 c6 8f e2     adr        r12,0x8103ecc
        08003ec8 56 ca 8c e2     add        r12,r12,#0x56000
        08003ecc 04 f2 bc e5     ldr        pc=><EXTERNAL>::wcsncat,[r12,#0x204]!=>-><EXTE   wchar_t * wcsncat(wchar_t * __de
                                                                                             = 0aef0408
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk clock_t clock(void)
                               Thunked-Function: <EXTERNAL>::clock
             clock_t           r0:4           <RETURN>
                             <EXTERNAL>::clock                               XREF[1]:     GetRnd:080e03f8(c)  
        08003ed0 01 c6 8f e2     adr        r12,0x8103ed8
        08003ed4 56 ca 8c e2     add        r12,r12,#0x56000
        08003ed8 fc f1 bc e5     ldr        pc=><EXTERNAL>::clock,[r12,#0x1fc]!=>-><EXTERN   clock_t clock(void)
                                                                                             = 0aef0320
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncmp(char * __s1, char * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::strncmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::strncmp                             XREF[17]:    gamecard_load_program:0809023c(c
                                                                                          gamecard_load_program:080902a0(c
                                                                                          unescape_str:080936b0(c), 
                                                                                          unescape_str:080936d0(c), 
                                                                                          unescape_str:0809371c(c), 
                                                                                          unescape_str:08093744(c), 
                                                                                          unescape_str:0809376c(c), 
                                                                                          initialize_game_database:0809441
                                                                                          initialize_game_database:0809443
                                                                                          initialize_game_database:0809454
                                                                                          initialize_game_database:080945d
                                                                                          initialize_game_database:080945e
                                                                                          load_config_file_binary:08097764
                                                                                          load_directory_config_file:08097
                                                                                          load_config_file:08098f28(c), 
                                                                                          ExtractUnixLink50:0810d9ac(c), 
                                                                                          pushglobalfuncname:081249b0(c)  
        08003edc 01 c6 8f e2     adr        r12,0x8103ee4
        08003ee0 56 ca 8c e2     add        r12,r12,#0x56000
        08003ee4 f4 f1 bc e5     ldr        pc=><EXTERNAL>::strncmp,[r12,#0x1f4]!=>-><EXTE   int strncmp(char * __s1, char * 
                                                                                             = 0aef0078
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t mbstowcs(wchar_t * __pwcs, char * __s, size
                               Thunked-Function: <EXTERNAL>::mbstowcs
             size_t            r0:4           <RETURN>
             wchar_t *         r0:4           __pwcs
             char *            r1:4           __s
             size_t            r2:4           __n
                             <EXTERNAL>::mbstowcs                            XREF[2]:     load_config_file:08099378(c), 
                                                                                          CharToWide:080dce28(c)  
        08003ee8 01 c6 8f e2     adr        r12,0x8103ef0
        08003eec 56 ca 8c e2     add        r12,r12,#0x56000
        08003ef0 ec f1 bc e5     ldr        pc=><EXTERNAL>::mbstowcs,[r12,#0x1ec]!=>-><EXT   size_t mbstowcs(wchar_t * __pwcs
                                                                                             = 0aef0450
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined uncompress()
                               Thunked-Function: <EXTERNAL>::uncompress
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::uncompress                          XREF[1]:     load_state:080956d8(c)  
        08003ef4 01 c6 8f e2     adr        r12,0x8103efc
        08003ef8 56 ca 8c e2     add        r12,r12,#0x56000
        08003efc e4 f1 bc e5     ldr        pc=><EXTERNAL>::uncompress,[r12,#0x1e4]!=>-><E   undefined uncompress()
                                                                                             = 0aef0028
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mbtowc(wchar_t * __pwc, char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mbtowc
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __pwc
             char *            r1:4           __s
             size_t            r2:4           __n
                             <EXTERNAL>::mbtowc                              XREF[2]:     CharToWide:080dcf4c(c), 
                                                                                          CharToWide:080dcf60(c)  
        08003f00 01 c6 8f e2     adr        r12,0x8103f08
        08003f04 56 ca 8c e2     add        r12,r12,#0x56000
        08003f08 dc f1 bc e5     ldr        pc=><EXTERNAL>::mbtowc,[r12,#0x1dc]!=>-><EXTER   int mbtowc(wchar_t * __pwc, char
                                                                                             = 0aef0044
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_readi()
                               Thunked-Function: <EXTERNAL>::snd_pcm_rea
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_readi                       XREF[2]:     audio_synchronous_update:080aa87
                                                                                          audio_capture_flush:080aa8e0(c)  
        08003f0c 01 c6 8f e2     adr        r12,0x8103f14
        08003f10 56 ca 8c e2     add        r12,r12,#0x56000
        08003f14 d4 f1 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_readi,[r12,#0x1d4]!=>-   undefined snd_pcm_readi()
                                                                                             = 0aef0434
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsrchr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcsrchr
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t           r1:4           __wc
                             <EXTERNAL>::wcsrchr                             XREF[11]:    GenArcName:080d3234(c), 
                                                                                          SetExt:080d3d30(c), 
                                                                                          SetSFXExt:080d3e04(c), 
                                                                                          GetExt:080d3ec0(c), 
                                                                                          CmpExt:080d3f34(c), 
                                                                                          NextVolumeName:080d45d4(c), 
                                                                                          NextVolumeName:080d480c(c), 
                                                                                          ParseVersionFileName:080d4ed8(c), 
                                                                                          VolNameToFirstName:080d51f0(c), 
                                                                                          FindProc:081083b4(c), 
                                                                                          FindProc:08108410(c)  
        08003f18 01 c6 8f e2     adr        r12,0x8103f20
        08003f1c 56 ca 8c e2     add        r12,r12,#0x56000
        08003f20 cc f1 bc e5     ldr        pc=><EXTERNAL>::wcsrchr,[r12,#0x1cc]!=>-><EXTE   wchar_t * wcsrchr(wchar_t * __wc
                                                                                             = 0aef0178
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float asinf(float __x)
                               Thunked-Function: <EXTERNAL>::asinf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::asinf                               XREF[1]:     math_asin:0812b530(c)  
        08003f24 01 c6 8f e2     adr        r12,0x8103f2c
        08003f28 56 ca 8c e2     add        r12,r12,#0x56000
        08003f2c c4 f1 bc e5     ldr        pc=><EXTERNAL>::asinf,[r12,#0x1c4]!=>-><EXTERN   float asinf(float __x)
                                                                                             = 0aef013c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_recover()
                               Thunked-Function: <EXTERNAL>::snd_pcm_rec
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_recover                     XREF[1]:     audio_synchronous_update:080aa88
        08003f30 01 c6 8f e2     adr        r12,0x8103f38
        08003f34 56 ca 8c e2     add        r12,r12,#0x56000
        08003f38 bc f1 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_recover,[r12,#0x1bc]!=   undefined snd_pcm_recover()
                                                                                             = 0aef02e8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcsncmp(wchar_t * __s1, wchar_t * __s2, size_t
                               Thunked-Function: <EXTERNAL>::wcsncmp
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncmp                             XREF[4]:     CmpName:0810a854(c), 
                                                                                          CmpName:0810a8d0(c), 
                                                                                          CmpName:0810a9dc(c), 
                                                                                          CmpName:0810aa80(c)  
        08003f3c 01 c6 8f e2     adr        r12,0x8103f44
        08003f40 56 ca 8c e2     add        r12,r12,#0x56000
        08003f44 b4 f1 bc e5     ldr        pc=><EXTERNAL>::wcsncmp,[r12,#0x1b4]!=>-><EXTE   int wcsncmp(wchar_t * __s1, wcha
                                                                                             = 0aef01b8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_begin_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_begin
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_begin_catch
        08003f48 01 c6 8f e2     adr        r12,0x8103f50
        08003f4c 56 ca 8c e2     add        r12,r12,#0x56000
        08003f50 ac f1 bc e5     ldr        pc=><EXTERNAL>::__cxa_begin_catch,[r12,#0x1ac]   undefined __cxa_begin_catch()
                                                                                             = 0aef0464
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uidivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_uid
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uidivmod                    XREF[5]:     render_scanline_apply_mosaic_vis
                                                                                          render_scanline_bg:08045f88(c), 
                                                                                          render_scanline_bg:08046148(c), 
                                                                                          Unpack5MT:08100ba4(c), 
                                                                                          mainposition:0811e6e4(c)  
        08003f54 01 c6 8f e2     adr        r12,0x8103f5c
        08003f58 56 ca 8c e2     add        r12,r12,#0x56000
        08003f5c a4 f1 bc e5     ldr        pc=><EXTERNAL>::__aeabi_uidivmod,[r12,#0x1a4]!   undefined __aeabi_uidivmod()
                                                                                             = 0aef01a0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcspbrk(wchar_t * __wcs, wchar_t * __acc
                               Thunked-Function: <EXTERNAL>::wcspbrk
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t *         r1:4           __accept
                             <EXTERNAL>::wcspbrk                             XREF[8]:     IsWildcard:080d3f90(c), 
                                                                                          IsNameUsable:080d4858(c), 
                                                                                          ProcessSwitch:08104750(c), 
                                                                                          match:0810a544(c), 
                                                                                          match:0810a5c8(c), 
                                                                                          match:0810a608(c), 
                                                                                          match:0810a680(c), 
                                                                                          match:0810a764(c)  
        08003f60 01 c6 8f e2     adr        r12,0x8103f68
        08003f64 56 ca 8c e2     add        r12,r12,#0x56000
        08003f68 9c f1 bc e5     ldr        pc=><EXTERNAL>::wcspbrk,[r12,#0x19c]!=>-><EXTE   wchar_t * wcspbrk(wchar_t * __wc
                                                                                             = 0aef009c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_join(pthread_t __th, void * * __thread
                               Thunked-Function: <EXTERNAL>::pthread_join
             int               r0:4           <RETURN>
             pthread_t         r0:4           __th
             void * *          r1:4           __thread_return
                             <EXTERNAL>::pthread_join                        XREF[2]:     DestroyThreadPool:08102fbc(c), 
                                                                                          ~ThreadPool:08103318(c)  
        08003f6c 01 c6 8f e2     adr        r12,0x8103f74
        08003f70 56 ca 8c e2     add        r12,r12,#0x56000
        08003f74 94 f1 bc e5     ldr        pc=><EXTERNAL>::pthread_join,[r12,#0x194]!=>->   int pthread_join(pthread_t __th,
                                                                                             = 0aef0024
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fgetc(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgetc
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fgetc                               XREF[6]:     _fgetw:080c8548(c), 
                                                                                          _fgetw:080c8554(c), 
                                                                                          _fgetd:080c8584(c), 
                                                                                          _fgetd:080c8590(c), 
                                                                                          _fgetd:080c859c(c), 
                                                                                          _fgetd:080c85ac(c)  
        08003f78 01 c6 8f e2     adr        r12,0x8103f80
        08003f7c 56 ca 8c e2     add        r12,r12,#0x56000
        08003f80 8c f1 bc e5     ldr        pc=><EXTERNAL>::fgetc,[r12,#0x18c]!=>-><EXTERN   int fgetc(FILE * __stream)
                                                                                             = 0aef038c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_JoystickOpen()
                               Thunked-Function: <EXTERNAL>::SDL_Joystic
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_JoystickOpen                    XREF[1]:     platform_initialize_input:080aa6
        08003f84 01 c6 8f e2     adr        r12,0x8103f8c
        08003f88 56 ca 8c e2     add        r12,r12,#0x56000
        08003f8c 84 f1 bc e5     ldr        pc=><EXTERNAL>::SDL_JoystickOpen,[r12,#0x184]!   undefined SDL_JoystickOpen()
                                                                                             = 0aef02a0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_open(char * __name, int __oflag, mode_t __
                               Thunked-Function: <EXTERNAL>::shm_open
             int               r0:4           <RETURN>
             char *            r0:4           __name
             int               r1:4           __oflag
             mode_t            r2:4           __mode
                             <EXTERNAL>::shm_open                            XREF[2]:     initialize_memory:08016180(c), 
                                                                                          initialize_memory:08016404(c)  
        08003f90 01 c6 8f e2     adr        r12,0x8103f98
        08003f94 56 ca 8c e2     add        r12,r12,#0x56000
        08003f98 7c f1 bc e5     ldr        pc=><EXTERNAL>::shm_open,[r12,#0x17c]!=>-><EXT   int shm_open(char * __name, int 
                                                                                             = 0aef0080
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_malloc()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_malloc            XREF[1]:     initialize_audio:080aacac(c)  
        08003f9c 01 c6 8f e2     adr        r12,0x8103fa4
        08003fa0 56 ca 8c e2     add        r12,r12,#0x56000
        08003fa4 74 f1 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_sw_params_malloc,[r12,   undefined snd_pcm_sw_params_mall
                                                                                             = 0aef01a8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBack()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBack                         XREF[1]:     unzip_file_to_memory_partial:080
        08003fa8 01 c6 8f e2     adr        r12,0x8103fb0
        08003fac 56 ca 8c e2     add        r12,r12,#0x56000
        08003fb0 6c f1 bc e5     ldr        pc=><EXTERNAL>::inflateBack,[r12,#0x16c]!=>-><   undefined inflateBack()
                                                                                             = 0aef0134
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_free()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_free              XREF[2]:     initialize_audio_capture:080aaa2
                                                                                          initialize_audio:080aaca4(c)  
        08003fb4 01 c6 8f e2     adr        r12,0x8103fbc
        08003fb8 56 ca 8c e2     add        r12,r12,#0x56000
        08003fbc 64 f1 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_free,[r12,#0   undefined snd_pcm_hw_params_free()
                                                                                             = 0aef0444
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float ceilf(float __x)
                               Thunked-Function: <EXTERNAL>::ceilf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::ceilf                               XREF[2]:     math_modf:0812b6c0(c), 
                                                                                          math_ceil:0812b994(c)  
        08003fc0 01 c6 8f e2     adr        r12,0x8103fc8
        08003fc4 56 ca 8c e2     add        r12,r12,#0x56000
        08003fc8 5c f1 bc e5     ldr        pc=><EXTERNAL>::ceilf,[r12,#0x15c]!=>-><EXTERN   float ceilf(float __x)
                                                                                             = 0aef01d8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_JoystickName()
                               Thunked-Function: <EXTERNAL>::SDL_Joystic
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_JoystickName                    XREF[1]:     platform_set_default_controls:08
        08003fcc 01 c6 8f e2     adr        r12,0x8103fd4
        08003fd0 56 ca 8c e2     add        r12,r12,#0x56000
        08003fd4 54 f1 bc e5     ldr        pc=><EXTERNAL>::SDL_JoystickName,[r12,#0x154]!   undefined SDL_JoystickName()
                                                                                             = 0aef03c4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int closedir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::closedir
             int               r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::closedir                            XREF[2]:     load_file:0809c7cc(c), 
                                                                                          ~FindFile:080ed2a8(c)  
        08003fd8 01 c6 8f e2     adr        r12,0x8103fe0
        08003fdc 56 ca 8c e2     add        r12,r12,#0x56000
        08003fe0 4c f1 bc e5     ldr        pc=><EXTERNAL>::closedir,[r12,#0x14c]!=>-><EXT   int closedir(DIR * __dirp)
                                                                                             = 0aef02f0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_allocate_exception()
                               Thunked-Function: <EXTERNAL>::__cxa_alloc
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_allocate_exception            XREF[4]:     Throw:080e2c7c(c), 
                                                                                          Init:080f5d64(c), 
                                                                                          Init:080f5d88(c), 
                                                                                          Init:080f63d4(c)  
        08003fe4 01 c6 8f e2     adr        r12,0x8103fec
        08003fe8 56 ca 8c e2     add        r12,r12,#0x56000
        08003fec 44 f1 bc e5     ldr        pc=><EXTERNAL>::__cxa_allocate_exception,[r12,   undefined __cxa_allocate_excepti
                                                                                             = 0aef0270
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetCurrentDisplayMode()
                               Thunked-Function: <EXTERNAL>::SDL_GetCurr
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_GetCurrentDisplayMode           XREF[1]:     initialize_screen:080a8618(c)  
        08003ff0 01 c6 8f e2     adr        r12,0x8103ff8
        08003ff4 56 ca 8c e2     add        r12,r12,#0x56000
        08003ff8 3c f1 bc e5     ldr        pc=><EXTERNAL>::SDL_GetCurrentDisplayMode,[r12   undefined SDL_GetCurrentDisplayM
                                                                                             = 0aef0058
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void exit(int __status)
                               Thunked-Function: <EXTERNAL>::exit
             void              <VOID>         <RETURN>
             int               r0:4           __status
                             <EXTERNAL>::exit                                XREF[8]:     quit:08006618(c), 
                                                                                          initialize_memory:0801685c(c), 
                                                                                          initialize_memory:0801687c(c), 
                                                                                          initialize_memory:080168d0(c), 
                                                                                          print_scheduler_state:08018c70(c
                                                                                          cpu_translate_setup_memory_map_o
                                                                                          cpu_translate_block:080b8400(c), 
                                                                                          ProcessSignal:080e2ab8(c)  
        08003ffc 01 c6 8f e2     adr        r12,0x8104004
        08004000 56 ca 8c e2     add        r12,r12,#0x56000
        08004004 34 f1 bc e5     ldr        pc=><EXTERNAL>::exit,[r12,#0x134]!=>-><EXTERNA   void exit(int __status)
                                                                                             = 0aef0084
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_format()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_format        XREF[2]:     initialize_audio_capture:080aa9a
                                                                                          initialize_audio:080aabf8(c)  
        08004008 01 c6 8f e2     adr        r12,0x8104010
        0800400c 56 ca 8c e2     add        r12,r12,#0x56000
        08004010 2c f1 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_format,[   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef041c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mblen(char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mblen
             int               r0:4           <RETURN>
             char *            r0:4           __s
             size_t            r1:4           __n
                             <EXTERNAL>::mblen                               XREF[4]:     WideToChar:080dcd58(c), 
                                                                                          WideToChar:080dcd68(c), 
                                                                                          CharToWide:080dcf74(c), 
                                                                                          CharToWide:080dcf84(c)  
        08004014 01 c6 8f e2     adr        r12,0x810401c
        08004018 56 ca 8c e2     add        r12,r12,#0x56000
        0800401c 24 f1 bc e5     ldr        pc=><EXTERNAL>::mblen,[r12,#0x124]!=>-><EXTERN   int mblen(char * __s, size_t __n)
                                                                                             = 0aef00b0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strerror(int __errnum)
                               Thunked-Function: <EXTERNAL>::strerror
             char *            r0:4           <RETURN>
             int               r0:4           __errnum
                             <EXTERNAL>::strerror                            XREF[9]:     luaL_fileresult:08125348(c), 
                                                                                          luaL_fileresult:08125398(c), 
                                                                                          luaL_execresult:08125464(c), 
                                                                                          luaL_loadfilex:08126774(c), 
                                                                                          luaL_loadfilex:0812684c(c), 
                                                                                          luaL_loadfilex:08126884(c), 
                                                                                          io_output:081298bc(c), 
                                                                                          io_lines:08129e94(c), 
                                                                                          io_input:08129fa8(c)  
        08004020 01 c6 8f e2     adr        r12,0x8104028
        08004024 56 ca 8c e2     add        r12,r12,#0x56000
        08004028 1c f1 bc e5     ldr        pc=><EXTERNAL>::strerror,[r12,#0x11c]!=>-><EXT   char * strerror(int __errnum)
                                                                                             = 0aef0194
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float cosf(float __x)
                               Thunked-Function: <EXTERNAL>::cosf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::cosf                                XREF[1]:     math_cos:0812b4ac(c)  
        0800402c 01 c6 8f e2     adr        r12,0x8104034
        08004030 56 ca 8c e2     add        r12,r12,#0x56000
        08004034 14 f1 bc e5     ldr        pc=><EXTERNAL>::cosf,[r12,#0x114]!=>-><EXTERNA   float cosf(float __x)
                                                                                             = 0aef0364
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlclose()
                               Thunked-Function: <EXTERNAL>::dlclose
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::dlclose                             XREF[1]:     gctm:08132914(c)  
        08004038 01 c6 8f e2     adr        r12,0x8104040
        0800403c 56 ca 8c e2     add        r12,r12,#0x56000
        08004040 0c f1 bc e5     ldr        pc=><EXTERNAL>::dlclose,[r12,#0x10c]!=>-><EXTE   undefined dlclose()
                                                                                             = 0aef0208
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sigaltstack(sigaltstack * __ss, sigaltstack * 
                               Thunked-Function: <EXTERNAL>::sigaltstack
             int               r0:4           <RETURN>
             sigaltstack *     r0:4           __ss
             sigaltstack *     r1:4           __oss
                             <EXTERNAL>::sigaltstack                         XREF[1]:     initialize_signal_handlers:080c6
        08004044 01 c6 8f e2     adr        r12,0x810404c
        08004048 56 ca 8c e2     add        r12,r12,#0x56000
        0800404c 04 f1 bc e5     ldr        pc=><EXTERNAL>::sigaltstack,[r12,#0x104]!=>-><   int sigaltstack(sigaltstack * __
                                                                                             = 0aef01f4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int feof(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::feof
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::feof                                XREF[1]:     getF:08124a78(c)  
        08004050 01 c6 8f e2     adr        r12,0x8104058
        08004054 56 ca 8c e2     add        r12,r12,#0x56000
        08004058 fc f0 bc e5     ldr        pc=><EXTERNAL>::feof,[r12,#0xfc]!=>-><EXTERNAL   int feof(FILE * __stream)
                                                                                             = 0aef0380
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int puts(char * __s)
                               Thunked-Function: <EXTERNAL>::puts
             int               r0:4           <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::puts                                XREF[147]:   process_arguments:08006c64(c), 
                                                                                          initialize_system_directory:0800
                                                                                          initialize_system_directory:0800
                                                                                          initialize_system:080074b0(c), 
                                                                                          initialize_system:080074c8(c), 
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          main:08007fb8(c), 
                                                                                          initialize_memory:0801651c(c), 
                                                                                          [more]
        0800405c 01 c6 8f e2     adr        r12,0x8104064
        08004060 56 ca 8c e2     add        r12,r12,#0x56000
        08004064 f4 f0 bc e5     ldr        pc=><EXTERNAL>::puts,[r12,#0xf4]!=>-><EXTERNAL   int puts(char * __s)
                                                                                             = 0aef00a0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_signal(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_signal                 XREF[9]:     video_render_thread:0802889c(c), 
                                                                                          video_render_scanlines:08035fe4(
                                                                                          update_frame_3d_1x:08074cd8(c), 
                                                                                          video_3d_render_thread:08078378(
                                                                                          update_frame_3d_4x:080785fc(c), 
                                                                                          video_3d_run_thread:080789fc(c), 
                                                                                          video_3d_start_rendering:08078b2
                                                                                          video_3d_start_rendering:08078b6
                                                                                          PoolThreadLoop:0810352c(c)  
        08004068 01 c6 8f e2     adr        r12,0x8104070
        0800406c 56 ca 8c e2     add        r12,r12,#0x56000
        08004070 ec f0 bc e5     ldr        pc=><EXTERNAL>::pthread_cond_signal,[r12,#0xec   int pthread_cond_signal(pthread_
                                                                                             = 0aef0224
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long wcstol(wchar_t * __nptr, wchar_t * * __endptr
                               Thunked-Function: <EXTERNAL>::wcstol
             long              r0:4           <RETURN>
             wchar_t *         r0:4           __nptr
             wchar_t * *       r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::wcstol                              XREF[3]:     ProcessSwitch:08104f6c(c), 
                                                                                          ProcessSwitch:08105038(c), 
                                                                                          GetExclAttr:081061f8(c)  
        08004074 01 c6 8f e2     adr        r12,0x810407c
        08004078 56 ca 8c e2     add        r12,r12,#0x56000
        0800407c e4 f0 bc e5     ldr        pc=><EXTERNAL>::wcstol,[r12,#0xe4]!=>-><EXTERN   long wcstol(wchar_t * __nptr, wc
                                                                                             = 0aef0088
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void perror(char * __s)
                               Thunked-Function: <EXTERNAL>::perror
             void              <VOID>         <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::perror                              XREF[7]:     initialize_memory:080166b8(c), 
                                                                                          initialize_memory:08016854(c), 
                                                                                          initialize_memory:08016874(c), 
                                                                                          initialize_memory:080168c4(c), 
                                                                                          gamecard_initialize_homebrew:080
                                                                                          initialize_signal_handlers:080c6
                                                                                          initialize_signal_handlers:080c6
        08004080 01 c6 8f e2     adr        r12,0x8104088
        08004084 56 ca 8c e2     add        r12,r12,#0x56000
        08004088 dc f0 bc e5     ldr        pc=><EXTERNAL>::perror,[r12,#0xdc]!=>-><EXTERN   void perror(char * __s)
                                                                                             = 0aef00d4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined flock()
                               Thunked-Function: <EXTERNAL>::flock
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::flock                               XREF[1]:     Open:080d5980(c)  
        0800408c 01 c6 8f e2     adr        r12,0x8104094
        08004090 56 ca 8c e2     add        r12,r12,#0x56000
        08004094 d4 f0 bc e5     ldr        pc=><EXTERNAL>::flock,[r12,#0xd4]!=>-><EXTERNA   undefined flock()
                                                                                             = 0aef0150
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int lchown(char * __file, __uid_t __owner, __gid_t
                               Thunked-Function: <EXTERNAL>::lchown
             int               r0:4           <RETURN>
             char *            r0:4           __file
             __uid_t           r1:4           __owner
             __gid_t           r2:4           __group
                             <EXTERNAL>::lchown                              XREF[3]:     ExtractUnixOwner20:0810d520(c), 
                                                                                          ExtractUnixOwner30:0810d698(c), 
                                                                                          SetUnixOwner:0810d77c(c)  
        08004098 01 c6 8f e2     adr        r12,0x81040a0
        0800409c 56 ca 8c e2     add        r12,r12,#0x56000
        080040a0 cc f0 bc e5     ldr        pc=><EXTERNAL>::lchown,[r12,#0xcc]!=>-><EXTERN   int lchown(char * __file, __uid_
                                                                                             = 0aef03b4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sinhf(float __x)
                               Thunked-Function: <EXTERNAL>::sinhf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sinhf                               XREF[1]:     math_sinh:0812afd0(c)  
        080040a4 01 c6 8f e2     adr        r12,0x81040ac
        080040a8 56 ca 8c e2     add        r12,r12,#0x56000
        080040ac c4 f0 bc e5     ldr        pc=><EXTERNAL>::sinhf,[r12,#0xc4]!=>-><EXTERNA   float sinhf(float __x)
                                                                                             = 0aef0214
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_PollEvent()
                               Thunked-Function: <EXTERNAL>::SDL_PollEve
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_PollEvent                       XREF[5]:     platform_get_input:080a8c9c(c), 
                                                                                          platform_get_input:080a8ddc(c), 
                                                                                          platform_get_config_input:080a97
                                                                                          get_gui_input:080a9d28(c), 
                                                                                          get_gui_input:080aa0ac(c)  
        080040b0 01 c6 8f e2     adr        r12,0x81040b8
        080040b4 56 ca 8c e2     add        r12,r12,#0x56000
        080040b8 bc f0 bc e5     ldr        pc=><EXTERNAL>::SDL_PollEvent,[r12,#0xbc]!=>->   undefined SDL_PollEvent()
                                                                                             = 0aef0368
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent64 * readdir64(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir64
             dirent64 *        r0:4           <RETURN>
             DIR *             r0:4           __dirp
                             <EXTERNAL>::readdir64                           XREF[1]:     Next:080ed4dc(c)  
        080040bc 01 c6 8f e2     adr        r12,0x81040c4
        080040c0 56 ca 8c e2     add        r12,r12,#0x56000
        080040c4 b4 f0 bc e5     ldr        pc=><EXTERNAL>::readdir64,[r12,#0xb4]!=>-><EXT   dirent64 * readdir64(DIR * __dirp)
                                                                                             = 0aef00e0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             * std::bad_alloc::~bad_alloc()                               *
                             **************************************************************
                             thunk undefined ~bad_alloc()
                               Thunked-Function: FUN_08003c64
             undefined         r0:1           <RETURN>
                             _ZNSt9bad_allocD1Ev@@GLIBCXX_3.4                XREF[4]:     Entry Point(*), Init:080f5d74(*), 
                             _ZNSt9bad_allocD1Ev                                          Init:080f5d98(*), 
                             std::bad_alloc::~bad_alloc                                   Init:080f63e4(*)  
        080040c8 01 c6 8f e2     adr        r12,0x81040d0
        080040cc 56 ca 8c e2     add        r12,r12,#0x56000
        080040d0 ac f0 bc e5     ldr        pc=>FUN_08003c64,[r12,#0xac]!=>->FUN_08003c64    undefined FUN_08003c64()
                                                                                             = 08003c64
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_NumJoysticks()
                               Thunked-Function: <EXTERNAL>::SDL_NumJoys
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_NumJoysticks                    XREF[1]:     platform_initialize_input:080aa6
        080040d4 01 c6 8f e2     adr        r12,0x81040dc
        080040d8 56 ca 8c e2     add        r12,r12,#0x56000
        080040dc a4 f0 bc e5     ldr        pc=><EXTERNAL>::SDL_NumJoysticks,[r12,#0xa4]!=   undefined SDL_NumJoysticks()
                                                                                             = 0aef03dc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __fprintf_chk()
                               Thunked-Function: <EXTERNAL>::__fprintf_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__fprintf_chk                       XREF[133]:   save_config_file:08097dfc(c), 
                                                                                          save_config_file:08097e20(c), 
                                                                                          save_config_file:08097e44(c), 
                                                                                          save_config_file:08097e68(c), 
                                                                                          save_config_file:08097e8c(c), 
                                                                                          save_config_file:08097eb0(c), 
                                                                                          save_config_file:08097ed4(c), 
                                                                                          save_config_file:08097ef8(c), 
                                                                                          save_config_file:08097f1c(c), 
                                                                                          save_config_file:08097f40(c), 
                                                                                          save_config_file:08097f64(c), 
                                                                                          save_config_file:08097f88(c), 
                                                                                          save_config_file:08097fac(c), 
                                                                                          save_config_file:08097fd0(c), 
                                                                                          save_config_file:08097ff4(c), 
                                                                                          save_config_file:08098018(c), 
                                                                                          save_config_file:0809803c(c), 
                                                                                          save_config_file:08098060(c), 
                                                                                          save_config_file:08098084(c), 
                                                                                          save_config_file:080980a8(c), 
                                                                                          [more]
        080040e0 01 c6 8f e2     adr        r12,0x81040e8
        080040e4 56 ca 8c e2     add        r12,r12,#0x56000
        080040e8 9c f0 bc e5     ldr        pc=><EXTERNAL>::__fprintf_chk,[r12,#0x9c]!=>->   undefined __fprintf_chk()
                                                                                             = 0aef006c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int link(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::link
             int               r0:4           <RETURN>
             char *            r0:4           __from
             char *            r1:4           __to
                             <EXTERNAL>::link                                XREF[1]:     ExtractHardlink:0810d348(c)  
        080040ec 01 c6 8f e2     adr        r12,0x81040f4
        080040f0 56 ca 8c e2     add        r12,r12,#0x56000
        080040f4 94 f0 bc e5     ldr        pc=><EXTERNAL>::link,[r12,#0x94]!=>-><EXTERNAL   int link(char * __from, char * _
                                                                                             = 0aef0074
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * tmpfile64(void)
                               Thunked-Function: <EXTERNAL>::tmpfile64
             FILE *            r0:4           <RETURN>
                             <EXTERNAL>::tmpfile64                           XREF[1]:     io_tmpfile:08129490(c)  
        080040f8 01 c6 8f e2     adr        r12,0x8104100
        080040fc 56 ca 8c e2     add        r12,r12,#0x56000
        08004100 8c f0 bc e5     ldr        pc=><EXTERNAL>::tmpfile64,[r12,#offset -><EXTE   FILE * tmpfile64(void)
                                                                                             = 0aef00d8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulong strtoul(char * __nptr, char * * __endptr, in
                               Thunked-Function: <EXTERNAL>::strtoul
             ulong             r0:4           <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtoul                             XREF[8]:     initialize_game_database:08093fa
                                                                                          initialize_game_database:0809400
                                                                                          initialize_game_database:0809406
                                                                                          initialize_game_database:0809416
                                                                                          initialize_game_database:0809423
                                                                                          file_info_cache_load:0809babc(c), 
                                                                                          load_custom_cheats:080a28f8(c), 
                                                                                          load_custom_cheats:080a2914(c)  
        08004104 01 c6 8f e2     adr        r12,0x810410c
        08004108 56 ca 8c e2     add        r12,r12,#0x56000
        0800410c 84 f0 bc e5     ldr        pc=><EXTERNAL>::strtoul,[r12,#0x84]!=>-><EXTER   ulong strtoul(char * __nptr, cha
                                                                                             = 0aef02b8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __fread_chk()
                               Thunked-Function: <EXTERNAL>::__fread_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__fread_chk                         XREF[2]:     game_database_generate_crc32_fro
                                                                                          load_logo:080a09c8(c)  
        08004110 01 c6 8f e2     adr        r12,0x8104118
        08004114 56 ca 8c e2     add        r12,r12,#0x56000
        08004118 7c f0 bc e5     ldr        pc=><EXTERNAL>::__fread_chk,[r12,#0x7c]!=>-><E   undefined __fread_chk()
                                                                                             = 0aef021c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcscpy_chk()
                               Thunked-Function: <EXTERNAL>::__wcscpy_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__wcscpy_chk                        XREF[23]:    ProcessFile:080d0bf0(c), 
                                                                                          GenArcName:080d3794(c), 
                                                                                          VolNameToFirstName:080d5214(c), 
                                                                                          Rename:080d5df0(c), 
                                                                                          ExtractArchive:080eb728(c), 
                                                                                          MergeArchive:080ecd6c(c), 
                                                                                          MergeArchive:080ecdcc(c), 
                                                                                          MergeArchive:080ece1c(c), 
                                                                                          MergeArchive:080ecfe8(c), 
                                                                                          SetMask:080ed2cc(c), 
                                                                                          Next:080ed54c(c), 
                                                                                          Next:080ed5f0(c), 
                                                                                          Next:080ed754(c), 
                                                                                          GetNextMask:08108170(c), 
                                                                                          FindProc:081083dc(c), 
                                                                                          FindProc:08108404(c), 
                                                                                          FindProc:081084c4(c), 
                                                                                          FindProc:08108568(c), 
                                                                                          FindProc:08108578(c), 
                                                                                          FindProc:08108804(c), [more]
        0800411c 01 c6 8f e2     adr        r12,0x8104124
        08004120 56 ca 8c e2     add        r12,r12,#0x56000
        08004124 74 f0 bc e5     ldr        pc=><EXTERNAL>::__wcscpy_chk,[r12,#0x74]!=>-><   undefined __wcscpy_chk()
                                                                                             = 0aef0468
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int putchar(int __c)
                               Thunked-Function: <EXTERNAL>::putchar
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::putchar                             XREF[4]:     initialize_video_3d:08078d30(c), 
                                                                                          print_cheats:080a3068(c), 
                                                                                          print_cheats:080a3224(c), 
                                                                                          signal_segv_handler:080c66b4(c)  
        08004128 01 c6 8f e2     adr        r12,0x8104130
        0800412c 56 ca 8c e2     add        r12,r12,#0x56000
        08004130 6c f0 bc e5     ldr        pc=><EXTERNAL>::putchar,[r12,#0x6c]!=>-><EXTER   int putchar(int __c)
                                                                                             = 0aef036c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memset(void * __s, int __c, size_t __n)
                               Thunked-Function: <EXTERNAL>::memset
             void *            r0:4           <RETURN>
             void *            r0:4           __s
             int               r1:4           __c
             size_t            r2:4           __n
                             <EXTERNAL>::memset                              XREF[198]:   hmac_sha256:080deb64(c), 
                                                                                          hmac_sha256:080dedf8(c), 
                                                                                          CryptData:080dfa04(c), 
                                                                                          CryptData:080dfa1c(c), 
                                                                                          GetB:080e1214(c), 
                                                                                          ~RAROptions:080e29b8(c), 
                                                                                          SecPassword:080e3218(c), 
                                                                                          UnpInitData:080f6490(c), 
                                                                                          UnpInitData:080f6538(c), 
                                                                                          UnpInitData:080f654c(c), 
                                                                                          UnpInitData:080f6560(c), 
                                                                                          UnpInitData:080f6578(c), 
                                                                                          Unpack:080f6b20(c), 
                                                                                          Unpack:080f6b30(c), 
                                                                                          Unpack:080f6dec(c), 
                                                                                          Unpack:080f6dfc(c), 
                                                                                          Unpack:080f6e10(c), 
                                                                                          Unpack:080f7068(c), 
                                                                                          BitInput:0810bfbc(c), 
                                                                                          blake2s_final:0810c97c(c), [more]
        08004134 01 c6 8f e2     adr        r12,0x810413c
        08004138 56 ca 8c e2     add        r12,r12,#0x56000
        0800413c 64 f0 bc e5     ldr        pc=><EXTERNAL>::memset,[r12,#0x64]!=>-><EXTERN   void * memset(void * __s, int __
                                                                                             = 0aef0228
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __fxstat64(int __ver, int __fildes, stat64 * _
                               Thunked-Function: <EXTERNAL>::__fxstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             int               r1:4           __fildes
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__fxstat64                          XREF[1]:     GetOpenFileTime:080d63a8(c)  
        08004140 01 c6 8f e2     adr        r12,0x8104148
        08004144 56 ca 8c e2     add        r12,r12,#0x56000
        08004148 5c f0 bc e5     ldr        pc=><EXTERNAL>::__fxstat64,[r12,#0x5c]!=>-><EX   int __fxstat64(int __ver, int __
                                                                                             = 0aef02c0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t strspn(char * __s, char * __accept)
                               Thunked-Function: <EXTERNAL>::strspn
             size_t            r0:4           <RETURN>
             char *            r0:4           __s
             char *            r1:4           __accept
                             <EXTERNAL>::strspn                              XREF[4]:     luaO_tostring:08118fc8(c), 
                                                                                          luaO_pushvfstring:0811934c(c), 
                                                                                          luaB_tonumber:08127760(c), 
                                                                                          luaB_tonumber:08127848(c)  
        0800414c 01 c6 8f e2     adr        r12,0x8104154
        08004150 56 ca 8c e2     add        r12,r12,#0x56000
        08004154 54 f0 bc e5     ldr        pc=><EXTERNAL>::strspn,[r12,#0x54]!=>-><EXTERN   size_t strspn(char * __s, char *
                                                                                             = 0aef03e4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk DIR * opendir(char * __name)
                               Thunked-Function: <EXTERNAL>::opendir
             DIR *             r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::opendir                             XREF[2]:     load_file:0809c50c(c), 
                                                                                          Next:080ed70c(c)  
        08004158 01 c6 8f e2     adr        r12,0x8104160
        0800415c 56 ca 8c e2     add        r12,r12,#0x56000
        08004160 4c f0 bc e5     ldr        pc=><EXTERNAL>::opendir,[r12,#0x4c]!=>-><EXTER   DIR * opendir(char * __name)
                                                                                             = 0aef0338
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float acosf(float __x)
                               Thunked-Function: <EXTERNAL>::acosf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::acosf                               XREF[1]:     math_acos:0812b560(c)  
        08004164 01 c6 8f e2     adr        r12,0x810416c
        08004168 56 ca 8c e2     add        r12,r12,#0x56000
        0800416c 44 f0 bc e5     ldr        pc=><EXTERNAL>::acosf,[r12,#0x44]!=>-><EXTERNA   float acosf(float __x)
                                                                                             = 0aef01f8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_open()
                               Thunked-Function: <EXTERNAL>::snd_pcm_open
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_open                        XREF[2]:     initialize_audio_capture:080aa96
                                                                                          initialize_audio:080aabb4(c)  
        08004170 01 c6 8f e2     adr        r12,0x8104178
        08004174 56 ca 8c e2     add        r12,r12,#0x56000
        08004178 3c f0 bc e5     ldr        pc=><EXTERNAL>::snd_pcm_open,[r12,#0x3c]!=>-><   undefined snd_pcm_open()
                                                                                             = 0aef0470
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void srandom(uint __seed)
                               Thunked-Function: <EXTERNAL>::srandom
             void              <VOID>         <RETURN>
             uint              r0:4           __seed
                             <EXTERNAL>::srandom                             XREF[1]:     math_randomseed:0812b0e0(c)  
        0800417c 01 c6 8f e2     adr        r12,0x8104184
        08004180 56 ca 8c e2     add        r12,r12,#0x56000
        08004184 34 f0 bc e5     ldr        pc=><EXTERNAL>::srandom,[r12,#0x34]!=>-><EXTER   void srandom(uint __seed)
                                                                                             = 0aef01cc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackInit_()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBackInit_                    XREF[1]:     unzip_file_to_memory_partial:080
        08004188 01 c6 8f e2     adr        r12,0x8104190
        0800418c 56 ca 8c e2     add        r12,r12,#0x56000
        08004190 2c f0 bc e5     ldr        pc=><EXTERNAL>::inflateBackInit_,[r12,#0x2c]!=   undefined inflateBackInit_()
                                                                                             = 0aef0480
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_DestroyTexture()
                               Thunked-Function: <EXTERNAL>::SDL_Destroy
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_DestroyTexture                  XREF[4]:     set_screen_hires_mode:080a80d4(c
                                                                                          initialize_screen:080a86d4(c), 
                                                                                          initialize_screen:080a8778(c), 
                                                                                          initialize_screen:080a880c(c)  
        08004194 01 c6 8f e2     adr        r12,0x810419c
        08004198 56 ca 8c e2     add        r12,r12,#0x56000
        0800419c 24 f0 bc e5     ldr        pc=><EXTERNAL>::SDL_DestroyTexture,[r12,#0x24]   undefined SDL_DestroyTexture()
                                                                                             = 0aef008c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int remove(char * __filename)
                               Thunked-Function: <EXTERNAL>::remove
             int               r0:4           <RETURN>
             char *            r0:4           __filename
                             <EXTERNAL>::remove                              XREF[2]:     save_state_thread_function:08095
                                                                                          DelFile:080d71cc(c)  
        080041a0 01 c6 8f e2     adr        r12,0x81041a8
        080041a4 56 ca 8c e2     add        r12,r12,#0x56000
        080041a8 1c f0 bc e5     ldr        pc=><EXTERNAL>::remove,[r12,#0x1c]!=>-><EXTERN   int remove(char * __filename)
                                                                                             = 0aef045c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_Delay()
                               Thunked-Function: <EXTERNAL>::SDL_Delay
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_Delay                           XREF[2]:     delay_us:080a7dd0(c), 
                                                                                          synchronize:080a7eb8(c)  
        080041ac 01 c6 8f e2     adr        r12,0x81041b4
        080041b0 56 ca 8c e2     add        r12,r12,#0x56000
        080041b4 14 f0 bc e5     ldr        pc=><EXTERNAL>::SDL_Delay,[r12,#0x14]!=>-><EXT   undefined SDL_Delay()
                                                                                             = 0aef00a4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcschr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcschr
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __wcs
             wchar_t           r1:4           __wc
                             <EXTERNAL>::wcschr                              XREF[31]:    ConvertPath:080d3b9c(c), 
                                                                                          ConvertPath:080d3bb0(c), 
                                                                                          GetVolNumPart:080d4550(c), 
                                                                                          MakeNameUsable:080d4970(c), 
                                                                                          MakeNameUsable:080d499c(c), 
                                                                                          WideToChar:080dcce8(c), 
                                                                                          match:0810a178(c), 
                                                                                          match:0810a418(c), 
                                                                                          match:0810a4b8(c), 
                                                                                          match:0810a528(c), 
                                                                                          match:0810a570(c), 
                                                                                          match:0810a5b0(c), 
                                                                                          match:0810a5f0(c), 
                                                                                          match:0810a630(c), 
                                                                                          match:0810a668(c), 
                                                                                          match:0810a6a4(c), 
                                                                                          match:0810a6dc(c), 
                                                                                          match:0810a710(c), 
                                                                                          match:0810a748(c), 
                                                                                          match:0810a788(c), [more]
        080041b8 01 c6 8f e2     adr        r12,0x81041c0
        080041bc 56 ca 8c e2     add        r12,r12,#0x56000
        080041c0 0c f0 bc e5     ldr        pc=><EXTERNAL>::wcschr,[r12,#0xc]!=>-><EXTERNA   wchar_t * wcschr(wchar_t * __wcs
                                                                                             = 0aef03f8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_UpdateTexture()
                               Thunked-Function: <EXTERNAL>::SDL_UpdateT
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_UpdateTexture                   XREF[4]:     update_screen_menu:080a803c(c), 
                                                                                          update_screen:080a855c(c), 
                                                                                          update_screen:080a85b0(c), 
                                                                                          initialize_screen:080a8724(c)  
        080041c4 01 c6 8f e2     adr        r12,0x81041cc
        080041c8 56 ca 8c e2     add        r12,r12,#0x56000
        080041cc 04 f0 bc e5     ldr        pc=><EXTERNAL>::SDL_UpdateTexture,[r12,#0x4]!=   undefined SDL_UpdateTexture()
                                                                                             = 0aef00a8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetRenderDrawBlendMode()
                               Thunked-Function: <EXTERNAL>::SDL_SetRend
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_SetRenderDrawBlendMode          XREF[1]:     initialize_screen:080a86e0(c)  
        080041d0 01 c6 8f e2     adr        r12,0x81041d8
        080041d4 55 ca 8c e2     add        r12,r12,#0x55000
        080041d8 fc ff bc e5     ldr        pc=><EXTERNAL>::SDL_SetRenderDrawBlendMode,[r1   undefined SDL_SetRenderDrawBlend
                                                                                             = 0aef03c0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int snprintf(char * __s, size_t __maxlen, char * _
                               Thunked-Function: <EXTERNAL>::snprintf
             int               r0:4           <RETURN>
             char *            r0:4           __s
             size_t            r1:4           __maxlen
             char *            r2:4           __format
                             <EXTERNAL>::snprintf                            XREF[3]:     nds_file_open:080964d8(c), 
                                                                                          nds_file_open:08096700(c), 
                                                                                          load_file:0809cea0(c)  
        080041dc 01 c6 8f e2     adr        r12,0x81041e4
        080041e0 55 ca 8c e2     add        r12,r12,#0x55000
        080041e4 f4 ff bc e5     ldr        pc=><EXTERNAL>::snprintf,[r12,#0xff4]!=>-><EXT   int snprintf(char * __s, size_t 
                                                                                             = 0aef01b0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * mmap64(void * __addr, size_t __len, int __p
                               Thunked-Function: <EXTERNAL>::mmap64
             void *            r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
             int               r2:4           __prot
             int               r3:4           __flags
             int               Stack[0x0]:4   __fd
             __off64_t         Stack[0x8]:8   __offset
                             <EXTERNAL>::mmap64                              XREF[1]:     unzip_find_file_entry:080c8648(c
        080041e8 01 c6 8f e2     adr        r12,0x81041f0
        080041ec 55 ca 8c e2     add        r12,r12,#0x55000
        080041f0 ec ff bc e5     ldr        pc=><EXTERNAL>::mmap64,[r12,#0xfec]!=>-><EXTER   void * mmap64(void * __addr, siz
                                                                                             = 0aef0438
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int close(int __fd)
                               Thunked-Function: <EXTERNAL>::close
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::close                               XREF[26]:    uninitialize_memory:080168f8(c), 
                                                                                          gamecard_initialize_homebrew:080
                                                                                          load_nds:08090770(c), 
                                                                                          nds_file_open:080961f0(c), 
                                                                                          nds_file_open:08096260(c), 
                                                                                          nds_file_close:080967e0(c), 
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c8e88(c), 
                                                                                          unzip_file:080c9110(c), 
                                                                                          unzip_file:080c9120(c), 
                                                                                          unzip_file:080c9158(c), 
                                                                                          unzip_file:080c9274(c), 
                                                                                          unzip_file:080c928c(c), 
                                                                                          unzip_file:080c92cc(c), 
                                                                                          unzip_file:080c933c(c), 
                                                                                          unzip_file:080c9364(c), [more]
        080041f4 01 c6 8f e2     adr        r12,0x81041fc
        080041f8 55 ca 8c e2     add        r12,r12,#0x55000
        080041fc e4 ff bc e5     ldr        pc=><EXTERNAL>::close,[r12,#0xfe4]!=>-><EXTERN   int close(int __fd)
                                                                                             = 0aef030c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_strerror()
                               Thunked-Function: <EXTERNAL>::snd_strerror
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_strerror                        XREF[9]:     initialize_audio_capture:080aaa6
                                                                                          initialize_audio_capture:080aaa8
                                                                                          initialize_audio_capture:080aaaa
                                                                                          initialize_audio_capture:080aaac
                                                                                          initialize_audio_capture:080aaae
                                                                                          initialize_audio_capture:080aab0
                                                                                          initialize_audio:080aad5c(c), 
                                                                                          initialize_audio:080aad78(c), 
                                                                                          initialize_audio:080aad94(c)  
        08004200 01 c6 8f e2     adr        r12,0x8104208
        08004204 55 ca 8c e2     add        r12,r12,#0x55000
        08004208 dc ff bc e5     ldr        pc=><EXTERNAL>::snd_strerror,[r12,#0xfdc]!=>->   undefined snd_strerror()
                                                                                             = 0aef012c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetModState()
                               Thunked-Function: <EXTERNAL>::SDL_GetModS
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_GetModState                     XREF[1]:     platform_get_input:080a9074(c)  
        0800420c 01 c6 8f e2     adr        r12,0x8104214
        08004210 55 ca 8c e2     add        r12,r12,#0x55000
        08004214 d4 ff bc e5     ldr        pc=><EXTERNAL>::SDL_GetModState,[r12,#0xfd4]!=   undefined SDL_GetModState()
                                                                                             = 0aef0054
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_broadcast(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
                             <EXTERNAL>::pthread_cond_broadcast              XREF[6]:     DestroyThreadPool:08102f98(c), 
                                                                                          DestroyThreadPool:08103060(c), 
                                                                                          ~ThreadPool:081032f4(c), 
                                                                                          ~ThreadPool:081033b8(c), 
                                                                                          AddTask:081036e8(c), 
                                                                                          WaitDone:081037c0(c)  
        08004218 01 c6 8f e2     adr        r12,0x8104220
        0800421c 55 ca 8c e2     add        r12,r12,#0x55000
        08004220 cc ff bc e5     ldr        pc=><EXTERNAL>::pthread_cond_broadcast,[r12,#0   int pthread_cond_broadcast(pthre
                                                                                             = 0aef00c0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen
             FILE *            r0:4           <RETURN>
             char *            r0:4           __filename
             char *            r1:4           __modes
                             <EXTERNAL>::fopen                               XREF[45]:    load_system_file:080066b4(c), 
                                                                                          gba_backup_auto_save_step:0808f9
                                                                                          gamecard_load_gba:0808fa24(c), 
                                                                                          gamecard_load_gba:0808fb34(c), 
                                                                                          load_nds:080906f4(c), 
                                                                                          backup_save:08092754(c), 
                                                                                          backup_save:08092998(c), 
                                                                                          backup_save:080929ac(c), 
                                                                                          initialize_backup:08092fb8(c), 
                                                                                          initialize_game_database:08093c7
                                                                                          load_state:0809523c(c), 
                                                                                          load_state:08095480(c), 
                                                                                          save_state:080958a8(c), 
                                                                                          nds_file_open:0809646c(c), 
                                                                                          nds_file_open:080964a8(c), 
                                                                                          nds_file_open:080965b4(c), 
                                                                                          nds_file_open:080966cc(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          load_directory_config_file:08097
                                                                                          save_config_file:08097db8(c), 
                                                                                          [more]
        08004224 01 c6 8f e2     adr        r12,0x810422c
        08004228 55 ca 8c e2     add        r12,r12,#0x55000
        0800422c c4 ff bc e5     ldr        pc=><EXTERNAL>::fopen,[r12,#0xfc4]!=>-><EXTERN   FILE * fopen(char * __filename, 
                                                                                             = 0aef02c4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new[](uint param_1)
                               Thunked-Function: <EXTERNAL>::operator.ne
             void *            r0:4           <RETURN>
             uint              r0:4           param_1
                             <EXTERNAL>::operator.new[]                      XREF[6]:     InitMT:080ee7f8(c), 
                                                                                          InitMT:080ee8d4(c), 
                                                                                          QuickOpen:08108b2c(c), 
                                                                                          Init:08108c88(c), 
                                                                                          Init:0810ab1c(c), 
                                                                                          BitInput:0810bfac(c)  
        08004230 01 c6 8f e2     adr        r12,0x8104238
        08004234 55 ca 8c e2     add        r12,r12,#0x55000
        08004238 bc ff bc e5     ldr        pc=><EXTERNAL>::operator.new[],[r12,#0xfbc]!=>   void * operator.new[](uint param
                                                                                             = 0aef042c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_period_size_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_period_size_  XREF[1]:     initialize_audio:080aac40(c)  
        0800423c 01 c6 8f e2     adr        r12,0x8104244
        08004240 55 ca 8c e2     add        r12,r12,#0x55000
        08004244 b4 ff bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_period_s   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef02cc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflate()
                               Thunked-Function: <EXTERNAL>::inflate
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflate                             XREF[3]:     unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c9020(c), 
                                                                                          unzip_file:080c91c0(c)  
        08004248 01 c6 8f e2     adr        r12,0x8104250
        0800424c 55 ca 8c e2     add        r12,r12,#0x55000
        08004250 ac ff bc e5     ldr        pc=><EXTERNAL>::inflate,[r12,#0xfac]!=>-><EXTE   undefined inflate()
                                                                                             = 0aef0308
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t read(int __fd, void * __buf, size_t __nbyt
                               Thunked-Function: <EXTERNAL>::read
             ssize_t           r0:4           <RETURN>
             int               r0:4           __fd
             void *            r1:4           __buf
             size_t            r2:4           __nbytes
                             <EXTERNAL>::read                                XREF[8]:     gamecard_read:08091118(c), 
                                                                                          nds_file_open_cached:08095f48(c), 
                                                                                          nds_file_open:08096160(c), 
                                                                                          unzip_in_func:080c6d54(c), 
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c92b0(c)  
        08004254 01 c6 8f e2     adr        r12,0x810425c
        08004258 55 ca 8c e2     add        r12,r12,#0x55000
        0800425c a4 ff bc e5     ldr        pc=><EXTERNAL>::read,[r12,#0xfa4]!=>-><EXTERNA   ssize_t read(int __fd, void * __
                                                                                             = 0aef0344
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void clearerr(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::clearerr
             void              <VOID>         <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::clearerr                            XREF[5]:     Write:080d5438(c), 
                                                                                          DirectRead:080d5e74(c), 
                                                                                          DirectRead:080d5ed0(c), 
                                                                                          Read:080d5f48(c), 
                                                                                          g_read:0812a050(c)  
        08004260 01 c6 8f e2     adr        r12,0x8104268
        08004264 55 ca 8c e2     add        r12,r12,#0x55000
        08004268 9c ff bc e5     ldr        pc=><EXTERNAL>::clearerr,[r12,#0xf9c]!=>-><EXT   void clearerr(FILE * __stream)
                                                                                             = 0aef03bc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk lconv * localeconv(void)
                               Thunked-Function: <EXTERNAL>::localeconv
             lconv *           r0:4           <RETURN>
                             <EXTERNAL>::localeconv                          XREF[2]:     g_read:0812a224(c), 
                                                                                          read_numeral:08138cd4(c)  
        0800426c 01 c6 8f e2     adr        r12,0x8104274
        08004270 55 ca 8c e2     add        r12,r12,#0x55000
        08004274 94 ff bc e5     ldr        pc=><EXTERNAL>::localeconv,[r12,#0xf94]!=>-><E   lconv * localeconv(void)
                                                                                             = 0aef043c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void abort(void)
                               Thunked-Function: <EXTERNAL>::abort
             void              <VOID>         <RETURN>
                             <EXTERNAL>::abort                               XREF[2]:     _start:080062b8(c), 
                                                                                          luaD_throw:08112ee8(c)  
        08004278 01 c6 8f e2     adr        r12,0x8104280
        0800427c 55 ca 8c e2     add        r12,r12,#0x55000
        08004280 8c ff bc e5     ldr        pc=><EXTERNAL>::abort,[r12,#0xf8c]!=>-><EXTERN   void abort(void)
                                                                                             = 0aef037c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sinf(float __x)
                               Thunked-Function: <EXTERNAL>::sinf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sinf                                XREF[1]:     math_sin:0812b0ac(c)  
        08004284 01 c6 8f e2     adr        r12,0x810428c
        08004288 55 ca 8c e2     add        r12,r12,#0x55000
        0800428c 84 ff bc e5     ldr        pc=><EXTERNAL>::sinf,[r12,#0xf84]!=>-><EXTERNA   float sinf(float __x)
                                                                                             = 0aef0258
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t ftello64(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftello64
             __off64_t         r1:4,r0:4      <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ftello64                            XREF[3]:     Tell:080d5374(c), 
                                                                                          Tell:080d53b4(c), 
                                                                                          f_seek:08129ca4(c)  
        08004290 01 c6 8f e2     adr        r12,0x8104298
        08004294 55 ca 8c e2     add        r12,r12,#0x55000
        08004298 7c ff bc e5     ldr        pc=><EXTERNAL>::ftello64,[r12,#0xf7c]!=>-><EXT   __off64_t ftello64(FILE * __stre
                                                                                             = 0aef0284
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __int32_t * * __ctype_toupper_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_tou
             __int32_t * *     r0:4           <RETURN>
                             <EXTERNAL>::__ctype_toupper_loc                 XREF[2]:     luaB_tonumber:081277d4(c), 
                                                                                          str_upper:0812bbb4(c)  
        0800429c 01 c6 8f e2     adr        r12,0x81042a4
        080042a0 55 ca 8c e2     add        r12,r12,#0x55000
        080042a4 74 ff bc e5     ldr        pc=><EXTERNAL>::__ctype_toupper_loc,[r12,#0xf7   __int32_t * * __ctype_toupper_lo
                                                                                             = 0aef0234
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memmove(void * __dest, void * __src, size_t
                               Thunked-Function: <EXTERNAL>::memmove
             void *            r0:4           <RETURN>
             void *            r0:4           __dest
             void *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::memmove                             XREF[15]:    geometry_transform_vertexes:0807
                                                                                          remove_custom_cheat:080a2c98(c), 
                                                                                          remove_custom_cheat:080a2cb0(c), 
                                                                                          NextVolumeName:080d46a0(c), 
                                                                                          UnpReadBuf30:080f13fc(c), 
                                                                                          UnpReadBuf:080f17cc(c), 
                                                                                          Unpack20:080f9254(c), 
                                                                                          ReadTables30:080faac0(c), 
                                                                                          ReadVMCode:080fcbec(c), 
                                                                                          Unpack29:080fd8a0(c), 
                                                                                          Unpack5:080ffca4(c), 
                                                                                          Unpack5MT:081018b4(c), 
                                                                                          Unpack5MT:08101964(c), 
                                                                                          SetMemory:0810b200(c), 
                                                                                          luaD_precall:08113a30(c)  
        080042a8 01 c6 8f e2     adr        r12,0x81042b0
        080042ac 55 ca 8c e2     add        r12,r12,#0x55000
        080042b0 6c ff bc e5     ldr        pc=><EXTERNAL>::memmove,[r12,#0xf6c]!=>-><EXTE   void * memmove(void * __dest, vo
                                                                                             = 0aef011c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_writei()
                               Thunked-Function: <EXTERNAL>::snd_pcm_wri
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_writei                      XREF[3]:     audio_buffer_force_feed:080aa78c
                                                                                          audio_synchronous_update:080aa81
                                                                                          initialize_audio:080aad14(c)  
        080042b4 01 c6 8f e2     adr        r12,0x81042bc
        080042b8 55 ca 8c e2     add        r12,r12,#0x55000
        080042bc 64 ff bc e5     ldr        pc=><EXTERNAL>::snd_pcm_writei,[r12,#0xf64]!=>   undefined snd_pcm_writei()
                                                                                             = 0aef0100
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params                   XREF[2]:     initialize_audio_capture:080aaa0
                                                                                          initialize_audio:080aac94(c)  
        080042c0 01 c6 8f e2     adr        r12,0x81042c8
        080042c4 55 ca 8c e2     add        r12,r12,#0x55000
        080042c8 5c ff bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params,[r12,#0xf5c]   undefined snd_pcm_hw_params()
                                                                                             = 0aef0120
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::shm_unlink
             int               r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::shm_unlink                          XREF[2]:     initialize_memory:080161a4(c), 
                                                                                          initialize_memory:08016424(c)  
        080042cc 01 c6 8f e2     adr        r12,0x81042d4
        080042d0 55 ca 8c e2     add        r12,r12,#0x55000
        080042d4 54 ff bc e5     ldr        pc=><EXTERNAL>::shm_unlink,[r12,#0xf54]!=>-><E   int shm_unlink(char * __name)
                                                                                             = 0aef0348
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __strncpy_chk()
                               Thunked-Function: <EXTERNAL>::__strncpy_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__strncpy_chk                       XREF[1]:     ExtractUnixOwner30:0810d63c(c)  
        080042d8 01 c6 8f e2     adr        r12,0x81042e0
        080042dc 55 ca 8c e2     add        r12,r12,#0x55000
        080042e0 4c ff bc e5     ldr        pc=><EXTERNAL>::__strncpy_chk,[r12,#0xf4c]!=>-   undefined __strncpy_chk()
                                                                                             = 0aef007c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strpbrk(char * __s, char * __accept)
                               Thunked-Function: <EXTERNAL>::strpbrk
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             char *            r1:4           __accept
                             <EXTERNAL>::strpbrk                             XREF[1]:     str_find_aux:0812fe20(c)  
        080042e4 01 c6 8f e2     adr        r12,0x81042ec
        080042e8 55 ca 8c e2     add        r12,r12,#0x55000
        080042ec 44 ff bc e5     ldr        pc=><EXTERNAL>::strpbrk,[r12,#0xf44]!=>-><EXTE   char * strpbrk(char * __s, char 
                                                                                             = 0aef03e8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * ctime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::ctime
             char *            r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::ctime                               XREF[4]:     reset_rtc:08092414(c), 
                                                                                          rtc_load_savestate:08092580(c), 
                                                                                          rtc_store_savestate:080926e8(c), 
                                                                                          draw_menu_bg:080a0850(c)  
        080042f0 01 c6 8f e2     adr        r12,0x81042f8
        080042f4 55 ca 8c e2     add        r12,r12,#0x55000
        080042f8 3c ff bc e5     ldr        pc=><EXTERNAL>::ctime,[r12,#0xf3c]!=>-><EXTERN   char * ctime(time_t * __timer)
                                                                                             = 0aef00fc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateInit2_()
                               Thunked-Function: <EXTERNAL>::inflateInit
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateInit2_                       XREF[2]:     unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c8fb0(c)  
        080042fc 01 c6 8f e2     adr        r12,0x8104304
        08004300 55 ca 8c e2     add        r12,r12,#0x55000
        08004304 34 ff bc e5     ldr        pc=><EXTERNAL>::inflateInit2_,[r12,#0xf34]!=>-   undefined inflateInit2_()
                                                                                             = 0aef0190
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::unlink
             int               r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::unlink                              XREF[4]:     select_delete_config_local:0809b
                                                                                          load_file:0809c4c8(c), 
                                                                                          load_file:0809c72c(c), 
                                                                                          load_file:0809c76c(c)  
        08004308 01 c6 8f e2     adr        r12,0x8104310
        0800430c 55 ca 8c e2     add        r12,r12,#0x55000
        08004310 2c ff bc e5     ldr        pc=><EXTERNAL>::unlink,[r12,#0xf2c]!=>-><EXTER   int unlink(char * __name)
                                                                                             = 0aef02dc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_prepare()
                               Thunked-Function: <EXTERNAL>::snd_pcm_pre
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_prepare                     XREF[5]:     audio_buffer_force_feed:080aa7bc
                                                                                          audio_synchronous_update:080aa88
                                                                                          audio_capture_flush:080aa8f8(c), 
                                                                                          initialize_audio_capture:080aaa3
                                                                                          initialize_audio:080aacdc(c)  
        08004314 01 c6 8f e2     adr        r12,0x810431c
        08004318 55 ca 8c e2     add        r12,r12,#0x55000
        0800431c 24 ff bc e5     ldr        pc=><EXTERNAL>::snd_pcm_prepare,[r12,#0xf24]!=   undefined snd_pcm_prepare()
                                                                                             = 0aef0104
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_Init()
                               Thunked-Function: <EXTERNAL>::SDL_Init
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_Init                            XREF[1]:     platform_initialize:080a7ee4(c)  
        08004320 01 c6 8f e2     adr        r12,0x8104328
        08004324 55 ca 8c e2     add        r12,r12,#0x55000
        08004328 1c ff bc e5     ldr        pc=><EXTERNAL>::SDL_Init,[r12,#0xf1c]!=>-><EXT   undefined SDL_Init()
                                                                                             = 0aef03f0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlopen()
                               Thunked-Function: <EXTERNAL>::dlopen
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::dlopen                              XREF[2]:     lookforfunc:08132848(c), 
                                                                                          ll_loadlib:08133114(c)  
        0800432c 01 c6 8f e2     adr        r12,0x8104334
        08004330 55 ca 8c e2     add        r12,r12,#0x55000
        08004334 14 ff bc e5     ldr        pc=><EXTERNAL>::dlopen,[r12,#0xf14]!=>-><EXTER   undefined dlopen()
                                                                                             = 0aef0474
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_buffer_size_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_buffer_size_  XREF[1]:     initialize_audio:080aac2c(c)  
        08004338 01 c6 8f e2     adr        r12,0x8104340
        0800433c 55 ca 8c e2     add        r12,r12,#0x55000
        08004340 0c ff bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_buffer_s   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef03f4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk tm * localtime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::localtime
             tm *              r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::localtime                           XREF[5]:     rtc_write:080920e4(c), 
                                                                                          rtc_write:08092244(c), 
                                                                                          GetLocal:080e16f8(c), 
                                                                                          GetDos:080e188c(c), 
                                                                                          GetText:080e1a68(c)  
        08004344 01 c6 8f e2     adr        r12,0x810434c
        08004348 55 ca 8c e2     add        r12,r12,#0x55000
        0800434c 04 ff bc e5     ldr        pc=><EXTERNAL>::localtime,[r12,#0xf04]!=>-><EX   tm * localtime(time_t * __timer)
                                                                                             = 0aef00c4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             LAB_08004350                                    XREF[1]:     080aa704(j)  
        08004350 01 c6 8f e2     adr        r12,0x8104358
        08004354 55 ca 8c e2     add        r12,r12,#0x55000
        08004358 fc fe bc e5     ldr        pc=><EXTERNAL>::SDL_JoystickEventState,[r12,#0   undefined SDL_JoystickEventState()
                                                                                             = 0aef00b4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * realloc(void * __ptr, size_t __size)
                               Thunked-Function: <EXTERNAL>::realloc
             void *            r0:4           <RETURN>
             void *            r0:4           __ptr
             size_t            r1:4           __size
                             <EXTERNAL>::realloc                             XREF[90]:    cpu_block_create:08025360(c), 
                                                                                          cpu_block_create:08025b54(c), 
                                                                                          texture_cache_convert_compressed
                                                                                          backup_data_load_savestate:08093
                                                                                          initialize_game_database:080944a
                                                                                          initialize_game_database:080946e
                                                                                          nds_file_open:08096774(c), 
                                                                                          file_info_cache_load:0809bb44(c), 
                                                                                          file_info_cache_load:0809bb60(c), 
                                                                                          load_file:0809c690(c), 
                                                                                          load_file:0809c6b8(c), 
                                                                                          load_file:0809c778(c), 
                                                                                          load_file:0809c78c(c), 
                                                                                          CalcFileSum:080d6ce0(c), 
                                                                                          IsArchive:080d88d8(c), 
                                                                                          ReadHeader15:080db070(c), 
                                                                                          Read:080e0ce0(c), 
                                                                                          Read:080e0d90(c), 
                                                                                          Read:080e0eb8(c), 
                                                                                          Reset:08102cc4(c), [more]
        0800435c 01 c6 8f e2     adr        r12,0x8104364
        08004360 55 ca 8c e2     add        r12,r12,#0x55000
        08004364 f4 fe bc e5     ldr        pc=><EXTERNAL>::realloc,[r12,#0xef4]!=>-><EXTE   void * realloc(void * __ptr, siz
                                                                                             = 0aef0240
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strcpy(char * __dest, char * __src)
                               Thunked-Function: <EXTERNAL>::strcpy
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
                             <EXTERNAL>::strcpy                              XREF[18]:    action_input:0809ae08(c), 
                                                                                          action_input:0809ae34(c), 
                                                                                          action_input:0809ae7c(c), 
                                                                                          draw_input:0809af6c(c), 
                                                                                          draw_input:0809af88(c), 
                                                                                          icon_cache_add:0809c074(c), 
                                                                                          load_file:0809c32c(c), 
                                                                                          load_file:0809c62c(c), 
                                                                                          load_file:0809c670(c), 
                                                                                          load_file:0809cdb0(c), 
                                                                                          load_file:0809cdd4(c), 
                                                                                          load_file:0809d27c(c), 
                                                                                          load_file:0809d5fc(c), 
                                                                                          load_file:0809d828(c), 
                                                                                          disasm_arm_reg_operand:080a33f8(
                                                                                          disasm_arm_reg_operand2:080a3518
                                                                                          disasm_arm_mem_reg_operand2:080a
                                                                                          get_rlist:080a3ab4(c)  
        08004368 01 c6 8f e2     adr        r12,0x8104370
        0800436c 55 ca 8c e2     add        r12,r12,#0x55000
        08004370 ec fe bc e5     ldr        pc=><EXTERNAL>::strcpy,[r12,#0xeec]!=>-><EXTER   char * strcpy(char * __dest, cha
                                                                                             = 0aef02d0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_setdetachstate(pthread_attr_t * _
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               r0:4           <RETURN>
             pthread_attr_t    r0:4           __attr
             int               r1:4           __detachstate
                             <EXTERNAL>::pthread_attr_setdetachstate         XREF[1]:     ThreadCreate:08102e58(c)  
        08004374 01 c6 8f e2     adr        r12,0x810437c
        08004378 55 ca 8c e2     add        r12,r12,#0x55000
        0800437c e4 fe bc e5     ldr        pc=><EXTERNAL>::pthread_attr_setdetachstate,[r   int pthread_attr_setdetachstate(
                                                                                             = 0aef014c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::mmap                                XREF[17]:    remap_address_region_low_memory:
                                                                                          remap_address_region_vram:0800c1
                                                                                          remap_wram:0800d590(c), 
                                                                                          remap_wram:0800d5c8(c), 
                                                                                          initialize_memory:080161c8(c), 
                                                                                          initialize_memory:08016220(c), 
                                                                                          initialize_memory:08016250(c), 
                                                                                          initialize_memory:080162b0(c), 
                                                                                          initialize_memory:0801639c(c), 
                                                                                          initialize_memory:08016444(c), 
                                                                                          initialize_memory:0801647c(c), 
                                                                                          initialize_memory:08016738(c), 
                                                                                          reset_memory:08016f90(c), 
                                                                                          nds_file_open_cached:08095f04(c), 
                                                                                          nds_file_open_cached:08095fac(c), 
                                                                                          nds_file_open:0809611c(c), 
                                                                                          nds_file_open:080961bc(c)  
        08004380 01 c6 8f e2     adr        r12,0x8104388
        08004384 55 ca 8c e2     add        r12,r12,#0x55000
        08004388 dc fe bc e5     ldr        pc=><EXTERNAL>::mmap,[r12,#0xedc]!=>-><EXTERNA   void * mmap(void * __addr, size_
                                                                                             = 0aef0318
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float tanhf(float __x)
                               Thunked-Function: <EXTERNAL>::tanhf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::tanhf                               XREF[1]:     math_tanh:0812afa0(c)  
        0800438c 01 c6 8f e2     adr        r12,0x8104394
        08004390 55 ca 8c e2     add        r12,r12,#0x55000
        08004394 d4 fe bc e5     ldr        pc=><EXTERNAL>::tanhf,[r12,#0xed4]!=>-><EXTERN   float tanhf(float __x)
                                                                                             = 0aef0264
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderClear()
                               Thunked-Function: <EXTERNAL>::SDL_RenderC
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderClear                     XREF[4]:     clear_screen:080a81d0(c), 
                                                                                          clear_screen:080a81e0(c), 
                                                                                          clear_screen:080a81f0(c), 
                                                                                          clear_screen:080a8200(c)  
        08004398 01 c6 8f e2     adr        r12,0x81043a0
        0800439c 55 ca 8c e2     add        r12,r12,#0x55000
        080043a0 cc fe bc e5     ldr        pc=><EXTERNAL>::SDL_RenderClear,[r12,#0xecc]!=   undefined SDL_RenderClear()
                                                                                             = 0aef02b4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open64(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open64
             int               r0:4           <RETURN>
             char *            r0:4           __file
             int               r1:4           __oflag
                             <EXTERNAL>::open64                              XREF[2]:     unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c8e24(c)  
        080043a4 01 c6 8f e2     adr        r12,0x81043ac
        080043a8 55 ca 8c e2     add        r12,r12,#0x55000
        080043ac c4 fe bc e5     ldr        pc=><EXTERNAL>::open64,[r12,#0xec4]!=>-><EXTER   int open64(char * __file, int __
                                                                                             = 0aef01b4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncpy(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncpy
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::wcsncpy                             XREF[10]:    ProcessFile:080d0b9c(c), 
                                                                                          RARReadHeaderEx:080d0e48(c), 
                                                                                          RARReadHeaderEx:080d0e70(c), 
                                                                                          RARReadHeader:080d1238(c), 
                                                                                          RARReadHeader:080d1264(c), 
                                                                                          wcsncpyz:080d2680(c), 
                                                                                          GetFilePath:080d41a8(c), 
                                                                                          GetPathRoot:080d4ea4(c), 
                                                                                          GetWideName:080d506c(c), 
                                                                                          ParseArg:08103880(c)  
        080043b0 01 c6 8f e2     adr        r12,0x81043b8
        080043b4 55 ca 8c e2     add        r12,r12,#0x55000
        080043b8 bc fe bc e5     ldr        pc=><EXTERNAL>::wcsncpy,[r12,#0xebc]!=>-><EXTE   wchar_t * wcsncpy(wchar_t * __de
                                                                                             = 0aef0390
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcscmp(wchar_t * __s1, wchar_t * __s2)
                               Thunked-Function: <EXTERNAL>::wcscmp
             int               r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
                             <EXTERNAL>::wcscmp                              XREF[20]:    Search:080d1fac(c), 
                                                                                          wcsicompc:080d261c(j), 
                                                                                          Rename:080d5dd8(c), 
                                                                                          ReadHeader15:080dac08(c), 
                                                                                          ReadHeader15:080dac28(c), 
                                                                                          ReadHeader50:080dbf68(c), 
                                                                                          SearchSubBlock:080dc578(c), 
                                                                                          SearchRR:080dc6dc(c), 
                                                                                          SearchRR:080dc820(c), 
                                                                                          operator==:080e42dc(c), 
                                                                                          MergeArchive:080ece4c(c), 
                                                                                          MergeArchive:080ecf88(c), 
                                                                                          Next:080ed62c(c), 
                                                                                          Next:080ed64c(c), 
                                                                                          Load:0810905c(c), 
                                                                                          mwcsicompc:0810a028(c), 
                                                                                          CmpName:0810a8f4(c), 
                                                                                          CmpName:0810a9a4(c), 
                                                                                          CmpName:0810aa3c(c), 
                                                                                          SetExtraInfo:0810da54(c)  
        080043bc 01 c6 8f e2     adr        r12,0x81043c4
        080043c0 55 ca 8c e2     add        r12,r12,#0x55000
        080043c4 b4 fe bc e5     ldr        pc=><EXTERNAL>::wcscmp,[r12,#0xeb4]!=>-><EXTER   int wcscmp(wchar_t * __s1, wchar
                                                                                             = 0aef0200
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete(void * param_1)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            r0:4           param_1
                             <EXTERNAL>::operator.delete                     XREF[17]:    RARCloseArchive:080d02cc(c), 
                                                                                          RAROpenArchiveEx:080d04d4(c), 
                                                                                          ~File:080d555c(c), 
                                                                                          ~Archive:080d7240(c), 
                                                                                          ~Archive:080d7398(c), 
                                                                                          ~CmdExtract:080e9ab0(c), 
                                                                                          InitFilters30:080f1558(c), 
                                                                                          InitFilters30:080f15e0(c), 
                                                                                          UnpWriteBuf30:080fb284(c), 
                                                                                          UnpWriteBuf30:080fb354(c), 
                                                                                          AddVMCode:080fc350(c), 
                                                                                          DestroyThreadPool:08103010(c), 
                                                                                          ~ScanTree:08108090(c), 
                                                                                          FindProc:081082e0(c), 
                                                                                          ~QuickOpen:08108ba4(c), 
                                                                                          Init:08108c34(c), 
                                                                                          Close:08108cc4(c)  
        080043c8 01 c6 8f e2     adr        r12,0x81043d0
        080043cc 55 ca 8c e2     add        r12,r12,#0x55000
        080043d0 ac fe bc e5     ldr        pc=><EXTERNAL>::operator.delete,[r12,#0xeac]!=   void operator.delete(void * para
                                                                                             = 0aef00b8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float logf(float __x)
                               Thunked-Function: <EXTERNAL>::logf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::logf                                XREF[3]:     math_log:0812b3d4(c), 
                                                                                          math_log:0812b3e0(c), 
                                                                                          math_log:0812b410(c)  
        080043d4 01 c6 8f e2     adr        r12,0x81043dc
        080043d8 55 ca 8c e2     add        r12,r12,#0x55000
        080043dc a4 fe bc e5     ldr        pc=><EXTERNAL>::logf,[r12,#0xea4]!=>-><EXTERNA   float logf(float __x)
                                                                                             = 0aef002c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_rate_near()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_rate_near     XREF[2]:     initialize_audio_capture:080aa9c
                                                                                          initialize_audio:080aac0c(c)  
        080043e0 01 c6 8f e2     adr        r12,0x81043e8
        080043e4 55 ca 8c e2     add        r12,r12,#0x55000
        080043e8 9c fe bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_rate_nea   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef02a4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcscat_chk()
                               Thunked-Function: <EXTERNAL>::__wcscat_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__wcscat_chk                        XREF[5]:     GenArcName:080d3868(c), 
                                                                                          MakeName:080d40e8(c), 
                                                                                          Next:080ed5a0(c), 
                                                                                          ExclCheckArgs:08103c48(c), 
                                                                                          ExclCheckArgs:08105ab0(c)  
        080043ec 01 c6 8f e2     adr        r12,0x81043f4
        080043f0 55 ca 8c e2     add        r12,r12,#0x55000
        080043f4 94 fe bc e5     ldr        pc=><EXTERNAL>::__wcscat_chk,[r12,#0xe94]!=>->   undefined __wcscat_chk()
                                                                                             = 0aef0144
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open
             int               r0:4           <RETURN>
             char *            r0:4           __file
             int               r1:4           __oflag
                             <EXTERNAL>::open                                XREF[3]:     gamecard_initialize_homebrew:080
                                                                                          nds_file_open_cached:08095e9c(c), 
                                                                                          nds_file_open:08096078(c)  
        080043f8 01 c6 8f e2     adr        r12,0x8104400
        080043fc 55 ca 8c e2     add        r12,r12,#0x55000
        08004400 8c fe bc e5     ldr        pc=><EXTERNAL>::open,[r12,#0xe8c]!=>-><EXTERNA   int open(char * __file, int __of
                                                                                             = 0aef040c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mprotect(void * __addr, size_t __len, int __pr
                               Thunked-Function: <EXTERNAL>::mprotect
             int               r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
             int               r2:4           __prot
                             <EXTERNAL>::mprotect                            XREF[4]:     initialize_memory:080162d0(c), 
                                                                                          reset_cpu_block:08028740(c), 
                                                                                          reset_cpu_block:08028750(c), 
                                                                                          reset_cpu_block:08028760(c)  
        08004404 01 c6 8f e2     adr        r12,0x810440c
        08004408 55 ca 8c e2     add        r12,r12,#0x55000
        0800440c 84 fe bc e5     ldr        pc=><EXTERNAL>::mprotect,[r12,#0xe84]!=>-><EXT   int mprotect(void * __addr, size
                                                                                             = 0aef02ec
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chmod(char * __file, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::chmod
             int               r0:4           <RETURN>
             char *            r0:4           __file
             __mode_t          r1:4           __mode
                             <EXTERNAL>::chmod                               XREF[2]:     PrepareToDelete:080d6b3c(c), 
                                                                                          SetFileAttr:080d6c08(c)  
        08004410 01 c6 8f e2     adr        r12,0x8104418
        08004414 55 ca 8c e2     add        r12,r12,#0x55000
        08004418 7c fe bc e5     ldr        pc=><EXTERNAL>::chmod,[r12,#0xe7c]!=>-><EXTERN   int chmod(char * __file, __mode_
                                                                                             = 0aef015c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateEnd()
                               Thunked-Function: <EXTERNAL>::inflateEnd
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateEnd                          XREF[3]:     unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c913c(c)  
        0800441c 01 c6 8f e2     adr        r12,0x8104424
        08004420 55 ca 8c e2     add        r12,r12,#0x55000
        08004424 74 fe bc e5     ldr        pc=><EXTERNAL>::inflateEnd,[r12,#0xe74]!=>-><E   undefined inflateEnd()
                                                                                             = 0aef02a8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_destroy(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_destroy               XREF[6]:     DestroyThreadPool:08102fd0(c), 
                                                                                          DestroyThreadPool:08102fe0(c), 
                                                                                          DestroyThreadPool:08102ff0(c), 
                                                                                          ~ThreadPool:0810332c(c), 
                                                                                          ~ThreadPool:0810333c(c), 
                                                                                          ~ThreadPool:0810334c(c)  
        08004428 01 c6 8f e2     adr        r12,0x8104430
        0800442c 55 ca 8c e2     add        r12,r12,#0x55000
        08004430 6c fe bc e5     ldr        pc=><EXTERNAL>::pthread_mutex_destroy,[r12,#0x   int pthread_mutex_destroy(pthrea
                                                                                             = 0aef0158
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int getpagesize(void)
                               Thunked-Function: <EXTERNAL>::getpagesize
             int               r0:4           <RETURN>
                             <EXTERNAL>::getpagesize                         XREF[1]:     initialize_memory:08016144(c)  
        08004434 01 c6 8f e2     adr        r12,0x810443c
        08004438 55 ca 8c e2     add        r12,r12,#0x55000
        0800443c 64 fe bc e5     ldr        pc=><EXTERNAL>::getpagesize,[r12,#0xe64]!=>-><   int getpagesize(void)
                                                                                             = 0aef0288
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::fread                               XREF[69]:    load_system_file:0800670c(c), 
                                                                                          gamecard_load_gba:0808fab8(c), 
                                                                                          gamecard_load_gba:0808fb90(c), 
                                                                                          initialize_backup:08092fdc(c), 
                                                                                          load_state:08095264(c), 
                                                                                          load_state:080953dc(c), 
                                                                                          load_state:08095408(c), 
                                                                                          load_state:0809551c(c), 
                                                                                          nds_file_open:080964f4(c), 
                                                                                          nds_file_open:0809660c(c), 
                                                                                          nds_file_open:08096628(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          load_directory_config_file:08097
                                                                                          load_directory_config_file:08097
                                                                                          load_directory_config_file:08097
                                                                                          load_directory_config_file:08097
                                                                                          load_directory_config_file:08097
                                                                                          load_config_file:08098eec(c), 
                                                                                          DirectRead:080d5e88(c), 
                                                                                          Read:080d5f5c(c), [more]
        08004440 01 c6 8f e2     adr        r12,0x8104448
        08004444 55 ca 8c e2     add        r12,r12,#0x55000
        08004448 5c fe bc e5     ldr        pc=><EXTERNAL>::fread,[r12,#0xe5c]!=>-><EXTERN   size_t fread(void * __ptr, size_
                                                                                             = 0aef01f0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float log10f(float __x)
                               Thunked-Function: <EXTERNAL>::log10f
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::log10f                              XREF[2]:     math_log10:0812ae68(c), 
                                                                                          math_log:0812b404(c)  
        0800444c 01 c6 8f e2     adr        r12,0x8104454
        08004450 55 ca 8c e2     add        r12,r12,#0x55000
        08004454 54 fe bc e5     ldr        pc=><EXTERNAL>::log10f,[r12,#0xe54]!=>-><EXTER   float log10f(float __x)
                                                                                             = 0aef0484
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ungetc(int __c, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ungetc
             int               r0:4           <RETURN>
             int               r0:4           __c
             FILE *            r1:4           __stream
                             <EXTERNAL>::ungetc                              XREF[2]:     g_read:0812a1fc(c), 
                                                                                          g_read:0812a4f8(c)  
        08004458 01 c6 8f e2     adr        r12,0x8104460
        0800445c 55 ca 8c e2     add        r12,r12,#0x55000
        08004460 4c fe bc e5     ldr        pc=><EXTERNAL>::ungetc,[r12,#0xe4c]!=>-><EXTER   int ungetc(int __c, FILE * __str
                                                                                             = 0aef0274
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fileno(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fileno
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fileno                              XREF[3]:     backup_save:0809294c(c), 
                                                                                          GetOpenFileTime:080d6398(c), 
                                                                                          IsDevice:080d64b8(c)  
        08004464 01 c6 8f e2     adr        r12,0x810446c
        08004468 55 ca 8c e2     add        r12,r12,#0x55000
        0800446c 44 fe bc e5     ldr        pc=><EXTERNAL>::fileno,[r12,#0xe44]!=>-><EXTER   int fileno(FILE * __stream)
                                                                                             = 0aef0250
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __stack_chk_fail()
                               Thunked-Function: <EXTERNAL>::__stack_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__stack_chk_fail                    XREF[434]:   SzReadNumber32:08004de0(c), 
                                                                                          SzSkeepData:08004e58(c), 
                                                                                          SzWaitAttribute:08004ee0(c), 
                                                                                          SzReadStreamsInfo:080059a0(c), 
                                                                                          ExtrCreateDir:080061e0(c), 
                                                                                          SetCloseFileTimeByName:080d6368(
                                                                                          MakeDir:080d66c8(c), 
                                                                                          CreatePath:080d6840(c), 
                                                                                          FileExist:080d6980(c), 
                                                                                          WildFileExist:080d6a94(c), 
                                                                                          GetFileAttr:080d6bcc(c), 
                                                                                          SetFileAttr:080d6c38(c), 
                                                                                          CalcFileSum:080d7100(c), 
                                                                                          blake2sp_update:0810d004(c), 
                                                                                          blake2sp_final:0810d0f0(c), 
                                                                                          ExtractUnixLink30:0810d280(c), 
                                                                                          ExtractHardlink:0810d384(c), 
                                                                                          GetStreamNameNTFS:0810d470(c), 
                                                                                          ExtractUnixOwner20:0810d5c4(c), 
                                                                                          ExtractUnixOwner30:0810d718(c), 
                                                                                          [more]
        08004470 01 c6 8f e2     adr        r12,0x8104478
        08004474 55 ca 8c e2     add        r12,r12,#0x55000
        08004478 3c fe bc e5     ldr        pc=><EXTERNAL>::__stack_chk_fail,[r12,#0xe3c]!   undefined __stack_chk_fail()
                                                                                             = 0aef0350
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemset(wchar_t * __s, wchar_t __c, size
                               Thunked-Function: <EXTERNAL>::wmemset
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __s
             wchar_t           r1:4           __c
             size_t            r2:4           __n
                             <EXTERNAL>::wmemset                             XREF[1]:     GenArcName:080d3700(c)  
        0800447c 01 c6 8f e2     adr        r12,0x8104484
        08004480 55 ca 8c e2     add        r12,r12,#0x55000
        08004484 34 fe bc e5     ldr        pc=><EXTERNAL>::wmemset,[r12,#0xe34]!=>-><EXTE   wchar_t * wmemset(wchar_t * __s,
                                                                                             = 0aef03fc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __cxa_end_cleanup()
                               Thunked-Function: <EXTERNAL>::__cxa_end_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_end_cleanup
        08004488 01 c6 8f e2     adr        r12,0x8104490
        0800448c 55 ca 8c e2     add        r12,r12,#0x55000
        08004490 2c fe bc e5     ldr        pc=><EXTERNAL>::__cxa_end_cleanup,[r12,#0xe2c]   undefined __cxa_end_cleanup()
                                                                                             = 0aef0370
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderCopy()
                               Thunked-Function: <EXTERNAL>::SDL_RenderC
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderCopy                      XREF[5]:     render_cursor:080a7fec(c), 
                                                                                          update_screen_menu:080a804c(c), 
                                                                                          update_screen:080a8494(c), 
                                                                                          update_screen:080a8570(c), 
                                                                                          update_screen:080a85c4(c)  
        08004494 01 c6 8f e2     adr        r12,0x810449c
        08004498 55 ca 8c e2     add        r12,r12,#0x55000
        0800449c 24 fe bc e5     ldr        pc=><EXTERNAL>::SDL_RenderCopy,[r12,#0xe24]!=>   undefined SDL_RenderCopy()
                                                                                             = 0aef02d4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int statvfs64(char * __file, statvfs64 * __buf)
                               Thunked-Function: <EXTERNAL>::statvfs64
             int               r0:4           <RETURN>
             char *            r0:4           __file
             statvfs64 *       r1:4           __buf
                             <EXTERNAL>::statvfs64                           XREF[1]:     GetFreeDisk:080d68c4(c)  
        080044a0 01 c6 8f e2     adr        r12,0x81044a8
        080044a4 55 ca 8c e2     add        r12,r12,#0x55000
        080044a8 1c fe bc e5     ldr        pc=><EXTERNAL>::statvfs64,[r12,#0xe1c]!=>-><EX   int statvfs64(char * __file, sta
                                                                                             = 0aef0244
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetWindowFullscreen()
                               Thunked-Function: <EXTERNAL>::SDL_SetWind
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_SetWindowFullscreen             XREF[2]:     set_screen_menu_off:080a8308(c), 
                                                                                          set_screen_menu_on:080a8a48(c)  
        080044ac 01 c6 8f e2     adr        r12,0x81044b4
        080044b0 55 ca 8c e2     add        r12,r12,#0x55000
        080044b4 14 fe bc e5     ldr        pc=><EXTERNAL>::SDL_SetWindowFullscreen,[r12,#   undefined SDL_SetWindowFullscree
                                                                                             = 0aef0140
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int access(char * __name, int __type)
                               Thunked-Function: <EXTERNAL>::access
             int               r0:4           <RETURN>
             char *            r0:4           __name
             int               r1:4           __type
                             <EXTERNAL>::access                              XREF[2]:     FileExist:080d6950(c), 
                                                                                          WildFileExist:080d6a84(c)  
        080044b8 01 c6 8f e2     adr        r12,0x81044c0
        080044bc 55 ca 8c e2     add        r12,r12,#0x55000
        080044c0 0c fe bc e5     ldr        pc=><EXTERNAL>::access,[r12,#0xe0c]!=>-><EXTER   int access(char * __name, int __
                                                                                             = 0aef0160
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int isatty(int __fd)
                               Thunked-Function: <EXTERNAL>::isatty
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::isatty                              XREF[1]:     IsDevice:080d64bc(c)  
        080044c4 01 c6 8f e2     adr        r12,0x81044cc
        080044c8 55 ca 8c e2     add        r12,r12,#0x55000
        080044cc 04 fe bc e5     ldr        pc=><EXTERNAL>::isatty,[r12,#0xe04]!=>-><EXTER   int isatty(int __fd)
                                                                                             = 0aef02e4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_ldivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_ldi
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_ldivmod                     XREF[73]:    memory_divide:08010b54(c), 
                                                                                          memory_divide:08010b70(c), 
                                                                                          ceil_div:0804355c(c), 
                                                                                          ceil_div:08043584(c), 
                                                                                          ceil_div:0804359c(c), 
                                                                                          video_2d_bg_layer_affine_setup_e
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          geometry_clipped_vertex_interpol
                                                                                          itoa:080d2c04(c), 
                                                                                          itoa:080d2c24(c), 
                                                                                          ReadHeader15:080dafe4(c), [more]
        080044d0 01 c6 8f e2     adr        r12,0x81044d8
        080044d4 55 ca 8c e2     add        r12,r12,#0x55000
        080044d8 fc fd bc e5     ldr        pc=><EXTERNAL>::__aeabi_ldivmod,[r12,#0xdfc]!=   undefined __aeabi_ldivmod()
                                                                                             = 0aef022c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetTextureBlendMode()
                               Thunked-Function: <EXTERNAL>::SDL_SetText
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_SetTextureBlendMode             XREF[1]:     initialize_screen:080a870c(c)  
        080044dc 01 c6 8f e2     adr        r12,0x81044e4
        080044e0 55 ca 8c e2     add        r12,r12,#0x55000
        080044e4 f4 fd bc e5     ldr        pc=><EXTERNAL>::SDL_SetTextureBlendMode,[r12,#   undefined SDL_SetTextureBlendMod
                                                                                             = 0aef02ac
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mkdir(char * __path, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::mkdir
             int               r0:4           <RETURN>
             char *            r0:4           __path
             __mode_t          r1:4           __mode
                             <EXTERNAL>::mkdir                               XREF[4]:     initialize_system_directory:0800
                                                                                          MakeDir:080d667c(c), 
                                                                                          CreatePath:080d6794(c), 
                                                                                          CreatePath:080d6828(c)  
        080044e8 01 c6 8f e2     adr        r12,0x81044f0
        080044ec 55 ca 8c e2     add        r12,r12,#0x55000
        080044f0 ec fd bc e5     ldr        pc=><EXTERNAL>::mkdir,[r12,#0xdec]!=>-><EXTERN   int mkdir(char * __path, __mode_
                                                                                             = 0aef0184
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __strcpy_chk()
                               Thunked-Function: <EXTERNAL>::__strcpy_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__strcpy_chk                        XREF[5]:     initialize_system:080072bc(c), 
                                                                                          xml_parse_line:08093830(c), 
                                                                                          initialize_game_database:08093eb
                                                                                          initialize_game_database:080940c
                                                                                          load_cheat_directory:080a1cb8(c)  
        080044f4 01 c6 8f e2     adr        r12,0x81044fc
        080044f8 55 ca 8c e2     add        r12,r12,#0x55000
        080044fc e4 fd bc e5     ldr        pc=><EXTERNAL>::__strcpy_chk,[r12,#0xde4]!=>->   undefined __strcpy_chk()
                                                                                             = 0aef032c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetKeyName()
                               Thunked-Function: <EXTERNAL>::SDL_GetKeyN
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_GetKeyName                      XREF[1]:     platform_print_code:080a95cc(c)  
        08004500 01 c6 8f e2     adr        r12,0x8104508
        08004504 55 ca 8c e2     add        r12,r12,#0x55000
        08004508 dc fd bc e5     ldr        pc=><EXTERNAL>::SDL_GetKeyName,[r12,#0xddc]!=>   undefined SDL_GetKeyName()
                                                                                             = 0aef0118
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wctomb(char * __s, wchar_t __wchar)
                               Thunked-Function: <EXTERNAL>::wctomb
             int               r0:4           <RETURN>
             char *            r0:4           __s
             wchar_t           r1:4           __wchar
                             <EXTERNAL>::wctomb                              XREF[2]:     WideToChar:080dcd38(c), 
                                                                                          WideToChar:080dcd44(c)  
        0800450c 01 c6 8f e2     adr        r12,0x8104514
        08004510 55 ca 8c e2     add        r12,r12,#0x55000
        08004514 d4 fd bc e5     ldr        pc=><EXTERNAL>::wctomb,[r12,#0xdd4]!=>-><EXTER   int wctomb(char * __s, wchar_t _
                                                                                             = 0aef0378
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strstr(char * __haystack, char * __needle)
                               Thunked-Function: <EXTERNAL>::strstr
             char *            r0:4           <RETURN>
             char *            r0:4           __haystack
             char *            r1:4           __needle
                             <EXTERNAL>::strstr                              XREF[4]:     platform_set_default_controls:08
                                                                                          platform_set_default_controls:08
                                                                                          platform_set_default_controls:08
                                                                                          luaL_gsub:08127224(c)  
        08004518 01 c6 8f e2     adr        r12,0x8104520
        0800451c 55 ca 8c e2     add        r12,r12,#0x55000
        08004520 cc fd bc e5     ldr        pc=><EXTERNAL>::strstr,[r12,#0xdcc]!=>-><EXTER   char * strstr(char * __haystack,
                                                                                             = 0aef01ac
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sqrtf(float __x)
                               Thunked-Function: <EXTERNAL>::sqrtf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sqrtf                               XREF[1]:     math_sqrt:0812b08c(c)  
        08004524 01 c6 8f e2     adr        r12,0x810452c
        08004528 55 ca 8c e2     add        r12,r12,#0x55000
        0800452c c4 fd bc e5     ldr        pc=><EXTERNAL>::sqrtf,[r12,#0xdc4]!=>-><EXTERN   float sqrtf(float __x)
                                                                                             = 0aef033c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_malloc()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_malloc            XREF[2]:     initialize_audio_capture:080aa97
                                                                                          initialize_audio:080aabcc(c)  
        08004530 01 c6 8f e2     adr        r12,0x8104538
        08004534 55 ca 8c e2     add        r12,r12,#0x55000
        08004538 bc fd bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_malloc,[r12,   undefined snd_pcm_hw_params_mall
                                                                                             = 0aef0170
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncasecmp(char * __s1, char * __s2, size_t _
                               Thunked-Function: <EXTERNAL>::strncasecmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::strncasecmp                         XREF[5]:     initialize_game_database:08093cd
                                                                                          load_file:0809d170(c), 
                                                                                          load_file:0809d188(c), 
                                                                                          load_file:0809d1e4(c), 
                                                                                          cheat_menu:0809e0cc(c)  
        0800453c 01 c6 8f e2     adr        r12,0x8104544
        08004540 55 ca 8c e2     add        r12,r12,#0x55000
        08004544 b4 fd bc e5     ldr        pc=><EXTERNAL>::strncasecmp,[r12,#0xdb4]!=>-><   int strncasecmp(char * __s1, cha
                                                                                             = 0aef01d0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_close()
                               Thunked-Function: <EXTERNAL>::snd_pcm_clo
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_close                       XREF[2]:     close_audio_capture:080aab4c(c), 
                                                                                          audio_exit:080aadf4(c)  
        08004548 01 c6 8f e2     adr        r12,0x8104550
        0800454c 55 ca 8c e2     add        r12,r12,#0x55000
        08004550 ac fd bc e5     ldr        pc=><EXTERNAL>::snd_pcm_close,[r12,#0xdac]!=>-   undefined snd_pcm_close()
                                                                                             = 0aef00c8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pclose(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::pclose
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::pclose                              XREF[1]:     io_pclose:0812933c(c)  
        08004554 01 c6 8f e2     adr        r12,0x810455c
        08004558 55 ca 8c e2     add        r12,r12,#0x55000
        0800455c a4 fd bc e5     ldr        pc=><EXTERNAL>::pclose,[r12,#0xda4]!=>-><EXTER   int pclose(FILE * __stream)
                                                                                             = 0aef046c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete[](void * param_1)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            r0:4           param_1
                             <EXTERNAL>::operator.delete[]                   XREF[9]:     ~Unpack:080f603c(c), 
                                                                                          ~Unpack:080f6098(c), 
                                                                                          ~QuickOpen:08108b9c(c), 
                                                                                          ~QuickOpen:08108bbc(c), 
                                                                                          Init:08108c2c(c), 
                                                                                          Close:08108cbc(c), 
                                                                                          ~RarVM:0810aae0(c), 
                                                                                          ~BitInput:0810bfe8(c), 
                                                                                          SetExternalBuffer:0810c070(c)  
        08004560 01 c6 8f e2     adr        r12,0x8104568
        08004564 55 ca 8c e2     add        r12,r12,#0x55000
        08004568 9c fd bc e5     ldr        pc=><EXTERNAL>::operator.delete[],[r12,#0xd9c]   void operator.delete[](void * pa
                                                                                             = 0aef0290
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined getopt_long()
                               Thunked-Function: <EXTERNAL>::getopt_long
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::getopt_long                         XREF[1]:     process_arguments:08006c84(c)  
        0800456c 01 c6 8f e2     adr        r12,0x8104574
        08004570 55 ca 8c e2     add        r12,r12,#0x55000
        08004574 94 fd bc e5     ldr        pc=><EXTERNAL>::getopt_long,[r12,#0xd94]!=>-><   undefined getopt_long()
                                                                                             = 0aef00f4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off_t lseek(int __fd, __off_t __offset, int __wh
                               Thunked-Function: <EXTERNAL>::lseek
             __off_t           r0:4           <RETURN>
             int               r0:4           __fd
             __off_t           r1:4           __offset
             int               r2:4           __whence
                             <EXTERNAL>::lseek                               XREF[9]:     gamecard_command:08090d68(c), 
                                                                                          nds_file_open_cached:08095eb8(c), 
                                                                                          nds_file_open_cached:08095ee8(c), 
                                                                                          nds_file_open_cached:08095f38(c), 
                                                                                          nds_file_open_cached:08095f90(c), 
                                                                                          nds_file_open:080960dc(c), 
                                                                                          nds_file_open:08096100(c), 
                                                                                          nds_file_open:08096150(c), 
                                                                                          nds_file_open:080961a0(c)  
        08004578 01 c6 8f e2     adr        r12,0x8104580
        0800457c 55 ca 8c e2     add        r12,r12,#0x55000
        08004580 8c fd bc e5     ldr        pc=><EXTERNAL>::lseek,[r12,#0xd8c]!=>-><EXTERN   __off_t lseek(int __fd, __off_t 
                                                                                             = 0aef0400
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int symlink(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::symlink
             int               r0:4           <RETURN>
             char *            r0:4           __from
             char *            r1:4           __to
                             <EXTERNAL>::symlink                             XREF[2]:     ExtractUnixLink30:0810d248(c), 
                                                                                          ExtractUnixLink50:0810d930(c)  
        08004584 01 c6 8f e2     adr        r12,0x810458c
        08004588 55 ca 8c e2     add        r12,r12,#0x55000
        0800458c 84 fd bc e5     ldr        pc=><EXTERNAL>::symlink,[r12,#0xd84]!=>-><EXTE   int symlink(char * __from, char 
                                                                                             = 0aef0294
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_set_channels()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_set_channels      XREF[2]:     initialize_audio_capture:080aa9f
                                                                                          initialize_audio:080aac1c(c)  
        08004590 01 c6 8f e2     adr        r12,0x8104598
        08004594 55 ca 8c e2     add        r12,r12,#0x55000
        08004598 7c fd bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_set_channels   undefined snd_pcm_hw_params_set_
                                                                                             = 0aef047c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int raise(int __sig)
                               Thunked-Function: <EXTERNAL>::raise
             int               r0:4           <RETURN>
             int               r0:4           __sig
                             <EXTERNAL>::raise                               XREF[1]:     signal_segv_handler:080c6940(c)  
        0800459c 01 c6 8f e2     adr        r12,0x81045a4
        080045a0 55 ca 8c e2     add        r12,r12,#0x55000
        080045a4 74 fd bc e5     ldr        pc=><EXTERNAL>::raise,[r12,#0xd74]!=>-><EXTERN   int raise(int __sig)
                                                                                             = 0aef03d4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_idivmod()
                               Thunked-Function: <EXTERNAL>::__aeabi_idi
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_idivmod                     XREF[9]:     memory_divide:08010af8(c), 
                                                                                          render_scanline_apply_mosaic_vis
                                                                                          render_scanline_bg:0804610c(c), 
                                                                                          mainposition:0811e7c0(c), 
                                                                                          luaV_div:08121d14(c), 
                                                                                          luaV_mod:08121d68(c), 
                                                                                          luaV_execute:08124388(c), 
                                                                                          luaV_execute:081245bc(c), 
                                                                                          math_fmod:0812b8c4(c)  
        080045a8 01 c6 8f e2     adr        r12,0x81045b0
        080045ac 55 ca 8c e2     add        r12,r12,#0x55000
        080045b0 6c fd bc e5     ldr        pc=><EXTERNAL>::__aeabi_idivmod,[r12,#0xd6c]!=   undefined __aeabi_idivmod()
                                                                                             = 0aef0410
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ushort * * __ctype_b_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_b_l
             ushort * *        r0:4           <RETURN>
                             <EXTERNAL>::__ctype_b_loc                       XREF[31]:    xml_parse_line:08093874(c), 
                                                                                          load_custom_cheats:080a28cc(c), 
                                                                                          skip_whitespace:080a4e8c(c), 
                                                                                          skip_to_whitespace:080a4ec8(c), 
                                                                                          chomp_whitespace:080a4f34(c), 
                                                                                          luaB_tonumber:0812778c(c), 
                                                                                          g_read:0812a238(c), 
                                                                                          match_class:0812bfb8(c), 
                                                                                          match_class:0812bff0(c), 
                                                                                          match_class:0812c008(c), 
                                                                                          match_class:0812c020(c), 
                                                                                          match_class:0812c038(c), 
                                                                                          match_class:0812c050(c), 
                                                                                          match_class:0812c068(c), 
                                                                                          match_class:0812c080(c), 
                                                                                          match_class:0812c098(c), 
                                                                                          match_class:0812c0b0(c), 
                                                                                          match_class:0812c0c8(c), 
                                                                                          str_format:0812c8bc(c), 
                                                                                          matchbracketclass:0812f0e8(c), 
                                                                                          [more]
        080045b4 01 c6 8f e2     adr        r12,0x81045bc
        080045b8 55 ca 8c e2     add        r12,r12,#0x55000
        080045bc 64 fd bc e5     ldr        pc=><EXTERNAL>::__ctype_b_loc,[r12,#0xd64]!=>-   ushort * * __ctype_b_loc(void)
                                                                                             = 0aef0330
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_wait(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               r0:4           <RETURN>
             pthread_cond_t    r0:4           __cond
             pthread_mutex_    r1:4           __mutex
                             <EXTERNAL>::pthread_cond_wait                   XREF[14]:    video_render_thread:0802885c(c), 
                                                                                          video_render_scanlines:08036038(
                                                                                          update_frame_3d_1x:08074d68(c), 
                                                                                          video_3d_render_thread:08078334(
                                                                                          update_frame_3d_4x:0807868c(c), 
                                                                                          video_3d_run_thread:08078990(c), 
                                                                                          video_3d_run_thread:08078a3c(c), 
                                                                                          video_3d_finish_rendering:08078b
                                                                                          DestroyThreadPool:08103080(c), 
                                                                                          ~ThreadPool:081033d8(c), 
                                                                                          PoolThreadLoop:08103450(c), 
                                                                                          GetQueuedTask:0810359c(c), 
                                                                                          AddTask:08103708(c), 
                                                                                          WaitDone:081037e0(c)  
        080045c0 01 c6 8f e2     adr        r12,0x81045c8
        080045c4 55 ca 8c e2     add        r12,r12,#0x55000
        080045c8 5c fd bc e5     ldr        pc=><EXTERNAL>::pthread_cond_wait,[r12,#0xd5c]   int pthread_cond_wait(pthread_co
                                                                                             = 0aef0248
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulonglong strtoull(char * __nptr, char * * __endpt
                               Thunked-Function: <EXTERNAL>::strtoull
             ulonglong         r1:4,r0:4      <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
             int               r2:4           __base
                             <EXTERNAL>::strtoull                            XREF[3]:     set_debug_breakpoint:08006bf4(c), 
                                                                                          process_arguments:08006ebc(c), 
                                                                                          process_arguments:08006f30(c)  
        080045cc 01 c6 8f e2     adr        r12,0x81045d4
        080045d0 55 ca 8c e2     add        r12,r12,#0x55000
        080045d4 54 fd bc e5     ldr        pc=><EXTERNAL>::strtoull,[r12,#0xd54]!=>-><EXT   ulonglong strtoull(char * __nptr
                                                                                             = 0aef0218
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __clear_cache()
                               Thunked-Function: <EXTERNAL>::__clear_cac
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__clear_cache                       XREF[18]:    cpu_block_lookup_base:08026acc(c
                                                                                          cpu_block_lookup_base:08026ae4(c
                                                                                          cpu_block_lookup_base:08026afc(c
                                                                                          cpu_block_lookup_base:08026b14(c
                                                                                          cpu_block_lookup_base:08026b2c(c
                                                                                          cpu_block_lookup_base:08026b4c(c
                                                                                          cpu_block_flush:08027840(c), 
                                                                                          cpu_block_flush:08027858(c), 
                                                                                          cpu_block_flush:0802786c(c), 
                                                                                          cpu_block_flush:08027884(c), 
                                                                                          cpu_block_flush:0802789c(c), 
                                                                                          cpu_block_flush:080278b8(c), 
                                                                                          cpu_block_flush:080279e4(c), 
                                                                                          cpu_block_flush:080279fc(c), 
                                                                                          cpu_block_flush:08027a14(c), 
                                                                                          cpu_block_flush:08027a2c(c), 
                                                                                          cpu_block_flush:08027a44(c), 
                                                                                          cpu_block_flush:08027a60(c)  
        080045d8 01 c6 8f e2     adr        r12,0x81045e0
        080045dc 55 ca 8c e2     add        r12,r12,#0x55000
        080045e0 4c fd bc e5     ldr        pc=><EXTERNAL>::__clear_cache,[r12,#0xd4c]!=>-   undefined __clear_cache()
                                                                                             = 0aef0384
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int sigaction(int __sig, sigaction * __act, sigact
                               Thunked-Function: <EXTERNAL>::sigaction
             int               r0:4           <RETURN>
             int               r0:4           __sig
             sigaction *       r1:4           __act
             sigaction *       r2:4           __oact
                             <EXTERNAL>::sigaction                           XREF[1]:     initialize_signal_handlers:080c6
        080045e4 01 c6 8f e2     adr        r12,0x81045ec
        080045e8 55 ca 8c e2     add        r12,r12,#0x55000
        080045ec 44 fd bc e5     ldr        pc=><EXTERNAL>::sigaction,[r12,#0xd44]!=>-><EX   int sigaction(int __sig, sigacti
                                                                                             = 0aef027c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_init(pthread_attr_t * __attr)
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               r0:4           <RETURN>
             pthread_attr_t    r0:4           __attr
                             <EXTERNAL>::pthread_attr_init                   XREF[1]:     ThreadCreate:08102e4c(c)  
        080045f0 01 c6 8f e2     adr        r12,0x81045f8
        080045f4 55 ca 8c e2     add        r12,r12,#0x55000
        080045f8 3c fd bc e5     ldr        pc=><EXTERNAL>::pthread_attr_init,[r12,#0xd3c]   int pthread_attr_init(pthread_at
                                                                                             = 0aef0090
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long sysconf(int __name)
                               Thunked-Function: <EXTERNAL>::sysconf
             long              r0:4           <RETURN>
             int               r0:4           __name
                             <EXTERNAL>::sysconf                             XREF[2]:     GetNumberOfCPU:081030c4(c), 
                                                                                          GetNumberOfThreads:081030e8(c)  
        080045fc 01 c6 8f e2     adr        r12,0x8104604
        08004600 55 ca 8c e2     add        r12,r12,#0x55000
        08004604 34 fd bc e5     ldr        pc=><EXTERNAL>::sysconf,[r12,#0xd34]!=>-><EXTE   long sysconf(int __name)
                                                                                             = 0aef0414
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float strtof(char * __nptr, char * * __endptr)
                               Thunked-Function: <EXTERNAL>::strtof
             float             s0:4           <RETURN>
             char *            r0:4           __nptr
             char * *          r1:4           __endptr
                             <EXTERNAL>::strtof                              XREF[1]:     luaO_str2num:08118e98(c)  
        08004608 01 c6 8f e2     adr        r12,0x8104610
        0800460c 55 ca 8c e2     add        r12,r12,#0x55000
        08004610 2c fd bc e5     ldr        pc=><EXTERNAL>::strtof,[r12,#0xd2c]!=>-><EXTER   float strtof(char * __nptr, char
                                                                                             = 0aef03c8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * calloc(size_t __nmemb, size_t __size)
                               Thunked-Function: <EXTERNAL>::calloc
             void *            r0:4           <RETURN>
             size_t            r0:4           __nmemb
             size_t            r1:4           __size
                             <EXTERNAL>::calloc                              XREF[2]:     Init:080f5d38(c), 
                                                                                          Init:080f62a0(c)  
        08004614 01 c6 8f e2     adr        r12,0x810461c
        08004618 55 ca 8c e2     add        r12,r12,#0x55000
        0800461c 24 fd bc e5     ldr        pc=><EXTERNAL>::calloc,[r12,#0xd24]!=>-><EXTER   void * calloc(size_t __nmemb, si
                                                                                             = 0aef02f4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncat(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncat
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::strncat                             XREF[1]:     strncatz:080d26d8(c)  
        08004620 01 c6 8f e2     adr        r12,0x8104628
        08004624 55 ca 8c e2     add        r12,r12,#0x55000
        08004628 1c fd bc e5     ldr        pc=><EXTERNAL>::strncat,[r12,#0xd1c]!=>-><EXTE   char * strncat(char * __dest, ch
                                                                                             = 0aef0280
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long ftell(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftell
             long              r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ftell                               XREF[19]:    load_system_file:080066c0(c), 
                                                                                          load_system_file:080066dc(c), 
                                                                                          gamecard_load_gba:0808fa5c(c), 
                                                                                          gamecard_load_gba:0808fb5c(c), 
                                                                                          initialize_backup:08092ffc(c), 
                                                                                          initialize_backup:0809301c(c), 
                                                                                          load_state:080954d0(c), 
                                                                                          load_state:080954ec(c), 
                                                                                          nds_file_open:08096488(c), 
                                                                                          nds_file_open:080965d0(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_get_rom_type:08096c88(c
                                                                                          load_cheat_directory:080a1e88(c), 
                                                                                          update_cheat_listing:080a32e0(c), 
                                                                                          input_log_playback:080a6d84(c), 
                                                                                          FileInStream_Seek:080cba78(c), 
                                                                                          File_Seek:080cbd80(c), 
                                                                                          File_GetLength:080cbdd0(c), 
                                                                                          File_GetLength:080cbdf0(c)  
        0800462c 01 c6 8f e2     adr        r12,0x8104634
        08004630 55 ca 8c e2     add        r12,r12,#0x55000
        08004634 14 fd bc e5     ldr        pc=><EXTERNAL>::ftell,[r12,#0xd14]!=>-><EXTERN   long ftell(FILE * __stream)
                                                                                             = 0aef00cc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ferror(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ferror
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::ferror                              XREF[13]:    FileOutStream_Write:080cba34(c), 
                                                                                          FileSeqInStream_Read:080cbaf0(c), 
                                                                                          FileInStream_Read:080cbb5c(c), 
                                                                                          File_Read:080cbcc0(c), 
                                                                                          File_Write:080cbd40(c), 
                                                                                          Write:080d547c(c), 
                                                                                          DirectRead:080d5e94(c), 
                                                                                          Read:080d5f68(c), 
                                                                                          luaL_loadfilex:081265b8(c), 
                                                                                          luaL_loadfilex:08126758(c), 
                                                                                          g_read:0812a078(c), 
                                                                                          g_read:0812a2e0(c), 
                                                                                          g_read:0812a59c(c)  
        08004638 01 c6 8f e2     adr        r12,0x8104640
        0800463c 55 ca 8c e2     add        r12,r12,#0x55000
        08004640 0c fd bc e5     ldr        pc=><EXTERNAL>::ferror,[r12,#0xd0c]!=>-><EXTER   int ferror(FILE * __stream)
                                                                                             = 0aef0254
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * freopen64(char * __filename, char * __modes
                               Thunked-Function: <EXTERNAL>::freopen64
             FILE *            r0:4           <RETURN>
             char *            r0:4           __filename
             char *            r1:4           __modes
             FILE *            r2:4           __stream
                             <EXTERNAL>::freopen64                           XREF[1]:     luaL_loadfilex:081266bc(c)  
        08004644 01 c6 8f e2     adr        r12,0x810464c
        08004648 55 ca 8c e2     add        r12,r12,#0x55000
        0800464c 04 fd bc e5     ldr        pc=><EXTERNAL>::freopen64,[r12,#0xd04]!=>-><EX   FILE * freopen64(char * __filena
                                                                                             = 0aef0358
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetRenderDrawColor()
                               Thunked-Function: <EXTERNAL>::SDL_SetRend
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_SetRenderDrawColor              XREF[1]:     clear_screen:080a81c8(c)  
        08004650 01 c6 8f e2     adr        r12,0x8104658
        08004654 55 ca 8c e2     add        r12,r12,#0x55000
        08004658 fc fc bc e5     ldr        pc=><EXTERNAL>::SDL_SetRenderDrawColor,[r12,#0   undefined SDL_SetRenderDrawColor()
                                                                                             = 0aef03a4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_uidiv()
                               Thunked-Function: <EXTERNAL>::__aeabi_uid
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_uidiv                       XREF[21]:    system_frame_sync:08006b30(c), 
                                                                                          system_frame_sync:08006b94(c), 
                                                                                          remap_address_region_low_memory:
                                                                                          remap_address_region_vram:0800c2
                                                                                          remap_wram:0800d608(c), 
                                                                                          reset_memory:0801704c(c), 
                                                                                          render_polygon_1x:08071df4(c), 
                                                                                          render_polygon_4x:0807560c(c), 
                                                                                          initialize_video_3d:08078c2c(c), 
                                                                                          initialize_video_3d:08078c40(c), 
                                                                                          menu:080a0ecc(c), 
                                                                                          DecodeChar:080f41d4(c), 
                                                                                          DecodeChar:080f41ec(c), 
                                                                                          DecodeChar:080f45c0(c), 
                                                                                          Init:080f5d08(c), 
                                                                                          Unpack5MT:08100b94(c), 
                                                                                          CreateSuccessors:08101c78(c), 
                                                                                          decodeSymbol2:081022bc(c), 
                                                                                          decodeSymbol2:081022d4(c), 
                                                                                          luaM_growaux_:081186e8(c), [more]
        0800465c 01 c6 8f e2     adr        r12,0x8104664
        08004660 55 ca 8c e2     add        r12,r12,#0x55000
        08004664 f4 fc bc e5     ldr        pc=><EXTERNAL>::__aeabi_uidiv,[r12,#0xcf4]!=>-   undefined __aeabi_uidiv()
                                                                                             = 0aef0374
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * fgets(char * __s, int __n, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgets
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __n
             FILE *            r2:4           __stream
                             <EXTERNAL>::fgets                               XREF[5]:     xml_parse_line:08093818(c), 
                                                                                          initialize_game_database:08093cc
                                                                                          load_config_file:08098f80(c), 
                                                                                          file_info_cache_load:0809ba30(c), 
                                                                                          load_custom_cheats:080a28a4(c)  
        08004668 01 c6 8f e2     adr        r12,0x8104670
        0800466c 55 ca 8c e2     add        r12,r12,#0x55000
        08004670 ec fc bc e5     ldr        pc=><EXTERNAL>::fgets,[r12,#0xcec]!=>-><EXTERN   char * fgets(char * __s, int __n
                                                                                             = 0aef03e0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_idiv()
                               Thunked-Function: <EXTERNAL>::__aeabi_idiv
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_idiv                        XREF[29]:    memory_divide:08010ae0(c), 
                                                                                          video_2d_bg_layer_affine_setup_e
                                                                                          video_2d_bg_layer_affine_setup_e
                                                                                          render_scanline_update_affine_va
                                                                                          render_scanline_update_affine_va
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_2d_obj_affine_setup_edges:
                                                                                          video_3d_render_bins_1x:080743d4
                                                                                          video_3d_render_bins_4x:08077c1c
                                                                                          RestartModelRare:080edebc(c), 
                                                                                          RestartModelRare:080edef4(c), 
                                                                                          RestartModelRare:080edf28(c), 
                                                                                          RestartModelRare:080edf5c(c), 
                                                                                          RestartModelRare:080edf90(c), 
                                                                                          RestartModelRare:080edfc4(c), 
                                                                                          RestartModelRare:080edff8(c), 
                                                                                          RestartModelRare:080ee030(c), 
                                                                                          luaC_step:08118208(c), 
                                                                                          luaC_step:08118268(c), 
                                                                                          luaC_step:08118438(c), [more]
        08004674 01 c6 8f e2     adr        r12,0x810467c
        08004678 55 ca 8c e2     add        r12,r12,#0x55000
        0800467c e4 fc bc e5     ldr        pc=><EXTERNAL>::__aeabi_idiv,[r12,#0xce4]!=>->   undefined __aeabi_idiv()
                                                                                             = 0aef0148
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void flockfile(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::flockfile
             void              <VOID>         <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::flockfile                           XREF[2]:     read_line:08129160(c), 
                                                                                          g_read:0812a234(c)  
        08004680 01 c6 8f e2     adr        r12,0x8104688
        08004684 55 ca 8c e2     add        r12,r12,#0x55000
        08004688 dc fc bc e5     ldr        pc=><EXTERNAL>::flockfile,[r12,#0xcdc]!=>-><EX   void flockfile(FILE * __stream)
                                                                                             = 0aef017c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float expf(float __x)
                               Thunked-Function: <EXTERNAL>::expf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::expf                                XREF[1]:     math_exp:0812b47c(c)  
        0800468c 01 c6 8f e2     adr        r12,0x8104694
        08004690 55 ca 8c e2     add        r12,r12,#0x55000
        08004694 d4 fc bc e5     ldr        pc=><EXTERNAL>::expf,[r12,#0xcd4]!=>-><EXTERNA   float expf(float __x)
                                                                                             = 0aef0458
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fputc(int __c, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fputc
             int               r0:4           <RETURN>
             int               r0:4           __c
             FILE *            r1:4           __stream
                             <EXTERNAL>::fputc                               XREF[30]:    cpu_block_log_all:08028518(c), 
                                                                                          geometry_log_step:0807eb8c(c), 
                                                                                          geometry_log_step:0807ebac(c), 
                                                                                          geometry_log_step:0807ebd4(c), 
                                                                                          geometry_log_step:0807ebf4(c), 
                                                                                          geometry_log_step:0807ec18(c), 
                                                                                          geometry_log_step:0807ec38(c), 
                                                                                          geometry_log_step:0807ec60(c), 
                                                                                          geometry_log_step:0807ec80(c), 
                                                                                          geometry_log_step:0807ecac(c), 
                                                                                          icon_cache_add:0809c0b4(c), 
                                                                                          icon_cache_add:0809c0c0(c), 
                                                                                          save_custom_cheats:080a2df8(c), 
                                                                                          save_custom_cheats:080a2e4c(c), 
                                                                                          save_custom_cheats:080a2eac(c), 
                                                                                          cpu_translate_log_live_state:080
                                                                                          cpu_translate_log_live_state:080
                                                                                          cpu_translate_log_live_state:080
                                                                                          cpu_translate_log_current_arm_in
                                                                                          cpu_translate_log_block:080b86b4
                                                                                          [more]
        08004698 01 c6 8f e2     adr        r12,0x81046a0
        0800469c 55 ca 8c e2     add        r12,r12,#0x55000
        080046a0 cc fc bc e5     ldr        pc=><EXTERNAL>::fputc,[r12,#0xccc]!=>-><EXTERN   int fputc(int __c, FILE * __stre
                                                                                             = 0aef03b8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int setvbuf(FILE * __stream, char * __buf, int __m
                               Thunked-Function: <EXTERNAL>::setvbuf
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
             char *            r1:4           __buf
             int               r2:4           __modes
             size_t            r3:4           __n
                             <EXTERNAL>::setvbuf                             XREF[1]:     f_setvbuf:08129bd0(c)  
        080046a4 01 c6 8f e2     adr        r12,0x81046ac
        080046a8 55 ca 8c e2     add        r12,r12,#0x55000
        080046ac c4 fc bc e5     ldr        pc=><EXTERNAL>::setvbuf,[r12,#0xcc4]!=>-><EXTE   int setvbuf(FILE * __stream, cha
                                                                                             = 0aef03d8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::fwrite                              XREF[73]:    cpu_block_log_all:08028530(c), 
                                                                                          process_geometry:080826a0(c), 
                                                                                          process_geometry:080826b8(c), 
                                                                                          update_frame_geometry:08082d14(c
                                                                                          update_frame_geometry:08082d2c(c
                                                                                          gba_backup_auto_save_step:0808f9
                                                                                          load_nds:08090724(c), 
                                                                                          backup_save:080927e8(c), 
                                                                                          backup_save:080928e8(c), 
                                                                                          save_state_thread_function:08095
                                                                                          nds_file_open:08096724(c), 
                                                                                          nds_file_open:08096738(c), 
                                                                                          nds_file_open:0809674c(c), 
                                                                                          save_directory_config_file:0809a
                                                                                          icon_cache_add:0809c094(c), 
                                                                                          icon_cache_add:0809c0a8(c), 
                                                                                          icon_cache_add:0809c0d4(c), 
                                                                                          update_input:080a6920(c), 
                                                                                          unzip_file:080c90c4(c), 
                                                                                          unzip_file:080c9244(c), [more]
        080046b0 01 c6 8f e2     adr        r12,0x81046b8
        080046b4 55 ca 8c e2     add        r12,r12,#0x55000
        080046b8 bc fc bc e5     ldr        pc=><EXTERNAL>::fwrite,[r12,#0xcbc]!=>-><EXTER   size_t fwrite(void * __ptr, size
                                                                                             = 0aef025c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float powf(float __x, float __y)
                               Thunked-Function: <EXTERNAL>::powf
             float             s0:4           <RETURN>
             float             s0:4           __x
             float             s1:4           __y
                             <EXTERNAL>::powf                                XREF[3]:     luaO_arith:08118c28(c), 
                                                                                          luaV_execute:08123278(c), 
                                                                                          math_pow:0812af6c(c)  
        080046bc 01 c6 8f e2     adr        r12,0x81046c4
        080046c0 55 ca 8c e2     add        r12,r12,#0x55000
        080046c4 b4 fc bc e5     ldr        pc=><EXTERNAL>::powf,[r12,#0xcb4]!=>-><EXTERNA   float powf(float __x, float __y)
                                                                                             = 0aef0298
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memcpy(void * __dest, void * __src, size_t 
                               Thunked-Function: <EXTERNAL>::memcpy
             void *            r0:4           <RETURN>
             void *            r0:4           __dest
             void *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::memcpy                              XREF[254]:   SetKey50:080df1d0(c), 
                                                                                          Read:080e0ee0(c), 
                                                                                          GetB:080e124c(c), 
                                                                                          UnpRead:080e2278(c), 
                                                                                          SecPassword:080e2e24(c), 
                                                                                          Get:080e37f0(c), Set:080e3c94(c), 
                                                                                          operator==:080e4354(c), 
                                                                                          operator==:080e43ec(c), 
                                                                                          sha256_process:080e8eb4(c), 
                                                                                          Result:080e910c(c), 
                                                                                          Result:080e9178(c), 
                                                                                          Result:080e9198(c), 
                                                                                          Read:08109768(c), 
                                                                                          Read:08109850(c), 
                                                                                          ReadRaw:08109ac4(c), 
                                                                                          blake2s_update:0810c844(c), 
                                                                                          blake2s_update:0810c8e4(c), 
                                                                                          blake2s_final:0810caf4(c), 
                                                                                          blake2sp_update:0810cf34(c), 
                                                                                          [more]
        080046c8 01 c6 8f e2     adr        r12,0x81046d0
        080046cc 55 ca 8c e2     add        r12,r12,#0x55000
        080046d0 ac fc bc e5     ldr        pc=><EXTERNAL>::memcpy,[r12,#0xcac]!=>-><EXTER   void * memcpy(void * __dest, voi
                                                                                             = 0aef0328
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __mode_t umask(__mode_t __mask)
                               Thunked-Function: <EXTERNAL>::umask
             __mode_t          r0:4           <RETURN>
             __mode_t          r0:4           __mask
                             <EXTERNAL>::umask                               XREF[2]:     ConvertAttributes:080db644(c), 
                                                                                          ConvertAttributes:080db64c(c)  
        080046d4 01 c6 8f e2     adr        r12,0x81046dc
        080046d8 55 ca 8c e2     add        r12,r12,#0x55000
        080046dc a4 fc bc e5     ldr        pc=><EXTERNAL>::umask,[r12,#0xca4]!=>-><EXTERN   __mode_t umask(__mode_t __mask)
                                                                                             = 0aef0048
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * malloc(size_t __size)
                               Thunked-Function: <EXTERNAL>::malloc
             void *            r0:4           <RETURN>
             size_t            r0:4           __size
                             <EXTERNAL>::malloc                              XREF[256]:   memory_setup_slot2_ram:080144f4(
                                                                                          memory_setup_slot2_ram:08014518(
                                                                                          memory_setup_slot2_ram:08014534(
                                                                                          cpu_block_create:08024c90(c), 
                                                                                          cpu_block_create:0802632c(c), 
                                                                                          texture_cache_convert_compressed
                                                                                          texture_cache_create:0808c9dc(c), 
                                                                                          texture_cache_lookup:0808cea0(c), 
                                                                                          texture_cache_lookup:0808cf08(c), 
                                                                                          gba_scan_save:0808f478(c), 
                                                                                          gamecard_load_gba:0808faa4(c), 
                                                                                          gamecard_load_program:08090138(c
                                                                                          initialize_game_database:08093ca
                                                                                          initialize_game_database:0809432
                                                                                          initialize_game_database:0809470
                                                                                          initialize_game_database:0809471
                                                                                          load_state:0809520c(c), 
                                                                                          load_state:080953f4(c), 
                                                                                          save_state:08095850(c), 
                                                                                          nds_file_open:08096088(c), [more]
        080046e0 01 c6 8f e2     adr        r12,0x81046e8
        080046e4 55 ca 8c e2     add        r12,r12,#0x55000
        080046e8 9c fc bc e5     ldr        pc=><EXTERNAL>::malloc,[r12,#0xc9c]!=>-><EXTER   void * malloc(size_t __size)
                                                                                             = 0aef0138
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t strlen(char * __s)
                               Thunked-Function: <EXTERNAL>::strlen
             size_t            r0:4           <RETURN>
             char *            r0:4           __s
                             <EXTERNAL>::strlen                              XREF[63]:    gamecard_initialize_homebrew:080
                                                                                          initialize_game_database:0809430
                                                                                          initialize_game_database:0809437
                                                                                          file_info_cache_load:0809baa8(c), 
                                                                                          icon_cache_add:0809bfe4(c), 
                                                                                          load_file:0809c568(c), 
                                                                                          load_file:0809c7d8(c), 
                                                                                          load_file:0809c978(c), 
                                                                                          load_file:0809cdc0(c), 
                                                                                          load_file:0809cf3c(c), 
                                                                                          load_cheat_listing:080a2478(c), 
                                                                                          load_cheat_listing:080a250c(c), 
                                                                                          load_cheat_listing:080a2524(c), 
                                                                                          load_cheat_listing:080a2574(c), 
                                                                                          ReadHeader15:080daebc(c), 
                                                                                          SetKey50:080defc4(c), 
                                                                                          ExtractUnixLink30:0810d190(c), 
                                                                                          ExtractUnixOwner30:0810d618(c), 
                                                                                          luaO_pushvfstring:081195c4(c), 
                                                                                          luaO_chunkid:08119684(c), [more]
        080046ec 01 c6 8f e2     adr        r12,0x81046f4
        080046f0 55 ca 8c e2     add        r12,r12,#0x55000
        080046f4 94 fc bc e5     ldr        pc=><EXTERNAL>::strlen,[r12,#0xc94]!=>-><EXTER   size_t strlen(char * __s)
                                                                                             = 0aef0204
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __snprintf_chk()
                               Thunked-Function: <EXTERNAL>::__snprintf_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__snprintf_chk                      XREF[6]:     initialize_system_directory:0800
                                                                                          gamecard_load_gba:0808fa14(c), 
                                                                                          gamecard_load_gba:0808fb24(c), 
                                                                                          gamecard_load_program:0809007c(c
                                                                                          nds_file_open:08096314(c), 
                                                                                          load_file:0809c814(c)  
        080046f8 01 c6 8f e2     adr        r12,0x8104700
        080046fc 55 ca 8c e2     add        r12,r12,#0x55000
        08004700 8c fc bc e5     ldr        pc=><EXTERNAL>::__snprintf_chk,[r12,#0xc8c]!=>   undefined __snprintf_chk()
                                                                                             = 0aef03a8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getcwd(char * __buf, size_t __size)
                               Thunked-Function: <EXTERNAL>::getcwd
             char *            r0:4           <RETURN>
             char *            r0:4           __buf
             size_t            r1:4           __size
                             <EXTERNAL>::getcwd                              XREF[5]:     initialize_system:080072a0(c), 
                                                                                          geometry_log_step:0807eb4c(c), 
                                                                                          load_nds:08090880(c), 
                                                                                          load_file:0809c438(c), 
                                                                                          ConvertNameToFull:080d4d5c(c)  
        08004704 01 c6 8f e2     adr        r12,0x810470c
        08004708 55 ca 8c e2     add        r12,r12,#0x55000
        0800470c 84 fc bc e5     ldr        pc=><EXTERNAL>::getcwd,[r12,#0xc84]!=>-><EXTER   char * getcwd(char * __buf, size
                                                                                             = 0aef01ec
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int munmap(void * __addr, size_t __len)
                               Thunked-Function: <EXTERNAL>::munmap
             int               r0:4           <RETURN>
             void *            r0:4           __addr
             size_t            r1:4           __len
                             <EXTERNAL>::munmap                              XREF[13]:    remap_address_region_low_memory:
                                                                                          remap_address_region_vram:0800c1
                                                                                          remap_wram:0800d570(c), 
                                                                                          remap_wram:0800d5a8(c), 
                                                                                          initialize_memory:0801627c(c), 
                                                                                          initialize_memory:0801637c(c), 
                                                                                          initialize_memory:08016764(c), 
                                                                                          uninitialize_memory:080168f0(c), 
                                                                                          uninitialize_memory:08016904(c), 
                                                                                          uninitialize_memory:08016910(c), 
                                                                                          reset_memory:08016f70(c), 
                                                                                          nds_file_close:080967d8(c), 
                                                                                          unzip_find_file_entry:080c8684(c
        08004710 01 c6 8f e2     adr        r12,0x8104718
        08004714 55 ca 8c e2     add        r12,r12,#0x55000
        08004718 7c fc bc e5     ldr        pc=><EXTERNAL>::munmap,[r12,#0xc7c]!=>-><EXTER   int munmap(void * __addr, size_t
                                                                                             = 0aef0094
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __memset_chk()
                               Thunked-Function: <EXTERNAL>::__memset_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__memset_chk                        XREF[4]:     render_scanline_2d:0804c6cc(c), 
                                                                                          render_scanline_2d:0804c7ec(c), 
                                                                                          texture_cache_create:0808cdc0(c), 
                                                                                          texture_cache_create:0808cdd8(c)  
        0800471c 01 c6 8f e2     adr        r12,0x8104724
        08004720 55 ca 8c e2     add        r12,r12,#0x55000
        08004724 74 fc bc e5     ldr        pc=><EXTERNAL>::__memset_chk,[r12,#0xc74]!=>->   undefined __memset_chk()
                                                                                             = 0aef0110
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcoll(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcoll
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
                             <EXTERNAL>::strcoll                             XREF[2]:     luaV_lessthan:08121438(c), 
                                                                                          luaV_lessequal:081215b8(c)  
        08004728 01 c6 8f e2     adr        r12,0x8104730
        0800472c 55 ca 8c e2     add        r12,r12,#0x55000
        08004730 6c fc bc e5     ldr        pc=><EXTERNAL>::strcoll,[r12,#0xc6c]!=>-><EXTE   int strcoll(char * __s1, char * 
                                                                                             = 0aef0268
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fclose(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fclose
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fclose                              XREF[73]:    gamecard_load_gba:0808fad4(c), 
                                                                                          gamecard_load_gba:0808fbac(c), 
                                                                                          gamecard_load_gba:0808fc58(c), 
                                                                                          load_nds:08090740(c), 
                                                                                          backup_save:08092904(c), 
                                                                                          backup_save:0809299c(c), 
                                                                                          initialize_backup:0809303c(c), 
                                                                                          load_state:08095284(c), 
                                                                                          load_state:08095440(c), 
                                                                                          load_state:08095688(c), 
                                                                                          nds_file_open:08096494(c), 
                                                                                          nds_file_open:08096504(c), 
                                                                                          nds_file_open:080965dc(c), 
                                                                                          nds_file_open:08096690(c), 
                                                                                          nds_file_open:08096754(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_read_to_memory_partial:
                                                                                          ~File:080d5654(c), 
                                                                                          ~File:080d5688(c), 
                                                                                          Close:080d5cb4(c), [more]
        08004734 01 c6 8f e2     adr        r12,0x810473c
        08004738 55 ca 8c e2     add        r12,r12,#0x55000
        0800473c 64 fc bc e5     ldr        pc=><EXTERNAL>::fclose,[r12,#0xc64]!=>-><EXTER   int fclose(FILE * __stream)
                                                                                             = 0aef0188
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t write(int __fd, void * __buf, size_t __n)
                               Thunked-Function: <EXTERNAL>::write
             ssize_t           r0:4           <RETURN>
             int               r0:4           __fd
             void *            r1:4           __buf
             size_t            r2:4           __n
                             <EXTERNAL>::write                               XREF[1]:     gamecard_write:0809119c(c)  
        08004740 01 c6 8f e2     adr        r12,0x8104748
        08004744 55 ca 8c e2     add        r12,r12,#0x55000
        08004748 5c fc bc e5     ldr        pc=><EXTERNAL>::write,[r12,#0xc5c]!=>-><EXTERN   ssize_t write(int __fd, void * _
                                                                                             = 0aef0440
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t lseek64(int __fd, __off64_t __offset, in
                               Thunked-Function: <EXTERNAL>::lseek64
             __off64_t         r1:4,r0:4      <RETURN>
             int               r0:4           __fd
             __off64_t         Stack[0x0]:8   __offset
             int               r1:4           __whence
                             <EXTERNAL>::lseek64                             XREF[5]:     unzip_find_file_entry:080c8610(c
                                                                                          unzip_find_file_entry:080c8628(c
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file_to_memory_partial:080
                                                                                          unzip_file:080c8f20(c)  
        0800474c 01 c6 8f e2     adr        r12,0x8104754
        08004750 55 ca 8c e2     add        r12,r12,#0x55000
        08004754 54 fc bc e5     ldr        pc=><EXTERNAL>::lseek64,[r12,#0xc54]!=>-><EXTE   __off64_t lseek64(int __fd, __of
                                                                                             = 0aef0460
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compressBound()
                               Thunked-Function: <EXTERNAL>::compressBou
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::compressBound                       XREF[1]:     save_state_thread_function:08094
        08004758 01 c6 8f e2     adr        r12,0x8104760
        0800475c 55 ca 8c e2     add        r12,r12,#0x55000
        08004760 4c fc bc e5     ldr        pc=><EXTERNAL>::compressBound,[r12,#0xc4c]!=>-   undefined compressBound()
                                                                                             = 0aef0050
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_ul2d()
                               Thunked-Function: <EXTERNAL>::__aeabi_ul2d
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_ul2d                        XREF[22]:    quit:080064a4(c), 
                                                                                          quit:080064b8(c), 
                                                                                          quit:080064fc(c), 
                                                                                          quit:0800650c(c), 
                                                                                          quit:08006530(c), 
                                                                                          quit:08006540(c), 
                                                                                          quit:08006564(c), 
                                                                                          quit:08006574(c), 
                                                                                          quit:08006598(c), 
                                                                                          cpu_block_log_all:080283d0(c), 
                                                                                          cpu_block_log_all:080283dc(c), 
                                                                                          cpu_block_log_all:08028458(c), 
                                                                                          cpu_block_log_all:08028474(c), 
                                                                                          cpu_block_log_all:08028494(c), 
                                                                                          cpu_block_log_all:080284ac(c), 
                                                                                          update_frame:080362d4(c), 
                                                                                          update_frame:080362f8(c), 
                                                                                          benchmark_step:08097078(c), 
                                                                                          benchmark_step:080970f8(c), 
                                                                                          load_file:0809c84c(c), [more]
        08004764 01 c6 8f e2     adr        r12,0x810476c
        08004768 55 ca 8c e2     add        r12,r12,#0x55000
        0800476c 44 fc bc e5     ldr        pc=><EXTERNAL>::__aeabi_ul2d,[r12,#0xc44]!=>->   undefined __aeabi_ul2d()
                                                                                             = 0aef00bc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float floorf(float __x)
                               Thunked-Function: <EXTERNAL>::floorf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::floorf                              XREF[20]:    luaO_arith:08118c3c(c), 
                                                                                          luaH_get:0811ecb0(c), 
                                                                                          luaH_newkey:0811f108(c), 
                                                                                          luaH_set:0811f790(c), 
                                                                                          luaV_tointeger_:08120ff4(c), 
                                                                                          luaV_execute:08122718(c), 
                                                                                          luaV_execute:081228c4(c), 
                                                                                          luaV_execute:081229f8(c), 
                                                                                          luaV_execute:08122a7c(c), 
                                                                                          luaV_execute:08122b88(c), 
                                                                                          luaV_execute:08122c0c(c), 
                                                                                          luaV_execute:08122d00(c), 
                                                                                          luaV_execute:08122d84(c), 
                                                                                          luaV_execute:08122e78(c), 
                                                                                          luaV_execute:08122efc(c), 
                                                                                          luaV_execute:08123158(c), 
                                                                                          luaV_execute:081231dc(c), 
                                                                                          luaV_execute:08123e4c(c), 
                                                                                          math_modf:0812b64c(c), 
                                                                                          math_floor:0812b8fc(c)  
        08004770 01 c6 8f e2     adr        r12,0x8104778
        08004774 55 ca 8c e2     add        r12,r12,#0x55000
        08004778 3c fc bc e5     ldr        pc=><EXTERNAL>::floorf,[r12,#0xc3c]!=>-><EXTER   float floorf(float __x)
                                                                                             = 0aef0490
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float fmodf(float __x, float __y)
                               Thunked-Function: <EXTERNAL>::fmodf
             float             s0:4           <RETURN>
             float             s0:4           __x
             float             s1:4           __y
                             <EXTERNAL>::fmodf                               XREF[3]:     luaO_arith:08118c08(c), 
                                                                                          luaV_execute:081232ec(c), 
                                                                                          math_fmod:0812b840(c)  
        0800477c 01 c6 8f e2     adr        r12,0x8104784
        08004780 55 ca 8c e2     add        r12,r12,#0x55000
        08004784 34 fc bc e5     ldr        pc=><EXTERNAL>::fmodf,[r12,#0xc34]!=>-><EXTERN   float fmodf(float __x, float __y)
                                                                                             = 0aef003c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcstombs(char * __s, wchar_t * __pwcs, size
                               Thunked-Function: <EXTERNAL>::wcstombs
             size_t            r0:4           <RETURN>
             char *            r0:4           __s
             wchar_t *         r1:4           __pwcs
             size_t            r2:4           __n
                             <EXTERNAL>::wcstombs                            XREF[1]:     WideToChar:080dcdc8(c)  
        08004788 01 c6 8f e2     adr        r12,0x8104790
        0800478c 55 ca 8c e2     add        r12,r12,#0x55000
        08004790 2c fc bc e5     ldr        pc=><EXTERNAL>::wcstombs,[r12,#0xc2c]!=>-><EXT   size_t wcstombs(char * __s, wcha
                                                                                             = 0aef004c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat(int __ver, char * __filename, stat * _
                               Thunked-Function: <EXTERNAL>::__xstat
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat *            r2:4           __stat_buf
                             <EXTERNAL>::__xstat                             XREF[9]:     initialize_system_directory:0800
                                                                                          initialize_game_database:08093c9
                                                                                          savestate_index_timestamp:08095e
                                                                                          nds_file_open:080962e0(c), 
                                                                                          nds_file_open:08096410(c), 
                                                                                          load_file:0809c460(c), 
                                                                                          load_file:0809c494(c), 
                                                                                          load_file:0809c57c(c), 
                                                                                          reset_input:080a6ed4(c)  
        08004794 01 c6 8f e2     adr        r12,0x810479c
        08004798 55 ca 8c e2     add        r12,r12,#0x55000
        0800479c 24 fc bc e5     ldr        pc=><EXTERNAL>::__xstat,[r12,#0xc24]!=>-><EXTE   int __xstat(int __ver, char * __
                                                                                             = 0aef0498
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_end_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_end_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_end_catch
        080047a0 01 c6 8f e2     adr        r12,0x81047a8
        080047a4 55 ca 8c e2     add        r12,r12,#0x55000
        080047a8 1c fc bc e5     ldr        pc=><EXTERNAL>::__cxa_end_catch,[r12,#0xc1c]!=   undefined __cxa_end_catch()
                                                                                             = 0aef020c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscat(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscat
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
                             <EXTERNAL>::wcscat                              XREF[9]:     GenArcName:080d3628(c), 
                                                                                          GenArcName:080d3634(c), 
                                                                                          SetExt:080d3d84(c), 
                                                                                          SetExt:080d3da0(c), 
                                                                                          SetSFXExt:080d3e44(c), 
                                                                                          SetSFXExt:080d3e60(c), 
                                                                                          AddEndSlash:080d4040(c), 
                                                                                          GetConfigName:080d43ec(c), 
                                                                                          ConvertNameToFull:080d4db0(c)  
        080047ac 01 c6 8f e2     adr        r12,0x81047b4
        080047b0 55 ca 8c e2     add        r12,r12,#0x55000
        080047b4 14 fc bc e5     ldr        pc=><EXTERNAL>::wcscat,[r12,#0xc14]!=>-><EXTER   wchar_t * wcscat(wchar_t * __des
                                                                                             = 0aef0018
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __popcountsi2()
                               Thunked-Function: <EXTERNAL>::__popcounts
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__popcountsi2                       XREF[1]:     initialize_cpu:08021560(c)  
        080047b8 01 c6 8f e2     adr        r12,0x81047c0
        080047bc 55 ca 8c e2     add        r12,r12,#0x55000
        080047c0 0c fc bc e5     ldr        pc=><EXTERNAL>::__popcountsi2,[r12,#0xc0c]!=>-   undefined __popcountsi2()
                                                                                             = 0aef0128
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long random(void)
                               Thunked-Function: <EXTERNAL>::random
             long              r0:4           <RETURN>
                             <EXTERNAL>::random                              XREF[1]:     math_random:0812b110(c)  
        080047c4 01 c6 8f e2     adr        r12,0x81047cc
        080047c8 55 ca 8c e2     add        r12,r12,#0x55000
        080047cc 04 fc bc e5     ldr        pc=><EXTERNAL>::random,[r12,#0xc04]!=>-><EXTER   long random(void)
                                                                                             = 0aef01a4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __gxx_personality_v0()
                               Thunked-Function: <EXTERNAL>::__gxx_perso
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__gxx_personality_v0
        080047d0 01 c6 8f e2     adr        r12,0x81047d8
        080047d4 55 ca 8c e2     add        r12,r12,#0x55000
        080047d8 fc fb bc e5     ldr        pc=><EXTERNAL>::__gxx_personality_v0,[r12,#0xb   undefined __gxx_personality_v0()
                                                                                             = 0aef005c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t __ctype_get_mb_cur_max(void)
                               Thunked-Function: <EXTERNAL>::__ctype_get
             size_t            r0:4           <RETURN>
                             <EXTERNAL>::__ctype_get_mb_cur_max              XREF[4]:     WideToChar:080dcd5c(c), 
                                                                                          WideToChar:080dcd7c(c), 
                                                                                          CharToWide:080dcf50(c), 
                                                                                          CharToWide:080dcf78(c)  
        080047dc 01 c6 8f e2     adr        r12,0x81047e4
        080047e0 55 ca 8c e2     add        r12,r12,#0x55000
        080047e4 f4 fb bc e5     ldr        pc=><EXTERNAL>::__ctype_get_mb_cur_max,[r12,#0   size_t __ctype_get_mb_cur_max(vo
                                                                                             = 0aef01c4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::remap_file_pages                    XREF[5]:     remap_address_region_low_memory:
                                                                                          remap_address_region_vram:0800c2
                                                                                          remap_wram:0800d624(c), 
                                                                                          initialize_memory:080166e0(c), 
                                                                                          reset_memory:08017068(c)  
        080047e8 01 c6 8f e2     adr        r12,0x81047f0
        080047ec 55 ca 8c e2     add        r12,r12,#0x55000
        080047f0 ec fb bc e5     ldr        pc=><EXTERNAL>::remap_file_pages,[r12,#0xbec]!   int remap_file_pages(void * __st
                                                                                             = 0aef00e4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::pthread_create                      XREF[5]:     initialize_video:08036534(c), 
                                                                                          initialize_video_3d:08078cd4(c), 
                                                                                          initialize_video_3d:08078df8(c), 
                                                                                          save_state:08095a4c(c), 
                                                                                          ThreadCreate:08102e70(c)  
        080047f4 01 c6 8f e2     adr        r12,0x81047fc
        080047f8 55 ca 8c e2     add        r12,r12,#0x55000
        080047fc e4 fb bc e5     ldr        pc=><EXTERNAL>::pthread_create,[r12,#0xbe4]!=>   int pthread_create(pthread_t * _
                                                                                             = 0aef0174
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __aeabi_l2d()
                               Thunked-Function: <EXTERNAL>::__aeabi_l2d
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__aeabi_l2d                         XREF[1]:     benchmark_step:08097180(c)  
        08004800 01 c6 8f e2     adr        r12,0x8104808
        08004804 55 ca 8c e2     add        r12,r12,#0x55000
        08004808 dc fb bc e5     ldr        pc=><EXTERNAL>::__aeabi_l2d,[r12,#0xbdc]!=>-><   undefined __aeabi_l2d()
                                                                                             = 0aef0164
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __uflow(_IO_FILE * param_1)
                               Thunked-Function: <EXTERNAL>::__uflow
             int               r0:4           <RETURN>
             _IO_FILE *        r0:4           param_1
                             <EXTERNAL>::__uflow                             XREF[13]:    read_line:081291a0(c), 
                                                                                          g_read:0812a280(c), 
                                                                                          g_read:0812a584(c), 
                                                                                          g_read:0812a624(c), 
                                                                                          g_read:0812a710(c), 
                                                                                          g_read:0812a864(c), 
                                                                                          g_read:0812a87c(c), 
                                                                                          g_read:0812a8fc(c), 
                                                                                          g_read:0812a918(c), 
                                                                                          g_read:0812a934(c), 
                                                                                          g_read:0812a94c(c), 
                                                                                          g_read:0812a964(c), 
                                                                                          g_read:0812a97c(c)  
        0800480c 01 c6 8f e2     adr        r12,0x8104814
        08004810 55 ca 8c e2     add        r12,r12,#0x55000
        08004814 d4 fb bc e5     ldr        pc=><EXTERNAL>::__uflow,[r12,#0xbd4]!=>-><EXTE   int __uflow(_IO_FILE * param_1)
                                                                                             = 0aef02fc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcmp
             int               r0:4           <RETURN>
             char *            r0:4           __s1
             char *            r1:4           __s2
                             <EXTERNAL>::strcmp                              XREF[26]:    xml_get_value:08093bfc(c), 
                                                                                          initialize_game_database:08093e8
                                                                                          initialize_game_database:08093f7
                                                                                          initialize_game_database:08093fe
                                                                                          initialize_game_database:0809404
                                                                                          initialize_game_database:080940a
                                                                                          initialize_game_database:0809413
                                                                                          initialize_game_database:0809419
                                                                                          initialize_game_database:0809421
                                                                                          game_database_lookup_by_game_cod
                                                                                          game_database_lookup_by_game_cod
                                                                                          nds_file_open:0809666c(c), 
                                                                                          file_info_cache_lookup:0809bd28(
                                                                                          load_file:0809cb28(c), 
                                                                                          load_file:0809ccec(c), 
                                                                                          load_file:0809ce54(c), 
                                                                                          load_file:0809d864(c), 
                                                                                          Next:080ed4f4(c), 
                                                                                          Next:080ed508(c), 
                                                                                          luaL_argerror:08125014(c), [more]
        08004818 01 c6 8f e2     adr        r12,0x8104820
        0800481c 55 ca 8c e2     add        r12,r12,#0x55000
        08004820 cc fb bc e5     ldr        pc=><EXTERNAL>::strcmp,[r12,#0xbcc]!=>-><EXTER   int strcmp(char * __s1, char * _
                                                                                             = 0aef010c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int toupper(int __c)
                               Thunked-Function: <EXTERNAL>::toupper
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::toupper                             XREF[6]:     stricomp:080d210c(c), 
                                                                                          stricomp:080d2118(c), 
                                                                                          strnicomp:080d218c(c), 
                                                                                          strnicomp:080d2198(c), 
                                                                                          loctoupper:080d2300(c), 
                                                                                          etoupper:080d2324(c)  
        08004824 01 c6 8f e2     adr        r12,0x810482c
        08004828 55 ca 8c e2     add        r12,r12,#0x55000
        0800482c c4 fb bc e5     ldr        pc=><EXTERNAL>::toupper,[r12,#0xbc4]!=>-><EXTE   int toupper(int __c)
                                                                                             = 0aef0230
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_free()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_free              XREF[1]:     initialize_audio:080aacd4(c)  
        08004830 01 c6 8f e2     adr        r12,0x8104838
        08004834 55 ca 8c e2     add        r12,r12,#0x55000
        08004838 bc fb bc e5     ldr        pc=><EXTERNAL>::snd_pcm_sw_params_free,[r12,#0   undefined snd_pcm_sw_params_free()
                                                                                             = 0aef01dc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t time(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::time
             time_t            r0:4           <RETURN>
             time_t *          r0:4           __timer
                             <EXTERNAL>::time                                XREF[10]:    rtc_current_time:08091f7c(c), 
                                                                                          rtc_write:08092390(c), 
                                                                                          rtc_write:080923a0(c), 
                                                                                          reset_rtc:080923f8(c), 
                                                                                          rtc_load_savestate:08092534(c), 
                                                                                          rtc_store_savestate:0809269c(c), 
                                                                                          load_logo:080a0958(c), 
                                                                                          SetAgeText:080e1dc8(c), 
                                                                                          SetCurrentTime:080e1e94(c), 
                                                                                          lua_newstate:0811db54(c)  
        0800483c 01 c6 8f e2     adr        r12,0x8104844
        08004840 55 ca 8c e2     add        r12,r12,#0x55000
        08004844 b4 fb bc e5     ldr        pc=><EXTERNAL>::time,[r12,#0xbb4]!=>-><EXTERNA   time_t time(time_t * __timer)
                                                                                             = 0aef0060
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __cxa_throw()
                               Thunked-Function: <EXTERNAL>::__cxa_throw
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__cxa_throw                         XREF[4]:     Throw:080e2c90(c), 
                                                                                          Init:080f5d80(c), 
                                                                                          Init:080f5da4(c), 
                                                                                          Init:080f63f0(c)  
        08004848 01 c6 8f e2     adr        r12,0x8104850
        0800484c 55 ca 8c e2     add        r12,r12,#0x55000
        08004850 ac fb bc e5     ldr        pc=><EXTERNAL>::__cxa_throw,[r12,#0xbac]!=>-><   undefined __cxa_throw()
                                                                                             = 0aef0070
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemmove(wchar_t * __s1, wchar_t * __s2,
                               Thunked-Function: <EXTERNAL>::wmemmove
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __s1
             wchar_t *         r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::wmemmove                            XREF[1]:     GenArcName:080d36f0(c)  
        08004854 01 c6 8f e2     adr        r12,0x810485c
        08004858 55 ca 8c e2     add        r12,r12,#0x55000
        0800485c a4 fb bc e5     ldr        pc=><EXTERNAL>::wmemmove,[r12,#0xba4]!=>-><EXT   wchar_t * wmemmove(wchar_t * __s
                                                                                             = 0aef0398
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackEnd()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::inflateBackEnd                      XREF[1]:     unzip_file_to_memory_partial:080
        08004860 01 c6 8f e2     adr        r12,0x8104868
        08004864 55 ca 8c e2     add        r12,r12,#0x55000
        08004868 9c fb bc e5     ldr        pc=><EXTERNAL>::inflateBackEnd,[r12,#0xb9c]!=>   undefined inflateBackEnd()
                                                                                             = 0aef03ac
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int * __errno_location(void)
                               Thunked-Function: <EXTERNAL>::__errno_loc
             int *             r0:4           <RETURN>
                             <EXTERNAL>::__errno_location                    XREF[20]:    InFile_Open:080cbbcc(c), 
                                                                                          OutFile_Open:080cbc1c(c), 
                                                                                          Open:080d5a14(c), 
                                                                                          MakeDir:080d668c(c), 
                                                                                          GetSystemErrorCode:080e2d9c(c), 
                                                                                          SetSystemErrorCode:080e2dbc(c), 
                                                                                          FastFind:080ed404(c), 
                                                                                          FastFind:080ed41c(c), 
                                                                                          Next:080ed720(c), 
                                                                                          ExtractUnixLink30:0810d254(c), 
                                                                                          ExtractUnixOwner20:0810d4c4(c), 
                                                                                          ExtractUnixLink50:0810d970(c), 
                                                                                          luaL_fileresult:08125320(c), 
                                                                                          luaL_execresult:08125450(c), 
                                                                                          luaL_loadfilex:0812676c(c), 
                                                                                          luaL_loadfilex:08126844(c), 
                                                                                          luaL_loadfilex:0812687c(c), 
                                                                                          io_output:081298b4(c), 
                                                                                          io_lines:08129e8c(c), 
                                                                                          io_input:08129fa0(c)  
        0800486c 01 c6 8f e2     adr        r12,0x8104874
        08004870 55 ca 8c e2     add        r12,r12,#0x55000
        08004874 94 fb bc e5     ldr        pc=><EXTERNAL>::__errno_location,[r12,#0xb94]!   int * __errno_location(void)
                                                                                             = 0aef0260
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int tolower(int __c)
                               Thunked-Function: <EXTERNAL>::tolower
             int               r0:4           <RETURN>
             int               r0:4           __c
                             <EXTERNAL>::tolower                             XREF[1]:     loctolower:080d22e4(c)  
        08004878 01 c6 8f e2     adr        r12,0x8104880
        0800487c 55 ca 8c e2     add        r12,r12,#0x55000
        08004880 8c fb bc e5     ldr        pc=><EXTERNAL>::tolower,[r12,#0xb8c]!=>-><EXTE   int tolower(int __c)
                                                                                             = 0aef0034
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memchr(void * __s, int __c, size_t __n)
                               Thunked-Function: <EXTERNAL>::memchr
             void *            r0:4           <RETURN>
             void *            r0:4           __s
             int               r1:4           __c
             size_t            r2:4           __n
                             <EXTERNAL>::memchr                              XREF[1]:     str_find_aux:0812fd64(c)  
        08004884 01 c6 8f e2     adr        r12,0x810488c
        08004888 55 ca 8c e2     add        r12,r12,#0x55000
        0800488c 84 fb bc e5     ldr        pc=><EXTERNAL>::memchr,[r12,#0xb84]!=>-><EXTER   void * memchr(void * __s, int __
                                                                                             = 0aef0300
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __lxstat64(int __ver, char * __filename, stat6
                               Thunked-Function: <EXTERNAL>::__lxstat64
             int               r0:4           <RETURN>
             int               r0:4           __ver
             char *            r1:4           __filename
             stat64 *          r2:4           __stat_buf
                             <EXTERNAL>::__lxstat64                          XREF[1]:     FastFind:080ed348(c)  
        08004890 01 c6 8f e2     adr        r12,0x8104898
        08004894 55 ca 8c e2     add        r12,r12,#0x55000
        08004898 7c fb bc e5     ldr        pc=><EXTERNAL>::__lxstat64,[r12,#0xb7c]!=>-><E   int __lxstat64(int __ver, char *
                                                                                             = 0aef00f0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncpy(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncpy
             char *            r0:4           <RETURN>
             char *            r0:4           __dest
             char *            r1:4           __src
             size_t            r2:4           __n
                             <EXTERNAL>::strncpy                             XREF[10]:    gamecard_load_program:0808fd7c(c
                                                                                          gamecard_database_entry_for_file
                                                                                          load_nds:080907c0(c), 
                                                                                          load_nds:08090800(c), 
                                                                                          load_nds:08090834(c), 
                                                                                          initialize_backup:08093110(c), 
                                                                                          save_state:08095a20(c), 
                                                                                          save_state:08095a30(c), 
                                                                                          IntToExt:080d20b4(c), 
                                                                                          strncpyz:080d2640(c)  
        0800489c 01 c6 8f e2     adr        r12,0x81048a4
        080048a0 55 ca 8c e2     add        r12,r12,#0x55000
        080048a4 74 fb bc e5     ldr        pc=><EXTERNAL>::strncpy,[r12,#0xb74]!=>-><EXTE   char * strncpy(char * __dest, ch
                                                                                             = 0aef0210
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetHint()
                               Thunked-Function: <EXTERNAL>::SDL_SetHint
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_SetHint                         XREF[1]:     initialize_screen:080a8738(c)  
        080048a8 01 c6 8f e2     adr        r12,0x81048b0
        080048ac 55 ca 8c e2     add        r12,r12,#0x55000
        080048b0 6c fb bc e5     ldr        pc=><EXTERNAL>::SDL_SetHint,[r12,#0xb6c]!=>-><   undefined SDL_SetHint()
                                                                                             = 0aef0488
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towupper(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towupper
             wint_t            r0:4           <RETURN>
             wint_t            r0:4           __wc
                             <EXTERNAL>::towupper                            XREF[6]:     wcsicomp:080dd50c(c), 
                                                                                          wcsicomp:080dd518(c), 
                                                                                          wcsnicomp:080dd588(c), 
                                                                                          wcsnicomp:080dd594(c), 
                                                                                          wcsupper:080dd64c(c), 
                                                                                          toupperw:080dd674(j)  
        080048b4 01 c6 8f e2     adr        r12,0x81048bc
        080048b8 55 ca 8c e2     add        r12,r12,#0x55000
        080048bc 64 fb bc e5     ldr        pc=><EXTERNAL>::towupper,[r12,#0xb64]!=>-><EXT   wint_t towupper(wint_t __wc)
                                                                                             = 0aef0114
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fflush(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fflush
             int               r0:4           <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::fflush                              XREF[23]:    cpu_block_create:08025a2c(c), 
                                                                                          cpu_block_log_all:080284f4(c), 
                                                                                          render_scanline_bitmap_16bpp:080
                                                                                          initialize_game_database:08093d1
                                                                                          initialize_game_database:0809450
                                                                                          load_state:080955f4(c), 
                                                                                          load_state:08095650(c), 
                                                                                          benchmark_step:08097028(c), 
                                                                                          file_info_cache_load:0809bbe8(c), 
                                                                                          file_info_cache_load:0809bc50(c), 
                                                                                          icon_cache_load:0809bf34(c), 
                                                                                          icon_cache_load:0809bfa4(c), 
                                                                                          process_cheat:080a17d4(c), 
                                                                                          update_input:080a6928(c), 
                                                                                          DirectRead:080d5e64(c), 
                                                                                          Read:080d5fe4(c), 
                                                                                          panic:08124aec(c), 
                                                                                          luaB_print:08127b94(c), 
                                                                                          io_flush:081292d8(c), 
                                                                                          io_popen:08129540(c), [more]
        080048c0 01 c6 8f e2     adr        r12,0x81048c8
        080048c4 55 ca 8c e2     add        r12,r12,#0x55000
        080048c8 5c fb bc e5     ldr        pc=><EXTERNAL>::fflush,[r12,#0xb5c]!=>-><EXTER   int fflush(FILE * __stream)
                                                                                             = 0aef039c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen64(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen64
             FILE *            r0:4           <RETURN>
             char *            r0:4           __filename
             char *            r1:4           __modes
                             <EXTERNAL>::fopen64                             XREF[12]:    unzip_file:080c8e40(c), 
                                                                                          unrar_file:080c953c(c), 
                                                                                          InFile_Open:080cbbac(c), 
                                                                                          OutFile_Open:080cbbfc(c), 
                                                                                          Create:080d5b54(c), 
                                                                                          GetRnd:080e0378(c), 
                                                                                          luaL_loadfilex:0812651c(c), 
                                                                                          io_open:081296e0(c), 
                                                                                          io_output:0812985c(c), 
                                                                                          io_lines:08129d94(c), 
                                                                                          io_input:08129f48(c), 
                                                                                          searchpath:08132688(c)  
        080048cc 01 c6 8f e2     adr        r12,0x81048d4
        080048d0 55 ca 8c e2     add        r12,r12,#0x55000
        080048d4 54 fb bc e5     ldr        pc=><EXTERNAL>::fopen64,[r12,#0xb54]!=>-><EXTE   FILE * fopen64(char * __filename
                                                                                             = 0aef00ec
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int _setjmp(__jmp_buf_tag * __env)
                               Thunked-Function: <EXTERNAL>::_setjmp
             int               r0:4           <RETURN>
             __jmp_buf_tag *   r0:4           __env
                             <EXTERNAL>::_setjmp                             XREF[3]:     main:08007f58(c), 
                                                                                          luaD_rawrunprotected:08113094(c), 
                                                                                          luaD_rawrunprotected:0811391c(c)  
        080048d8 01 c6 8f e2     adr        r12,0x81048e0
        080048dc 55 ca 8c e2     add        r12,r12,#0x55000
        080048e0 4c fb bc e5     ldr        pc=><EXTERNAL>::_setjmp,[r12,#0xb4c]!=>-><EXTE   int _setjmp(__jmp_buf_tag * __env)
                                                                                             = 0aef018c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int memcmp(void * __s1, void * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::memcmp
             int               r0:4           <RETURN>
             void *            r0:4           __s1
             void *            r1:4           __s2
             size_t            r2:4           __n
                             <EXTERNAL>::memcmp                              XREF[25]:    gamecard_decrypt_secure_region:0
                                                                                          load_state:0809537c(c), 
                                                                                          load_cheat_directory:080a1d04(c), 
                                                                                          find_custom_cheat:080a2f34(c), 
                                                                                          unzip_find_file_entry:080c8770(c
                                                                                          unzip_find_file_entry:080c8828(c
                                                                                          ReadHeader50:080dbaa0(c), 
                                                                                          SetKey30:080de564(c), 
                                                                                          SetKey50:080df408(c), 
                                                                                          SetKey50:080df530(c), 
                                                                                          SetKey50:080df564(c), 
                                                                                          SetKey50:080df594(c), 
                                                                                          operator==:080e92b8(c), 
                                                                                          Cmp:080e9778(c), 
                                                                                          ExtractCurrentFile:080ea960(c), 
                                                                                          ExtractArchive:080ebda4(c), 
                                                                                          luaS_eqlngstr:0811e004(c), 
                                                                                          luaS_newlstr:0811e37c(c), 
                                                                                          luaS_new:0811e570(c), 
                                                                                          luaU_undump:08120ba0(c), [more]
        080048e4 01 c6 8f e2     adr        r12,0x81048ec
        080048e8 55 ca 8c e2     add        r12,r12,#0x55000
        080048ec 44 fb bc e5     ldr        pc=><EXTERNAL>::memcmp,[r12,#0xb44]!=>-><EXTER   int memcmp(void * __s1, void * _
                                                                                             = 0aef0130
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_avail()
                               Thunked-Function: <EXTERNAL>::snd_pcm_ava
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_avail                       XREF[6]:     audio_buffer_state:080aa72c(c), 
                                                                                          audio_buffer_force_feed:080aa77c
                                                                                          audio_synchronous_update:080aa7f
                                                                                          audio_synchronous_update:080aa85
                                                                                          audio_capture_flush:080aa8c4(c), 
                                                                                          audio_capture_flush:080aa8e8(c)  
        080048f0 01 c6 8f e2     adr        r12,0x81048f8
        080048f4 55 ca 8c e2     add        r12,r12,#0x55000
        080048f8 3c fb bc e5     ldr        pc=><EXTERNAL>::snd_pcm_avail,[r12,#0xb3c]!=>-   undefined snd_pcm_avail()
                                                                                             = 0aef0494
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
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
                             <EXTERNAL>::memmem                              XREF[1]:     initialize_backup:08093084(c)  
        080048fc 01 c6 8f e2     adr        r12,0x8104904
        08004900 55 ca 8c e2     add        r12,r12,#0x55000
        08004904 34 fb bc e5     ldr        pc=><EXTERNAL>::memmem,[r12,#0xb34]!=>-><EXTER   void * memmem(void * __haystack,
                                                                                             = 0aef0314
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __sprintf_chk()
                               Thunked-Function: <EXTERNAL>::__sprintf_c
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__sprintf_chk                       XREF[152]:   load_system_file:080066a4(c), 
                                                                                          reset_system:080077fc(c), 
                                                                                          update_frame:0803632c(c), 
                                                                                          gamecard_initialize_homebrew:080
                                                                                          gamecard_initialize_homebrew:080
                                                                                          load_nds:08090684(c), 
                                                                                          load_nds:08090928(c), 
                                                                                          load_nds:08090974(c), 
                                                                                          initialize_gamecard:080913f4(c), 
                                                                                          initialize_gamecard:08091424(c), 
                                                                                          xml_parse_line:08093a18(c), 
                                                                                          xml_parse_line:08093a3c(c), 
                                                                                          initialize_game_database:080944c
                                                                                          initialize_game_database:080947d
                                                                                          initialize_game_database:0809482
                                                                                          nds_file_open:080962b0(c), 
                                                                                          nds_file_open:080962d0(c), 
                                                                                          nds_file_open:080963dc(c), 
                                                                                          nds_file_open:080963fc(c), 
                                                                                          luaO_tostring:08118fb4(c), [more]
        08004908 01 c6 8f e2     adr        r12,0x8104910
        0800490c 55 ca 8c e2     add        r12,r12,#0x55000
        08004910 2c fb bc e5     ldr        pc=><EXTERNAL>::__sprintf_chk,[r12,#0xb2c]!=>-   undefined __sprintf_chk()
                                                                                             = 0aef0304
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strrchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strrchr
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __c
                             <EXTERNAL>::strrchr                             XREF[13]:    load_nds:080907a4(c), 
                                                                                          load_nds:080907d4(c), 
                                                                                          load_nds:08090818(c), 
                                                                                          load_nds:08090860(c), 
                                                                                          nds_file_open:0809609c(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_check_extension:080969d
                                                                                          nds_file_get_rom_type:08096b14(c
                                                                                          load_custom_cheats:080a2964(c), 
                                                                                          un7z_file:080c73f0(c), 
                                                                                          un7z_file_to_memory_partial:080c
                                                                                          unrar_file:080c94e8(c), 
                                                                                          unrar_file_to_memory_partial:080
        08004914 01 c6 8f e2     adr        r12,0x810491c
        08004918 55 ca 8c e2     add        r12,r12,#0x55000
        0800491c 24 fb bc e5     ldr        pc=><EXTERNAL>::strrchr,[r12,#0xb24]!=>-><EXTE   char * strrchr(char * __s, int _
                                                                                             = 0aef0038
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscpy(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscpy
             wchar_t *         r0:4           <RETURN>
             wchar_t *         r0:4           __dest
             wchar_t *         r1:4           __src
                             <EXTERNAL>::wcscpy                              XREF[15]:    AddStringA:080d19f0(c), 
                                                                                          AddString:080d1b3c(c), 
                                                                                          GenArcName:080d38d0(c), 
                                                                                          ConvertPath:080d3b4c(c), 
                                                                                          SetExt:080d3d5c(c), 
                                                                                          SetSFXExt:080d3e28(c), 
                                                                                          NextVolumeName:080d4628(c), 
                                                                                          NextVolumeName:080d4718(c), 
                                                                                          UnixSlashToDos:080d4b88(c), 
                                                                                          DosSlashToUnix:080d4c48(c), 
                                                                                          VolNameToFirstName:080d50f8(c), 
                                                                                          VolNameToFirstName:080d5308(c), 
                                                                                          IsArchive:080d8e58(c), 
                                                                                          GetText:080e1a10(c), 
                                                                                          FindProc:08108420(c)  
        08004920 01 c6 8f e2     adr        r12,0x8104928
        08004924 55 ca 8c e2     add        r12,r12,#0x55000
        08004928 1c fb bc e5     ldr        pc=><EXTERNAL>::wcscpy,[r12,#0xb1c]!=>-><EXTER   wchar_t * wcscpy(wchar_t * __des
                                                                                             = 0aef0420
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_hw_params_any()
                               Thunked-Function: <EXTERNAL>::snd_pcm_hw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_hw_params_any               XREF[2]:     initialize_audio_capture:080aa98
                                                                                          initialize_audio:080aabd8(c)  
        0800492c 01 c6 8f e2     adr        r12,0x8104934
        08004930 55 ca 8c e2     add        r12,r12,#0x55000
        08004934 14 fb bc e5     ldr        pc=><EXTERNAL>::snd_pcm_hw_params_any,[r12,#0x   undefined snd_pcm_hw_params_any()
                                                                                             = 0aef01c8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __int32_t * * __ctype_tolower_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_tol
             __int32_t * *     r0:4           <RETURN>
                             <EXTERNAL>::__ctype_tolower_loc                 XREF[3]:     str_lower:0812beac(c), 
                                                                                          match_class:0812bf34(c), 
                                                                                          matchbracketclass:0812f060(c)  
        08004938 01 c6 8f e2     adr        r12,0x8104940
        0800493c 55 ca 8c e2     add        r12,r12,#0x55000
        08004940 0c fb bc e5     ldr        pc=><EXTERNAL>::__ctype_tolower_loc,[r12,#0xb0   __int32_t * * __ctype_tolower_lo
                                                                                             = 0aef0124
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined memalign()
                               Thunked-Function: <EXTERNAL>::memalign
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::memalign                            XREF[1]:     start_frame:08035e14(c)  
        08004944 01 c6 8f e2     adr        r12,0x810494c
        08004948 55 ca 8c e2     add        r12,r12,#0x55000
        0800494c 04 fb bc e5     ldr        pc=><EXTERNAL>::memalign,[r12,#0xb04]!=>-><EXT   undefined memalign()
                                                                                             = 0aef02b0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void funlockfile(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::funlockfile
             void              <VOID>         <RETURN>
             FILE *            r0:4           __stream
                             <EXTERNAL>::funlockfile                         XREF[3]:     read_line:081291b8(c), 
                                                                                          read_line:0812923c(c), 
                                                                                          g_read:0812a500(c)  
        08004950 01 c6 8f e2     adr        r12,0x8104958
        08004954 55 ca 8c e2     add        r12,r12,#0x55000
        08004958 fc fa bc e5     ldr        pc=><EXTERNAL>::funlockfile,[r12,#0xafc]!=>-><   void funlockfile(FILE * __stream)
                                                                                             = 0aef03cc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t mktime(tm * __tp)
                               Thunked-Function: <EXTERNAL>::mktime
             time_t            r0:4           <RETURN>
             tm *              r0:4           __tp
                             <EXTERNAL>::mktime                              XREF[3]:     SetLocal:080e17e4(c), 
                                                                                          SetDos:080e1964(c), 
                                                                                          SetIsoText:080e1c64(c)  
        0800495c 01 c6 8f e2     adr        r12,0x8104964
        08004960 55 ca 8c e2     add        r12,r12,#0x55000
        08004964 f4 fa bc e5     ldr        pc=><EXTERNAL>::mktime,[r12,#0xaf4]!=>-><EXTER   time_t mktime(tm * __tp)
                                                                                             = 0aef03b0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateTexture()
                               Thunked-Function: <EXTERNAL>::SDL_CreateT
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateTexture                   XREF[5]:     set_screen_hires_mode:080a80ec(c
                                                                                          initialize_screen:080a8700(c), 
                                                                                          initialize_screen:080a8794(c), 
                                                                                          initialize_screen:080a8828(c), 
                                                                                          set_screen_menu_on:080a8ac0(c)  
        08004968 01 c6 8f e2     adr        r12,0x8104970
        0800496c 55 ca 8c e2     add        r12,r12,#0x55000
        08004970 ec fa bc e5     ldr        pc=><EXTERNAL>::SDL_CreateTexture,[r12,#0xaec]   undefined SDL_CreateTexture()
                                                                                             = 0aef01e4
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params_current()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params_current           XREF[1]:     initialize_audio:080aacb8(c)  
        08004974 01 c6 8f e2     adr        r12,0x810497c
        08004978 55 ca 8c e2     add        r12,r12,#0x55000
        0800497c e4 fa bc e5     ldr        pc=><EXTERNAL>::snd_pcm_sw_params_current,[r12   undefined snd_pcm_sw_params_curr
                                                                                             = 0aef001c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getenv(char * __name)
                               Thunked-Function: <EXTERNAL>::getenv
             char *            r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getenv                              XREF[7]:     platform_initialize:080a7ef8(c), 
                                                                                          platform_initialize:080a7f24(c), 
                                                                                          EnumConfigPaths:080d42b4(c), 
                                                                                          GetConfigName:080d438c(c), 
                                                                                          ParseEnvVar:08105690(c), 
                                                                                          setpath:08132964(c), 
                                                                                          setpath:08132a34(c)  
        08004980 01 c6 8f e2     adr        r12,0x8104988
        08004984 55 ca 8c e2     add        r12,r12,#0x55000
        08004988 dc fa bc e5     ldr        pc=><EXTERNAL>::getenv,[r12,#0xadc]!=>-><EXTER   char * getenv(char * __name)
                                                                                             = 0aef0324
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __libc_start_main()
                               Thunked-Function: <EXTERNAL>::__libc_star
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__libc_start_main                   XREF[1]:     _start:080062b4(c)  
        0800498c 01 c6 8f e2     adr        r12,0x8104994
        08004990 55 ca 8c e2     add        r12,r12,#0x55000
        08004994 d4 fa bc e5     ldr        pc=><EXTERNAL>::__libc_start_main,[r12,#0xad4]   undefined __libc_start_main()
                                                                                             = 0aef02bc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlsym()
                               Thunked-Function: <EXTERNAL>::dlsym
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::dlsym                               XREF[2]:     lookforfunc:081327d8(c), 
                                                                                          ll_loadlib:08133080(c)  
        08004998 01 c6 8f e2     adr        r12,0x81049a0
        0800499c 55 ca 8c e2     add        r12,r12,#0x55000
        080049a0 cc fa bc e5     ldr        pc=><EXTERNAL>::dlsym,[r12,#0xacc]!=>-><EXTERN   undefined dlsym()
                                                                                             = 0aef0108
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int dup(int __fd)
                               Thunked-Function: <EXTERNAL>::dup
             int               r0:4           <RETURN>
             int               r0:4           __fd
                             <EXTERNAL>::dup                                 XREF[1]:     Write:080d54b4(c)  
        080049a4 01 c6 8f e2     adr        r12,0x81049ac
        080049a8 55 ca 8c e2     add        r12,r12,#0x55000
        080049ac c4 fa bc e5     ldr        pc=><EXTERNAL>::dup,[r12,#0xac4]!=>-><EXTERNAL   int dup(int __fd)
                                                                                             = 0aef0448
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             LAB_080049b0                                    XREF[1]:     080062e0(j)  
        080049b0 01 c6 8f e2     adr        r12,0x81049b8
        080049b4 55 ca 8c e2     add        r12,r12,#0x55000
        080049b8 bc fa bc e5     ldr        pc=><EXTERNAL>::__gmon_start__,[r12,#0xabc]!=>   undefined __gmon_start__()
                                                                                             = 0aef0010
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined snd_pcm_sw_params()
                               Thunked-Function: <EXTERNAL>::snd_pcm_sw_
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::snd_pcm_sw_params                   XREF[1]:     initialize_audio:080aacc4(c)  
        080049bc 01 c6 8f e2     adr        r12,0x81049c4
        080049c0 55 ca 8c e2     add        r12,r12,#0x55000
        080049c4 b4 fa bc e5     ldr        pc=><EXTERNAL>::snd_pcm_sw_params,[r12,#0xab4]   undefined snd_pcm_sw_params()
                                                                                             = 0aef0238
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int rename(char * __old, char * __new)
                               Thunked-Function: <EXTERNAL>::rename
             int               r0:4           <RETURN>
             char *            r0:4           __old
             char *            r1:4           __new
                             <EXTERNAL>::rename                              XREF[4]:     save_state_thread_function:08095
                                                                                          save_state_thread_function:08095
                                                                                          load_file:0809c484(c), 
                                                                                          RenameFile:080d7160(c)  
        080049c8 01 c6 8f e2     adr        r12,0x81049d0
        080049cc 55 ca 8c e2     add        r12,r12,#0x55000
        080049d0 ac fa bc e5     ldr        pc=><EXTERNAL>::rename,[r12,#0xaac]!=>-><EXTER   int rename(char * __old, char * 
                                                                                             = 0aef01fc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk group * getgrnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getgrnam
             group *           r0:4           <RETURN>
             char *            r0:4           __name
                             <EXTERNAL>::getgrnam                            XREF[3]:     ExtractUnixOwner20:0810d4fc(c), 
                                                                                          ExtractUnixOwner30:0810d674(c), 
                                                                                          SetUnixOwner:0810d7cc(c)  
        080049d4 01 c6 8f e2     adr        r12,0x81049dc
        080049d8 55 ca 8c e2     add        r12,r12,#0x55000
        080049dc a4 fa bc e5     ldr        pc=><EXTERNAL>::getgrnam,[r12,#0xaa4]!=>-><EXT   group * getgrnam(char * __name)
                                                                                             = 0aef02e0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strchr
             char *            r0:4           <RETURN>
             char *            r0:4           __s
             int               r1:4           __c
                             <EXTERNAL>::strchr                              XREF[22]:    xml_parse_line:080938b8(c), 
                                                                                          xml_parse_line:0809395c(c), 
                                                                                          load_config_file:08098f64(c), 
                                                                                          file_info_cache_load:0809ba44(c), 
                                                                                          file_info_cache_load:0809ba5c(c), 
                                                                                          MakeNameUsable:080d48c8(c), 
                                                                                          MakeNameUsable:080d48f4(c), 
                                                                                          lua_getinfo:081125cc(c), 
                                                                                          lua_getinfo:081125f0(c), 
                                                                                          f_parser:08112f70(c), 
                                                                                          f_parser:08112fe0(c), 
                                                                                          propagatemark:08116950(c), 
                                                                                          propagatemark:08116960(c), 
                                                                                          luaO_pushvfstring:0811914c(c), 
                                                                                          luaO_chunkid:081196ac(c), 
                                                                                          io_open:081296a8(c), 
                                                                                          str_format:0812c8a4(c), 
                                                                                          searchpath:0813261c(c), 
                                                                                          searcher_Croot:08132b34(c), 
                                                                                          searcher_Croot:08132be8(c), [more]
        080049e0 01 c6 8f e2     adr        r12,0x81049e8
        080049e4 55 ca 8c e2     add        r12,r12,#0x55000
        080049e8 9c fa bc e5     ldr        pc=><EXTERNAL>::strchr,[r12,#0xa9c]!=>-><EXTER   char * strchr(char * __s, int __c)
                                                                                             = 0aef028c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float frexpf(float __x, int * __exponent)
                               Thunked-Function: <EXTERNAL>::frexpf
             float             s0:4           <RETURN>
             float             s0:4           __x
             int *             r0:4           __exponent
                             <EXTERNAL>::frexpf                              XREF[2]:     mainposition:0811e778(c), 
                                                                                          math_frexp:0812aefc(c)  
        080049ec 01 c6 8f e2     adr        r12,0x81049f4
        080049f0 55 ca 8c e2     add        r12,r12,#0x55000
        080049f4 94 fa bc e5     ldr        pc=><EXTERNAL>::frexpf,[r12,#0xa94]!=>-><EXTER   float frexpf(float __x, int * __
                                                                                             = 0aef03a0
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_unlock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               r0:4           <RETURN>
             pthread_mutex_    r0:4           __mutex
                             <EXTERNAL>::pthread_mutex_unlock                XREF[31]:    video_render_thread:08028874(c), 
                                                                                          video_render_thread:080288a4(c), 
                                                                                          video_render_scanlines:08035fec(
                                                                                          video_render_scanlines:08036054(
                                                                                          update_frame_3d_1x:08074ce4(c), 
                                                                                          update_frame_3d_1x:08074d84(c), 
                                                                                          video_3d_render_thread:0807834c(
                                                                                          video_3d_render_thread:08078380(
                                                                                          update_frame_3d_4x:08078608(c), 
                                                                                          update_frame_3d_4x:080786a8(c), 
                                                                                          video_3d_run_thread:080789bc(c), 
                                                                                          video_3d_run_thread:08078a04(c), 
                                                                                          video_3d_run_thread:08078a44(c), 
                                                                                          DestroyThreadPool:08102f90(c), 
                                                                                          DestroyThreadPool:08103058(c), 
                                                                                          DestroyThreadPool:081030ac(c), 
                                                                                          ~ThreadPool:081032ec(c), 
                                                                                          ~ThreadPool:081033b0(c), 
                                                                                          AddTask:081036e0(c), 
                                                                                          AddTask:0810373c(c), [more]
        080049f8 01 c6 8f e2     adr        r12,0x8104a00
        080049fc 55 ca 8c e2     add        r12,r12,#0x55000
        08004a00 8c fa bc e5     ldr        pc=><EXTERNAL>::pthread_mutex_unlock,[r12,#0xa   int pthread_mutex_unlock(pthread
                                                                                             = 0aef00ac
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __printf_chk()
                               Thunked-Function: <EXTERNAL>::__printf_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__printf_chk                        XREF[267]:   cpu_translate_store_pc_metadata:
                                                                                          cpu_translate_store_pc_metadata:
                                                                                          cpu_translate_store_pc_metadata:
                                                                                          load_system_file:08006764(c), 
                                                                                          load_system_file:08006780(c), 
                                                                                          load_system_file:0800679c(c), 
                                                                                          print_offset_defines:080070c0(c), 
                                                                                          initialize_system_directory:0800
                                                                                          apply_cycle_adjustment_hacks:080
                                                                                          reset_system:08007a2c(c), 
                                                                                          main:08007ed4(c), 
                                                                                          main:08007f30(c), 
                                                                                          main:08007f90(c), 
                                                                                          initialize_memory:080161ec(c), 
                                                                                          initialize_memory:08016270(c), 
                                                                                          initialize_memory:08016334(c), 
                                                                                          initialize_memory:08016348(c), 
                                                                                          initialize_memory:080166a4(c), 
                                                                                          initialize_memory:08016714(c), 
                                                                                          initialize_memory:08016758(c), 
                                                                                          [more]
        08004a04 01 c6 8f e2     adr        r12,0x8104a0c
        08004a08 55 ca 8c e2     add        r12,r12,#0x55000
        08004a0c 84 fa bc e5     ldr        pc=><EXTERNAL>::__printf_chk,[r12,#0xa84]!=>->   undefined __printf_chk()
                                                                                             = 0aef0040
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __read_chk()
                               Thunked-Function: <EXTERNAL>::__read_chk
             undefined         r0:1           <RETURN>
                             <EXTERNAL>::__read_chk                          XREF[4]:     unzip_file:080c8fd8(c), 
                                                                                          unzip_file:080c90fc(c), 
                                                                                          unzip_file:080c91a0(c), 
                                                                                          unzip_file:080c9204(c)  
        08004a10 01 c6 8f e2     adr        r12,0x8104a18
        08004a14 55 ca 8c e2     add        r12,r12,#0x55000
        08004a18 7c fa bc e5     ldr        pc=><EXTERNAL>::__read_chk,[r12,#0xa7c]!=>-><E   undefined __read_chk()
                                                                                             = 0aef02c8
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
