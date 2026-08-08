                             //
                             // .plt 
                             // SHT_PROGBITS  [0xd230 - 0xe31f]
                             // ram:0010d230-ram:0010e31f
                             //
                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_0010d230()
             undefined         w0:1           <RETURN>
             undefined8        Stack[-0x10]:8 local_10                                XREF[1]:     0010d230(W)  
                             FUN_0010d230                                    XREF[1]:     _elfSectionHeaders::00000310(*)  
        0010d230 f0 7b bf a9     stp        x16,x30,[sp, #local_10]!
        0010d234 90 0a 00 d0     adrp       x16,0x25f000
        0010d238 11 7a 42 f9     ldr        x17,[x16, #0x4f0]=>PTR_0025f4f0                  = 00000000
        0010d23c 10 c2 13 91     add        x16,x16,#0x4f0
        0010d240 20 02 1f d6     br         x17
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
        0010d244 1f 20 03 d5     nop
        0010d248 1f 20 03 d5     nop
        0010d24c 1f 20 03 d5     nop
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new[](ulong param_1)
                               Thunked-Function: <EXTERNAL>::operator.ne
             void *            x0:8           <RETURN>
             ulong             x0:8           param_1
                             <EXTERNAL>::operator.new[]                      XREF[6]:     InitMT:001ccf78(c), 
                                                                                          InitMT:001ccfbc(c), 
                                                                                          QuickOpen:001ec948(c), 
                                                                                          Init:001ecae0(c), 
                                                                                          Init:001ede28(c), 
                                                                                          BitInput:001ef330(c)  
        0010d250 90 0a 00 d0     adrp       x16,0x25f000
        0010d254 11 7e 42 f9     ldr        x17,[x16, #0x4f8]=>-><EXTERNAL>::operator.new[]  = 04033000
        0010d258 10 e2 13 91     add        x16,x16,#0x4f8
        0010d25c 20 02 1f d6     br         x17=><EXTERNAL>::operator.new[]                  void * operator.new[](ulong para
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateRenderer()
                               Thunked-Function: <EXTERNAL>::SDL_CreateR
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateRenderer                  XREF[1]:     initialize_screen:0018a87c(c)  
        0010d260 90 0a 00 d0     adrp       x16,0x25f000
        0010d264 11 82 42 f9     ldr        x17,[x16, #0x500]=>-><EXTERNAL>::SDL_CreateRen   = 04033008
        0010d268 10 02 14 91     add        x16,x16,#0x500
        0010d26c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_CreateRenderer              undefined SDL_CreateRenderer()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateWindow()
                               Thunked-Function: <EXTERNAL>::SDL_CreateW
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateWindow                    XREF[1]:     initialize_screen:0018a86c(c)  
        0010d270 90 0a 00 d0     adrp       x16,0x25f000
        0010d274 11 86 42 f9     ldr        x17,[x16, #0x508]=>-><EXTERNAL>::SDL_CreateWin   = 04033010
        0010d278 10 22 14 91     add        x16,x16,#0x508
        0010d27c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_CreateWindow                undefined SDL_CreateWindow()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __strcpy_chk()
                               Thunked-Function: <EXTERNAL>::__strcpy_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__strcpy_chk                        XREF[12]:    initialize_system:0010f898(c), 
                                                                                          xml_parse_line:00172dbc(c), 
                                                                                          initialize_game_database:0017336
                                                                                          initialize_game_database:0017354
                                                                                          load_cheat_directory:00180e04(c), 
                                                                                          step_debug:00183850(c), 
                                                                                          disasm_arm64_instruction:0019715
                                                                                          disasm_arm64_instruction:0019721
                                                                                          disasm_arm64_instruction:0019727
                                                                                          disasm_arm64_instruction:0019748
                                                                                          disasm_arm64_instruction:001975b
                                                                                          disasm_arm64_instruction:001978f
        0010d280 90 0a 00 d0     adrp       x16,0x25f000
        0010d284 11 8a 42 f9     ldr        x17,[x16, #0x510]=>-><EXTERNAL>::__strcpy_chk    = 04033018
        0010d288 10 42 14 91     add        x16,x16,#0x510
        0010d28c 20 02 1f d6     br         x17=><EXTERNAL>::__strcpy_chk                    undefined __strcpy_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void srandom(uint __seed)
                               Thunked-Function: <EXTERNAL>::srandom
             void              <VOID>         <RETURN>
             uint              w0:4           __seed
                             <EXTERNAL>::srandom                             XREF[1]:     math_randomseed:0020c8d4(c)  
        0010d290 90 0a 00 d0     adrp       x16,0x25f000
        0010d294 11 8e 42 f9     ldr        x17,[x16, #0x518]=>-><EXTERNAL>::srandom         = 04033020
        0010d298 10 62 14 91     add        x16,x16,#0x518
        0010d29c 20 02 1f d6     br         x17=><EXTERNAL>::srandom                         void srandom(uint __seed)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float cosf(float __x)
                               Thunked-Function: <EXTERNAL>::cosf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::cosf                                XREF[1]:     math_cos:0020cd58(c)  
        0010d2a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2a4 11 92 42 f9     ldr        x17,[x16, #0x520]=>-><EXTERNAL>::cosf            = 04033028
        0010d2a8 10 82 14 91     add        x16,x16,#0x520
        0010d2ac 20 02 1f d6     br         x17=><EXTERNAL>::cosf                            float cosf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memcpy(void * __dest, void * __src, size_t 
                               Thunked-Function: <EXTERNAL>::memcpy
             void *            x0:8           <RETURN>
             void *            x0:8           __dest
             void *            x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::memcpy                              XREF[231]:   render_scanline_horizontal_shift
                                                                                          render_scanline_horizontal_shift
                                                                                          render_scanline_2d:0013ff80(c), 
                                                                                          render_scanline:001410c4(c), 
                                                                                          video_3d_resolve_bin_edge_mark_1
                                                                                          video_3d_resolve_bin_edge_mark_1
                                                                                          video_3d_resolve_bin_edge_mark_1
                                                                                          video_3d_resolve_bin_edge_mark_1
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_f
                                                                                          video_3d_resolve_bin_edge_mark_4
                                                                                          video_3d_resolve_bin_edge_mark_4
                                                                                          video_3d_resolve_bin_edge_mark_4
                                                                                          video_3d_resolve_bin_edge_mark_4
                                                                                          [more]
        0010d2b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2b4 11 96 42 f9     ldr        x17,[x16, #0x528]=>-><EXTERNAL>::memcpy          = 04033030
        0010d2b8 10 a2 14 91     add        x16,x16,#0x528
        0010d2bc 20 02 1f d6     br         x17=><EXTERNAL>::memcpy                          void * memcpy(void * __dest, voi
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float tanhf(float __x)
                               Thunked-Function: <EXTERNAL>::tanhf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::tanhf                               XREF[1]:     math_tanh:0020c748(c)  
        0010d2c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2c4 11 9a 42 f9     ldr        x17,[x16, #0x530]=>-><EXTERNAL>::tanhf           = 04033038
        0010d2c8 10 c2 14 91     add        x16,x16,#0x530
        0010d2cc 20 02 1f d6     br         x17=><EXTERNAL>::tanhf                           float tanhf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __open64_2()
                               Thunked-Function: <EXTERNAL>::__open64_2
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__open64_2                          XREF[2]:     Open:001b78d4(c), 
                                                                                          Open:001b79c4(c)  
        0010d2d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2d4 11 9e 42 f9     ldr        x17,[x16, #0x538]=>-><EXTERNAL>::__open64_2      = 04033040
        0010d2d8 10 e2 14 91     add        x16,x16,#0x538
        0010d2dc 20 02 1f d6     br         x17=><EXTERNAL>::__open64_2                      undefined __open64_2()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk passwd * getpwnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getpwnam
             passwd *          x0:8           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::getpwnam                            XREF[3]:     ExtractUnixOwner20:001f03ec(c), 
                                                                                          ExtractUnixOwner30:001f0574(c), 
                                                                                          SetUnixOwner:001f072c(c)  
        0010d2e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2e4 11 a2 42 f9     ldr        x17,[x16, #0x540]=>-><EXTERNAL>::getpwnam        = 04033048
        0010d2e8 10 02 15 91     add        x16,x16,#0x540
        0010d2ec 20 02 1f d6     br         x17=><EXTERNAL>::getpwnam                        passwd * getpwnam(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t __ctype_get_mb_cur_max(void)
                               Thunked-Function: <EXTERNAL>::__ctype_get
             size_t            x0:8           <RETURN>
                             <EXTERNAL>::__ctype_get_mb_cur_max              XREF[5]:     WideToChar:001be830(c), 
                                                                                          WideToChar:001be880(c), 
                                                                                          WideToChar:001be8e8(c), 
                                                                                          CharToWide:001bea64(c), 
                                                                                          CharToWide:001bea90(c)  
        0010d2f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d2f4 11 a6 42 f9     ldr        x17,[x16, #0x548]=>-><EXTERNAL>::__ctype_get_m   = 04033050
        0010d2f8 10 22 15 91     add        x16,x16,#0x548
        0010d2fc 20 02 1f d6     br         x17=><EXTERNAL>::__ctype_get_mb_cur_max          size_t __ctype_get_mb_cur_max(vo
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t fread(void * __ptr, size_t __size, size_t _
                               Thunked-Function: <EXTERNAL>::fread
             size_t            x0:8           <RETURN>
             void *            x0:8           __ptr
             size_t            x1:8           __size
             size_t            x2:8           __n
             FILE *            x3:8           __stream
                             <EXTERNAL>::fread                               XREF[74]:    load_system_file:0010eb4c(c), 
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          gamecard_load_gba:0016ed64(c), 
                                                                                          gamecard_load_gba:0016ee24(c), 
                                                                                          gamecard_load_gba:0016efa0(c), 
                                                                                          initialize_backup:001725c0(c), 
                                                                                          load_state:001747a0(c), 
                                                                                          load_state:00174928(c), 
                                                                                          load_state:00174950(c), 
                                                                                          load_state:00174c30(c), 
                                                                                          nds_file_open:00175ad8(c), 
                                                                                          nds_file_open:00175c40(c), 
                                                                                          nds_file_open:00175c58(c), 
                                                                                          load_directory_config_file:00177
                                                                                          load_directory_config_file:00177
                                                                                          load_directory_config_file:00177
                                                                                          load_directory_config_file:00177
                                                                                          [more]
        0010d300 90 0a 00 d0     adrp       x16,0x25f000
        0010d304 11 aa 42 f9     ldr        x17,[x16, #0x550]=>-><EXTERNAL>::fread           = 04033058
        0010d308 10 42 15 91     add        x16,x16,#0x550
        0010d30c 20 02 1f d6     br         x17=><EXTERNAL>::fread                           size_t fread(void * __ptr, size_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strstr(char * __haystack, char * __needle)
                               Thunked-Function: <EXTERNAL>::strstr
             char *            x0:8           <RETURN>
             char *            x0:8           __haystack
             char *            x1:8           __needle
                             <EXTERNAL>::strstr                              XREF[4]:     platform_set_default_controls:00
                                                                                          platform_set_default_controls:00
                                                                                          platform_set_default_controls:00
                                                                                          luaL_gsub:00208978(c)  
        0010d310 90 0a 00 d0     adrp       x16,0x25f000
        0010d314 11 ae 42 f9     ldr        x17,[x16, #0x558]=>-><EXTERNAL>::strstr          = 04033060
        0010d318 10 62 15 91     add        x16,x16,#0x558
        0010d31c 20 02 1f d6     br         x17=><EXTERNAL>::strstr                          char * strstr(char * __haystack,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderPresent()
                               Thunked-Function: <EXTERNAL>::SDL_RenderP
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderPresent                   XREF[6]:     update_screen_menu:0018a2b4(c), 
                                                                                          clear_screen:0018a434(c), 
                                                                                          clear_screen:0018a444(c), 
                                                                                          clear_screen:0018a454(c), 
                                                                                          clear_screen:0018a464(c), 
                                                                                          update_screens:0018a730(c)  
        0010d320 90 0a 00 d0     adrp       x16,0x25f000
        0010d324 11 b2 42 f9     ldr        x17,[x16, #0x560]=>-><EXTERNAL>::SDL_RenderPre   = 04033068
        0010d328 10 82 15 91     add        x16,x16,#0x560
        0010d32c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_RenderPresent               undefined SDL_RenderPresent()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_open(char * __name, int __oflag, mode_t __
                               Thunked-Function: <EXTERNAL>::shm_open
             int               w0:4           <RETURN>
             char *            x0:8           __name
             int               w1:4           __oflag
             mode_t            w2:4           __mode
                             <EXTERNAL>::shm_open                            XREF[4]:     initialize_memory:0011bfd4(c), 
                                                                                          initialize_memory:0011c1e8(c), 
                                                                                          initialize_memory:0011c5f0(c), 
                                                                                          initialize_memory:0011c684(c)  
        0010d330 90 0a 00 d0     adrp       x16,0x25f000
        0010d334 11 b6 42 f9     ldr        x17,[x16, #0x568]=>-><EXTERNAL>::shm_open        = 04033070
        0010d338 10 a2 15 91     add        x16,x16,#0x568
        0010d33c 20 02 1f d6     br         x17=><EXTERNAL>::shm_open                        int shm_open(char * __name, int 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderGetLogicalSize()
                               Thunked-Function: <EXTERNAL>::SDL_RenderG
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderGetLogicalSize            XREF[1]:     clear_screen:0018a400(c)  
        0010d340 90 0a 00 d0     adrp       x16,0x25f000
        0010d344 11 ba 42 f9     ldr        x17,[x16, #0x570]=>-><EXTERNAL>::SDL_RenderGet   = 04033078
        0010d348 10 c2 15 91     add        x16,x16,#0x570
        0010d34c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_RenderGetLogicalSize        undefined SDL_RenderGetLogicalSi
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int puts(char * __s)
                               Thunked-Function: <EXTERNAL>::puts
             int               w0:4           <RETURN>
             char *            x0:8           __s
                             <EXTERNAL>::puts                                XREF[169]:   main:0010e520(c), 
                                                                                          process_arguments:0010f148(c), 
                                                                                          process_arguments:0010f1a8(c), 
                                                                                          process_arguments:0010f230(c), 
                                                                                          initialize_system_directory:0010
                                                                                          initialize_system:0010f9f0(c), 
                                                                                          initialize_system:0010fa08(c), 
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          [more]
        0010d350 90 0a 00 d0     adrp       x16,0x25f000
        0010d354 11 be 42 f9     ldr        x17,[x16, #0x578]=>-><EXTERNAL>::puts            = 04033080
        0010d358 10 e2 15 91     add        x16,x16,#0x578
        0010d35c 20 02 1f d6     br         x17=><EXTERNAL>::puts                            int puts(char * __s)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t ftello64(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftello64
             __off64_t         x0:8           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::ftello64                            XREF[10]:    Tell:001b7640(c), 
                                                                                          Tell:001b7668(c), 
                                                                                          FileLength:001b80a4(c), 
                                                                                          FileLength:001b80fc(c), 
                                                                                          RawSeek:001b82fc(c), 
                                                                                          Read:001b83b0(c), 
                                                                                          Seek:001b865c(c), 
                                                                                          Write:001b88fc(c), 
                                                                                          Copy:001b8b94(c), 
                                                                                          f_seek:0020b6a8(c)  
        0010d360 90 0a 00 d0     adrp       x16,0x25f000
        0010d364 11 c2 42 f9     ldr        x17,[x16, #0x580]=>-><EXTERNAL>::ftello64        = 04033088
        0010d368 10 02 16 91     add        x16,x16,#0x580
        0010d36c 20 02 1f d6     br         x17=><EXTERNAL>::ftello64                        __off64_t ftello64(FILE * __stre
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int tolower(int __c)
                               Thunked-Function: <EXTERNAL>::tolower
             int               w0:4           <RETURN>
             int               w0:4           __c
                             <EXTERNAL>::tolower                             XREF[1]:     loctolower:001b49cc(c)  
        0010d370 90 0a 00 d0     adrp       x16,0x25f000
        0010d374 11 c6 42 f9     ldr        x17,[x16, #0x588]=>-><EXTERNAL>::tolower         = 04033090
        0010d378 10 22 16 91     add        x16,x16,#0x588
        0010d37c 20 02 1f d6     br         x17=><EXTERNAL>::tolower                         int tolower(int __c)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __int32_t * * __ctype_toupper_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_tou
             __int32_t * *     x0:8           <RETURN>
                             <EXTERNAL>::__ctype_toupper_loc                 XREF[2]:     luaB_tonumber:00208efc(c), 
                                                                                          str_upper:0020d4f0(c)  
        0010d380 90 0a 00 d0     adrp       x16,0x25f000
        0010d384 11 ca 42 f9     ldr        x17,[x16, #0x590]=>-><EXTERNAL>::__ctype_toupp   = 04033098
        0010d388 10 42 16 91     add        x16,x16,#0x590
        0010d38c 20 02 1f d6     br         x17=><EXTERNAL>::__ctype_toupper_loc             __int32_t * * __ctype_toupper_lo
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * freopen64(char * __filename, char * __modes
                               Thunked-Function: <EXTERNAL>::freopen64
             FILE *            x0:8           <RETURN>
             char *            x0:8           __filename
             char *            x1:8           __modes
             FILE *            x2:8           __stream
                             <EXTERNAL>::freopen64                           XREF[1]:     luaL_loadfilex:00207fc8(c)  
        0010d390 90 0a 00 d0     adrp       x16,0x25f000
        0010d394 11 ce 42 f9     ldr        x17,[x16, #0x598]=>-><EXTERNAL>::freopen64       = 040330a0
        0010d398 10 62 16 91     add        x16,x16,#0x598
        0010d39c 20 02 1f d6     br         x17=><EXTERNAL>::freopen64                       FILE * freopen64(char * __filena
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compress()
                               Thunked-Function: <EXTERNAL>::compress
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::compress                            XREF[1]:     save_state_thread_function:00174
        0010d3a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3a4 11 d2 42 f9     ldr        x17,[x16, #0x5a0]=>-><EXTERNAL>::compress        = 040330a8
        0010d3a8 10 82 16 91     add        x16,x16,#0x5a0
        0010d3ac 20 02 1f d6     br         x17=><EXTERNAL>::compress                        undefined compress()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_join(pthread_t __th, void * * __thread
                               Thunked-Function: <EXTERNAL>::pthread_join
             int               w0:4           <RETURN>
             pthread_t         x0:8           __th
             void * *          x1:8           __thread_return
                             <EXTERNAL>::pthread_join                        XREF[1]:     ~ThreadPool:001e78bc(c)  
        0010d3b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3b4 11 d6 42 f9     ldr        x17,[x16, #0x5a8]=>-><EXTERNAL>::pthread_join    = 040330b0
        0010d3b8 10 a2 16 91     add        x16,x16,#0x5a8
        0010d3bc 20 02 1f d6     br         x17=><EXTERNAL>::pthread_join                    int pthread_join(pthread_t __th,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * calloc(size_t __nmemb, size_t __size)
                               Thunked-Function: <EXTERNAL>::calloc
             void *            x0:8           <RETURN>
             size_t            x0:8           __nmemb
             size_t            x1:8           __size
                             <EXTERNAL>::calloc                              XREF[2]:     Init:001dfd14(c), 
                                                                                          Init:001e1a14(c)  
        0010d3c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3c4 11 da 42 f9     ldr        x17,[x16, #0x5b0]=>-><EXTERNAL>::calloc          = 040330b8
        0010d3c8 10 c2 16 91     add        x16,x16,#0x5b0
        0010d3cc 20 02 1f d6     br         x17=><EXTERNAL>::calloc                          void * calloc(size_t __nmemb, si
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk group * getgrnam(char * __name)
                               Thunked-Function: <EXTERNAL>::getgrnam
             group *           x0:8           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::getgrnam                            XREF[3]:     ExtractUnixOwner20:001f0408(c), 
                                                                                          ExtractUnixOwner30:001f0588(c), 
                                                                                          SetUnixOwner:001f06e0(c)  
        0010d3d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3d4 11 de 42 f9     ldr        x17,[x16, #0x5b8]=>-><EXTERNAL>::getgrnam        = 040330c0
        0010d3d8 10 e2 16 91     add        x16,x16,#0x5b8
        0010d3dc 20 02 1f d6     br         x17=><EXTERNAL>::getgrnam                        group * getgrnam(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ungetc(int __c, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ungetc
             int               w0:4           <RETURN>
             int               w0:4           __c
             FILE *            x1:8           __stream
                             <EXTERNAL>::ungetc                              XREF[2]:     g_read:0020bc28(c), 
                                                                                          g_read:0020bd2c(c)  
        0010d3e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3e4 11 e2 42 f9     ldr        x17,[x16, #0x5c0]=>-><EXTERNAL>::ungetc          = 040330c8
        0010d3e8 10 02 17 91     add        x16,x16,#0x5c0
        0010d3ec 20 02 1f d6     br         x17=><EXTERNAL>::ungetc                          int ungetc(int __c, FILE * __str
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticRumbleSupported()
                               Thunked-Function: <EXTERNAL>::SDL_HapticR
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticRumbleSupported           XREF[1]:     platform_initialize_input:0018c3
        0010d3f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d3f4 11 e6 42 f9     ldr        x17,[x16, #0x5c8]=>-><EXTERNAL>::SDL_HapticRum   = 040330d0
        0010d3f8 10 22 17 91     add        x16,x16,#0x5c8
        0010d3fc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticRumbleSupported       undefined SDL_HapticRumbleSuppor
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int utime(char * __file, utimbuf * __file_times)
                               Thunked-Function: <EXTERNAL>::utime
             int               w0:4           <RETURN>
             char *            x0:8           __file
             utimbuf *         x1:8           __file_times
                             <EXTERNAL>::utime                               XREF[1]:     SetCloseFileTimeByName:001b7f90(
        0010d400 90 0a 00 d0     adrp       x16,0x25f000
        0010d404 11 ea 42 f9     ldr        x17,[x16, #0x5d0]=>-><EXTERNAL>::utime           = 040330d8
        0010d408 10 42 17 91     add        x16,x16,#0x5d0
        0010d40c 20 02 1f d6     br         x17=><EXTERNAL>::utime                           int utime(char * __file, utimbuf
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_lock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               w0:4           <RETURN>
             pthread_mutex_    x0:8           __mutex
                             <EXTERNAL>::pthread_mutex_lock                  XREF[28]:    video_render_thread:0012fac0(c), 
                                                                                          video_render_thread:0012fadc(c), 
                                                                                          video_render_scanlines:00130cd0(
                                                                                          video_render_scanlines:00130d10(
                                                                                          update_frame_3d_1x:00152a30(c), 
                                                                                          update_frame_3d_1x:00152c3c(c), 
                                                                                          video_3d_render_thread:00158ea4(
                                                                                          video_3d_render_thread:00158ee4(
                                                                                          update_frame_3d_4x:001590d0(c), 
                                                                                          update_frame_3d_4x:001592dc(c), 
                                                                                          video_3d_run_thread:001594a4(c), 
                                                                                          video_3d_run_thread:001594ec(c), 
                                                                                          video_3d_start_rendering:001595e
                                                                                          video_3d_finish_rendering:001596
                                                                                          ~ThreadPool:001e7880(c), 
                                                                                          ~ThreadPool:001e7914(c), 
                                                                                          ~ThreadPool:001e7940(c), 
                                                                                          AddTask:001e7cdc(c), 
                                                                                          AddTask:001e7d1c(c), 
                                                                                          WaitDone:001e7dfc(c), [more]
        0010d410 90 0a 00 d0     adrp       x16,0x25f000
        0010d414 11 ee 42 f9     ldr        x17,[x16, #0x5d8]=>-><EXTERNAL>::pthread_mutex   = 040330e0
        0010d418 10 62 17 91     add        x16,x16,#0x5d8
        0010d41c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_mutex_lock              int pthread_mutex_lock(pthread_m
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t strlen(char * __s)
                               Thunked-Function: <EXTERNAL>::strlen
             size_t            x0:8           <RETURN>
             char *            x0:8           __s
                             <EXTERNAL>::strlen                              XREF[67]:    gamecard_initialize_homebrew:001
                                                                                          initialize_game_database:0017360
                                                                                          initialize_game_database:0017366
                                                                                          file_info_cache_load:0017abb4(c), 
                                                                                          icon_cache_add:0017b1ac(c), 
                                                                                          load_file:0017b738(c), 
                                                                                          load_file:0017b870(c), 
                                                                                          load_file:0017bad4(c), 
                                                                                          load_file:0017bd1c(c), 
                                                                                          load_file:0017c774(c), 
                                                                                          load_cheat_listing:00181480(c), 
                                                                                          load_cheat_listing:001814f4(c), 
                                                                                          load_cheat_listing:0018150c(c), 
                                                                                          load_cheat_listing:00181558(c), 
                                                                                          load_cheat_listing:00181588(c), 
                                                                                          step_debug:00183250(c), 
                                                                                          get_rlist:001868ec(c), 
                                                                                          disasm_arm_instruction:00186e6c(
                                                                                          disasm_arm_instruction:0018702c(
                                                                                          chomp_whitespace:00187bb0(c), 
                                                                                          [more]
        0010d420 90 0a 00 d0     adrp       x16,0x25f000
        0010d424 11 f2 42 f9     ldr        x17,[x16, #0x5e0]=>-><EXTERNAL>::strlen          = 040330e8
        0010d428 10 82 17 91     add        x16,x16,#0x5e0
        0010d42c 20 02 1f d6     br         x17=><EXTERNAL>::strlen                          size_t strlen(char * __s)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticOpen()
                               Thunked-Function: <EXTERNAL>::SDL_HapticO
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticOpen                      XREF[1]:     platform_initialize_input:0018c4
        0010d430 90 0a 00 d0     adrp       x16,0x25f000
        0010d434 11 f6 42 f9     ldr        x17,[x16, #0x5e8]=>-><EXTERNAL>::SDL_HapticOpen  = 040330f0
        0010d438 10 a2 17 91     add        x16,x16,#0x5e8
        0010d43c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticOpen                  undefined SDL_HapticOpen()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderSetLogicalSize()
                               Thunked-Function: <EXTERNAL>::SDL_RenderS
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderSetLogicalSize            XREF[4]:     clear_screen:0018a40c(c), 
                                                                                          clear_screen:0018a470(c), 
                                                                                          set_screen_menu_off:0018a59c(c), 
                                                                                          set_screen_menu_on:0018ab10(c)  
        0010d440 90 0a 00 d0     adrp       x16,0x25f000
        0010d444 11 fa 42 f9     ldr        x17,[x16, #0x5f0]=>-><EXTERNAL>::SDL_RenderSet   = 040330f8
        0010d448 10 c2 17 91     add        x16,x16,#0x5f0
        0010d44c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_RenderSetLogicalSize        undefined SDL_RenderSetLogicalSi
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __stack_chk_fail()
                               Thunked-Function: <EXTERNAL>::__stack_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__stack_chk_fail                    XREF[457]:   load_system_file:0010ebe8(c), 
                                                                                          system_frame_sync:0010f084(c), 
                                                                                          process_arguments:0010f660(c), 
                                                                                          initialize_system_directory:0010
                                                                                          reset_system:00110034(c), 
                                                                                          patch_firmware_user_data:0011be4
                                                                                          initialize_memory:0011c754(c), 
                                                                                          _execute_cpu:0012822c(c), 
                                                                                          convert_thumb_instruction_to_arm
                                                                                          cpu_block_create:0012daec(c), 
                                                                                          remap_vram_body:001307c0(c), 
                                                                                          start_frame:00130bdc(c), 
                                                                                          render_scanline_obj_c:00138628(c
                                                                                          render_scanline_color_convert_sh
                                                                                          video_2d_reorder_obj:0013eef8(c), 
                                                                                          render_scanline_2d:00140498(c), 
                                                                                          render_scanline:001412f4(c), 
                                                                                          RAROpenArchiveEx:001b352c(c), 
                                                                                          Open:001b7a0c(c), 
                                                                                          DelFile:001b9788(c), [more]
        0010d450 90 0a 00 d0     adrp       x16,0x25f000
        0010d454 11 fe 42 f9     ldr        x17,[x16, #0x5f8]=>-><EXTERNAL>::__stack_chk_f   = 04033100
        0010d458 10 e2 17 91     add        x16,x16,#0x5f8
        0010d45c 20 02 1f d6     br         x17=><EXTERNAL>::__stack_chk_fail                undefined __stack_chk_fail()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int link(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::link
             int               w0:4           <RETURN>
             char *            x0:8           __from
             char *            x1:8           __to
                             <EXTERNAL>::link                                XREF[1]:     ExtractHardlink:001f0260(c)  
        0010d460 90 0a 00 d0     adrp       x16,0x25f000
        0010d464 11 02 43 f9     ldr        x17,[x16, #0x600]=>-><EXTERNAL>::link            = 04033108
        0010d468 10 02 18 91     add        x16,x16,#0x600
        0010d46c 20 02 1f d6     br         x17=><EXTERNAL>::link                            int link(char * __from, char * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long ftell(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ftell
             long              x0:8           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::ftell                               XREF[21]:    load_system_file:0010eb00(c), 
                                                                                          load_system_file:0010eb1c(c), 
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          gamecard_load_gba:0016ed0c(c), 
                                                                                          gamecard_load_gba:0016ede8(c), 
                                                                                          initialize_backup:001725dc(c), 
                                                                                          initialize_backup:001725f8(c), 
                                                                                          load_state:00174bd8(c), 
                                                                                          load_state:00174bf8(c), 
                                                                                          nds_file_open:00175a70(c), 
                                                                                          nds_file_open:00175b2c(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_get_rom_type:001760f0(c
                                                                                          load_cheat_directory:00181010(c), 
                                                                                          update_cheat_listing:00182254(c), 
                                                                                          input_log_playback:00188f34(c), 
                                                                                          FileInStream_Seek:001aede8(c), 
                                                                                          File_Seek:001af188(c), 
                                                                                          File_GetLength:001af1bc(c), [more]
        0010d470 90 0a 00 d0     adrp       x16,0x25f000
        0010d474 11 06 43 f9     ldr        x17,[x16, #0x608]=>-><EXTERNAL>::ftell           = 04033110
        0010d478 10 22 18 91     add        x16,x16,#0x608
        0010d47c 20 02 1f d6     br         x17=><EXTERNAL>::ftell                           long ftell(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float atan2f(float __y, float __x)
                               Thunked-Function: <EXTERNAL>::atan2f
             float             s0:4           <RETURN>
             float             s0:4           __y
             float             s1:4           __x
                             <EXTERNAL>::atan2f                              XREF[1]:     math_atan:0020cdb8(c)  
        0010d480 90 0a 00 d0     adrp       x16,0x25f000
        0010d484 11 0a 43 f9     ldr        x17,[x16, #0x610]=>-><EXTERNAL>::atan2f          = 04033118
        0010d488 10 42 18 91     add        x16,x16,#0x610
        0010d48c 20 02 1f d6     br         x17=><EXTERNAL>::atan2f                          float atan2f(float __y, float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined uncompress()
                               Thunked-Function: <EXTERNAL>::uncompress
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::uncompress                          XREF[1]:     load_state:00174970(c)  
        0010d490 90 0a 00 d0     adrp       x16,0x25f000
        0010d494 11 0e 43 f9     ldr        x17,[x16, #0x618]=>-><EXTERNAL>::uncompress      = 04033120
        0010d498 10 62 18 91     add        x16,x16,#0x618
        0010d49c 20 02 1f d6     br         x17=><EXTERNAL>::uncompress                      undefined uncompress()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void perror(char * __s)
                               Thunked-Function: <EXTERNAL>::perror
             void              <VOID>         <RETURN>
             char *            x0:8           __s
                             <EXTERNAL>::perror                              XREF[4]:     initialize_memory:0011c470(c), 
                                                                                          initialize_memory:0011c654(c), 
                                                                                          initialize_memory:0011c6e0(c), 
                                                                                          gamecard_initialize_homebrew:001
        0010d4a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4a4 11 12 43 f9     ldr        x17,[x16, #0x620]=>-><EXTERNAL>::perror          = 04033128
        0010d4a8 10 82 18 91     add        x16,x16,#0x620
        0010d4ac 20 02 1f d6     br         x17=><EXTERNAL>::perror                          void perror(char * __s)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int _setjmp(__jmp_buf_tag * __env)
                               Thunked-Function: <EXTERNAL>::_setjmp
             int               w0:4           <RETURN>
             __jmp_buf_tag *   x0:8           __env
                             <EXTERNAL>::_setjmp                             XREF[3]:     main:0010e498(c), 
                                                                                          luaD_rawrunprotected:001f5f18(c), 
                                                                                          luaD_rawrunprotected.constprop.0
        0010d4b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4b4 11 16 43 f9     ldr        x17,[x16, #0x628]=>-><EXTERNAL>::_setjmp         = 04033130
        0010d4b8 10 a2 18 91     add        x16,x16,#0x628
        0010d4bc 20 02 1f d6     br         x17=><EXTERNAL>::_setjmp                         int _setjmp(__jmp_buf_tag * __env)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CaptureMouse()
                               Thunked-Function: <EXTERNAL>::SDL_Capture
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_CaptureMouse                    XREF[1]:     platform_initialize_input:0018c3
        0010d4c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4c4 11 1a 43 f9     ldr        x17,[x16, #0x630]=>-><EXTERNAL>::SDL_CaptureMo   = 04033138
        0010d4c8 10 c2 18 91     add        x16,x16,#0x630
        0010d4cc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_CaptureMouse                undefined SDL_CaptureMouse()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcslen(wchar_t * __s)
                               Thunked-Function: <EXTERNAL>::wcslen
             size_t            x0:8           <RETURN>
             wchar_t *         x0:8           __s
                             <EXTERNAL>::wcslen                              XREF[65]:    patch_firmware_user_data:0011bb0
                                                                                          AddString:001b4070(c), 
                                                                                          GetString:001b4434(c), 
                                                                                          wcsncatz:001b4e5c(c), 
                                                                                          PointToName:001b5c20(c), 
                                                                                          PointToLastChar:001b5c70(c), 
                                                                                          SetExt:001b5ef0(c), 
                                                                                          AddEndSlash:001b61b4(c), 
                                                                                          NextVolumeName:001b6744(c), 
                                                                                          NextVolumeName:001b6858(c), 
                                                                                          NextVolumeName:001b6930(c), 
                                                                                          DosSlashToUnix:001b6ea8(c), 
                                                                                          ReadCommentData:001b99a8(c), 
                                                                                          ReadCommentData:001b9aac(c), 
                                                                                          GetComment:001ba380(c), 
                                                                                          GetComment:001ba5d0(c), 
                                                                                          SetKey30:001c0360(c), 
                                                                                          SetKey30:001c0528(c), 
                                                                                          Set:001c47ac(c), 
                                                                                          ExtrPrepareName:001c9500(c), 
                                                                                          [more]
        0010d4d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4d4 11 1e 43 f9     ldr        x17,[x16, #0x638]=>-><EXTERNAL>::wcslen          = 04033140
        0010d4d8 10 e2 18 91     add        x16,x16,#0x638
        0010d4dc 20 02 1f d6     br         x17=><EXTERNAL>::wcslen                          size_t wcslen(wchar_t * __s)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fileno(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fileno
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::fileno                              XREF[3]:     backup_save.part.0:00171f10(c), 
                                                                                          GetOpenFileTime:001b8028(c), 
                                                                                          IsDevice:001b89c0(c)  
        0010d4e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4e4 11 22 43 f9     ldr        x17,[x16, #0x640]=>-><EXTERNAL>::fileno          = 04033148
        0010d4e8 10 02 19 91     add        x16,x16,#0x640
        0010d4ec 20 02 1f d6     br         x17=><EXTERNAL>::fileno                          int fileno(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_begin_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_begin
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_begin_catch                   XREF[7]:     001b358c(c), 001b359c(c), 
                                                                                          001b35fc(c), 001b36b4(c), 
                                                                                          001b3a54(c), 001b3a64(c), 
                                                                                          001b3e1c(c)  
        0010d4f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d4f4 11 26 43 f9     ldr        x17,[x16, #0x648]=>-><EXTERNAL>::__cxa_begin_c   = 04033150
        0010d4f8 10 22 19 91     add        x16,x16,#0x648
        0010d4fc 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_begin_catch               undefined __cxa_begin_catch()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __mode_t umask(__mode_t __mask)
                               Thunked-Function: <EXTERNAL>::umask
             __mode_t          w0:4           <RETURN>
             __mode_t          w0:4           __mask
                             <EXTERNAL>::umask                               XREF[2]:     ConvertAttributes:001bc290(c), 
                                                                                          ConvertAttributes:001bc298(c)  
        0010d500 90 0a 00 d0     adrp       x16,0x25f000
        0010d504 11 2a 43 f9     ldr        x17,[x16, #0x650]=>-><EXTERNAL>::umask           = 04033158
        0010d508 10 42 19 91     add        x16,x16,#0x650
        0010d50c 20 02 1f d6     br         x17=><EXTERNAL>::umask                           __mode_t umask(__mode_t __mask)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_memset()
                               Thunked-Function: <EXTERNAL>::SDL_memset
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_memset                          XREF[1]:     initialize_audio:0018c9d8(c)  
        0010d510 90 0a 00 d0     adrp       x16,0x25f000
        0010d514 11 2e 43 f9     ldr        x17,[x16, #0x658]=>-><EXTERNAL>::SDL_memset      = 04033160
        0010d518 10 62 19 91     add        x16,x16,#0x658
        0010d51c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_memset                      undefined SDL_memset()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * ctime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::ctime
             char *            x0:8           <RETURN>
             time_t *          x0:8           __timer
                             <EXTERNAL>::ctime                               XREF[4]:     reset_rtc:00171a1c(c), 
                                                                                          rtc_load_savestate:00171b5c(c), 
                                                                                          rtc_store_savestate:00171cb0(c), 
                                                                                          draw_menu_bg:0017f9f8(c)  
        0010d520 90 0a 00 d0     adrp       x16,0x25f000
        0010d524 11 32 43 f9     ldr        x17,[x16, #0x660]=>-><EXTERNAL>::ctime           = 04033168
        0010d528 10 82 19 91     add        x16,x16,#0x660
        0010d52c 20 02 1f d6     br         x17=><EXTERNAL>::ctime                           char * ctime(time_t * __timer)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towupper(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towupper
             wint_t            w0:4           <RETURN>
             wint_t            w0:4           __wc
                             <EXTERNAL>::towupper                            XREF[6]:     wcsicomp:001befa0(c), 
                                                                                          wcsicomp:001befac(c), 
                                                                                          wcsnicomp:001bf034(c), 
                                                                                          wcsnicomp:001bf040(c), 
                                                                                          wcsupper:001bf0f0(c), 
                                                                                          toupperw:001bf110(j)  
        0010d530 90 0a 00 d0     adrp       x16,0x25f000
        0010d534 11 36 43 f9     ldr        x17,[x16, #0x668]=>-><EXTERNAL>::towupper        = 04033170
        0010d538 10 a2 19 91     add        x16,x16,#0x668
        0010d53c 20 02 1f d6     br         x17=><EXTERNAL>::towupper                        wint_t towupper(wint_t __wc)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open
             int               w0:4           <RETURN>
             char *            x0:8           __file
             int               w1:4           __oflag
                             <EXTERNAL>::open                                XREF[3]:     gamecard_initialize_homebrew:001
                                                                                          nds_file_open_cached:00175404(c), 
                                                                                          nds_file_open:00175604(c)  
        0010d540 90 0a 00 d0     adrp       x16,0x25f000
        0010d544 11 3a 43 f9     ldr        x17,[x16, #0x670]=>-><EXTERNAL>::open            = 04033178
        0010d548 10 c2 19 91     add        x16,x16,#0x670
        0010d54c 20 02 1f d6     br         x17=><EXTERNAL>::open                            int open(char * __file, int __of
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncat(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncat
             char *            x0:8           <RETURN>
             char *            x0:8           __dest
             char *            x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::strncat                             XREF[1]:     strncatz:001b4e20(c)  
        0010d550 90 0a 00 d0     adrp       x16,0x25f000
        0010d554 11 3e 43 f9     ldr        x17,[x16, #0x678]=>-><EXTERNAL>::strncat         = 04033180
        0010d558 10 e2 19 91     add        x16,x16,#0x678
        0010d55c 20 02 1f d6     br         x17=><EXTERNAL>::strncat                         char * strncat(char * __dest, ch
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_JoystickOpen()
                               Thunked-Function: <EXTERNAL>::SDL_Joystic
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_JoystickOpen                    XREF[2]:     platform_initialize_input:0018c3
                                                                                          platform_initialize_input:0018c3
        0010d560 90 0a 00 d0     adrp       x16,0x25f000
        0010d564 11 42 43 f9     ldr        x17,[x16, #0x680]=>-><EXTERNAL>::SDL_JoystickO   = 04033188
        0010d568 10 02 1a 91     add        x16,x16,#0x680
        0010d56c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_JoystickOpen                undefined SDL_JoystickOpen()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_init(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               w0:4           <RETURN>
             pthread_cond_t    x0:8           __cond
             pthread_condat    x1:8           __cond_attr
                             <EXTERNAL>::pthread_cond_init                   XREF[9]:     initialize_video:001312dc(c), 
                                                                                          initialize_video:001312ec(c), 
                                                                                          initialize_video_3d:001597d8(c), 
                                                                                          initialize_video_3d:001597e4(c), 
                                                                                          initialize_video_3d:00159844(c), 
                                                                                          initialize_video_3d:00159854(c), 
                                                                                          initialize_video_3d:00159864(c), 
                                                                                          ThreadPool:001e76e8(c), 
                                                                                          ThreadPool:001e7784(c)  
        0010d570 90 0a 00 d0     adrp       x16,0x25f000
        0010d574 11 46 43 f9     ldr        x17,[x16, #0x688]=>-><EXTERNAL>::pthread_cond_   = 04033190
        0010d578 10 22 1a 91     add        x16,x16,#0x688
        0010d57c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_cond_init               int pthread_cond_init(pthread_co
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_init(pthread_attr_t * __attr)
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               w0:4           <RETURN>
             pthread_attr_t    x0:8           __attr
                             <EXTERNAL>::pthread_attr_init                   XREF[1]:     ThreadCreate:001e7594(c)  
        0010d580 90 0a 00 d0     adrp       x16,0x25f000
        0010d584 11 4a 43 f9     ldr        x17,[x16, #0x690]=>-><EXTERNAL>::pthread_attr_   = 040331a0
        0010d588 10 42 1a 91     add        x16,x16,#0x690
        0010d58c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_attr_init               int pthread_attr_init(pthread_at
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBack()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflateBack                         XREF[1]:     unzip_file_to_memory_partial:001
        0010d590 90 0a 00 d0     adrp       x16,0x25f000
        0010d594 11 4e 43 f9     ldr        x17,[x16, #0x698]=>-><EXTERNAL>::inflateBack     = 040331a8
        0010d598 10 62 1a 91     add        x16,x16,#0x698
        0010d59c 20 02 1f d6     br         x17=><EXTERNAL>::inflateBack                     undefined inflateBack()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcscat_chk()
                               Thunked-Function: <EXTERNAL>::__wcscat_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__wcscat_chk                        XREF[4]:     GenArcName:001b5b60(c), 
                                                                                          MakeName:001b62dc(c), 
                                                                                          Next:001cbb08(c), 
                                                                                          ExclCheckArgs:001e9c40(c)  
        0010d5a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5a4 11 52 43 f9     ldr        x17,[x16, #0x6a0]=>-><EXTERNAL>::__wcscat_chk    = 040331b0
        0010d5a8 10 82 1a 91     add        x16,x16,#0x6a0
        0010d5ac 20 02 1f d6     br         x17=><EXTERNAL>::__wcscat_chk                    undefined __wcscat_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_JoystickName()
                               Thunked-Function: <EXTERNAL>::SDL_Joystic
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_JoystickName                    XREF[1]:     platform_set_default_controls:00
        0010d5b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5b4 11 56 43 f9     ldr        x17,[x16, #0x6a8]=>-><EXTERNAL>::SDL_JoystickN   = 040331b8
        0010d5b8 10 a2 1a 91     add        x16,x16,#0x6a8
        0010d5bc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_JoystickName                undefined SDL_JoystickName()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fclose(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fclose
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::fclose                              XREF[81]:    spu_load_fake_microphone_data:00
                                                                                          gamecard_load_gba:0016ed74(c), 
                                                                                          gamecard_load_gba:0016ee34(c), 
                                                                                          gamecard_load_gba:0016eed0(c), 
                                                                                          gamecard_load_gba:0016eef4(c), 
                                                                                          gamecard_load_gba:0016ef18(c), 
                                                                                          load_nds:0016fe20(c), 
                                                                                          gamecard_close:00170948(c), 
                                                                                          backup_save.part.0:00171dcc(c), 
                                                                                          backup_save.part.0:00171f4c(c), 
                                                                                          initialize_backup:00172614(c), 
                                                                                          load_state:0017483c(c), 
                                                                                          load_state:00174ad4(c), 
                                                                                          load_state:00174bc4(c), 
                                                                                          nds_file_open:00175a7c(c), 
                                                                                          nds_file_open:00175ae8(c), 
                                                                                          nds_file_open:00175b3c(c), 
                                                                                          nds_file_open:00175c10(c), 
                                                                                          nds_file_open:00175ca8(c), 
                                                                                          ~File:001b777c(c), [more]
        0010d5c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5c4 11 5a 43 f9     ldr        x17,[x16, #0x6b0]=>-><EXTERNAL>::fclose          = 040331c0
        0010d5c8 10 c2 1a 91     add        x16,x16,#0x6b0
        0010d5cc 20 02 1f d6     br         x17=><EXTERNAL>::fclose                          int fclose(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_allocate_exception()
                               Thunked-Function: <EXTERNAL>::__cxa_alloc
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_allocate_exception            XREF[4]:     Throw:0010e398(c), 
                                                                                          Init:001dfd7c(c), 
                                                                                          Init:001dfda8(c), 
                                                                                          Init:001e1b2c(c)  
        0010d5d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5d4 11 5e 43 f9     ldr        x17,[x16, #0x6b8]=>-><EXTERNAL>::__cxa_allocat   = 040331c8
        0010d5d8 10 e2 1a 91     add        x16,x16,#0x6b8
        0010d5dc 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_allocate_exception        undefined __cxa_allocate_excepti
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int memcmp(void * __s1, void * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::memcmp
             int               w0:4           <RETURN>
             void *            x0:8           __s1
             void *            x1:8           __s2
             size_t            x2:8           __n
                             <EXTERNAL>::memcmp                              XREF[7]:     find_custom_cheat:00181efc(c), 
                                                                                          unzip_find_file_entry:001a6e98(c
                                                                                          unzip_find_file_entry:001a6f4c(c
                                                                                          luaS_eqlngstr:001fffe4(c), 
                                                                                          luaS_newlstr:00200338(c), 
                                                                                          match:0020f4f0(c), 
                                                                                          str_find_aux:0020fe48(c)  
        0010d5e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5e4 11 62 43 f9     ldr        x17,[x16, #0x6c0]=>-><EXTERNAL>::memcmp          = 040331d0
        0010d5e8 10 02 1b 91     add        x16,x16,#0x6c0
        0010d5ec 20 02 1f d6     br         x17=><EXTERNAL>::memcmp                          int memcmp(void * __s1, void * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlsym()
                               Thunked-Function: <EXTERNAL>::dlsym
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::dlsym                               XREF[1]:     lookforfunc:00213cfc(c)  
        0010d5f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d5f4 11 66 43 f9     ldr        x17,[x16, #0x6c8]=>-><EXTERNAL>::dlsym           = 040331d8
        0010d5f8 10 22 1b 91     add        x16,x16,#0x6c8
        0010d5fc 20 02 1f d6     br         x17=><EXTERNAL>::dlsym                           undefined dlsym()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetCurrentDisplayMode()
                               Thunked-Function: <EXTERNAL>::SDL_GetCurr
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_GetCurrentDisplayMode           XREF[2]:     clear_screen:0018a3ec(c), 
                                                                                          set_screen_menu_off:0018a5d0(c)  
        0010d600 90 0a 00 d0     adrp       x16,0x25f000
        0010d604 11 6a 43 f9     ldr        x17,[x16, #0x6d0]=>-><EXTERNAL>::SDL_GetCurren   = 040331e0
        0010d608 10 42 1b 91     add        x16,x16,#0x6d0
        0010d60c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_GetCurrentDisplayMode       undefined SDL_GetCurrentDisplayM
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemmove(wchar_t * __s1, wchar_t * __s2,
                               Thunked-Function: <EXTERNAL>::wmemmove
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __s1
             wchar_t *         x1:8           __s2
             size_t            x2:8           __n
                             <EXTERNAL>::wmemmove                            XREF[1]:     GenArcName:001b5a9c(c)  
        0010d610 90 0a 00 d0     adrp       x16,0x25f000
        0010d614 11 6e 43 f9     ldr        x17,[x16, #0x6d8]=>-><EXTERNAL>::wmemmove        = 040331e8
        0010d618 10 62 1b 91     add        x16,x16,#0x6d8
        0010d61c 20 02 1f d6     br         x17=><EXTERNAL>::wmemmove                        wchar_t * wmemmove(wchar_t * __s
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long strtol(char * __nptr, char * * __endptr, int 
                               Thunked-Function: <EXTERNAL>::strtol
             long              x0:8           <RETURN>
             char *            x0:8           __nptr
             char * *          x1:8           __endptr
             int               w2:4           __base
                             <EXTERNAL>::strtol                              XREF[117]:   process_arguments:0010f374(c), 
                                                                                          process_arguments:0010f3c4(c), 
                                                                                          process_arguments:0010f56c(c), 
                                                                                          process_arguments:0010f5b8(c), 
                                                                                          load_config_file:001789e8(c), 
                                                                                          load_config_file:00178a1c(c), 
                                                                                          load_config_file:00178a34(c), 
                                                                                          load_config_file:00178a4c(c), 
                                                                                          load_config_file:00178a64(c), 
                                                                                          load_config_file:00178a7c(c), 
                                                                                          load_config_file:00178a94(c), 
                                                                                          load_config_file:00178aac(c), 
                                                                                          load_config_file:00178ac4(c), 
                                                                                          load_config_file:00178adc(c), 
                                                                                          load_config_file:00178af4(c), 
                                                                                          load_config_file:00178b0c(c), 
                                                                                          load_config_file:00178b24(c), 
                                                                                          load_config_file:00178b3c(c), 
                                                                                          load_config_file:00178b54(c), 
                                                                                          load_config_file:00178b6c(c), 
                                                                                          [more]
        0010d620 90 0a 00 d0     adrp       x16,0x25f000
        0010d624 11 72 43 f9     ldr        x17,[x16, #0x6e0]=>-><EXTERNAL>::strtol          = 040331f0
        0010d628 10 82 1b 91     add        x16,x16,#0x6e0
        0010d62c 20 02 1f d6     br         x17=><EXTERNAL>::strtol                          long strtol(char * __nptr, char 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * popen(char * __command, char * __modes)
                               Thunked-Function: <EXTERNAL>::popen
             FILE *            x0:8           <RETURN>
             char *            x0:8           __command
             char *            x1:8           __modes
                             <EXTERNAL>::popen                               XREF[1]:     io_popen:0020af84(c)  
        0010d630 90 0a 00 d0     adrp       x16,0x25f000
        0010d634 11 76 43 f9     ldr        x17,[x16, #0x6e8]=>-><EXTERNAL>::popen           = 040331f8
        0010d638 10 a2 1b 91     add        x16,x16,#0x6e8
        0010d63c 20 02 1f d6     br         x17=><EXTERNAL>::popen                           FILE * popen(char * __command, c
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcschr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcschr
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __wcs
             wchar_t           w1:4           __wc
                             <EXTERNAL>::wcschr                              XREF[20]:    GenArcName:001b576c(c), 
                                                                                          GenArcName:001b57f4(c), 
                                                                                          ConvertPath:001b5de0(c), 
                                                                                          ConvertPath:001b5df0(c), 
                                                                                          GetVolNumPart:001b66f4(c), 
                                                                                          MakeNameUsable:001b6ae8(c), 
                                                                                          MakeNameUsable:001b6b20(c), 
                                                                                          MakeNameUsable:001b6b44(c), 
                                                                                          GetPathRoot:001b7128(c), 
                                                                                          GetPathRoot:001b7138(c), 
                                                                                          ViewComment:001baadc(c), 
                                                                                          WideToChar:001be804(c), 
                                                                                          ProcessSwitch:001e874c(c), 
                                                                                          ProcessSwitch:001e8bd8(c), 
                                                                                          ParseArg:001e92e4(c), 
                                                                                          ParseArg:001e937c(c), 
                                                                                          ProcessCommand:001ea00c(c), 
                                                                                          match:001ed9f0(c), 
                                                                                          match:001eda24(c), 
                                                                                          match:001eda9c(c)  
        0010d640 90 0a 00 d0     adrp       x16,0x25f000
        0010d644 11 7a 43 f9     ldr        x17,[x16, #0x6f0]=>-><EXTERNAL>::wcschr          = 04033200
        0010d648 10 c2 1b 91     add        x16,x16,#0x6f0
        0010d64c 20 02 1f d6     br         x17=><EXTERNAL>::wcschr                          wchar_t * wcschr(wchar_t * __wcs
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __sprintf_chk()
                               Thunked-Function: <EXTERNAL>::__sprintf_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__sprintf_chk                       XREF[298]:   load_system_file:0010eae4(c), 
                                                                                          reset_system:0010fda0(c), 
                                                                                          update_frame:001310bc(c), 
                                                                                          reset_spu:0016dbdc(c), 
                                                                                          reset_spu:0016dc50(c), 
                                                                                          gamecard_initialize_homebrew:001
                                                                                          gamecard_initialize_homebrew:001
                                                                                          load_nds:0016fda0(c), 
                                                                                          load_nds:0016ffb8(c), 
                                                                                          load_nds:0017007c(c), 
                                                                                          initialize_gamecard:001709f4(c), 
                                                                                          initialize_gamecard:00170a24(c), 
                                                                                          xml_parse_line:00172fb0(c), 
                                                                                          initialize_game_database:0017376
                                                                                          initialize_game_database:00173b0
                                                                                          initialize_game_database:00173d5
                                                                                          nds_file_open_cached:001753f8(c), 
                                                                                          nds_file_open:001756a4(c), 
                                                                                          nds_file_open:001756c8(c), 
                                                                                          nds_file_open:001757b4(c), [more]
        0010d650 90 0a 00 d0     adrp       x16,0x25f000
        0010d654 11 7e 43 f9     ldr        x17,[x16, #0x6f8]=>-><EXTERNAL>::__sprintf_chk   = 04033208
        0010d658 10 e2 1b 91     add        x16,x16,#0x6f8
        0010d65c 20 02 1f d6     br         x17=><EXTERNAL>::__sprintf_chk                   undefined __sprintf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void free(void * __ptr)
                               Thunked-Function: <EXTERNAL>::free
             void              <VOID>         <RETURN>
             void *            x0:8           __ptr
                             <EXTERNAL>::free                                XREF[272]:   memory_clear_slot2:0011acf0(c), 
                                                                                          memory_clear_slot2:0011ad00(c), 
                                                                                          memory_clear_slot2:0011ad10(c), 
                                                                                          cpu_block_create:0012cea0(c), 
                                                                                          reset_video:00131524(c), 
                                                                                          texture_cache_create:0016b37c(c), 
                                                                                          texture_cache_create:0016b3a4(c), 
                                                                                          update_texture_cache:0016ba14(c), 
                                                                                          update_texture_cache:0016ba20(c), 
                                                                                          update_texture_cache:0016ba2c(c), 
                                                                                          RAROpenArchiveEx:001b3338(c), 
                                                                                          RAROpenArchiveEx:001b33dc(c), 
                                                                                          RAROpenArchiveEx:001b33e8(c), 
                                                                                          RAROpenArchiveEx:001b33f4(c), 
                                                                                          RAROpenArchiveEx:001b3404(c), 
                                                                                          RAROpenArchiveEx:001b3414(c), 
                                                                                          RAROpenArchiveEx:001b34fc(c), 
                                                                                          ~Archive:001b97e8(c), 
                                                                                          ~Archive:001b97fc(c), 
                                                                                          GetComment:001ba5f0(c), [more]
        0010d660 90 0a 00 d0     adrp       x16,0x25f000
        0010d664 11 82 43 f9     ldr        x17,[x16, #0x700]=>-><EXTERNAL>::free            = 04033218
        0010d668 10 02 1c 91     add        x16,x16,#0x700
        0010d66c 20 02 1f d6     br         x17=><EXTERNAL>::free                            void free(void * __ptr)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mprotect(void * __addr, size_t __len, int __pr
                               Thunked-Function: <EXTERNAL>::mprotect
             int               w0:4           <RETURN>
             void *            x0:8           __addr
             size_t            x1:8           __len
             int               w2:4           __prot
                             <EXTERNAL>::mprotect                            XREF[5]:     reset_cpu_block:0012f7a4(c), 
                                                                                          reset_cpu_block:0012f7b8(c), 
                                                                                          reset_cpu_block:0012f7cc(c), 
                                                                                          initialize_translation_cache:001
                                                                                          initialize_translation_cache:001
        0010d670 90 0a 00 d0     adrp       x16,0x25f000
        0010d674 11 86 43 f9     ldr        x17,[x16, #0x708]=>-><EXTERNAL>::mprotect        = 04033220
        0010d678 10 22 1c 91     add        x16,x16,#0x708
        0010d67c 20 02 1f d6     br         x17=><EXTERNAL>::mprotect                        int mprotect(void * __addr, size
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int rand(void)
                               Thunked-Function: <EXTERNAL>::rand
             int               w0:4           <RETURN>
                             <EXTERNAL>::rand                                XREF[2]:     spu_get_microphone_sample:0016c8
                                                                                          math_randomseed:0020c8d8(c)  
        0010d680 90 0a 00 d0     adrp       x16,0x25f000
        0010d684 11 8a 43 f9     ldr        x17,[x16, #0x710]=>-><EXTERNAL>::rand            = 04033228
        0010d688 10 42 1c 91     add        x16,x16,#0x710
        0010d68c 20 02 1f d6     br         x17=><EXTERNAL>::rand                            int rand(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memset(void * __s, int __c, size_t __n)
                               Thunked-Function: <EXTERNAL>::memset
             void *            x0:8           <RETURN>
             void *            x0:8           __s
             int               w1:4           __c
             size_t            x2:8           __n
                             <EXTERNAL>::memset                              XREF[220]:   initialize_memory:0011c56c(c), 
                                                                                          reset_memory:0011c82c(c), 
                                                                                          reset_memory:0011c840(c), 
                                                                                          reset_memory:0011c8a8(c), 
                                                                                          reset_memory:0011c8b8(c), 
                                                                                          reset_memory:0011c8c8(c), 
                                                                                          reset_memory:0011c8d8(c), 
                                                                                          reset_memory:0011c8e8(c), 
                                                                                          reset_memory:0011c8f8(c), 
                                                                                          reset_memory:0011c908(c), 
                                                                                          reset_memory:0011c918(c), 
                                                                                          reset_memory:0011c928(c), 
                                                                                          reset_memory:0011c938(c), 
                                                                                          reset_memory:0011c948(c), 
                                                                                          reset_memory:0011c958(c), 
                                                                                          reset_memory:0011c968(c), 
                                                                                          reset_memory:0011c978(c), 
                                                                                          reset_memory:0011c98c(c), 
                                                                                          reset_memory:0011c99c(c), 
                                                                                          RAROpenArchiveEx:001b3488(c), 
                                                                                          [more]
        0010d690 90 0a 00 d0     adrp       x16,0x25f000
        0010d694 11 8e 43 f9     ldr        x17,[x16, #0x718]=>-><EXTERNAL>::memset          = 04033230
        0010d698 10 62 1c 91     add        x16,x16,#0x718
        0010d69c 20 02 1f d6     br         x17=><EXTERNAL>::memset                          void * memset(void * __s, int __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strchr
             char *            x0:8           <RETURN>
             char *            x0:8           __s
             int               w1:4           __c
                             <EXTERNAL>::strchr                              XREF[27]:    xml_parse_line:00172dfc(c), 
                                                                                          xml_parse_line:00172ea8(c), 
                                                                                          load_config_file:00178018(c), 
                                                                                          file_info_cache_load:0017ab60(c), 
                                                                                          file_info_cache_load:0017ab74(c), 
                                                                                          parse_commands:00183060(c), 
                                                                                          parse_commands:00183088(c), 
                                                                                          step_debug:00183228(c), 
                                                                                          step_debug:0018327c(c), 
                                                                                          step_debug:0018329c(c), 
                                                                                          MakeNameUsable:001b6a18(c), 
                                                                                          MakeNameUsable:001b6a50(c), 
                                                                                          MakeNameUsable:001b6a74(c), 
                                                                                          lua_getinfo:001f5424(c), 
                                                                                          lua_getinfo:001f5444(c), 
                                                                                          f_parser:001f5e04(c), 
                                                                                          f_parser:001f5e4c(c), 
                                                                                          propagatemark:001f907c(c), 
                                                                                          propagatemark:001f908c(c), 
                                                                                          luaO_pushvfstring:001fb384(c), 
                                                                                          [more]
        0010d6a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6a4 11 92 43 f9     ldr        x17,[x16, #0x720]=>-><EXTERNAL>::strchr          = 04033238
        0010d6a8 10 82 1c 91     add        x16,x16,#0x720
        0010d6ac 20 02 1f d6     br         x17=><EXTERNAL>::strchr                          char * strchr(char * __s, int __c)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_unlock(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               w0:4           <RETURN>
             pthread_mutex_    x0:8           __mutex
                             <EXTERNAL>::pthread_mutex_unlock                XREF[28]:    video_render_thread:0012faa4(c), 
                                                                                          video_render_thread:0012fad4(c), 
                                                                                          video_render_scanlines:00130cec(
                                                                                          video_render_scanlines:00130d48(
                                                                                          update_frame_3d_1x:00152a48(c), 
                                                                                          update_frame_3d_1x:00152c70(c), 
                                                                                          video_3d_render_thread:00158ecc(
                                                                                          video_3d_render_thread:00158ef8(
                                                                                          update_frame_3d_4x:001590e8(c), 
                                                                                          update_frame_3d_4x:00159310(c), 
                                                                                          video_3d_run_thread:001594cc(c), 
                                                                                          video_3d_run_thread:00159500(c), 
                                                                                          video_3d_run_thread:00159530(c), 
                                                                                          ~ThreadPool:001e7898(c), 
                                                                                          ~ThreadPool:001e7930(c), 
                                                                                          ~ThreadPool:001e7990(c), 
                                                                                          PoolThreadLoop:001e7a94(c), 
                                                                                          PoolThreadLoop:001e7aec(c), 
                                                                                          AddTask:001e7cf8(c), 
                                                                                          AddTask:001e7d6c(c), [more]
        0010d6b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6b4 11 96 43 f9     ldr        x17,[x16, #0x728]=>-><EXTERNAL>::pthread_mutex   = 04033240
        0010d6b8 10 a2 1c 91     add        x16,x16,#0x728
        0010d6bc 20 02 1f d6     br         x17=><EXTERNAL>::pthread_mutex_unlock            int pthread_mutex_unlock(pthread
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sqrtf(float __x)
                               Thunked-Function: <EXTERNAL>::sqrtf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sqrtf                               XREF[1]:     math_sqrt:0020c874(c)  
        0010d6c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6c4 11 9a 43 f9     ldr        x17,[x16, #0x730]=>-><EXTERNAL>::sqrtf           = 04033248
        0010d6c8 10 c2 1c 91     add        x16,x16,#0x730
        0010d6cc 20 02 1f d6     br         x17=><EXTERNAL>::sqrtf                           float sqrtf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __fprintf_chk()
                               Thunked-Function: <EXTERNAL>::__fprintf_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__fprintf_chk                       XREF[136]:   save_config_file:00177250(c), 
                                                                                          save_config_file:0017726c(c), 
                                                                                          save_config_file:00177288(c), 
                                                                                          save_config_file:001772a4(c), 
                                                                                          save_config_file:001772c0(c), 
                                                                                          save_config_file:001772dc(c), 
                                                                                          save_config_file:001772f8(c), 
                                                                                          save_config_file:00177314(c), 
                                                                                          save_config_file:00177330(c), 
                                                                                          save_config_file:0017734c(c), 
                                                                                          save_config_file:00177368(c), 
                                                                                          save_config_file:00177384(c), 
                                                                                          save_config_file:001773a0(c), 
                                                                                          save_config_file:001773bc(c), 
                                                                                          save_config_file:001773d8(c), 
                                                                                          save_config_file:001773f4(c), 
                                                                                          save_config_file:00177410(c), 
                                                                                          save_config_file:0017742c(c), 
                                                                                          save_config_file:00177448(c), 
                                                                                          save_config_file:00177464(c), 
                                                                                          [more]
        0010d6d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6d4 11 9e 43 f9     ldr        x17,[x16, #0x738]=>-><EXTERNAL>::__fprintf_chk   = 04033250
        0010d6d8 10 e2 1c 91     add        x16,x16,#0x738
        0010d6dc 20 02 1f d6     br         x17=><EXTERNAL>::__fprintf_chk                   undefined __fprintf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int isatty(int __fd)
                               Thunked-Function: <EXTERNAL>::isatty
             int               w0:4           <RETURN>
             int               w0:4           __fd
                             <EXTERNAL>::isatty                              XREF[1]:     IsDevice:001b89c4(c)  
        0010d6e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6e4 11 a2 43 f9     ldr        x17,[x16, #0x740]=>-><EXTERNAL>::isatty          = 04033258
        0010d6e8 10 02 1d 91     add        x16,x16,#0x740
        0010d6ec 20 02 1f d6     br         x17=><EXTERNAL>::isatty                          int isatty(int __fd)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlerror()
                               Thunked-Function: <EXTERNAL>::dlerror
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::dlerror                             XREF[2]:     lookforfunc:00213ddc(c), 
                                                                                          lookforfunc:00213e04(c)  
        0010d6f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d6f4 11 a6 43 f9     ldr        x17,[x16, #0x748]=>-><EXTERNAL>::dlerror         = 04033260
        0010d6f8 10 22 1d 91     add        x16,x16,#0x748
        0010d6fc 20 02 1f d6     br         x17=><EXTERNAL>::dlerror                         undefined dlerror()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void qsort(void * __base, size_t __nmemb, size_t _
                               Thunked-Function: <EXTERNAL>::qsort
             void              <VOID>         <RETURN>
             void *            x0:8           __base
             size_t            x1:8           __nmemb
             size_t            x2:8           __size
             __compar_fn_t     x3:8           __compar
                             <EXTERNAL>::qsort                               XREF[7]:     cpu_block_log_all:0012f430(c), 
                                                                                          initialize_game_database:00173cd
                                                                                          initialize_game_database:00173cf
                                                                                          file_info_cache_load:0017ad58(c), 
                                                                                          load_file:0017b844(c), 
                                                                                          load_file:0017b85c(c), 
                                                                                          load_cheat_directory:0018103c(c)  
        0010d700 90 0a 00 d0     adrp       x16,0x25f000
        0010d704 11 aa 43 f9     ldr        x17,[x16, #0x750]=>-><EXTERNAL>::qsort           = 04033268
        0010d708 10 42 1d 91     add        x16,x16,#0x750
        0010d70c 20 02 1f d6     br         x17=><EXTERNAL>::qsort                           void qsort(void * __base, size_t
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __lxstat64(int __ver, char * __filename, stat6
                               Thunked-Function: <EXTERNAL>::__lxstat64
             int               w0:4           <RETURN>
             int               w0:4           __ver
             char *            x1:8           __filename
             stat64 *          x2:8           __stat_buf
                             <EXTERNAL>::__lxstat64                          XREF[1]:     FastFind:001cb8b0(c)  
        0010d710 90 0a 00 d0     adrp       x16,0x25f000
        0010d714 11 ae 43 f9     ldr        x17,[x16, #0x758]=>-><EXTERNAL>::__lxstat64      = 04033270
        0010d718 10 62 1d 91     add        x16,x16,#0x758
        0010d71c 20 02 1f d6     br         x17=><EXTERNAL>::__lxstat64                      int __lxstat64(int __ver, char *
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_finalize()
                               Thunked-Function: <EXTERNAL>::__cxa_final
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_finalize                      XREF[1]:     __do_global_dtors_aux:0010e8ac(c
        0010d720 90 0a 00 d0     adrp       x16,0x25f000
        0010d724 11 b2 43 f9     ldr        x17,[x16, #0x760]=>-><EXTERNAL>::__cxa_finalize  = 04033278
        0010d728 10 82 1d 91     add        x16,x16,#0x760
        0010d72c 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_finalize                  undefined __cxa_finalize()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __snprintf_chk()
                               Thunked-Function: <EXTERNAL>::__snprintf_
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__snprintf_chk                      XREF[6]:     initialize_system_directory:0010
                                                                                          gamecard_load_gba:0016ecd0(c), 
                                                                                          gamecard_load_gba:0016edb8(c), 
                                                                                          gamecard_load_program:0016f6cc(c
                                                                                          nds_file_open:00175700(c), 
                                                                                          load_file:0017b89c(c)  
        0010d730 90 0a 00 d0     adrp       x16,0x25f000
        0010d734 11 b6 43 f9     ldr        x17,[x16, #0x768]=>-><EXTERNAL>::__snprintf_chk  = 04033280
        0010d738 10 a2 1d 91     add        x16,x16,#0x768
        0010d73c 20 02 1f d6     br         x17=><EXTERNAL>::__snprintf_chk                  undefined __snprintf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * realloc(void * __ptr, size_t __size)
                               Thunked-Function: <EXTERNAL>::realloc
             void *            x0:8           <RETURN>
             void *            x0:8           __ptr
             size_t            x1:8           __size
                             <EXTERNAL>::realloc                             XREF[84]:    cpu_block_create:0012c430(c), 
                                                                                          cpu_block_create:0012d138(c), 
                                                                                          texture_cache_convert_compressed
                                                                                          backup_data_load_savestate:00172
                                                                                          initialize_game_database:0017373
                                                                                          initialize_game_database:00173b9
                                                                                          nds_file_open:00175b60(c), 
                                                                                          file_info_cache_load:0017ac30(c), 
                                                                                          file_info_cache_load:0017ac58(c), 
                                                                                          icon_cache_load:0017b080(c), 
                                                                                          icon_cache_load:0017b094(c), 
                                                                                          load_file:0017b798(c), 
                                                                                          load_file:0017b810(c), 
                                                                                          load_file:0017b824(c), 
                                                                                          load_file:0017c55c(c), 
                                                                                          AddString:001b40e4(c), 
                                                                                          GetComment:001ba5a4(c), 
                                                                                          GetComment:001ba758(c), 
                                                                                          GetComment:001ba79c(c), 
                                                                                          GetComment:001ba7f8(c), [more]
        0010d740 90 0a 00 d0     adrp       x16,0x25f000
        0010d744 11 ba 43 f9     ldr        x17,[x16, #0x770]=>-><EXTERNAL>::realloc         = 04033288
        0010d748 10 c2 1d 91     add        x16,x16,#0x770
        0010d74c 20 02 1f d6     br         x17=><EXTERNAL>::realloc                         void * realloc(void * __ptr, siz
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * tmpfile64(void)
                               Thunked-Function: <EXTERNAL>::tmpfile64
             FILE *            x0:8           <RETURN>
                             <EXTERNAL>::tmpfile64                           XREF[1]:     io_tmpfile:0020aedc(c)  
        0010d750 90 0a 00 d0     adrp       x16,0x25f000
        0010d754 11 be 43 f9     ldr        x17,[x16, #0x778]=>-><EXTERNAL>::tmpfile64       = 04033290
        0010d758 10 e2 1d 91     add        x16,x16,#0x778
        0010d75c 20 02 1f d6     br         x17=><EXTERNAL>::tmpfile64                       FILE * tmpfile64(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_PollEvent()
                               Thunked-Function: <EXTERNAL>::SDL_PollEve
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_PollEvent                       XREF[5]:     platform_get_input:0018ad3c(c), 
                                                                                          platform_get_input:0018adbc(c), 
                                                                                          platform_get_config_input:0018b5
                                                                                          get_gui_input:0018ba2c(c), 
                                                                                          get_gui_input:0018bbb4(c)  
        0010d760 90 0a 00 d0     adrp       x16,0x25f000
        0010d764 11 c2 43 f9     ldr        x17,[x16, #0x780]=>-><EXTERNAL>::SDL_PollEvent   = 04033298
        0010d768 10 02 1e 91     add        x16,x16,#0x780
        0010d76c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_PollEvent                   undefined SDL_PollEvent()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __swprintf_chk()
                               Thunked-Function: <EXTERNAL>::__swprintf_
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__swprintf_chk                      XREF[7]:     ProcessExtra50:001bb920(c), 
                                                                                          GetText:001c2b28(c), 
                                                                                          GetText:001c2b6c(c), 
                                                                                          GetText:001c2ba4(c), 
                                                                                          ThreadCreate:001e7614(c), 
                                                                                          ProcessSwitch:001e8c20(c), 
                                                                                          GetAutoRenamedName:001ed6dc(c)  
        0010d770 90 0a 00 d0     adrp       x16,0x25f000
        0010d774 11 c6 43 f9     ldr        x17,[x16, #0x788]=>-><EXTERNAL>::__swprintf_chk  = 040332a0
        0010d778 10 22 1e 91     add        x16,x16,#0x788
        0010d77c 20 02 1f d6     br         x17=><EXTERNAL>::__swprintf_chk                  undefined __swprintf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * mmap64(void * __addr, size_t __len, int __p
                               Thunked-Function: <EXTERNAL>::mmap64
             void *            x0:8           <RETURN>
             void *            x0:8           __addr
             size_t            x1:8           __len
             int               w2:4           __prot
             int               w3:4           __flags
             int               w4:4           __fd
             __off64_t         x5:8           __offset
                             <EXTERNAL>::mmap64                              XREF[1]:     unzip_find_file_entry:001a6d88(c
        0010d780 90 0a 00 d0     adrp       x16,0x25f000
        0010d784 11 ca 43 f9     ldr        x17,[x16, #0x790]=>-><EXTERNAL>::mmap64          = 040332a8
        0010d788 10 42 1e 91     add        x16,x16,#0x790
        0010d78c 20 02 1f d6     br         x17=><EXTERNAL>::mmap64                          void * mmap64(void * __addr, siz
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncpy(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncpy
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __dest
             wchar_t *         x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::wcsncpy                             XREF[9]:     ProcessFile:001b3904(c), 
                                                                                          RARReadHeaderEx:001b3b38(c), 
                                                                                          RARReadHeaderEx:001b3b68(c), 
                                                                                          wcsncpyz:001b4db0(c), 
                                                                                          GetFilePath:001b6358(c), 
                                                                                          GetFilePath:001b6384(c), 
                                                                                          GetPathRoot:001b7160(c), 
                                                                                          GetWideName:001b7340(c), 
                                                                                          ParseArg:001e9244(c)  
        0010d790 90 0a 00 d0     adrp       x16,0x25f000
        0010d794 11 ce 43 f9     ldr        x17,[x16, #0x798]=>-><EXTERNAL>::wcsncpy         = 040332b0
        0010d798 10 62 1e 91     add        x16,x16,#0x798
        0010d79c 20 02 1f d6     br         x17=><EXTERNAL>::wcsncpy                         wchar_t * wcsncpy(wchar_t * __de
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t mktime(tm * __tp)
                               Thunked-Function: <EXTERNAL>::mktime
             time_t            x0:8           <RETURN>
             tm *              x0:8           __tp
                             <EXTERNAL>::mktime                              XREF[3]:     SetLocal:001c2848(c), 
                                                                                          SetDos:001c29cc(c), 
                                                                                          SetIsoText:001c2c90(c)  
        0010d7a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7a4 11 d2 43 f9     ldr        x17,[x16, #0x7a0]=>-><EXTERNAL>::mktime          = 040332b8
        0010d7a8 10 82 1e 91     add        x16,x16,#0x7a0
        0010d7ac 20 02 1f d6     br         x17=><EXTERNAL>::mktime                          time_t mktime(tm * __tp)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_NumJoysticks()
                               Thunked-Function: <EXTERNAL>::SDL_NumJoys
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_NumJoysticks                    XREF[1]:     platform_initialize_input:0018c3
        0010d7b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7b4 11 d6 43 f9     ldr        x17,[x16, #0x7a8]=>-><EXTERNAL>::SDL_NumJoysti   = 040332c8
        0010d7b8 10 a2 1e 91     add        x16,x16,#0x7a8
        0010d7bc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_NumJoysticks                undefined SDL_NumJoysticks()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int access(char * __name, int __type)
                               Thunked-Function: <EXTERNAL>::access
             int               w0:4           <RETURN>
             char *            x0:8           __name
             int               w1:4           __type
                             <EXTERNAL>::access                              XREF[2]:     FileExist:001b8ffc(c), 
                                                                                          WildFileExist:001b9120(c)  
        0010d7c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7c4 11 da 43 f9     ldr        x17,[x16, #0x7b0]=>-><EXTERNAL>::access          = 040332d0
        0010d7c8 10 c2 1e 91     add        x16,x16,#0x7b0
        0010d7cc 20 02 1f d6     br         x17=><EXTERNAL>::access                          int access(char * __name, int __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __longjmp_chk()
                               Thunked-Function: <EXTERNAL>::__longjmp_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__longjmp_chk                       XREF[2]:     menu:001801ac(c), 
                                                                                          luaD_throw:001f5c88(c)  
        0010d7d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7d4 11 de 43 f9     ldr        x17,[x16, #0x7b8]=>-><EXTERNAL>::__longjmp_chk   = 040332d8
        0010d7d8 10 e2 1e 91     add        x16,x16,#0x7b8
        0010d7dc 20 02 1f d6     br         x17=><EXTERNAL>::__longjmp_chk                   undefined __longjmp_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_init(pthread_mutex_t * __mutex, 
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               w0:4           <RETURN>
             pthread_mutex_    x0:8           __mutex
             pthread_mutexa    x1:8           __mutexattr
                             <EXTERNAL>::pthread_mutex_init                  XREF[10]:    initialize_video:001312bc(c), 
                                                                                          initialize_video:001312cc(c), 
                                                                                          initialize_video_3d:001597c0(c), 
                                                                                          initialize_video_3d:001597cc(c), 
                                                                                          initialize_video_3d:00159814(c), 
                                                                                          initialize_video_3d:00159824(c), 
                                                                                          initialize_video_3d:00159834(c), 
                                                                                          ThreadPool:001e76d8(c), 
                                                                                          ThreadPool:001e7774(c), 
                                                                                          ThreadPool:001e7794(c)  
        0010d7e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7e4 11 e2 43 f9     ldr        x17,[x16, #0x7c0]=>-><EXTERNAL>::pthread_mutex   = 040332e0
        0010d7e8 10 02 1f 91     add        x16,x16,#0x7c0
        0010d7ec 20 02 1f d6     br         x17=><EXTERNAL>::pthread_mutex_init              int pthread_mutex_init(pthread_m
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float acosf(float __x)
                               Thunked-Function: <EXTERNAL>::acosf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::acosf                               XREF[1]:     math_acos:0020ce38(c)  
        0010d7f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d7f4 11 e6 43 f9     ldr        x17,[x16, #0x7c8]=>-><EXTERNAL>::acosf           = 040332e8
        0010d7f8 10 22 1f 91     add        x16,x16,#0x7c8
        0010d7fc 20 02 1f d6     br         x17=><EXTERNAL>::acosf                           float acosf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t read(int __fd, void * __buf, size_t __nbyt
                               Thunked-Function: <EXTERNAL>::read
             ssize_t           x0:8           <RETURN>
             int               w0:4           __fd
             void *            x1:8           __buf
             size_t            x2:8           __nbytes
                             <EXTERNAL>::read                                XREF[8]:     gamecard_read:00170754(c), 
                                                                                          nds_file_open_cached:001754b0(c), 
                                                                                          nds_file_open:001758f8(c), 
                                                                                          unzip_in_func:001a55e0(c), 
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a7990(c)  
        0010d800 90 0a 00 d0     adrp       x16,0x25f000
        0010d804 11 ea 43 f9     ldr        x17,[x16, #0x7d0]=>-><EXTERNAL>::read            = 040332f0
        0010d808 10 42 1f 91     add        x16,x16,#0x7d0
        0010d80c 20 02 1f d6     br         x17=><EXTERNAL>::read                            ssize_t read(int __fd, void * __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackInit_()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflateBackInit_                    XREF[1]:     unzip_file_to_memory_partial:001
        0010d810 90 0a 00 d0     adrp       x16,0x25f000
        0010d814 11 ee 43 f9     ldr        x17,[x16, #0x7d8]=>-><EXTERNAL>::inflateBackIn   = 040332f8
        0010d818 10 62 1f 91     add        x16,x16,#0x7d8
        0010d81c 20 02 1f d6     br         x17=><EXTERNAL>::inflateBackInit_                undefined inflateBackInit_()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strerror(int __errnum)
                               Thunked-Function: <EXTERNAL>::strerror
             char *            x0:8           <RETURN>
             int               w0:4           __errnum
                             <EXTERNAL>::strerror                            XREF[9]:     luaL_fileresult:00206d9c(c), 
                                                                                          luaL_fileresult:00206dd8(c), 
                                                                                          luaL_execresult:00206ea8(c), 
                                                                                          luaL_loadfilex:00207f00(c), 
                                                                                          luaL_loadfilex:00208060(c), 
                                                                                          luaL_loadfilex:002080c4(c), 
                                                                                          io_input:0020b2d0(c), 
                                                                                          io_lines:0020b858(c), 
                                                                                          io_output:0020b990(c)  
        0010d820 90 0a 00 d0     adrp       x16,0x25f000
        0010d824 11 f2 43 f9     ldr        x17,[x16, #0x7e0]=>-><EXTERNAL>::strerror        = 04033308
        0010d828 10 82 1f 91     add        x16,x16,#0x7e0
        0010d82c 20 02 1f d6     br         x17=><EXTERNAL>::strerror                        char * strerror(int __errnum)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strcpy(char * __dest, char * __src)
                               Thunked-Function: <EXTERNAL>::strcpy
             char *            x0:8           <RETURN>
             char *            x0:8           __dest
             char *            x1:8           __src
                             <EXTERNAL>::strcpy                              XREF[19]:    action_input:00179e94(c), 
                                                                                          action_input:00179eb4(c), 
                                                                                          action_input:00179f04(c), 
                                                                                          draw_input:0017a098(c), 
                                                                                          draw_input:0017a0ac(c), 
                                                                                          icon_cache_add:0017b220(c), 
                                                                                          load_file:0017b510(c), 
                                                                                          load_file:0017c198(c), 
                                                                                          load_file:0017c438(c), 
                                                                                          load_file:0017c530(c), 
                                                                                          load_file:0017c58c(c), 
                                                                                          load_file:0017c76c(c), 
                                                                                          load_file:0017c78c(c), 
                                                                                          load_file:0017c810(c), 
                                                                                          disasm_arm_reg_operand:00186034(
                                                                                          disasm_arm_reg_operand2:001860b4
                                                                                          disasm_arm_mem_reg_operand2:0018
                                                                                          get_rlist:001868e4(c), 
                                                                                          disasm_branch_target:00196a4c(c)  
        0010d830 90 0a 00 d0     adrp       x16,0x25f000
        0010d834 11 f6 43 f9     ldr        x17,[x16, #0x7e8]=>-><EXTERNAL>::strcpy          = 04033310
        0010d838 10 a2 1f 91     add        x16,x16,#0x7e8
        0010d83c 20 02 1f d6     br         x17=><EXTERNAL>::strcpy                          char * strcpy(char * __dest, cha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_DestroyTexture()
                               Thunked-Function: <EXTERNAL>::SDL_Destroy
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_DestroyTexture                  XREF[1]:     set_screen_hires_mode:0018a334(c
        0010d840 90 0a 00 d0     adrp       x16,0x25f000
        0010d844 11 fa 43 f9     ldr        x17,[x16, #0x7f0]=>-><EXTERNAL>::SDL_DestroyTe   = 04033318
        0010d848 10 c2 1f 91     add        x16,x16,#0x7f0
        0010d84c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_DestroyTexture              undefined SDL_DestroyTexture()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_Delay()
                               Thunked-Function: <EXTERNAL>::SDL_Delay
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_Delay                           XREF[2]:     delay_us:0018a000(c), 
                                                                                          __synchronize:0018a0e4(c)  
        0010d850 90 0a 00 d0     adrp       x16,0x25f000
        0010d854 11 fe 43 f9     ldr        x17,[x16, #0x7f8]=>-><EXTERNAL>::SDL_Delay       = 04033320
        0010d858 10 e2 1f 91     add        x16,x16,#0x7f8
        0010d85c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_Delay                       undefined SDL_Delay()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen64(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen64
             FILE *            x0:8           <RETURN>
             char *            x0:8           __filename
             char *            x1:8           __modes
                             <EXTERNAL>::fopen64                             XREF[12]:    unzip_file:001a7510(c), 
                                                                                          unrar_file:001a7bcc(c), 
                                                                                          InFile_Open:001aef8c(c), 
                                                                                          OutFile_Open:001aefdc(c), 
                                                                                          Create:001b7b28(c), 
                                                                                          GetRnd:001c194c(c), 
                                                                                          luaL_loadfilex:00207e48(c), 
                                                                                          io_open:0020ad48(c), 
                                                                                          io_input:0020b270(c), 
                                                                                          io_lines:0020b814(c), 
                                                                                          io_output:0020b930(c), 
                                                                                          searchpath:00213bb0(c)  
        0010d860 90 0a 00 d0     adrp       x16,0x25f000
        0010d864 11 02 44 f9     ldr        x17,[x16, #0x800]=>-><EXTERNAL>::fopen64         = 04033328
        0010d868 10 02 20 91     add        x16,x16,#0x800
        0010d86c 20 02 1f d6     br         x17=><EXTERNAL>::fopen64                         FILE * fopen64(char * __filename
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strpbrk(char * __s, char * __accept)
                               Thunked-Function: <EXTERNAL>::strpbrk
             char *            x0:8           <RETURN>
             char *            x0:8           __s
             char *            x1:8           __accept
                             <EXTERNAL>::strpbrk                             XREF[2]:     luaO_str2num:001fb014(c), 
                                                                                          str_find_aux:0020fd14(c)  
        0010d870 90 0a 00 d0     adrp       x16,0x25f000
        0010d874 11 06 44 f9     ldr        x17,[x16, #0x808]=>-><EXTERNAL>::strpbrk         = 04033330
        0010d878 10 22 20 91     add        x16,x16,#0x808
        0010d87c 20 02 1f d6     br         x17=><EXTERNAL>::strpbrk                         char * strpbrk(char * __s, char 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetError()
                               Thunked-Function: <EXTERNAL>::SDL_GetError
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_GetError                        XREF[1]:     platform_set_rumble_state:0018c2
        0010d880 90 0a 00 d0     adrp       x16,0x25f000
        0010d884 11 0a 44 f9     ldr        x17,[x16, #0x810]=>-><EXTERNAL>::SDL_GetError    = 04033338
        0010d888 10 42 20 91     add        x16,x16,#0x810
        0010d88c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_GetError                    undefined SDL_GetError()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscat(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscat
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __dest
             wchar_t *         x1:8           __src
                             <EXTERNAL>::wcscat                              XREF[9]:     GenArcName:001b5890(c), 
                                                                                          GenArcName:001b589c(c), 
                                                                                          SetExt:001b5f6c(c), 
                                                                                          SetExt:001b5f80(c), 
                                                                                          SetSFXExt:001b6024(c), 
                                                                                          SetSFXExt:001b603c(c), 
                                                                                          AddEndSlash:001b61ec(c), 
                                                                                          GetConfigName:001b6598(c), 
                                                                                          ConvertNameToFull:001b7064(c)  
        0010d890 90 0a 00 d0     adrp       x16,0x25f000
        0010d894 11 0e 44 f9     ldr        x17,[x16, #0x818]=>-><EXTERNAL>::wcscat          = 04033340
        0010d898 10 62 20 91     add        x16,x16,#0x818
        0010d89c 20 02 1f d6     br         x17=><EXTERNAL>::wcscat                          wchar_t * wcscat(wchar_t * __des
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int closedir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::closedir
             int               w0:4           <RETURN>
             DIR *             x0:8           __dirp
                             <EXTERNAL>::closedir                            XREF[2]:     load_file:0017b864(c), 
                                                                                          ~FindFile:001cb810(c)  
        0010d8a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8a4 11 12 44 f9     ldr        x17,[x16, #0x820]=>-><EXTERNAL>::closedir        = 04033348
        0010d8a8 10 82 20 91     add        x16,x16,#0x820
        0010d8ac 20 02 1f d6     br         x17=><EXTERNAL>::closedir                        int closedir(DIR * __dirp)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_UpdateTexture()
                               Thunked-Function: <EXTERNAL>::SDL_UpdateT
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_UpdateTexture                   XREF[3]:     update_screen_menu:0018a294(c), 
                                                                                          initialize_screen:0018a918(c), 
                                                                                          initialize_screen:0018a930(c)  
        0010d8b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8b4 11 16 44 f9     ldr        x17,[x16, #0x828]=>-><EXTERNAL>::SDL_UpdateTex   = 04033350
        0010d8b8 10 a2 20 91     add        x16,x16,#0x828
        0010d8bc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_UpdateTexture               undefined SDL_UpdateTexture()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcsncmp(wchar_t * __s1, wchar_t * __s2, size_t
                               Thunked-Function: <EXTERNAL>::wcsncmp
             int               w0:4           <RETURN>
             wchar_t *         x0:8           __s1
             wchar_t *         x1:8           __s2
             size_t            x2:8           __n
                             <EXTERNAL>::wcsncmp                             XREF[5]:     CmpName:001edb2c(c), 
                                                                                          CmpName:001edbc4(c), 
                                                                                          CmpName:001edc18(c), 
                                                                                          CmpName:001edccc(c), 
                                                                                          CmpName:001edd6c(c)  
        0010d8c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8c4 11 1a 44 f9     ldr        x17,[x16, #0x830]=>-><EXTERNAL>::wcsncmp         = 04033358
        0010d8c8 10 c2 20 91     add        x16,x16,#0x830
        0010d8cc 20 02 1f d6     br         x17=><EXTERNAL>::wcsncmp                         int wcsncmp(wchar_t * __s1, wcha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wcscmp(wchar_t * __s1, wchar_t * __s2)
                               Thunked-Function: <EXTERNAL>::wcscmp
             int               w0:4           <RETURN>
             wchar_t *         x0:8           __s1
             wchar_t *         x1:8           __s2
                             <EXTERNAL>::wcscmp                              XREF[20]:    Search:001b4658(c), 
                                                                                          wcsicompc:001b4d30(j), 
                                                                                          Rename:001b7d98(c), 
                                                                                          ReadHeader15:001bd220(c), 
                                                                                          ReadHeader15:001bd2dc(c), 
                                                                                          ReadHeader50:001bd83c(c), 
                                                                                          SearchSubBlock:001bdf3c(c), 
                                                                                          SearchRR:001be2dc(c), 
                                                                                          SearchRR:001be3dc(c), 
                                                                                          operator==:001c4a74(c), 
                                                                                          MergeArchive:001cb444(c), 
                                                                                          MergeArchive:001cb5ac(c), 
                                                                                          Next:001cbb6c(c), 
                                                                                          Next:001cbb80(c), 
                                                                                          Load:001ecd88(c), 
                                                                                          match:001eda38(c), 
                                                                                          CmpName:001edbe0(c), 
                                                                                          CmpName:001edc9c(c), 
                                                                                          CmpName:001edd18(c), 
                                                                                          SetExtraInfo:001f09a0(c)  
        0010d8d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8d4 11 1e 44 f9     ldr        x17,[x16, #0x838]=>-><EXTERNAL>::wcscmp          = 04033360
        0010d8d8 10 e2 20 91     add        x16,x16,#0x838
        0010d8dc 20 02 1f d6     br         x17=><EXTERNAL>::wcscmp                          int wcscmp(wchar_t * __s1, wchar
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int gettimeofday(timeval * __tv, __timezone_ptr_t 
                               Thunked-Function: <EXTERNAL>::gettimeofday
             int               w0:4           <RETURN>
             timeval *         x0:8           __tv
             __timezone_ptr    x1:8           __tz
                             <EXTERNAL>::gettimeofday                        XREF[6]:     get_ticks_us:00189fac(c), 
                                                                                          __synchronize:0018a04c(c), 
                                                                                          __synchronize:0018a090(c), 
                                                                                          __synchronize:0018a0b8(c), 
                                                                                          __synchronize:0018a0cc(c), 
                                                                                          __synchronize:0018a0f0(c)  
        0010d8e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8e4 11 22 44 f9     ldr        x17,[x16, #0x840]=>-><EXTERNAL>::gettimeofday    = 04033368
        0010d8e8 10 02 21 91     add        x16,x16,#0x840
        0010d8ec 20 02 1f d6     br         x17=><EXTERNAL>::gettimeofday                    int gettimeofday(timeval * __tv,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float ldexpf(float __x, int __exponent)
                               Thunked-Function: <EXTERNAL>::ldexpf
             float             s0:4           <RETURN>
             float             s0:4           __x
             int               w0:4           __exponent
                             <EXTERNAL>::ldexpf                              XREF[1]:     math_ldexp:0020c640(c)  
        0010d8f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d8f4 11 26 44 f9     ldr        x17,[x16, #0x848]=>-><EXTERNAL>::ldexpf          = 04033370
        0010d8f8 10 22 21 91     add        x16,x16,#0x848
        0010d8fc 20 02 1f d6     br         x17=><EXTERNAL>::ldexpf                          float ldexpf(float __x, int __ex
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetRenderDrawBlendMode()
                               Thunked-Function: <EXTERNAL>::SDL_SetRend
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetRenderDrawBlendMode          XREF[1]:     initialize_screen:0018a8a8(c)  
        0010d900 90 0a 00 d0     adrp       x16,0x25f000
        0010d904 11 2a 44 f9     ldr        x17,[x16, #0x850]=>-><EXTERNAL>::SDL_SetRender   = 04033378
        0010d908 10 42 21 91     add        x16,x16,#0x850
        0010d90c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetRenderDrawBlendMode      undefined SDL_SetRenderDrawBlend
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int statvfs64(char * __file, statvfs64 * __buf)
                               Thunked-Function: <EXTERNAL>::statvfs64
             int               w0:4           <RETURN>
             char *            x0:8           __file
             statvfs64 *       x1:8           __buf
                             <EXTERNAL>::statvfs64                           XREF[1]:     GetFreeDisk:001b8f70(c)  
        0010d910 90 0a 00 d0     adrp       x16,0x25f000
        0010d914 11 2e 44 f9     ldr        x17,[x16, #0x858]=>-><EXTERNAL>::statvfs64       = 04033380
        0010d918 10 62 21 91     add        x16,x16,#0x858
        0010d91c 20 02 1f d6     br         x17=><EXTERNAL>::statvfs64                       int statvfs64(char * __file, sta
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_PauseAudio()
                               Thunked-Function: <EXTERNAL>::SDL_PauseAu
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_PauseAudio                      XREF[3]:     initialize_audio:0018ca3c(c), 
                                                                                          audio_pause:0018cad4(c), 
                                                                                          audio_unpause:0018cb08(c)  
        0010d920 90 0a 00 d0     adrp       x16,0x25f000
        0010d924 11 32 44 f9     ldr        x17,[x16, #0x860]=>-><EXTERNAL>::SDL_PauseAudio  = 04033388
        0010d928 10 82 21 91     add        x16,x16,#0x860
        0010d92c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_PauseAudio                  undefined SDL_PauseAudio()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetModState()
                               Thunked-Function: <EXTERNAL>::SDL_GetModS
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_GetModState                     XREF[1]:     platform_get_input:0018b1c0(c)  
        0010d930 90 0a 00 d0     adrp       x16,0x25f000
        0010d934 11 36 44 f9     ldr        x17,[x16, #0x868]=>-><EXTERNAL>::SDL_GetModState = 04033390
        0010d938 10 a2 21 91     add        x16,x16,#0x868
        0010d93c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_GetModState                 undefined SDL_GetModState()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined getopt_long()
                               Thunked-Function: <EXTERNAL>::getopt_long
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::getopt_long                         XREF[2]:     process_arguments:0010f164(c), 
                                                                                          process_arguments:0010f1c8(c)  
        0010d940 90 0a 00 d0     adrp       x16,0x25f000
        0010d944 11 3a 44 f9     ldr        x17,[x16, #0x870]=>-><EXTERNAL>::getopt_long     = 04033398
        0010d948 10 c2 21 91     add        x16,x16,#0x870
        0010d94c 20 02 1f d6     br         x17=><EXTERNAL>::getopt_long                     undefined getopt_long()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlopen()
                               Thunked-Function: <EXTERNAL>::dlopen
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::dlopen                              XREF[1]:     lookforfunc:00213d68(c)  
        0010d950 90 0a 00 d0     adrp       x16,0x25f000
        0010d954 11 3e 44 f9     ldr        x17,[x16, #0x878]=>-><EXTERNAL>::dlopen          = 040333a0
        0010d958 10 e2 21 91     add        x16,x16,#0x878
        0010d95c 20 02 1f d6     br         x17=><EXTERNAL>::dlopen                          undefined dlopen()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflate()
                               Thunked-Function: <EXTERNAL>::inflate
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflate                             XREF[3]:     unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a780c(c), 
                                                                                          unzip_file:001a78a8(c)  
        0010d960 90 0a 00 d0     adrp       x16,0x25f000
        0010d964 11 42 44 f9     ldr        x17,[x16, #0x880]=>-><EXTERNAL>::inflate         = 040333a8
        0010d968 10 02 22 91     add        x16,x16,#0x880
        0010d96c 20 02 1f d6     br         x17=><EXTERNAL>::inflate                         undefined inflate()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int remove(char * __filename)
                               Thunked-Function: <EXTERNAL>::remove
             int               w0:4           <RETURN>
             char *            x0:8           __filename
                             <EXTERNAL>::remove                              XREF[2]:     save_state_thread_function:00174
                                                                                          DelFile:001b9758(c)  
        0010d970 90 0a 00 d0     adrp       x16,0x25f000
        0010d974 11 46 44 f9     ldr        x17,[x16, #0x888]=>-><EXTERNAL>::remove          = 040333b0
        0010d978 10 22 22 91     add        x16,x16,#0x888
        0010d97c 20 02 1f d6     br         x17=><EXTERNAL>::remove                          int remove(char * __filename)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_broadcast(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               w0:4           <RETURN>
             pthread_cond_t    x0:8           __cond
                             <EXTERNAL>::pthread_cond_broadcast              XREF[4]:     ~ThreadPool:001e78a0(c), 
                                                                                          ~ThreadPool:001e7938(c), 
                                                                                          AddTask:001e7d00(c), 
                                                                                          WaitDone:001e7e20(c)  
        0010d980 90 0a 00 d0     adrp       x16,0x25f000
        0010d984 11 4a 44 f9     ldr        x17,[x16, #0x890]=>-><EXTERNAL>::pthread_cond_   = 040333b8
        0010d988 10 42 22 91     add        x16,x16,#0x890
        0010d98c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_cond_broadcast          int pthread_cond_broadcast(pthre
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::unlink
             int               w0:4           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::unlink                              XREF[4]:     select_delete_config_local:0017a
                                                                                          load_file:0017bc24(c), 
                                                                                          load_file:0017bc3c(c), 
                                                                                          load_file:0017c5c4(c)  
        0010d990 90 0a 00 d0     adrp       x16,0x25f000
        0010d994 11 4e 44 f9     ldr        x17,[x16, #0x898]=>-><EXTERNAL>::unlink          = 040333c0
        0010d998 10 62 22 91     add        x16,x16,#0x898
        0010d99c 20 02 1f d6     br         x17=><EXTERNAL>::unlink                          int unlink(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int putchar(int __c)
                               Thunked-Function: <EXTERNAL>::putchar
             int               w0:4           <RETURN>
             int               w0:4           __c
                             <EXTERNAL>::putchar                             XREF[22]:    initialize_video_3d:001597fc(c), 
                                                                                          print_cheats:00182018(c), 
                                                                                          print_cheats:001821a0(c), 
                                                                                          print_arm_registers:0018236c(c), 
                                                                                          print_arm_registers:001823b8(c), 
                                                                                          print_flags:001826f0(c), 
                                                                                          print_flags:001827cc(c), 
                                                                                          print_stack:0018295c(c), 
                                                                                          print_debug:00182f04(c), 
                                                                                          print_debug:00182f14(c), 
                                                                                          step_debug:001837a8(c), 
                                                                                          step_debug:001838ac(c), 
                                                                                          step_debug:00183e00(c), 
                                                                                          step_debug:001849ec(c), 
                                                                                          step_debug:00184b00(c), 
                                                                                          step_debug:00184b14(c), 
                                                                                          step_debug:00184bd8(c), 
                                                                                          step_debug:00184c50(c), 
                                                                                          step_debug:00184ce4(c), 
                                                                                          step_debug:00184d00(c), [more]
        0010d9a0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9a4 11 52 44 f9     ldr        x17,[x16, #0x8a0]=>-><EXTERNAL>::putchar         = 040333c8
        0010d9a8 10 82 22 91     add        x16,x16,#0x8a0
        0010d9ac 20 02 1f d6     br         x17=><EXTERNAL>::putchar                         int putchar(int __c)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk tm * localtime(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::localtime
             tm *              x0:8           <RETURN>
             time_t *          x0:8           __timer
                             <EXTERNAL>::localtime                           XREF[5]:     rtc_write:0017176c(c), 
                                                                                          rtc_write:001718e4(c), 
                                                                                          GetLocal:001c278c(c), 
                                                                                          GetDos:001c2908(c), 
                                                                                          GetText:001c2ae4(c)  
        0010d9b0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9b4 11 56 44 f9     ldr        x17,[x16, #0x8a8]=>-><EXTERNAL>::localtime       = 040333d0
        0010d9b8 10 a2 22 91     add        x16,x16,#0x8a8
        0010d9bc 20 02 1f d6     br         x17=><EXTERNAL>::localtime                       tm * localtime(time_t * __timer)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_attr_setdetachstate(pthread_attr_t * _
                               Thunked-Function: <EXTERNAL>::pthread_att
             int               w0:4           <RETURN>
             pthread_attr_t    x0:8           __attr
             int               w1:4           __detachstate
                             <EXTERNAL>::pthread_attr_setdetachstate         XREF[1]:     ThreadCreate:001e75a0(c)  
        0010d9c0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9c4 11 5a 44 f9     ldr        x17,[x16, #0x8b0]=>-><EXTERNAL>::pthread_attr_   = 040333d8
        0010d9c8 10 c2 22 91     add        x16,x16,#0x8b0
        0010d9cc 20 02 1f d6     br         x17=><EXTERNAL>::pthread_attr_setdetachstate     int pthread_attr_setdetachstate(
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsncat(wchar_t * __dest, wchar_t * __sr
                               Thunked-Function: <EXTERNAL>::wcsncat
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __dest
             wchar_t *         x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::wcsncat                             XREF[1]:     wcsncatz:001b4e7c(c)  
        0010d9d0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9d4 11 5e 44 f9     ldr        x17,[x16, #0x8b8]=>-><EXTERNAL>::wcsncat         = 040333e0
        0010d9d8 10 e2 22 91     add        x16,x16,#0x8b8
        0010d9dc 20 02 1f d6     br         x17=><EXTERNAL>::wcsncat                         wchar_t * wcsncat(wchar_t * __de
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __vswprintf_chk()
                               Thunked-Function: <EXTERNAL>::__vswprintf
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__vswprintf_chk                     XREF[1]:     GeneralErrMsg:001c3f20(c)  
        0010d9e0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9e4 11 62 44 f9     ldr        x17,[x16, #0x8c0]=>-><EXTERNAL>::__vswprintf_chk = 040333e8
        0010d9e8 10 02 23 91     add        x16,x16,#0x8c0
        0010d9ec 20 02 1f d6     br         x17=><EXTERNAL>::__vswprintf_chk                 undefined __vswprintf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __libc_start_main()
                               Thunked-Function: <EXTERNAL>::__libc_star
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__libc_start_main                   XREF[1]:     _start:0010e7f4(c)  
        0010d9f0 90 0a 00 d0     adrp       x16,0x25f000
        0010d9f4 11 66 44 f9     ldr        x17,[x16, #0x8c8]=>-><EXTERNAL>::__libc_start_   = 040333f0
        0010d9f8 10 22 23 91     add        x16,x16,#0x8c8
        0010d9fc 20 02 1f d6     br         x17=><EXTERNAL>::__libc_start_main               undefined __libc_start_main()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateInit2_()
                               Thunked-Function: <EXTERNAL>::inflateInit
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflateInit2_                       XREF[2]:     unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a763c(c)  
        0010da00 90 0a 00 d0     adrp       x16,0x25f000
        0010da04 11 6a 44 f9     ldr        x17,[x16, #0x8d0]=>-><EXTERNAL>::inflateInit2_   = 040333f8
        0010da08 10 42 23 91     add        x16,x16,#0x8d0
        0010da0c 20 02 1f d6     br         x17=><EXTERNAL>::inflateInit2_                   undefined inflateInit2_()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined dlclose()
                               Thunked-Function: <EXTERNAL>::dlclose
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::dlclose                             XREF[1]:     gctm:00213fe4(c)  
        0010da10 90 0a 00 d0     adrp       x16,0x25f000
        0010da14 11 6e 44 f9     ldr        x17,[x16, #0x8d8]=>-><EXTERNAL>::dlclose         = 04033408
        0010da18 10 62 23 91     add        x16,x16,#0x8d8
        0010da1c 20 02 1f d6     br         x17=><EXTERNAL>::dlclose                         undefined dlclose()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_Init()
                               Thunked-Function: <EXTERNAL>::SDL_Init
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_Init                            XREF[1]:     platform_initialize:0018a108(c)  
        0010da20 90 0a 00 d0     adrp       x16,0x25f000
        0010da24 11 72 44 f9     ldr        x17,[x16, #0x8e0]=>-><EXTERNAL>::SDL_Init        = 04033410
        0010da28 10 82 23 91     add        x16,x16,#0x8e0
        0010da2c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_Init                        undefined SDL_Init()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ftruncate(int __fd, __off_t __length)
                               Thunked-Function: <EXTERNAL>::ftruncate
             int               w0:4           <RETURN>
             int               w0:4           __fd
             __off_t           x1:8           __length
                             <EXTERNAL>::ftruncate                           XREF[5]:     initialize_memory:0011bfe4(c), 
                                                                                          initialize_memory:0011c1f8(c), 
                                                                                          initialize_memory:0011c5fc(c), 
                                                                                          initialize_memory:0011c690(c), 
                                                                                          backup_save.part.0:00171f18(c)  
        0010da30 90 0a 00 d0     adrp       x16,0x25f000
        0010da34 11 76 44 f9     ldr        x17,[x16, #0x8e8]=>-><EXTERNAL>::ftruncate       = 04033418
        0010da38 10 a2 23 91     add        x16,x16,#0x8e8
        0010da3c 20 02 1f d6     br         x17=><EXTERNAL>::ftruncate                       int ftruncate(int __fd, __off_t 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mbtowc(wchar_t * __pwc, char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mbtowc
             int               w0:4           <RETURN>
             wchar_t *         x0:8           __pwc
             char *            x1:8           __s
             size_t            x2:8           __n
                             <EXTERNAL>::mbtowc                              XREF[2]:     CharToWide:001bea60(c), 
                                                                                          CharToWide:001bea74(c)  
        0010da40 90 0a 00 d0     adrp       x16,0x25f000
        0010da44 11 7a 44 f9     ldr        x17,[x16, #0x8f0]=>-><EXTERNAL>::mbtowc          = 04033420
        0010da48 10 c2 23 91     add        x16,x16,#0x8f0
        0010da4c 20 02 1f d6     br         x17=><EXTERNAL>::mbtowc                          int mbtowc(wchar_t * __pwc, char
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t wcstombs(char * __s, wchar_t * __pwcs, size
                               Thunked-Function: <EXTERNAL>::wcstombs
             size_t            x0:8           <RETURN>
             char *            x0:8           __s
             wchar_t *         x1:8           __pwcs
             size_t            x2:8           __n
                             <EXTERNAL>::wcstombs                            XREF[1]:     WideToChar:001be91c(c)  
        0010da50 90 0a 00 d0     adrp       x16,0x25f000
        0010da54 11 7e 44 f9     ldr        x17,[x16, #0x8f8]=>-><EXTERNAL>::wcstombs        = 04033428
        0010da58 10 e2 23 91     add        x16,x16,#0x8f8
        0010da5c 20 02 1f d6     br         x17=><EXTERNAL>::wcstombs                        size_t wcstombs(char * __s, wcha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_JoystickEventState()
                               Thunked-Function: <EXTERNAL>::SDL_Joystic
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_JoystickEventState              XREF[1]:     platform_initialize_input:0018c3
        0010da60 90 0a 00 d0     adrp       x16,0x25f000
        0010da64 11 82 44 f9     ldr        x17,[x16, #0x900]=>-><EXTERNAL>::SDL_JoystickE   = 04033438
        0010da68 10 02 24 91     add        x16,x16,#0x900
        0010da6c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_JoystickEventState          undefined SDL_JoystickEventState()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memchr(void * __s, int __c, size_t __n)
                               Thunked-Function: <EXTERNAL>::memchr
             void *            x0:8           <RETURN>
             void *            x0:8           __s
             int               w1:4           __c
             size_t            x2:8           __n
                             <EXTERNAL>::memchr                              XREF[1]:     str_find_aux:0020fe6c(c)  
        0010da70 90 0a 00 d0     adrp       x16,0x25f000
        0010da74 11 86 44 f9     ldr        x17,[x16, #0x908]=>-><EXTERNAL>::memchr          = 04033440
        0010da78 10 22 24 91     add        x16,x16,#0x908
        0010da7c 20 02 1f d6     br         x17=><EXTERNAL>::memchr                          void * memchr(void * __s, int __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderClear()
                               Thunked-Function: <EXTERNAL>::SDL_RenderC
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderClear                     XREF[4]:     clear_screen:0018a42c(c), 
                                                                                          clear_screen:0018a43c(c), 
                                                                                          clear_screen:0018a44c(c), 
                                                                                          clear_screen:0018a45c(c)  
        0010da80 90 0a 00 d0     adrp       x16,0x25f000
        0010da84 11 8a 44 f9     ldr        x17,[x16, #0x910]=>-><EXTERNAL>::SDL_RenderClear = 04033448
        0010da88 10 42 24 91     add        x16,x16,#0x910
        0010da8c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_RenderClear                 undefined SDL_RenderClear()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __pid_t getpid(void)
                               Thunked-Function: <EXTERNAL>::getpid
             __pid_t           w0:4           <RETURN>
                             <EXTERNAL>::getpid                              XREF[7]:     Process:001c41c8(c), 
                                                                                          Get:001c44bc(c), Set:001c47d0(c), 
                                                                                          Length:001c4938(c), 
                                                                                          operator==:001c4aec(c), 
                                                                                          operator==:001c4bdc(c), 
                                                                                          SecHideData:001c4cd4(c)  
        0010da90 90 0a 00 d0     adrp       x16,0x25f000
        0010da94 11 8e 44 f9     ldr        x17,[x16, #0x918]=>-><EXTERNAL>::getpid          = 04033450
        0010da98 10 62 24 91     add        x16,x16,#0x918
        0010da9c 20 02 1f d6     br         x17=><EXTERNAL>::getpid                          __pid_t getpid(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int lchown(char * __file, __uid_t __owner, __gid_t
                               Thunked-Function: <EXTERNAL>::lchown
             int               w0:4           <RETURN>
             char *            x0:8           __file
             __uid_t           w1:4           __owner
             __gid_t           w2:4           __group
                             <EXTERNAL>::lchown                              XREF[4]:     ExtractUnixOwner20:001f042c(c), 
                                                                                          ExtractUnixOwner30:001f05ac(c), 
                                                                                          SetUnixOwner:001f069c(c), 
                                                                                          SetUnixOwner:001f0700(c)  
        0010daa0 90 0a 00 d0     adrp       x16,0x25f000
        0010daa4 11 92 44 f9     ldr        x17,[x16, #0x920]=>-><EXTERNAL>::lchown          = 04033458
        0010daa8 10 82 24 91     add        x16,x16,#0x920
        0010daac 20 02 1f d6     br         x17=><EXTERNAL>::lchown                          int lchown(char * __file, __uid_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int getc(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::getc
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::getc                                XREF[5]:     skipcomment:00206584(c), 
                                                                                          skipcomment:002065b4(c), 
                                                                                          skipcomment:002065d4(c), 
                                                                                          skipcomment:002065e8(c), 
                                                                                          g_read:0020bc1c(c)  
        0010dab0 90 0a 00 d0     adrp       x16,0x25f000
        0010dab4 11 96 44 f9     ldr        x17,[x16, #0x928]=>-><EXTERNAL>::getc            = 04033460
        0010dab8 10 a2 24 91     add        x16,x16,#0x928
        0010dabc 20 02 1f d6     br         x17=><EXTERNAL>::getc                            int getc(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk clock_t clock(void)
                               Thunked-Function: <EXTERNAL>::clock
             clock_t           x0:8           <RETURN>
                             <EXTERNAL>::clock                               XREF[1]:     GetRnd:001c19a8(c)  
        0010dac0 90 0a 00 d0     adrp       x16,0x25f000
        0010dac4 11 9a 44 f9     ldr        x17,[x16, #0x930]=>-><EXTERNAL>::clock           = 04033468
        0010dac8 10 c2 24 91     add        x16,x16,#0x930
        0010dacc 20 02 1f d6     br         x17=><EXTERNAL>::clock                           clock_t clock(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * mmap(void * __addr, size_t __len, int __pro
                               Thunked-Function: <EXTERNAL>::mmap
             void *            x0:8           <RETURN>
             void *            x0:8           __addr
             size_t            x1:8           __len
             int               w2:4           __prot
             int               w3:4           __flags
             int               w4:4           __fd
             __off_t           x5:8           __offset
                             <EXTERNAL>::mmap                                XREF[19]:    remap_address_region_low_memory:
                                                                                          remap_address_region_vram:001132
                                                                                          remap_wram:001148d0(c), 
                                                                                          remap_wram:00114904(c), 
                                                                                          initialize_memory:0011c00c(c), 
                                                                                          initialize_memory:0011c05c(c), 
                                                                                          initialize_memory:0011c084(c), 
                                                                                          initialize_memory:0011c0d0(c), 
                                                                                          initialize_memory:0011c188(c), 
                                                                                          initialize_memory:0011c220(c), 
                                                                                          initialize_memory:0011c24c(c), 
                                                                                          initialize_memory:0011c594(c), 
                                                                                          initialize_memory:0011c624(c), 
                                                                                          initialize_memory:0011c6b8(c), 
                                                                                          reset_memory:0011cb48(c), 
                                                                                          nds_file_open_cached:0017546c(c), 
                                                                                          nds_file_open_cached:0017550c(c), 
                                                                                          nds_file_open:001758b4(c), 
                                                                                          nds_file_open:00175964(c)  
        0010dad0 90 0a 00 d0     adrp       x16,0x25f000
        0010dad4 11 9e 44 f9     ldr        x17,[x16, #0x938]=>-><EXTERNAL>::mmap            = 04033470
        0010dad8 10 e2 24 91     add        x16,x16,#0x938
        0010dadc 20 02 1f d6     br         x17=><EXTERNAL>::mmap                            void * mmap(void * __addr, size_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float strtof(char * __nptr, char * * __endptr)
                               Thunked-Function: <EXTERNAL>::strtof
             float             s0:4           <RETURN>
             char *            x0:8           __nptr
             char * *          x1:8           __endptr
                             <EXTERNAL>::strtof                              XREF[1]:     luaO_str2num:001fb024(c)  
        0010dae0 90 0a 00 d0     adrp       x16,0x25f000
        0010dae4 11 a2 44 f9     ldr        x17,[x16, #0x940]=>-><EXTERNAL>::strtof          = 04033478
        0010dae8 10 02 25 91     add        x16,x16,#0x940
        0010daec 20 02 1f d6     br         x17=><EXTERNAL>::strtof                          float strtof(char * __nptr, char
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * operator.new(ulong param_1)
                               Thunked-Function: <EXTERNAL>::operator.new
             void *            x0:8           <RETURN>
             ulong             x0:8           param_1
                             <EXTERNAL>::operator.new                        XREF[7]:     RAROpenArchiveEx:001b3188(c), 
                                                                                          Archive:001b9cbc(c), 
                                                                                          CmdExtract:001c9210(c), 
                                                                                          AddVMCode:001d0364(c), 
                                                                                          AddVMCode:001d0780(c), 
                                                                                          CreateThreadPool:001e77ec(c), 
                                                                                          FindProc:001ec370(c)  
        0010daf0 90 0a 00 d0     adrp       x16,0x25f000
        0010daf4 11 a6 44 f9     ldr        x17,[x16, #0x948]=>-><EXTERNAL>::operator.new    = 04033480
        0010daf8 10 22 25 91     add        x16,x16,#0x948
        0010dafc 20 02 1f d6     br         x17=><EXTERNAL>::operator.new                    void * operator.new(ulong param_1)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncmp(char * __s1, char * __s2, size_t __n)
                               Thunked-Function: <EXTERNAL>::strncmp
             int               w0:4           <RETURN>
             char *            x0:8           __s1
             char *            x1:8           __s2
             size_t            x2:8           __n
                             <EXTERNAL>::strncmp                             XREF[7]:     gamecard_load_program:0016fac4(c
                                                                                          unescape_str:00172bf0(c), 
                                                                                          unescape_str:00172c30(c), 
                                                                                          unescape_str:00172c58(c), 
                                                                                          initialize_game_database:001736d
                                                                                          initialize_game_database:001737f
                                                                                          initialize_game_database:0017388
        0010db00 90 0a 00 d0     adrp       x16,0x25f000
        0010db04 11 aa 44 f9     ldr        x17,[x16, #0x950]=>-><EXTERNAL>::strncmp         = 04033488
        0010db08 10 42 25 91     add        x16,x16,#0x950
        0010db0c 20 02 1f d6     br         x17=><EXTERNAL>::strncmp                         int strncmp(char * __s1, char * 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete(void * param_1, ulong param_2)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            x0:8           param_1
             ulong             x1:8           param_2
                             <EXTERNAL>::operator.delete                     XREF[26]:    RARCloseArchive:001b3100(c), 
                                                                                          RAROpenArchiveEx:001b3430(c), 
                                                                                          001b35c4(c), 001b3678(c), 
                                                                                          ~Archive:001b97d4(c), 
                                                                                          001b9db8(c), 001c9264(c), 
                                                                                          ~CmdExtract:001c92e8(c), 
                                                                                          InitFilters30:001d01f0(c), 
                                                                                          InitFilters30:001d0260(c), 
                                                                                          AddVMCode:001d0ab4(c), 
                                                                                          UnpWriteBuf30:001dcb38(c), 
                                                                                          UnpWriteBuf30:001dcc50(c), 
                                                                                          001e7820(c), 
                                                                                          ~ScanTree:001ebfec(c), 
                                                                                          FindProc:001ec1e8(c), 
                                                                                          001ec7c8(c), 
                                                                                          ~QuickOpen:001ec9d0(c), 
                                                                                          ~QuickOpen:001ec9f0(c), 
                                                                                          Init:001eca80(c), [more]
        0010db10 90 0a 00 d0     adrp       x16,0x25f000
        0010db14 11 ae 44 f9     ldr        x17,[x16, #0x958]=>-><EXTERNAL>::operator.delete = 04033490
        0010db18 10 62 25 91     add        x16,x16,#0x958
        0010db1c 20 02 1f d6     br         x17=><EXTERNAL>::operator.delete                 void operator.delete(void * para
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent * readdir(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir
             dirent *          x0:8           <RETURN>
             DIR *             x0:8           __dirp
                             <EXTERNAL>::readdir                             XREF[2]:     load_file:0017b724(c), 
                                                                                          load_file:0017b7b0(c)  
        0010db20 90 0a 00 d0     adrp       x16,0x25f000
        0010db24 11 b2 44 f9     ldr        x17,[x16, #0x960]=>-><EXTERNAL>::readdir         = 04033498
        0010db28 10 82 25 91     add        x16,x16,#0x960
        0010db2c 20 02 1f d6     br         x17=><EXTERNAL>::readdir                         dirent * readdir(DIR * __dirp)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk dirent64 * readdir64(DIR * __dirp)
                               Thunked-Function: <EXTERNAL>::readdir64
             dirent64 *        x0:8           <RETURN>
             DIR *             x0:8           __dirp
                             <EXTERNAL>::readdir64                           XREF[2]:     Next:001cba24(c), 
                                                                                          Next:001cba70(c)  
        0010db30 90 0a 00 d0     adrp       x16,0x25f000
        0010db34 11 b6 44 f9     ldr        x17,[x16, #0x968]=>-><EXTERNAL>::readdir64       = 040334a0
        0010db38 10 a2 25 91     add        x16,x16,#0x968
        0010db3c 20 02 1f d6     br         x17=><EXTERNAL>::readdir64                       dirent64 * readdir64(DIR * __dirp)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strncpy(char * __dest, char * __src, size_t
                               Thunked-Function: <EXTERNAL>::strncpy
             char *            x0:8           <RETURN>
             char *            x0:8           __dest
             char *            x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::strncpy                             XREF[10]:    gamecard_load_program:0016f3b0(c
                                                                                          gamecard_database_entry_for_file
                                                                                          load_nds:0016fe94(c), 
                                                                                          load_nds:0016feb8(c), 
                                                                                          load_nds:0016fee8(c), 
                                                                                          initialize_backup:001726f4(c), 
                                                                                          save_state:00174f80(c), 
                                                                                          save_state:00174f90(c), 
                                                                                          IntToExt:001b47c0(c), 
                                                                                          strncpyz:001b4d6c(c)  
        0010db40 90 0a 00 d0     adrp       x16,0x25f000
        0010db44 11 ba 44 f9     ldr        x17,[x16, #0x970]=>-><EXTERNAL>::strncpy         = 040334a8
        0010db48 10 c2 25 91     add        x16,x16,#0x970
        0010db4c 20 02 1f d6     br         x17=><EXTERNAL>::strncpy                         char * strncpy(char * __dest, ch
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int rename(char * __old, char * __new)
                               Thunked-Function: <EXTERNAL>::rename
             int               w0:4           <RETURN>
             char *            x0:8           __old
             char *            x1:8           __new
                             <EXTERNAL>::rename                              XREF[4]:     save_state_thread_function:00174
                                                                                          save_state_thread_function:00174
                                                                                          load_file:0017c4a4(c), 
                                                                                          RenameFile:001b96dc(c)  
        0010db50 90 0a 00 d0     adrp       x16,0x25f000
        0010db54 11 be 44 f9     ldr        x17,[x16, #0x978]=>-><EXTERNAL>::rename          = 040334b0
        0010db58 10 e2 25 91     add        x16,x16,#0x978
        0010db5c 20 02 1f d6     br         x17=><EXTERNAL>::rename                          int rename(char * __old, char * 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetTicks()
                               Thunked-Function: <EXTERNAL>::SDL_GetTicks
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_GetTicks                        XREF[2]:     platform_set_rumble_state:0018c2
                                                                                          platform_set_rumble_state:0018c2
        0010db60 90 0a 00 d0     adrp       x16,0x25f000
        0010db64 11 c2 44 f9     ldr        x17,[x16, #0x980]=>-><EXTERNAL>::SDL_GetTicks    = 040334b8
        0010db68 10 02 26 91     add        x16,x16,#0x980
        0010db6c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_GetTicks                    undefined SDL_GetTicks()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticRumbleInit()
                               Thunked-Function: <EXTERNAL>::SDL_HapticR
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticRumbleInit                XREF[1]:     platform_initialize_input:0018c3
        0010db70 90 0a 00 d0     adrp       x16,0x25f000
        0010db74 11 c6 44 f9     ldr        x17,[x16, #0x988]=>-><EXTERNAL>::SDL_HapticRum   = 040334c0
        0010db78 10 22 26 91     add        x16,x16,#0x988
        0010db7c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticRumbleInit            undefined SDL_HapticRumbleInit()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fputc(int __c, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fputc
             int               w0:4           <RETURN>
             int               w0:4           __c
             FILE *            x1:8           __stream
                             <EXTERNAL>::fputc                               XREF[23]:    cpu_block_log_all:0012f554(c), 
                                                                                          geometry_log_step:0015fb5c(c), 
                                                                                          geometry_log_step:0015fb84(c), 
                                                                                          geometry_log_step:0015fbb0(c), 
                                                                                          geometry_log_step:0015fbd0(c), 
                                                                                          geometry_log_step:0015fbf4(c), 
                                                                                          geometry_log_step:0015fc14(c), 
                                                                                          geometry_log_step:0015fc3c(c), 
                                                                                          geometry_log_step:0015fc5c(c), 
                                                                                          geometry_log_step:0015fc8c(c), 
                                                                                          icon_cache_add:0017b25c(c), 
                                                                                          icon_cache_add:0017b268(c), 
                                                                                          save_custom_cheats:00181dc8(c), 
                                                                                          save_custom_cheats:00181e10(c), 
                                                                                          save_custom_cheats:00181e70(c), 
                                                                                          cpu_translate_log_live_state:001
                                                                                          cpu_translate_log_live_state:001
                                                                                          cpu_translate_log_live_state:001
                                                                                          cpu_translate_log_live_state:001
                                                                                          cpu_translate_log_block:001966c0
                                                                                          [more]
        0010db80 90 0a 00 d0     adrp       x16,0x25f000
        0010db84 11 ca 44 f9     ldr        x17,[x16, #0x990]=>-><EXTERNAL>::fputc           = 040334c8
        0010db88 10 42 26 91     add        x16,x16,#0x990
        0010db8c 20 02 1f d6     br         x17=><EXTERNAL>::fputc                           int fputc(int __c, FILE * __stre
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t strspn(char * __s, char * __accept)
                               Thunked-Function: <EXTERNAL>::strspn
             size_t            x0:8           <RETURN>
             char *            x0:8           __s
             char *            x1:8           __accept
                             <EXTERNAL>::strspn                              XREF[4]:     luaO_tostring:001fb170(c), 
                                                                                          luaB_tonumber:00208e30(c), 
                                                                                          luaB_tonumber:00208f70(c), 
                                                                                          luaB_tonumber:00208fc8(c)  
        0010db90 90 0a 00 d0     adrp       x16,0x25f000
        0010db94 11 ce 44 f9     ldr        x17,[x16, #0x998]=>-><EXTERNAL>::strspn          = 040334d0
        0010db98 10 62 26 91     add        x16,x16,#0x998
        0010db9c 20 02 1f d6     br         x17=><EXTERNAL>::strspn                          size_t strspn(char * __s, char *
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int remap_file_pages(void * __start, size_t __size
                               Thunked-Function: <EXTERNAL>::remap_file_
             int               w0:4           <RETURN>
             void *            x0:8           __start
             size_t            x1:8           __size
             int               w2:4           __prot
             size_t            x3:8           __pgoff
             int               w4:4           __flags
                             <EXTERNAL>::remap_file_pages                    XREF[5]:     remap_address_region_low_memory:
                                                                                          remap_address_region_vram:001133
                                                                                          remap_wram:0011495c(c), 
                                                                                          initialize_memory:0011c494(c), 
                                                                                          reset_memory:0011cc18(c)  
        0010dba0 90 0a 00 d0     adrp       x16,0x25f000
        0010dba4 11 d2 44 f9     ldr        x17,[x16, #0x9a0]=>-><EXTERNAL>::remap_file_pa   = 040334d8
        0010dba8 10 82 26 91     add        x16,x16,#0x9a0
        0010dbac 20 02 1f d6     br         x17=><EXTERNAL>::remap_file_pages                int remap_file_pages(void * __st
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateEnd()
                               Thunked-Function: <EXTERNAL>::inflateEnd
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflateEnd                          XREF[3]:     unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a768c(c)  
        0010dbb0 90 0a 00 d0     adrp       x16,0x25f000
        0010dbb4 11 d6 44 f9     ldr        x17,[x16, #0x9a8]=>-><EXTERNAL>::inflateEnd      = 040334e0
        0010dbb8 10 a2 26 91     add        x16,x16,#0x9a8
        0010dbbc 20 02 1f d6     br         x17=><EXTERNAL>::inflateEnd                      undefined inflateEnd()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memmem(void * __haystack, size_t __haystack
                               Thunked-Function: <EXTERNAL>::memmem
             void *            x0:8           <RETURN>
             void *            x0:8           __haystack
             size_t            x1:8           __haystacklen
             void *            x2:8           __needle
             size_t            x3:8           __needlelen
                             <EXTERNAL>::memmem                              XREF[1]:     initialize_backup:00172670(c)  
        0010dbc0 90 0a 00 d0     adrp       x16,0x25f000
        0010dbc4 11 da 44 f9     ldr        x17,[x16, #0x9b0]=>-><EXTERNAL>::memmem          = 040334e8
        0010dbc8 10 c2 26 91     add        x16,x16,#0x9b0
        0010dbcc 20 02 1f d6     br         x17=><EXTERNAL>::memmem                          void * memmem(void * __haystack,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int munmap(void * __addr, size_t __len)
                               Thunked-Function: <EXTERNAL>::munmap
             int               w0:4           <RETURN>
             void *            x0:8           __addr
             size_t            x1:8           __len
                             <EXTERNAL>::munmap                              XREF[13]:    remap_address_region_low_memory:
                                                                                          remap_address_region_vram:001132
                                                                                          remap_wram:001148b4(c), 
                                                                                          remap_wram:001148e8(c), 
                                                                                          initialize_memory:0011c0b0(c), 
                                                                                          initialize_memory:0011c16c(c), 
                                                                                          initialize_memory:0011c5c4(c), 
                                                                                          uninitialize_memory:0011c7ac(c), 
                                                                                          uninitialize_memory:0011c7c4(c), 
                                                                                          uninitialize_memory:0011c7d0(c), 
                                                                                          reset_memory:0011cb2c(c), 
                                                                                          nds_file_close:00175d38(c), 
                                                                                          unzip_find_file_entry:001a6db8(c
        0010dbd0 90 0a 00 d0     adrp       x16,0x25f000
        0010dbd4 11 de 44 f9     ldr        x17,[x16, #0x9b8]=>-><EXTERNAL>::munmap          = 040334f0
        0010dbd8 10 e2 26 91     add        x16,x16,#0x9b8
        0010dbdc 20 02 1f d6     br         x17=><EXTERNAL>::munmap                          int munmap(void * __addr, size_t
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseeko64(FILE * __stream, __off64_t __off, int
                               Thunked-Function: <EXTERNAL>::fseeko64
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
             __off64_t         x1:8           __off
             int               w2:4           __whence
                             <EXTERNAL>::fseeko64                            XREF[8]:     FileLength:001b80d8(c), 
                                                                                          FileLength:001b812c(c), 
                                                                                          RawSeek:001b8318(c), 
                                                                                          Read:001b855c(c), 
                                                                                          Seek:001b8678(c), 
                                                                                          Write:001b8928(c), 
                                                                                          Copy:001b8bc4(c), 
                                                                                          f_seek:0020b680(c)  
        0010dbe0 90 0a 00 d0     adrp       x16,0x25f000
        0010dbe4 11 e2 44 f9     ldr        x17,[x16, #0x9c0]=>-><EXTERNAL>::fseeko64        = 040334f8
        0010dbe8 10 02 27 91     add        x16,x16,#0x9c0
        0010dbec 20 02 1f d6     br         x17=><EXTERNAL>::fseeko64                        int fseeko64(FILE * __stream, __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk DIR * opendir(char * __name)
                               Thunked-Function: <EXTERNAL>::opendir
             DIR *             x0:8           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::opendir                             XREF[2]:     load_file:0017b6d0(c), 
                                                                                          Next:001cbbec(c)  
        0010dbf0 90 0a 00 d0     adrp       x16,0x25f000
        0010dbf4 11 e6 44 f9     ldr        x17,[x16, #0x9c8]=>-><EXTERNAL>::opendir         = 04033500
        0010dbf8 10 22 27 91     add        x16,x16,#0x9c8
        0010dbfc 20 02 1f d6     br         x17=><EXTERNAL>::opendir                         DIR * opendir(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t mbstowcs(wchar_t * __pwcs, char * __s, size
                               Thunked-Function: <EXTERNAL>::mbstowcs
             size_t            x0:8           <RETURN>
             wchar_t *         x0:8           __pwcs
             char *            x1:8           __s
             size_t            x2:8           __n
                             <EXTERNAL>::mbstowcs                            XREF[2]:     load_config_file:00178304(c), 
                                                                                          CharToWide:001be988(c)  
        0010dc00 90 0a 00 d0     adrp       x16,0x25f000
        0010dc04 11 ea 44 f9     ldr        x17,[x16, #0x9d0]=>-><EXTERNAL>::mbstowcs        = 04033508
        0010dc08 10 42 27 91     add        x16,x16,#0x9d0
        0010dc0c 20 02 1f d6     br         x17=><EXTERNAL>::mbstowcs                        size_t mbstowcs(wchar_t * __pwcs
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chmod(char * __file, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::chmod
             int               w0:4           <RETURN>
             char *            x0:8           __file
             __mode_t          w1:4           __mode
                             <EXTERNAL>::chmod                               XREF[2]:     PrepareToDelete:001b91e0(c), 
                                                                                          SetFileAttr:001b92d4(c)  
        0010dc10 90 0a 00 d0     adrp       x16,0x25f000
        0010dc14 11 ee 44 f9     ldr        x17,[x16, #0x9d8]=>-><EXTERNAL>::chmod           = 04033518
        0010dc18 10 62 27 91     add        x16,x16,#0x9d8
        0010dc1c 20 02 1f d6     br         x17=><EXTERNAL>::chmod                           int chmod(char * __file, __mode_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined memalign()
                               Thunked-Function: <EXTERNAL>::memalign
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::memalign                            XREF[1]:     start_frame:00130b90(c)  
        0010dc20 90 0a 00 d0     adrp       x16,0x25f000
        0010dc24 11 f2 44 f9     ldr        x17,[x16, #0x9e0]=>-><EXTERNAL>::memalign        = 04033520
        0010dc28 10 82 27 91     add        x16,x16,#0x9e0
        0010dc2c 20 02 1f d6     br         x17=><EXTERNAL>::memalign                        undefined memalign()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ushort * * __ctype_b_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_b_l
             ushort * *        x0:8           <RETURN>
                             <EXTERNAL>::__ctype_b_loc                       XREF[35]:    xml_parse_line:00172e5c(c), 
                                                                                          load_custom_cheats:00181890(c), 
                                                                                          step_debug:001837bc(c), 
                                                                                          step_debug:00183b84(c), 
                                                                                          skip_whitespace:00187ae0(c), 
                                                                                          skip_to_whitespace:00187b30(c), 
                                                                                          chomp_whitespace:00187bbc(c), 
                                                                                          luaB_tonumber:00208e54(c), 
                                                                                          luaB_tonumber:00208ebc(c), 
                                                                                          readdigits:0020b078(c), 
                                                                                          g_read:0020bba8(c), 
                                                                                          match_class:0020d8f8(c), 
                                                                                          match_class:0020d934(c), 
                                                                                          match_class:0020d964(c), 
                                                                                          match_class:0020d988(c), 
                                                                                          match_class:0020d9a8(c), 
                                                                                          match_class:0020d9bc(c), 
                                                                                          match_class:0020d9d0(c), 
                                                                                          match_class:0020d9e4(c), 
                                                                                          match_class:0020d9f8(c), [more]
        0010dc30 90 0a 00 d0     adrp       x16,0x25f000
        0010dc34 11 f6 44 f9     ldr        x17,[x16, #0x9e8]=>-><EXTERNAL>::__ctype_b_loc   = 04033528
        0010dc38 10 a2 27 91     add        x16,x16,#0x9e8
        0010dc3c 20 02 1f d6     br         x17=><EXTERNAL>::__ctype_b_loc                   ushort * * __ctype_b_loc(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __isoc99_sscanf()
                               Thunked-Function: <EXTERNAL>::__isoc99_ss
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__isoc99_sscanf                     XREF[2]:     step_debug:001837e0(c), 
                                                                                          step_debug:00183ba8(c)  
        0010dc40 90 0a 00 d0     adrp       x16,0x25f000
        0010dc44 11 fa 44 f9     ldr        x17,[x16, #0x9f0]=>-><EXTERNAL>::__isoc99_sscanf = 04033530
        0010dc48 10 c2 27 91     add        x16,x16,#0x9f0
        0010dc4c 20 02 1f d6     br         x17=><EXTERNAL>::__isoc99_sscanf                 undefined __isoc99_sscanf()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_RenderCopy()
                               Thunked-Function: <EXTERNAL>::SDL_RenderC
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_RenderCopy                      XREF[5]:     update_screen_menu:0018a2a4(c), 
                                                                                          update_screens:0018a724(c), 
                                                                                          update_screens:0018a774(c), 
                                                                                          update_screens:0018a798(c), 
                                                                                          update_screens:0018a7c0(c)  
        0010dc50 90 0a 00 d0     adrp       x16,0x25f000
        0010dc54 11 fe 44 f9     ldr        x17,[x16, #0x9f8]=>-><EXTERNAL>::SDL_RenderCopy  = 04033538
        0010dc58 10 e2 27 91     add        x16,x16,#0x9f8
        0010dc5c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_RenderCopy                  undefined SDL_RenderCopy()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wmemset(wchar_t * __s, wchar_t __c, size
                               Thunked-Function: <EXTERNAL>::wmemset
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __s
             wchar_t           w1:4           __c
             size_t            x2:8           __n
                             <EXTERNAL>::wmemset                             XREF[1]:     GenArcName:001b5ab0(c)  
        0010dc60 90 0a 00 d0     adrp       x16,0x25f000
        0010dc64 11 02 45 f9     ldr        x17,[x16, #0xa00]=>-><EXTERNAL>::wmemset         = 04033540
        0010dc68 10 02 28 91     add        x16,x16,#0xa00
        0010dc6c 20 02 1f d6     br         x17=><EXTERNAL>::wmemset                         wchar_t * wmemset(wchar_t * __s,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetWindowFullscreen()
                               Thunked-Function: <EXTERNAL>::SDL_SetWind
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetWindowFullscreen             XREF[2]:     set_screen_menu_off:0018a5ec(c), 
                                                                                          set_screen_menu_off:0018a62c(c)  
        0010dc70 90 0a 00 d0     adrp       x16,0x25f000
        0010dc74 11 06 45 f9     ldr        x17,[x16, #0xa08]=>-><EXTERNAL>::SDL_SetWindow   = 04033548
        0010dc78 10 22 28 91     add        x16,x16,#0xa08
        0010dc7c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetWindowFullscreen         undefined SDL_SetWindowFullscree
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_atexit()
                               Thunked-Function: <EXTERNAL>::__cxa_atexit
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_atexit                        XREF[1]:     _GLOBAL__sub_I_SetKey13:0010e5d4
        0010dc80 90 0a 00 d0     adrp       x16,0x25f000
        0010dc84 11 0a 45 f9     ldr        x17,[x16, #0xa10]=>-><EXTERNAL>::__cxa_atexit    = 04033550
        0010dc88 10 42 28 91     add        x16,x16,#0xa10
        0010dc8c 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_atexit                    undefined __cxa_atexit()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticRumblePlay()
                               Thunked-Function: <EXTERNAL>::SDL_HapticR
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticRumblePlay                XREF[1]:     platform_set_rumble_state:0018c2
        0010dc90 90 0a 00 d0     adrp       x16,0x25f000
        0010dc94 11 0e 45 f9     ldr        x17,[x16, #0xa18]=>-><EXTERNAL>::SDL_HapticRum   = 04033558
        0010dc98 10 62 28 91     add        x16,x16,#0xa18
        0010dc9c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticRumblePlay            undefined SDL_HapticRumblePlay()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int snprintf(char * __s, size_t __maxlen, char * _
                               Thunked-Function: <EXTERNAL>::snprintf
             int               w0:4           <RETURN>
             char *            x0:8           __s
             size_t            x1:8           __maxlen
             char *            x2:8           __format
                             <EXTERNAL>::snprintf                            XREF[3]:     nds_file_open:00175ac0(c), 
                                                                                          nds_file_open:00175bc0(c), 
                                                                                          load_file:0017b968(c)  
        0010dca0 90 0a 00 d0     adrp       x16,0x25f000
        0010dca4 11 12 45 f9     ldr        x17,[x16, #0xa20]=>-><EXTERNAL>::snprintf        = 04033560
        0010dca8 10 82 28 91     add        x16,x16,#0xa20
        0010dcac 20 02 1f d6     br         x17=><EXTERNAL>::snprintf                        int snprintf(char * __s, size_t 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int chdir(char * __path)
                               Thunked-Function: <EXTERNAL>::chdir
             int               w0:4           <RETURN>
             char *            x0:8           __path
                             <EXTERNAL>::chdir                               XREF[3]:     load_directory_config_file:00177
                                                                                          load_file:0017bfd8(c), 
                                                                                          load_file:0017c5f4(c)  
        0010dcb0 90 0a 00 d0     adrp       x16,0x25f000
        0010dcb4 11 16 45 f9     ldr        x17,[x16, #0xa28]=>-><EXTERNAL>::chdir           = 04033568
        0010dcb8 10 a2 28 91     add        x16,x16,#0xa28
        0010dcbc 20 02 1f d6     br         x17=><EXTERNAL>::chdir                           int chdir(char * __path)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcsncpy_chk()
                               Thunked-Function: <EXTERNAL>::__wcsncpy_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__wcsncpy_chk                       XREF[3]:     GenArcName:001b5b1c(c), 
                                                                                          CreatePath:001b8e04(c), 
                                                                                          OutComment:001c3798(c)  
        0010dcc0 90 0a 00 d0     adrp       x16,0x25f000
        0010dcc4 11 1a 45 f9     ldr        x17,[x16, #0xa30]=>-><EXTERNAL>::__wcsncpy_chk   = 04033570
        0010dcc8 10 c2 28 91     add        x16,x16,#0xa30
        0010dccc 20 02 1f d6     br         x17=><EXTERNAL>::__wcsncpy_chk                   undefined __wcsncpy_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetTextureBlendMode()
                               Thunked-Function: <EXTERNAL>::SDL_SetText
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetTextureBlendMode             XREF[2]:     initialize_screen:0018a8f4(c), 
                                                                                          initialize_screen:0018a900(c)  
        0010dcd0 90 0a 00 d0     adrp       x16,0x25f000
        0010dcd4 11 1e 45 f9     ldr        x17,[x16, #0xa38]=>-><EXTERNAL>::SDL_SetTextur   = 04033578
        0010dcd8 10 e2 28 91     add        x16,x16,#0xa38
        0010dcdc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetTextureBlendMode         undefined SDL_SetTextureBlendMod
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fflush(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fflush
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::fflush                              XREF[22]:    quit:0010ea5c(c), 
                                                                                          cpu_block_create:0012d454(c), 
                                                                                          cpu_block_log_all:0012f528(c), 
                                                                                          initialize_game_database:0017378
                                                                                          initialize_game_database:0017383
                                                                                          load_state:00174834(c), 
                                                                                          load_state:00174bbc(c), 
                                                                                          benchmark_step:001765ac(c), 
                                                                                          file_info_cache_load:0017ad7c(c), 
                                                                                          file_info_cache_load:0017adec(c), 
                                                                                          icon_cache_load:0017b0ec(c), 
                                                                                          icon_cache_load:0017b15c(c), 
                                                                                          process_cheat:00180910(c), 
                                                                                          update_input:00188788(c), 
                                                                                          DirectRead:001b7e6c(c), 
                                                                                          Read:001b8460(c), 
                                                                                          panic:002064e0(c), 
                                                                                          luaB_print:00209288(c), 
                                                                                          io_flush:0020ac00(c), 
                                                                                          io_popen:0020af78(c), [more]
        0010dce0 90 0a 00 d0     adrp       x16,0x25f000
        0010dce4 11 22 45 f9     ldr        x17,[x16, #0xa40]=>-><EXTERNAL>::fflush          = 04033580
        0010dce8 10 02 29 91     add        x16,x16,#0xa40
        0010dcec 20 02 1f d6     br         x17=><EXTERNAL>::fflush                          int fflush(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_GetKeyName()
                               Thunked-Function: <EXTERNAL>::SDL_GetKeyN
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_GetKeyName                      XREF[1]:     platform_print_code:0018b480(c)  
        0010dcf0 90 0a 00 d0     adrp       x16,0x25f000
        0010dcf4 11 26 45 f9     ldr        x17,[x16, #0xa48]=>-><EXTERNAL>::SDL_GetKeyName  = 04033588
        0010dcf8 10 22 29 91     add        x16,x16,#0xa48
        0010dcfc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_GetKeyName                  undefined SDL_GetKeyName()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off64_t lseek64(int __fd, __off64_t __offset, in
                               Thunked-Function: <EXTERNAL>::lseek64
             __off64_t         x0:8           <RETURN>
             int               w0:4           __fd
             __off64_t         x1:8           __offset
             int               w2:4           __whence
                             <EXTERNAL>::lseek64                             XREF[5]:     unzip_find_file_entry:001a6d58(c
                                                                                          unzip_find_file_entry:001a6d6c(c
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a75b4(c)  
        0010dd00 90 0a 00 d0     adrp       x16,0x25f000
        0010dd04 11 2a 45 f9     ldr        x17,[x16, #0xa50]=>-><EXTERNAL>::lseek64         = 04033590
        0010dd08 10 42 29 91     add        x16,x16,#0xa50
        0010dd0c 20 02 1f d6     br         x17=><EXTERNAL>::lseek64                         __off64_t lseek64(int __fd, __of
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_create(pthread_t * __newthread, pthrea
                               Thunked-Function: <EXTERNAL>::pthread_cre
             int               w0:4           <RETURN>
             pthread_t *       x0:8           __newthread
             pthread_attr_t    x1:8           __attr
             __start_routin    x2:8           __start_routine
             void *            x3:8           __arg
                             <EXTERNAL>::pthread_create                      XREF[5]:     initialize_video:001312ac(c), 
                                                                                          initialize_video_3d:001597b4(c), 
                                                                                          initialize_video_3d:001598a8(c), 
                                                                                          save_state:00174fa8(c), 
                                                                                          ThreadCreate:001e75b8(c)  
        0010dd10 90 0a 00 d0     adrp       x16,0x25f000
        0010dd14 11 2e 45 f9     ldr        x17,[x16, #0xa58]=>-><EXTERNAL>::pthread_create  = 04033598
        0010dd18 10 62 29 91     add        x16,x16,#0xa58
        0010dd1c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_create                  int pthread_create(pthread_t * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticRumbleStop()
                               Thunked-Function: <EXTERNAL>::SDL_HapticR
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticRumbleStop                XREF[1]:     platform_set_rumble_state:0018c3
        0010dd20 90 0a 00 d0     adrp       x16,0x25f000
        0010dd24 11 32 45 f9     ldr        x17,[x16, #0xa60]=>-><EXTERNAL>::SDL_HapticRum   = 040335a0
        0010dd28 10 82 29 91     add        x16,x16,#0xa60
        0010dd2c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticRumbleStop            undefined SDL_HapticRumbleStop()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_LockTexture()
                               Thunked-Function: <EXTERNAL>::SDL_LockTex
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_LockTexture                     XREF[1]:     update_screen:0018a1c4(c)  
        0010dd30 90 0a 00 d0     adrp       x16,0x25f000
        0010dd34 11 36 45 f9     ldr        x17,[x16, #0xa68]=>-><EXTERNAL>::SDL_LockTexture = 040335a8
        0010dd38 10 a2 29 91     add        x16,x16,#0xa68
        0010dd3c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_LockTexture                 undefined SDL_LockTexture()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * memmove(void * __dest, void * __src, size_t
                               Thunked-Function: <EXTERNAL>::memmove
             void *            x0:8           <RETURN>
             void *            x0:8           __dest
             void *            x1:8           __src
             size_t            x2:8           __n
                             <EXTERNAL>::memmove                             XREF[25]:    remove_custom_cheat:00181cac(c), 
                                                                                          remove_custom_cheat:00181cc4(c), 
                                                                                          NextVolumeName:001b6884(c), 
                                                                                          InitDecoder:001cbff8(c), 
                                                                                          InitDecoder:001cc010(c), 
                                                                                          InitDecoder:001cc028(c), 
                                                                                          InitDecoder:001cc040(c), 
                                                                                          UnpReadBuf30:001d00d4(c), 
                                                                                          ReadVMCode:001d0ea0(c), 
                                                                                          UnpReadBuf:001d1160(c), 
                                                                                          ReadTables30:001da6cc(c), 
                                                                                          ReadTables30:001da998(c), 
                                                                                          ProcessDecoded:001ddcf0(c), 
                                                                                          UnpackLargeBlock:001de9c8(c), 
                                                                                          Unpack5:001e0834(c), 
                                                                                          Unpack29:001e3258(c), 
                                                                                          Unpack29:001e33f0(c), 
                                                                                          Unpack29:001e3f60(c), 
                                                                                          Unpack5MT:001e4978(c), 
                                                                                          Unpack5MT:001e49f8(c), [more]
        0010dd40 90 0a 00 d0     adrp       x16,0x25f000
        0010dd44 11 3a 45 f9     ldr        x17,[x16, #0xa70]=>-><EXTERNAL>::memmove         = 040335b0
        0010dd48 10 c2 29 91     add        x16,x16,#0xa70
        0010dd4c 20 02 1f d6     br         x17=><EXTERNAL>::memmove                         void * memmove(void * __dest, vo
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __strncpy_chk()
                               Thunked-Function: <EXTERNAL>::__strncpy_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__strncpy_chk                       XREF[1]:     ExtractUnixOwner30:001f0568(c)  
        0010dd50 90 0a 00 d0     adrp       x16,0x25f000
        0010dd54 11 3e 45 f9     ldr        x17,[x16, #0xa78]=>-><EXTERNAL>::__strncpy_chk   = 040335b8
        0010dd58 10 e2 29 91     add        x16,x16,#0xa78
        0010dd5c 20 02 1f d6     br         x17=><EXTERNAL>::__strncpy_chk                   undefined __strncpy_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int shm_unlink(char * __name)
                               Thunked-Function: <EXTERNAL>::shm_unlink
             int               w0:4           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::shm_unlink                          XREF[4]:     initialize_memory:0011bff0(c), 
                                                                                          initialize_memory:0011c204(c), 
                                                                                          initialize_memory:0011c608(c), 
                                                                                          initialize_memory:0011c69c(c)  
        0010dd60 90 0a 00 d0     adrp       x16,0x25f000
        0010dd64 11 42 45 f9     ldr        x17,[x16, #0xa80]=>-><EXTERNAL>::shm_unlink      = 040335c0
        0010dd68 10 02 2a 91     add        x16,x16,#0xa80
        0010dd6c 20 02 1f d6     br         x17=><EXTERNAL>::shm_unlink                      int shm_unlink(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __fxstat64(int __ver, int __fildes, stat64 * _
                               Thunked-Function: <EXTERNAL>::__fxstat64
             int               w0:4           <RETURN>
             int               w0:4           __ver
             int               w1:4           __fildes
             stat64 *          x2:8           __stat_buf
                             <EXTERNAL>::__fxstat64                          XREF[1]:     GetOpenFileTime:001b8038(c)  
        0010dd70 90 0a 00 d0     adrp       x16,0x25f000
        0010dd74 11 46 45 f9     ldr        x17,[x16, #0xa88]=>-><EXTERNAL>::__fxstat64      = 040335c8
        0010dd78 10 22 2a 91     add        x16,x16,#0xa88
        0010dd7c 20 02 1f d6     br         x17=><EXTERNAL>::__fxstat64                      int __fxstat64(int __ver, int __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk time_t time(time_t * __timer)
                               Thunked-Function: <EXTERNAL>::time
             time_t            x0:8           <RETURN>
             time_t *          x0:8           __timer
                             <EXTERNAL>::time                                XREF[10]:    rtc_current_time:001715f0(c), 
                                                                                          rtc_write:001719bc(c), 
                                                                                          rtc_write:001719cc(c), 
                                                                                          reset_rtc:00171a4c(c), 
                                                                                          rtc_load_savestate:00171b80(c), 
                                                                                          rtc_store_savestate:00171cd4(c), 
                                                                                          load_logo:0017fb0c(c), 
                                                                                          SetAgeText:001c2dec(c), 
                                                                                          SetCurrentTime:001c2eb8(c), 
                                                                                          lua_newstate:001ffb98(c)  
        0010dd80 90 0a 00 d0     adrp       x16,0x25f000
        0010dd84 11 4a 45 f9     ldr        x17,[x16, #0xa90]=>-><EXTERNAL>::time            = 040335d0
        0010dd88 10 42 2a 91     add        x16,x16,#0xa90
        0010dd8c 20 02 1f d6     br         x17=><EXTERNAL>::time                            time_t time(time_t * __timer)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * strrchr(char * __s, int __c)
                               Thunked-Function: <EXTERNAL>::strrchr
             char *            x0:8           <RETURN>
             char *            x0:8           __s
             int               w1:4           __c
                             <EXTERNAL>::strrchr                             XREF[13]:    load_nds:0016fe7c(c), 
                                                                                          load_nds:0016fe9c(c), 
                                                                                          load_nds:0016fed0(c), 
                                                                                          load_nds:0016ff10(c), 
                                                                                          nds_file_open:00175628(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_check_extension:00175f7
                                                                                          nds_file_get_rom_type:001760ac(c
                                                                                          load_custom_cheats:001819d0(c), 
                                                                                          un7z_file:001a5c30(c), 
                                                                                          un7z_file_to_memory_partial:001a
                                                                                          unrar_file:001a7b88(c), 
                                                                                          unrar_file_to_memory_partial:001
        0010dd90 90 0a 00 d0     adrp       x16,0x25f000
        0010dd94 11 4e 45 f9     ldr        x17,[x16, #0xa98]=>-><EXTERNAL>::strrchr         = 040335e0
        0010dd98 10 62 2a 91     add        x16,x16,#0xa98
        0010dd9c 20 02 1f d6     br         x17=><EXTERNAL>::strrchr                         char * strrchr(char * __s, int _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete[](void * param_1)
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            x0:8           param_1
                             <EXTERNAL>::operator.delete[]                   XREF[8]:     ~Unpack:001e1824(c), 
                                                                                          ~QuickOpen:001ec9c4(c), 
                                                                                          ~QuickOpen:001eca04(c), 
                                                                                          Init:001eca74(c), 
                                                                                          Close:001ecb3c(c), 
                                                                                          ~RarVM:001edde8(c), 
                                                                                          ~BitInput:001ef360(c), 
                                                                                          SetExternalBuffer:001ef40c(c)  
        0010dda0 90 0a 00 d0     adrp       x16,0x25f000
        0010dda4 11 52 45 f9     ldr        x17,[x16, #0xaa0]=>-><EXTERNAL>::operator.dele   = 040335e8
        0010dda8 10 82 2a 91     add        x16,x16,#0xaa0
        0010ddac 20 02 1f d6     br         x17=><EXTERNAL>::operator.delete[]               void operator.delete[](void * pa
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_HapticOpenFromJoystick()
                               Thunked-Function: <EXTERNAL>::SDL_HapticO
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_HapticOpenFromJoystick          XREF[1]:     platform_initialize_input:0018c3
        0010ddb0 90 0a 00 d0     adrp       x16,0x25f000
        0010ddb4 11 56 45 f9     ldr        x17,[x16, #0xaa8]=>-><EXTERNAL>::SDL_HapticOpe   = 040335f0
        0010ddb8 10 a2 2a 91     add        x16,x16,#0xaa8
        0010ddbc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_HapticOpenFromJoystick      undefined SDL_HapticOpenFromJoys
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int * __errno_location(void)
                               Thunked-Function: <EXTERNAL>::__errno_loc
             int *             x0:8           <RETURN>
                             <EXTERNAL>::__errno_location                    XREF[20]:    InFile_Open:001aefa8(c), 
                                                                                          OutFile_Open:001aeff8(c), 
                                                                                          Open:001b796c(c), 
                                                                                          MakeDir:001b8d4c(c), 
                                                                                          GetSystemErrorCode:001c40e8(c), 
                                                                                          SetSystemErrorCode:001c4110(c), 
                                                                                          FastFind:001cb968(c), 
                                                                                          FastFind:001cb980(c), 
                                                                                          Next:001cbbf8(c), 
                                                                                          ExtractUnixLink30:001f0160(c), 
                                                                                          ExtractUnixOwner20:001f03d4(c), 
                                                                                          ExtractUnixLink50:001f08ec(c), 
                                                                                          luaL_fileresult:00206d80(c), 
                                                                                          luaL_execresult:00206e90(c), 
                                                                                          luaL_loadfilex:00207ef8(c), 
                                                                                          luaL_loadfilex:00208054(c), 
                                                                                          luaL_loadfilex:002080b8(c), 
                                                                                          io_input:0020b2c8(c), 
                                                                                          io_lines:0020b850(c), 
                                                                                          io_output:0020b988(c)  
        0010ddc0 90 0a 00 d0     adrp       x16,0x25f000
        0010ddc4 11 5a 45 f9     ldr        x17,[x16, #0xab0]=>-><EXTERNAL>::__errno_locat   = 04033600
        0010ddc8 10 c2 2a 91     add        x16,x16,#0xab0
        0010ddcc 20 02 1f d6     br         x17=><EXTERNAL>::__errno_location                int * __errno_location(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int setvbuf(FILE * __stream, char * __buf, int __m
                               Thunked-Function: <EXTERNAL>::setvbuf
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
             char *            x1:8           __buf
             int               w2:4           __modes
             size_t            x3:8           __n
                             <EXTERNAL>::setvbuf                             XREF[1]:     f_setvbuf:0020b5c8(c)  
        0010ddd0 90 0a 00 d0     adrp       x16,0x25f000
        0010ddd4 11 5e 45 f9     ldr        x17,[x16, #0xab8]=>-><EXTERNAL>::setvbuf         = 04033608
        0010ddd8 10 e2 2a 91     add        x16,x16,#0xab8
        0010dddc 20 02 1f d6     br         x17=><EXTERNAL>::setvbuf                         int setvbuf(FILE * __stream, cha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_destroy(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               w0:4           <RETURN>
             pthread_cond_t    x0:8           __cond
                             <EXTERNAL>::pthread_cond_destroy                XREF[2]:     ~ThreadPool:001e78d8(c), 
                                                                                          ~ThreadPool:001e78e8(c)  
        0010dde0 90 0a 00 d0     adrp       x16,0x25f000
        0010dde4 11 62 45 f9     ldr        x17,[x16, #0xac0]=>-><EXTERNAL>::pthread_cond_   = 04033610
        0010dde8 10 02 2b 91     add        x16,x16,#0xac0
        0010ddec 20 02 1f d6     br         x17=><EXTERNAL>::pthread_cond_destroy            int pthread_cond_destroy(pthread
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcscpy(wchar_t * __dest, wchar_t * __src)
                               Thunked-Function: <EXTERNAL>::wcscpy
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __dest
             wchar_t *         x1:8           __src
                             <EXTERNAL>::wcscpy                              XREF[14]:    AddString:001b4098(c), 
                                                                                          GenArcName:001b5bc0(c), 
                                                                                          ConvertPath:001b5d6c(c), 
                                                                                          SetExt:001b5f40(c), 
                                                                                          SetSFXExt:001b6008(c), 
                                                                                          NextVolumeName:001b67c0(c), 
                                                                                          NextVolumeName:001b6848(c), 
                                                                                          UnixSlashToDos:001b6dbc(c), 
                                                                                          DosSlashToUnix:001b6ebc(c), 
                                                                                          VolNameToFirstName:001b73d0(c), 
                                                                                          VolNameToFirstName:001b75e4(c), 
                                                                                          IsArchive:001bb168(c), 
                                                                                          GetText:001c2a74(c), 
                                                                                          FindProc:001ec294(c)  
        0010ddf0 90 0a 00 d0     adrp       x16,0x25f000
        0010ddf4 11 66 45 f9     ldr        x17,[x16, #0xac8]=>-><EXTERNAL>::wcscpy          = 04033618
        0010ddf8 10 22 2b 91     add        x16,x16,#0xac8
        0010ddfc 20 02 1f d6     br         x17=><EXTERNAL>::wcscpy                          wchar_t * wcscpy(wchar_t * __des
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __memset_chk()
                               Thunked-Function: <EXTERNAL>::__memset_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__memset_chk                        XREF[2]:     texture_cache_create:0016b5d4(c), 
                                                                                          texture_cache_create:0016b650(c)  
        0010de00 90 0a 00 d0     adrp       x16,0x25f000
        0010de04 11 6a 45 f9     ldr        x17,[x16, #0xad0]=>-><EXTERNAL>::__memset_chk    = 04033620
        0010de08 10 42 2b 91     add        x16,x16,#0xad0
        0010de0c 20 02 1f d6     br         x17=><EXTERNAL>::__memset_chk                    undefined __memset_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int dup(int __fd)
                               Thunked-Function: <EXTERNAL>::dup
             int               w0:4           <RETURN>
             int               w0:4           __fd
                             <EXTERNAL>::dup                                 XREF[3]:     PutByte:001b87a8(c), 
                                                                                          Write:001b889c(c), 
                                                                                          Copy:001b8b34(c)  
        0010de10 90 0a 00 d0     adrp       x16,0x25f000
        0010de14 11 6e 45 f9     ldr        x17,[x16, #0xad8]=>-><EXTERNAL>::dup             = 04033628
        0010de18 10 62 2b 91     add        x16,x16,#0xad8
        0010de1c 20 02 1f d6     br         x17=><EXTERNAL>::dup                             int dup(int __fd)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __uflow(_IO_FILE * param_1)
                               Thunked-Function: <EXTERNAL>::__uflow
             int               w0:4           <RETURN>
             _IO_FILE *        x0:8           param_1
                             <EXTERNAL>::__uflow                             XREF[11]:    read_line:0020aa94(c), 
                                                                                          readdigits:0020b140(c), 
                                                                                          readdigits:0020b14c(c), 
                                                                                          g_read:0020bbf4(c), 
                                                                                          g_read:0020be5c(c), 
                                                                                          g_read:0020bfe0(c), 
                                                                                          g_read:0020c054(c), 
                                                                                          g_read:0020c078(c), 
                                                                                          g_read:0020c094(c), 
                                                                                          g_read:0020c0a4(c), 
                                                                                          g_read:0020c0bc(c)  
        0010de20 90 0a 00 d0     adrp       x16,0x25f000
        0010de24 11 72 45 f9     ldr        x17,[x16, #0xae0]=>-><EXTERNAL>::__uflow         = 04033630
        0010de28 10 82 2b 91     add        x16,x16,#0xae0
        0010de2c 20 02 1f d6     br         x17=><EXTERNAL>::__uflow                         int __uflow(_IO_FILE * param_1)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mkdir(char * __path, __mode_t __mode)
                               Thunked-Function: <EXTERNAL>::mkdir
             int               w0:4           <RETURN>
             char *            x0:8           __path
             __mode_t          w1:4           __mode
                             <EXTERNAL>::mkdir                               XREF[4]:     initialize_system_directory:0010
                                                                                          MakeDir:001b8d10(c), 
                                                                                          CreatePath:001b8e24(c), 
                                                                                          CreatePath:001b8eb0(c)  
        0010de30 90 0a 00 d0     adrp       x16,0x25f000
        0010de34 11 76 45 f9     ldr        x17,[x16, #0xae8]=>-><EXTERNAL>::mkdir           = 04033638
        0010de38 10 a2 2b 91     add        x16,x16,#0xae8
        0010de3c 20 02 1f d6     br         x17=><EXTERNAL>::mkdir                           int mkdir(char * __path, __mode_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulong strtoul(char * __nptr, char * * __endptr, in
                               Thunked-Function: <EXTERNAL>::strtoul
             ulong             x0:8           <RETURN>
             char *            x0:8           __nptr
             char * *          x1:8           __endptr
             int               w2:4           __base
                             <EXTERNAL>::strtoul                             XREF[65]:    initialize_game_database:0017344
                                                                                          initialize_game_database:0017349
                                                                                          initialize_game_database:001734f
                                                                                          initialize_game_database:0017399
                                                                                          initialize_game_database:00173b5
                                                                                          file_info_cache_load:0017abc8(c), 
                                                                                          load_custom_cheats:001818b4(c), 
                                                                                          load_custom_cheats:001818d4(c), 
                                                                                          step_debug:0018380c(c), 
                                                                                          step_debug:001839d0(c), 
                                                                                          step_debug:00183aec(c), 
                                                                                          step_debug:00183b2c(c), 
                                                                                          step_debug:00183bf4(c), 
                                                                                          step_debug:00183c08(c), 
                                                                                          step_debug:00183c4c(c), 
                                                                                          step_debug:00183ca0(c), 
                                                                                          step_debug:00183cb4(c), 
                                                                                          step_debug:00183cc8(c), 
                                                                                          step_debug:00183d70(c), 
                                                                                          step_debug:00183d84(c), [more]
        0010de40 90 0a 00 d0     adrp       x16,0x25f000
        0010de44 11 7a 45 f9     ldr        x17,[x16, #0xaf0]=>-><EXTERNAL>::strtoul         = 04033640
        0010de48 10 c2 2b 91     add        x16,x16,#0xaf0
        0010de4c 20 02 1f d6     br         x17=><EXTERNAL>::strtoul                         ulong strtoul(char * __nptr, cha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __int32_t * * __ctype_tolower_loc(void)
                               Thunked-Function: <EXTERNAL>::__ctype_tol
             __int32_t * *     x0:8           <RETURN>
                             <EXTERNAL>::__ctype_tolower_loc                 XREF[3]:     str_lower:0020d830(c), 
                                                                                          match_class:0020d8b8(c), 
                                                                                          matchbracketclass:0020f250(c)  
        0010de50 90 0a 00 d0     adrp       x16,0x25f000
        0010de54 11 7e 45 f9     ldr        x17,[x16, #0xaf8]=>-><EXTERNAL>::__ctype_tolow   = 04033648
        0010de58 10 e2 2b 91     add        x16,x16,#0xaf8
        0010de5c 20 02 1f d6     br         x17=><EXTERNAL>::__ctype_tolower_loc             __int32_t * * __ctype_tolower_lo
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int symlink(char * __from, char * __to)
                               Thunked-Function: <EXTERNAL>::symlink
             int               w0:4           <RETURN>
             char *            x0:8           __from
             char *            x1:8           __to
                             <EXTERNAL>::symlink                             XREF[2]:     ExtractUnixLink30:001f0154(c), 
                                                                                          ExtractUnixLink50:001f08a4(c)  
        0010de60 90 0a 00 d0     adrp       x16,0x25f000
        0010de64 11 82 45 f9     ldr        x17,[x16, #0xb00]=>-><EXTERNAL>::symlink         = 04033650
        0010de68 10 02 2c 91     add        x16,x16,#0xb00
        0010de6c 20 02 1f d6     br         x17=><EXTERNAL>::symlink                         int symlink(char * __from, char 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float tanf(float __x)
                               Thunked-Function: <EXTERNAL>::tanf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::tanf                                XREF[1]:     math_tan:0020c808(c)  
        0010de70 90 0a 00 d0     adrp       x16,0x25f000
        0010de74 11 86 45 f9     ldr        x17,[x16, #0xb08]=>-><EXTERNAL>::tanf            = 04033658
        0010de78 10 22 2c 91     add        x16,x16,#0xb08
        0010de7c 20 02 1f d6     br         x17=><EXTERNAL>::tanf                            float tanf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getcwd(char * __buf, size_t __size)
                               Thunked-Function: <EXTERNAL>::getcwd
             char *            x0:8           <RETURN>
             char *            x0:8           __buf
             size_t            x1:8           __size
                             <EXTERNAL>::getcwd                              XREF[5]:     initialize_system:0010f880(c), 
                                                                                          geometry_log_step:0015fb30(c), 
                                                                                          load_nds:0016ff28(c), 
                                                                                          load_file:0017b644(c), 
                                                                                          ConvertNameToFull:001b7018(c)  
        0010de80 90 0a 00 d0     adrp       x16,0x25f000
        0010de84 11 8a 45 f9     ldr        x17,[x16, #0xb10]=>-><EXTERNAL>::getcwd          = 04033660
        0010de88 10 42 2c 91     add        x16,x16,#0xb10
        0010de8c 20 02 1f d6     br         x17=><EXTERNAL>::getcwd                          char * getcwd(char * __buf, size
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_UnlockTexture()
                               Thunked-Function: <EXTERNAL>::SDL_UnlockT
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_UnlockTexture                   XREF[1]:     update_screen:0018a23c(c)  
        0010de90 90 0a 00 d0     adrp       x16,0x25f000
        0010de94 11 8e 45 f9     ldr        x17,[x16, #0xb18]=>-><EXTERNAL>::SDL_UnlockTex   = 04033668
        0010de98 10 62 2c 91     add        x16,x16,#0xb18
        0010de9c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_UnlockTexture               undefined SDL_UnlockTexture()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk lconv * localeconv(void)
                               Thunked-Function: <EXTERNAL>::localeconv
             lconv *           x0:8           <RETURN>
                             <EXTERNAL>::localeconv                          XREF[2]:     g_read:0020bb90(c), 
                                                                                          read_numeral.isra.0:00219120(c)  
        0010dea0 90 0a 00 d0     adrp       x16,0x25f000
        0010dea4 11 92 45 f9     ldr        x17,[x16, #0xb20]=>-><EXTERNAL>::localeconv      = 04033670
        0010dea8 10 82 2c 91     add        x16,x16,#0xb20
        0010deac 20 02 1f d6     br         x17=><EXTERNAL>::localeconv                      lconv * localeconv(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __wcscpy_chk()
                               Thunked-Function: <EXTERNAL>::__wcscpy_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__wcscpy_chk                        XREF[22]:    ProcessFile:001b3950(c), 
                                                                                          GenArcName:001b5a20(c), 
                                                                                          VolNameToFirstName:001b7418(c), 
                                                                                          Rename:001b7dac(c), 
                                                                                          ExtractArchive:001caf54(c), 
                                                                                          MergeArchive:001cb370(c), 
                                                                                          MergeArchive:001cb3d8(c), 
                                                                                          MergeArchive:001cb418(c), 
                                                                                          MergeArchive:001cb7bc(c), 
                                                                                          SetMask:001cb838(c), 
                                                                                          Next:001cbac8(c), 
                                                                                          Next:001cbb30(c), 
                                                                                          Next:001cbc48(c), 
                                                                                          ProcessSwitch:001e84e8(c), 
                                                                                          GetNextMask:001ec0bc(c), 
                                                                                          FindProc:001ec258(c), 
                                                                                          FindProc:001ec27c(c), 
                                                                                          FindProc:001ec510(c), 
                                                                                          FindProc:001ec520(c), 
                                                                                          FindProc:001ec708(c), [more]
        0010deb0 90 0a 00 d0     adrp       x16,0x25f000
        0010deb4 11 96 45 f9     ldr        x17,[x16, #0xb28]=>-><EXTERNAL>::__wcscpy_chk    = 04033678
        0010deb8 10 a2 2c 91     add        x16,x16,#0xb28
        0010debc 20 02 1f d6     br         x17=><EXTERNAL>::__wcscpy_chk                    undefined __wcscpy_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fopen(char * __filename, char * __modes)
                               Thunked-Function: <EXTERNAL>::fopen
             FILE *            x0:8           <RETURN>
             char *            x0:8           __filename
             char *            x1:8           __modes
                             <EXTERNAL>::fopen                               XREF[45]:    load_system_file:0010eaf4(c), 
                                                                                          spu_load_fake_microphone_data:00
                                                                                          gba_backup_auto_save_step:0016eb
                                                                                          gamecard_load_gba:0016ece0(c), 
                                                                                          gamecard_load_gba:0016edc4(c), 
                                                                                          load_nds:0016fde8(c), 
                                                                                          gamecard_close:00170910(c), 
                                                                                          backup_save.part.0:00171d50(c), 
                                                                                          backup_save.part.0:00171f48(c), 
                                                                                          backup_save.part.0:00171f58(c), 
                                                                                          initialize_backup:00172598(c), 
                                                                                          initialize_game_database:001731c
                                                                                          load_state:00174778(c), 
                                                                                          load_state:00174b3c(c), 
                                                                                          nds_file_open:00175a54(c), 
                                                                                          nds_file_open:00175a8c(c), 
                                                                                          nds_file_open:00175b10(c), 
                                                                                          nds_file_open:00175b94(c), 
                                                                                          load_config_file_binary:00176bc4
                                                                                          load_directory_config_file:00177
                                                                                          [more]
        0010dec0 90 0a 00 d0     adrp       x16,0x25f000
        0010dec4 11 9a 45 f9     ldr        x17,[x16, #0xb30]=>-><EXTERNAL>::fopen           = 04033680
        0010dec8 10 c2 2c 91     add        x16,x16,#0xb30
        0010decc 20 02 1f d6     br         x17=><EXTERNAL>::fopen                           FILE * fopen(char * __filename, 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetRenderDrawColor()
                               Thunked-Function: <EXTERNAL>::SDL_SetRend
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetRenderDrawColor              XREF[1]:     clear_screen:0018a424(c)  
        0010ded0 90 0a 00 d0     adrp       x16,0x25f000
        0010ded4 11 9e 45 f9     ldr        x17,[x16, #0xb38]=>-><EXTERNAL>::SDL_SetRender   = 04033688
        0010ded8 10 e2 2c 91     add        x16,x16,#0xb38
        0010dedc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetRenderDrawColor          undefined SDL_SetRenderDrawColor()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void funlockfile(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::funlockfile
             void              <VOID>         <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::funlockfile                         XREF[4]:     read_line:0020aaa8(c), 
                                                                                          read_line:0020ab14(c), 
                                                                                          read_line:0020ab2c(c), 
                                                                                          g_read:0020bd38(c)  
        0010dee0 90 0a 00 d0     adrp       x16,0x25f000
        0010dee4 11 a2 45 f9     ldr        x17,[x16, #0xb40]=>-><EXTERNAL>::funlockfile     = 04033690
        0010dee8 10 02 2d 91     add        x16,x16,#0xb40
        0010deec 20 02 1f d6     br         x17=><EXTERNAL>::funlockfile                     void funlockfile(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int close(int __fd)
                               Thunked-Function: <EXTERNAL>::close
             int               w0:4           <RETURN>
             int               w0:4           __fd
                             <EXTERNAL>::close                               XREF[32]:    initialize_memory:0011c5e0(c), 
                                                                                          initialize_memory:0011c674(c), 
                                                                                          uninitialize_memory:0011c7b4(c), 
                                                                                          gamecard_initialize_homebrew:001
                                                                                          load_nds:00170000(c), 
                                                                                          nds_file_open:0017564c(c), 
                                                                                          nds_file_open:00175990(c), 
                                                                                          nds_file_open:00175ce4(c), 
                                                                                          nds_file_close:00175d40(c), 
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a7554(c), 
                                                                                          unzip_file:001a76a4(c), 
                                                                                          unzip_file:001a7794(c), 
                                                                                          unzip_file:001a77c0(c), 
                                                                                          unzip_file:001a7868(c), [more]
        0010def0 90 0a 00 d0     adrp       x16,0x25f000
        0010def4 11 a6 45 f9     ldr        x17,[x16, #0xb48]=>-><EXTERNAL>::close           = 04033698
        0010def8 10 22 2d 91     add        x16,x16,#0xb48
        0010defc 20 02 1f d6     br         x17=><EXTERNAL>::close                           int close(int __fd)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float log10f(float __x)
                               Thunked-Function: <EXTERNAL>::log10f
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::log10f                              XREF[2]:     math_log10:0020c5e8(c), 
                                                                                          math_log:0020cc64(c)  
        0010df00 90 0a 00 d0     adrp       x16,0x25f000
        0010df04 11 aa 45 f9     ldr        x17,[x16, #0xb50]=>-><EXTERNAL>::log10f          = 040336a0
        0010df08 10 42 2d 91     add        x16,x16,#0xb50
        0010df0c 20 02 1f d6     br         x17=><EXTERNAL>::log10f                          float log10f(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcmp
             int               w0:4           <RETURN>
             char *            x0:8           __s1
             char *            x1:8           __s2
                             <EXTERNAL>::strcmp                              XREF[86]:    initialize_game_database:0017334
                                                                                          initialize_game_database:0017342
                                                                                          initialize_game_database:0017347
                                                                                          initialize_game_database:0017352
                                                                                          initialize_game_database:0017397
                                                                                          initialize_game_database:001739d
                                                                                          game_database_lookup_by_game_cod
                                                                                          game_database_lookup_by_game_cod
                                                                                          nds_file_open:00175c88(c), 
                                                                                          load_file:0017b90c(c), 
                                                                                          load_file:0017bb78(c), 
                                                                                          load_file:0017bbc8(c), 
                                                                                          load_file:0017c6a0(c), 
                                                                                          step_debug:001832bc(c), 
                                                                                          step_debug:001832e0(c), 
                                                                                          step_debug:001832fc(c), 
                                                                                          step_debug:0018332c(c), 
                                                                                          step_debug:0018334c(c), 
                                                                                          step_debug:00183368(c), 
                                                                                          step_debug:00183388(c), [more]
        0010df10 90 0a 00 d0     adrp       x16,0x25f000
        0010df14 11 ae 45 f9     ldr        x17,[x16, #0xb58]=>-><EXTERNAL>::strcmp          = 040336a8
        0010df18 10 62 2d 91     add        x16,x16,#0xb58
        0010df1c 20 02 1f d6     br         x17=><EXTERNAL>::strcmp                          int strcmp(char * __s1, char * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * fgets(char * __s, int __n, FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgets
             char *            x0:8           <RETURN>
             char *            x0:8           __s
             int               w1:4           __n
             FILE *            x2:8           __stream
                             <EXTERNAL>::fgets                               XREF[8]:     xml_parse_line:00172da0(c), 
                                                                                          initialize_game_database:0017320
                                                                                          load_config_file:0017802c(c), 
                                                                                          file_info_cache_load:0017ab50(c), 
                                                                                          file_info_cache_load:0017ac44(c), 
                                                                                          load_custom_cheats:0018186c(c), 
                                                                                          load_custom_cheats:00181928(c), 
                                                                                          step_debug:00183944(c)  
        0010df20 90 0a 00 d0     adrp       x16,0x25f000
        0010df24 11 b2 45 f9     ldr        x17,[x16, #0xb60]=>-><EXTERNAL>::fgets           = 040336b0
        0010df28 10 82 2d 91     add        x16,x16,#0xb60
        0010df2c 20 02 1f d6     br         x17=><EXTERNAL>::fgets                           char * fgets(char * __s, int __n
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcspbrk(wchar_t * __wcs, wchar_t * __acc
                               Thunked-Function: <EXTERNAL>::wcspbrk
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __wcs
             wchar_t *         x1:8           __accept
                             <EXTERNAL>::wcspbrk                             XREF[4]:     IsWildcard:001b6144(c), 
                                                                                          IsNameUsable:001b69b8(c), 
                                                                                          ProcessSwitch:001e8c00(c), 
                                                                                          match:001eda10(c)  
        0010df30 90 0a 00 d0     adrp       x16,0x25f000
        0010df34 11 b6 45 f9     ldr        x17,[x16, #0xb68]=>-><EXTERNAL>::wcspbrk         = 040336b8
        0010df38 10 a2 2d 91     add        x16,x16,#0xb68
        0010df3c 20 02 1f d6     br         x17=><EXTERNAL>::wcspbrk                         wchar_t * wcspbrk(wchar_t * __wc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void flockfile(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::flockfile
             void              <VOID>         <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::flockfile                           XREF[2]:     read_line:0020aa58(c), 
                                                                                          g_read:0020bba4(c)  
        0010df40 90 0a 00 d0     adrp       x16,0x25f000
        0010df44 11 ba 45 f9     ldr        x17,[x16, #0xb70]=>-><EXTERNAL>::flockfile       = 040336c0
        0010df48 10 c2 2d 91     add        x16,x16,#0xb70
        0010df4c 20 02 1f d6     br         x17=><EXTERNAL>::flockfile                       void flockfile(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int toupper(int __c)
                               Thunked-Function: <EXTERNAL>::toupper
             int               w0:4           <RETURN>
             int               w0:4           __c
                             <EXTERNAL>::toupper                             XREF[6]:     stricomp:001b4810(c), 
                                                                                          stricomp:001b481c(c), 
                                                                                          strnicomp:001b48a8(c), 
                                                                                          strnicomp:001b48b4(c), 
                                                                                          loctoupper:001b49ec(c), 
                                                                                          etoupper:001b4a14(c)  
        0010df50 90 0a 00 d0     adrp       x16,0x25f000
        0010df54 11 be 45 f9     ldr        x17,[x16, #0xb78]=>-><EXTERNAL>::toupper         = 040336c8
        0010df58 10 e2 2d 91     add        x16,x16,#0xb78
        0010df5c 20 02 1f d6     br         x17=><EXTERNAL>::toupper                         int toupper(int __c)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wchar_t * wcsrchr(wchar_t * __wcs, wchar_t __wc)
                               Thunked-Function: <EXTERNAL>::wcsrchr
             wchar_t *         x0:8           <RETURN>
             wchar_t *         x0:8           __wcs
             wchar_t           w1:4           __wc
                             <EXTERNAL>::wcsrchr                             XREF[11]:    GenArcName:001b55ac(c), 
                                                                                          SetExt:001b5f24(c), 
                                                                                          SetSFXExt:001b5fec(c), 
                                                                                          GetExt:001b6094(c), 
                                                                                          CmpExt:001b60f0(c), 
                                                                                          NextVolumeName:001b677c(c), 
                                                                                          NextVolumeName:001b6964(c), 
                                                                                          ParseVersionFileName:001b71a4(c), 
                                                                                          VolNameToFirstName:001b7574(c), 
                                                                                          FindProc:001ec234(c), 
                                                                                          FindProc:001ec288(c)  
        0010df60 90 0a 00 d0     adrp       x16,0x25f000
        0010df64 11 c2 45 f9     ldr        x17,[x16, #0xb80]=>-><EXTERNAL>::wcsrchr         = 040336d0
        0010df68 10 02 2e 91     add        x16,x16,#0xb80
        0010df6c 20 02 1f d6     br         x17=><EXTERNAL>::wcsrchr                         wchar_t * wcsrchr(wchar_t * __wc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int wctomb(char * __s, wchar_t __wchar)
                               Thunked-Function: <EXTERNAL>::wctomb
             int               w0:4           <RETURN>
             char *            x0:8           __s
             wchar_t           w1:4           __wchar
                             <EXTERNAL>::wctomb                              XREF[2]:     WideToChar:001be8c4(c), 
                                                                                          WideToChar:001be8d0(c)  
        0010df70 90 0a 00 d0     adrp       x16,0x25f000
        0010df74 11 c6 45 f9     ldr        x17,[x16, #0xb88]=>-><EXTERNAL>::wctomb          = 040336d8
        0010df78 10 22 2e 91     add        x16,x16,#0xb88
        0010df7c 20 02 1f d6     br         x17=><EXTERNAL>::wctomb                          int wctomb(char * __s, wchar_t _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat(int __ver, char * __filename, stat * _
                               Thunked-Function: <EXTERNAL>::__xstat
             int               w0:4           <RETURN>
             int               w0:4           __ver
             char *            x1:8           __filename
             stat *            x2:8           __stat_buf
                             <EXTERNAL>::__xstat                             XREF[9]:     initialize_system_directory:0010
                                                                                          initialize_game_database:001731d
                                                                                          savestate_index_timestamp:001753
                                                                                          nds_file_open:001756d8(c), 
                                                                                          nds_file_open:001757e8(c), 
                                                                                          load_file:0017b660(c), 
                                                                                          load_file:0017b674(c), 
                                                                                          load_file:0017b74c(c), 
                                                                                          reset_input:00189094(c)  
        0010df80 90 0a 00 d0     adrp       x16,0x25f000
        0010df84 11 ca 45 f9     ldr        x17,[x16, #0xb90]=>-><EXTERNAL>::__xstat         = 040336e0
        0010df88 10 42 2e 91     add        x16,x16,#0xb90
        0010df8c 20 02 1f d6     br         x17=><EXTERNAL>::__xstat                         int __xstat(int __ver, char * __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ssize_t write(int __fd, void * __buf, size_t __n)
                               Thunked-Function: <EXTERNAL>::write
             ssize_t           x0:8           <RETURN>
             int               w0:4           __fd
             void *            x1:8           __buf
             size_t            x2:8           __n
                             <EXTERNAL>::write                               XREF[1]:     gamecard_write:001707c8(c)  
        0010df90 90 0a 00 d0     adrp       x16,0x25f000
        0010df94 11 ce 45 f9     ldr        x17,[x16, #0xb98]=>-><EXTERNAL>::write           = 040336e8
        0010df98 10 62 2e 91     add        x16,x16,#0xb98
        0010df9c 20 02 1f d6     br         x17=><EXTERNAL>::write                           ssize_t write(int __fd, void * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined flock()
                               Thunked-Function: <EXTERNAL>::flock
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::flock                               XREF[1]:     Open:001b79d4(c)  
        0010dfa0 90 0a 00 d0     adrp       x16,0x25f000
        0010dfa4 11 d2 45 f9     ldr        x17,[x16, #0xba0]=>-><EXTERNAL>::flock           = 040336f0
        0010dfa8 10 82 2e 91     add        x16,x16,#0xba0
        0010dfac 20 02 1f d6     br         x17=><EXTERNAL>::flock                           undefined flock()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void * malloc(size_t __size)
                               Thunked-Function: <EXTERNAL>::malloc
             void *            x0:8           <RETURN>
             size_t            x0:8           __size
                             <EXTERNAL>::malloc                              XREF[290]:   cpu_block_create:0012bff4(c), 
                                                                                          texture_cache_convert_palette_nu
                                                                                          texture_cache_convert_palette_al
                                                                                          texture_cache_convert_palette_al
                                                                                          texture_cache_convert:001696dc(c
                                                                                          texture_cache_convert:001697c0(c
                                                                                          texture_cache_convert:001697d8(c
                                                                                          texture_cache_convert:001697f0(c
                                                                                          texture_cache_convert_compressed
                                                                                          texture_cache_convert_split:0016
                                                                                          texture_cache_convert_split:0016
                                                                                          texture_cache_convert_split:0016
                                                                                          texture_cache_convert_split:0016
                                                                                          texture_cache_create:0016b3e4(c), 
                                                                                          texture_cache_lookup:0016b7e4(c), 
                                                                                          texture_cache_lookup:0016b858(c), 
                                                                                          spu_load_fake_microphone_data:00
                                                                                          gamecard_load_program:0016f744(c
                                                                                          gamecard_load_program:0016f8ac(c
                                                                                          RAROpenArchiveEx:001b3470(c), 
                                                                                          [more]
        0010dfb0 90 0a 00 d0     adrp       x16,0x25f000
        0010dfb4 11 d6 45 f9     ldr        x17,[x16, #0xba8]=>-><EXTERNAL>::malloc          = 040336f8
        0010dfb8 10 a2 2e 91     add        x16,x16,#0xba8
        0010dfbc 20 02 1f d6     br         x17=><EXTERNAL>::malloc                          void * malloc(size_t __size)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float powf(float __x, float __y)
                               Thunked-Function: <EXTERNAL>::powf
             float             s0:4           <RETURN>
             float             s0:4           __x
             float             s1:4           __y
                             <EXTERNAL>::powf                                XREF[3]:     numarith.isra.0:001fab70(c), 
                                                                                          luaV_execute:00204874(c), 
                                                                                          math_pow:0020c704(c)  
        0010dfc0 90 0a 00 d0     adrp       x16,0x25f000
        0010dfc4 11 da 45 f9     ldr        x17,[x16, #0xbb0]=>-><EXTERNAL>::powf            = 04033700
        0010dfc8 10 c2 2e 91     add        x16,x16,#0xbb0
        0010dfcc 20 02 1f d6     br         x17=><EXTERNAL>::powf                            float powf(float __x, float __y)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk ulonglong strtoull(char * __nptr, char * * __endpt
                               Thunked-Function: <EXTERNAL>::strtoull
             ulonglong         x0:8           <RETURN>
             char *            x0:8           __nptr
             char * *          x1:8           __endptr
             int               w2:4           __base
                             <EXTERNAL>::strtoull                            XREF[7]:     set_debug_breakpoint:0010f0c0(c), 
                                                                                          process_arguments:0010f298(c), 
                                                                                          process_arguments:0010f314(c), 
                                                                                          process_arguments:0010f450(c), 
                                                                                          process_arguments:0010f4e8(c), 
                                                                                          process_arguments:0010f548(c), 
                                                                                          process_arguments:0010f63c(c)  
        0010dfd0 90 0a 00 d0     adrp       x16,0x25f000
        0010dfd4 11 de 45 f9     ldr        x17,[x16, #0xbb8]=>-><EXTERNAL>::strtoull        = 04033708
        0010dfd8 10 e2 2e 91     add        x16,x16,#0xbb8
        0010dfdc 20 02 1f d6     br         x17=><EXTERNAL>::strtoull                        ulonglong strtoull(char * __nptr
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_OpenAudio()
                               Thunked-Function: <EXTERNAL>::SDL_OpenAud
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_OpenAudio                       XREF[1]:     initialize_audio:0018ca14(c)  
        0010dfe0 90 0a 00 d0     adrp       x16,0x25f000
        0010dfe4 11 e2 45 f9     ldr        x17,[x16, #0xbc0]=>-><EXTERNAL>::SDL_OpenAudio   = 04033710
        0010dfe8 10 02 2f 91     add        x16,x16,#0xbc0
        0010dfec 20 02 1f d6     br         x17=><EXTERNAL>::SDL_OpenAudio                   undefined SDL_OpenAudio()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined compressBound()
                               Thunked-Function: <EXTERNAL>::compressBou
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::compressBound                       XREF[1]:     save_state_thread_function:00174
        0010dff0 90 0a 00 d0     adrp       x16,0x25f000
        0010dff4 11 e6 45 f9     ldr        x17,[x16, #0xbc8]=>-><EXTERNAL>::compressBound   = 04033718
        0010dff8 10 22 2f 91     add        x16,x16,#0xbc8
        0010dffc 20 02 1f d6     br         x17=><EXTERNAL>::compressBound                   undefined compressBound()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_signal(pthread_cond_t * __cond)
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               w0:4           <RETURN>
             pthread_cond_t    x0:8           __cond
                             <EXTERNAL>::pthread_cond_signal                 XREF[9]:     video_render_thread:0012facc(c), 
                                                                                          video_render_scanlines:00130ce4(
                                                                                          update_frame_3d_1x:00152a3c(c), 
                                                                                          video_3d_render_thread:00158ef0(
                                                                                          update_frame_3d_4x:001590dc(c), 
                                                                                          video_3d_run_thread:001594f8(c), 
                                                                                          video_3d_start_rendering:0015962
                                                                                          video_3d_start_rendering:0015964
                                                                                          PoolThreadLoop:001e7b30(c)  
        0010e000 90 0a 00 b0     adrp       x16,0x25f000
        0010e004 11 ea 45 f9     ldr        x17,[x16, #0xbd0]=>-><EXTERNAL>::pthread_cond_   = 04033720
        0010e008 10 42 2f 91     add        x16,x16,#0xbd0
        0010e00c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_cond_signal             int pthread_cond_signal(pthread_
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float frexpf(float __x, int * __exponent)
                               Thunked-Function: <EXTERNAL>::frexpf
             float             s0:4           <RETURN>
             float             s0:4           __x
             int *             x0:8           __exponent
                             <EXTERNAL>::frexpf                              XREF[2]:     mainposition:002004a8(c), 
                                                                                          math_frexp:0020c690(c)  
        0010e010 90 0a 00 b0     adrp       x16,0x25f000
        0010e014 11 ee 45 f9     ldr        x17,[x16, #0xbd8]=>-><EXTERNAL>::frexpf          = 04033728
        0010e018 10 62 2f 91     add        x16,x16,#0xbd8
        0010e01c 20 02 1f d6     br         x17=><EXTERNAL>::frexpf                          float frexpf(float __x, int * __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long wcstol(wchar_t * __nptr, wchar_t * * __endptr
                               Thunked-Function: <EXTERNAL>::wcstol
             long              x0:8           <RETURN>
             wchar_t *         x0:8           __nptr
             wchar_t * *       x1:8           __endptr
             int               w2:4           __base
                             <EXTERNAL>::wcstol                              XREF[3]:     ProcessSwitch:001e8ae4(c), 
                                                                                          ProcessSwitch:001e8d40(c), 
                                                                                          GetExclAttr:001ea298(c)  
        0010e020 90 0a 00 b0     adrp       x16,0x25f000
        0010e024 11 f2 45 f9     ldr        x17,[x16, #0xbe0]=>-><EXTERNAL>::wcstol          = 04033730
        0010e028 10 82 2f 91     add        x16,x16,#0xbe0
        0010e02c 20 02 1f d6     br         x17=><EXTERNAL>::wcstol                          long wcstol(wchar_t * __nptr, wc
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void abort(void)
                               Thunked-Function: <EXTERNAL>::abort
             void              <VOID>         <RETURN>
                             <EXTERNAL>::abort                               XREF[2]:     _start:0010e7f8(c), 
                                                                                          luaD_throw:001f5d10(c)  
        0010e030 90 0a 00 b0     adrp       x16,0x25f000
        0010e034 11 f6 45 f9     ldr        x17,[x16, #0xbe8]=>-><EXTERNAL>::abort           = 04033738
        0010e038 10 a2 2f 91     add        x16,x16,#0xbe8
        0010e03c 20 02 1f d6     br         x17=><EXTERNAL>::abort                           void abort(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk char * getenv(char * __name)
                               Thunked-Function: <EXTERNAL>::getenv
             char *            x0:8           <RETURN>
             char *            x0:8           __name
                             <EXTERNAL>::getenv                              XREF[5]:     EnumConfigPaths:001b6490(c), 
                                                                                          GetConfigName:001b65d4(c), 
                                                                                          ParseEnvVar:001e9a18(c), 
                                                                                          setpath:00214038(c), 
                                                                                          setpath:0021411c(c)  
        0010e040 90 0a 00 b0     adrp       x16,0x25f000
        0010e044 11 fa 45 f9     ldr        x17,[x16, #0xbf0]=>-><EXTERNAL>::getenv          = 04033740
        0010e048 10 c2 2f 91     add        x16,x16,#0xbf0
        0010e04c 20 02 1f d6     br         x17=><EXTERNAL>::getenv                          char * getenv(char * __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __sighandler_t signal(int __sig, __sighandler_t __
                               Thunked-Function: <EXTERNAL>::signal
             __sighandler_t    x0:8           <RETURN>
             int               w0:4           __sig
             __sighandler_t    x1:8           __handler
                             <EXTERNAL>::signal                              XREF[2]:     SetSignalHandlers:001c4098(c), 
                                                                                          SetSignalHandlers:001c40ac(c)  
        0010e050 90 0a 00 b0     adrp       x16,0x25f000
        0010e054 11 fe 45 f9     ldr        x17,[x16, #0xbf8]=>-><EXTERNAL>::signal          = 04033748
        0010e058 10 e2 2f 91     add        x16,x16,#0xbf8
        0010e05c 20 02 1f d6     br         x17=><EXTERNAL>::signal                          __sighandler_t signal(int __sig,
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __cxa_end_catch()
                               Thunked-Function: <EXTERNAL>::__cxa_end_c
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_end_catch                     XREF[4]:     001b35cc(c), 001b3a58(c), 
                                                                                          001b3a78(c), 001b3e30(c)  
        0010e060 90 0a 00 b0     adrp       x16,0x25f000
        0010e064 11 02 46 f9     ldr        x17,[x16, #0xc00]=>-><EXTERNAL>::__cxa_end_catch = 04033750
        0010e068 10 02 30 91     add        x16,x16,#0xc00
        0010e06c 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_end_catch                 undefined __cxa_end_catch()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_mutex_destroy(pthread_mutex_t * __mutex)
                               Thunked-Function: <EXTERNAL>::pthread_mut
             int               w0:4           <RETURN>
             pthread_mutex_    x0:8           __mutex
                             <EXTERNAL>::pthread_mutex_destroy               XREF[3]:     ~ThreadPool:001e78d0(c), 
                                                                                          ~ThreadPool:001e78e0(c), 
                                                                                          ~ThreadPool:001e7904(c)  
        0010e070 90 0a 00 b0     adrp       x16,0x25f000
        0010e074 11 06 46 f9     ldr        x17,[x16, #0xc08]=>-><EXTERNAL>::pthread_mutex   = 04033758
        0010e078 10 22 30 91     add        x16,x16,#0xc08
        0010e07c 20 02 1f d6     br         x17=><EXTERNAL>::pthread_mutex_destroy           int pthread_mutex_destroy(pthrea
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcasecmp(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcasecmp
             int               w0:4           <RETURN>
             char *            x0:8           __s1
             char *            x1:8           __s2
                             <EXTERNAL>::strcasecmp                          XREF[157]:   initialize_game_database:0017325
                                                                                          initialize_game_database:001732d
                                                                                          initialize_game_database:001732f
                                                                                          initialize_game_database:0017339
                                                                                          initialize_game_database:001733d
                                                                                          initialize_game_database:0017357
                                                                                          initialize_game_database:0017358
                                                                                          initialize_game_database:001735b
                                                                                          initialize_game_database:001735e
                                                                                          initialize_game_database:001738b
                                                                                          initialize_game_database:001739f
                                                                                          initialize_game_database:00173a0
                                                                                          initialize_game_database:00173a1
                                                                                          nds_file_open:00175640(c), 
                                                                                          nds_file_open:00175710(c), 
                                                                                          nds_file_open:00175724(c), 
                                                                                          nds_file_open:00175738(c), 
                                                                                          load_config_file:001780ac(c), 
                                                                                          load_config_file:001780c0(c), 
                                                                                          load_config_file:001780d4(c), 
                                                                                          [more]
        0010e080 90 0a 00 b0     adrp       x16,0x25f000
        0010e084 11 0a 46 f9     ldr        x17,[x16, #0xc10]=>-><EXTERNAL>::strcasecmp      = 04033760
        0010e088 10 42 30 91     add        x16,x16,#0xc10
        0010e08c 20 02 1f d6     br         x17=><EXTERNAL>::strcasecmp                      int strcasecmp(char * __s1, char
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __gxx_personality_v0()
                               Thunked-Function: <EXTERNAL>::__gxx_perso
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__gxx_personality_v0
        0010e090 90 0a 00 b0     adrp       x16,0x25f000
        0010e094 11 0e 46 f9     ldr        x17,[x16, #0xc18]=>-><EXTERNAL>::__gxx_persona   = 04033768
        0010e098 10 62 30 91     add        x16,x16,#0xc18
        0010e09c 20 02 1f d6     br         x17=><EXTERNAL>::__gxx_personality_v0            undefined __gxx_personality_v0()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __memcpy_chk()
                               Thunked-Function: <EXTERNAL>::__memcpy_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__memcpy_chk                        XREF[4]:     texture_cache_create:0016b28c(c), 
                                                                                          pbkdf2:001c113c(c), 
                                                                                          GetStreamNameNTFS:001f0318(c), 
                                                                                          str_format:0020e2f0(c)  
        0010e0a0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0a4 11 12 46 f9     ldr        x17,[x16, #0xc20]=>-><EXTERNAL>::__memcpy_chk    = 04033770
        0010e0a8 10 82 30 91     add        x16,x16,#0xc20
        0010e0ac 20 02 1f d6     br         x17=><EXTERNAL>::__memcpy_chk                    undefined __memcpy_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void clearerr(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::clearerr
             void              <VOID>         <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::clearerr                            XREF[6]:     DirectRead:001b7e14(c), 
                                                                                          Read:001b83d8(c), 
                                                                                          PutByte:001b8774(c), 
                                                                                          Write:001b88c0(c), 
                                                                                          Copy:001b8b54(c), 
                                                                                          g_read:0020ba18(c)  
        0010e0b0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0b4 11 16 46 f9     ldr        x17,[x16, #0xc28]=>-><EXTERNAL>::clearerr        = 04033778
        0010e0b8 10 a2 30 91     add        x16,x16,#0xc28
        0010e0bc 20 02 1f d6     br         x17=><EXTERNAL>::clearerr                        void clearerr(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float expf(float __x)
                               Thunked-Function: <EXTERNAL>::expf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::expf                                XREF[1]:     math_exp:0020cd18(c)  
        0010e0c0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0c4 11 1a 46 f9     ldr        x17,[x16, #0xc30]=>-><EXTERNAL>::expf            = 04033788
        0010e0c8 10 c2 30 91     add        x16,x16,#0xc30
        0010e0cc 20 02 1f d6     br         x17=><EXTERNAL>::expf                            float expf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float asinf(float __x)
                               Thunked-Function: <EXTERNAL>::asinf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::asinf                               XREF[1]:     math_asin:0020cdf8(c)  
        0010e0d0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0d4 11 1e 46 f9     ldr        x17,[x16, #0xc38]=>-><EXTERNAL>::asinf           = 04033790
        0010e0d8 10 e2 30 91     add        x16,x16,#0xc38
        0010e0dc 20 02 1f d6     br         x17=><EXTERNAL>::asinf                           float asinf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fgetc(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::fgetc
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::fgetc                               XREF[6]:     _fgetw:001a6ca0(c), 
                                                                                          _fgetw:001a6cac(c), 
                                                                                          _fgetd:001a6cd4(c), 
                                                                                          _fgetd:001a6ce0(c), 
                                                                                          _fgetd:001a6cec(c), 
                                                                                          _fgetd:001a6cfc(c)  
        0010e0e0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0e4 11 22 46 f9     ldr        x17,[x16, #0xc40]=>-><EXTERNAL>::fgetc           = 04033798
        0010e0e8 10 02 31 91     add        x16,x16,#0xc40
        0010e0ec 20 02 1f d6     br         x17=><EXTERNAL>::fgetc                           int fgetc(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pclose(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::pclose
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::pclose                              XREF[1]:     io_pclose:0020ac64(c)  
        0010e0f0 90 0a 00 b0     adrp       x16,0x25f000
        0010e0f4 11 26 46 f9     ldr        x17,[x16, #0xc48]=>-><EXTERNAL>::pclose          = 040337a0
        0010e0f8 10 22 31 91     add        x16,x16,#0xc48
        0010e0fc 20 02 1f d6     br         x17=><EXTERNAL>::pclose                          int pclose(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long sysconf(int __name)
                               Thunked-Function: <EXTERNAL>::sysconf
             long              x0:8           <RETURN>
             int               w0:4           __name
                             <EXTERNAL>::sysconf                             XREF[2]:     GetNumberOfCPU:001e765c(c), 
                                                                                          GetNumberOfThreads:001e767c(c)  
        0010e100 90 0a 00 b0     adrp       x16,0x25f000
        0010e104 11 2a 46 f9     ldr        x17,[x16, #0xc50]=>-><EXTERNAL>::sysconf         = 040337a8
        0010e108 10 42 31 91     add        x16,x16,#0xc50
        0010e10c 20 02 1f d6     br         x17=><EXTERNAL>::sysconf                         long sysconf(int __name)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int mblen(char * __s, size_t __n)
                               Thunked-Function: <EXTERNAL>::mblen
             int               w0:4           <RETURN>
             char *            x0:8           __s
             size_t            x1:8           __n
                             <EXTERNAL>::mblen                               XREF[4]:     WideToChar:001be8e4(c), 
                                                                                          WideToChar:001be8f4(c), 
                                                                                          CharToWide:001bea8c(c), 
                                                                                          CharToWide:001bea9c(c)  
        0010e110 90 0a 00 b0     adrp       x16,0x25f000
        0010e114 11 2e 46 f9     ldr        x17,[x16, #0xc58]=>-><EXTERNAL>::mblen           = 040337b0
        0010e118 10 62 31 91     add        x16,x16,#0xc58
        0010e11c 20 02 1f d6     br         x17=><EXTERNAL>::mblen                           int mblen(char * __s, size_t __n)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int open64(char * __file, int __oflag, ...)
                               Thunked-Function: <EXTERNAL>::open64
             int               w0:4           <RETURN>
             char *            x0:8           __file
             int               w1:4           __oflag
                             <EXTERNAL>::open64                              XREF[2]:     unzip_file_to_memory_partial:001
                                                                                          unzip_file:001a74f8(c)  
        0010e120 90 0a 00 b0     adrp       x16,0x25f000
        0010e124 11 32 46 f9     ldr        x17,[x16, #0xc60]=>-><EXTERNAL>::open64          = 040337b8
        0010e128 10 82 31 91     add        x16,x16,#0xc60
        0010e12c 20 02 1f d6     br         x17=><EXTERNAL>::open64                          int open64(char * __file, int __
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetWindowSize()
                               Thunked-Function: <EXTERNAL>::SDL_SetWind
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetWindowSize                   XREF[2]:     set_screen_menu_off:0018a58c(c), 
                                                                                          set_screen_menu_on:0018ab00(c)  
        0010e130 90 0a 00 b0     adrp       x16,0x25f000
        0010e134 11 36 46 f9     ldr        x17,[x16, #0xc68]=>-><EXTERNAL>::SDL_SetWindow   = 040337c0
        0010e138 10 a2 31 91     add        x16,x16,#0xc68
        0010e13c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetWindowSize               undefined SDL_SetWindowSize()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sinhf(float __x)
                               Thunked-Function: <EXTERNAL>::sinhf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sinhf                               XREF[1]:     math_sinh:0020c788(c)  
        0010e140 90 0a 00 b0     adrp       x16,0x25f000
        0010e144 11 3a 46 f9     ldr        x17,[x16, #0xc70]=>-><EXTERNAL>::sinhf           = 040337c8
        0010e148 10 c2 31 91     add        x16,x16,#0xc70
        0010e14c 20 02 1f d6     br         x17=><EXTERNAL>::sinhf                           float sinhf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined __cxa_throw()
                               Thunked-Function: <EXTERNAL>::__cxa_throw
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__cxa_throw                         XREF[4]:     Throw:0010e3ac(c), 
                                                                                          Init:001dfda0(c), 
                                                                                          Init:001dfdcc(c), 
                                                                                          Init:001e1b50(c)  
        0010e150 90 0a 00 b0     adrp       x16,0x25f000
        0010e154 11 3e 46 f9     ldr        x17,[x16, #0xc78]=>-><EXTERNAL>::__cxa_throw     = 040337d0
        0010e158 10 e2 31 91     add        x16,x16,#0xc78
        0010e15c 20 02 1f d6     br         x17=><EXTERNAL>::__cxa_throw                     undefined __cxa_throw()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn void exit(int __status)
                               Thunked-Function: <EXTERNAL>::exit
             void              <VOID>         <RETURN>
             int               w0:4           __status
                             <EXTERNAL>::exit                                XREF[5]:     quit:0010ea64(c), 
                                                                                          initialize_memory:0011c660(c), 
                                                                                          initialize_memory:0011c6e8(c), 
                                                                                          print_scheduler_state:0011e894(c
                                                                                          ProcessSignal:001c3db8(c)  
        0010e160 90 0a 00 b0     adrp       x16,0x25f000
        0010e164 11 42 46 f9     ldr        x17,[x16, #0xc80]=>-><EXTERNAL>::exit            = 040337d8
        0010e168 10 02 32 91     add        x16,x16,#0xc80
        0010e16c 20 02 1f d6     br         x17=><EXTERNAL>::exit                            void exit(int __status)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined inflateBackEnd()
                               Thunked-Function: <EXTERNAL>::inflateBack
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::inflateBackEnd                      XREF[1]:     unzip_file_to_memory_partial:001
        0010e170 90 0a 00 b0     adrp       x16,0x25f000
        0010e174 11 46 46 f9     ldr        x17,[x16, #0xc88]=>-><EXTERNAL>::inflateBackEnd  = 040337e0
        0010e178 10 22 32 91     add        x16,x16,#0xc88
        0010e17c 20 02 1f d6     br         x17=><EXTERNAL>::inflateBackEnd                  undefined inflateBackEnd()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strcoll(char * __s1, char * __s2)
                               Thunked-Function: <EXTERNAL>::strcoll
             int               w0:4           <RETURN>
             char *            x0:8           __s1
             char *            x1:8           __s2
                             <EXTERNAL>::strcoll                             XREF[2]:     luaV_lessthan:00202fdc(c), 
                                                                                          luaV_lessequal:0020316c(c)  
        0010e180 90 0a 00 b0     adrp       x16,0x25f000
        0010e184 11 4a 46 f9     ldr        x17,[x16, #0xc90]=>-><EXTERNAL>::strcoll         = 040337e8
        0010e188 10 42 32 91     add        x16,x16,#0xc90
        0010e18c 20 02 1f d6     br         x17=><EXTERNAL>::strcoll                         int strcoll(char * __s1, char * 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_SetHint()
                               Thunked-Function: <EXTERNAL>::SDL_SetHint
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_SetHint                         XREF[1]:     initialize_screen:0018a898(c)  
        0010e190 90 0a 00 b0     adrp       x16,0x25f000
        0010e194 11 4e 46 f9     ldr        x17,[x16, #0xc98]=>-><EXTERNAL>::SDL_SetHint     = 040337f0
        0010e198 10 62 32 91     add        x16,x16,#0xc98
        0010e19c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_SetHint                     undefined SDL_SetHint()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk size_t fwrite(void * __ptr, size_t __size, size_t 
                               Thunked-Function: <EXTERNAL>::fwrite
             size_t            x0:8           <RETURN>
             void *            x0:8           __ptr
             size_t            x1:8           __size
             size_t            x2:8           __n
             FILE *            x3:8           __s
                             <EXTERNAL>::fwrite                              XREF[71]:    cpu_block_log_all:0012f56c(c), 
                                                                                          process_geometry:001625fc(c), 
                                                                                          process_geometry:00162618(c), 
                                                                                          gba_backup_auto_save_step:0016eb
                                                                                          load_nds:0016fe10(c), 
                                                                                          gamecard_close:00170938(c), 
                                                                                          backup_save.part.0:00171e2c(c), 
                                                                                          backup_save.part.0:00171ee0(c), 
                                                                                          save_state_thread_function:00174
                                                                                          nds_file_open:00175be0(c), 
                                                                                          nds_file_open:00175bf4(c), 
                                                                                          nds_file_open:00175c08(c), 
                                                                                          save_directory_config_file:00179
                                                                                          icon_cache_add:0017b23c(c), 
                                                                                          icon_cache_add:0017b250(c), 
                                                                                          icon_cache_add:0017b27c(c), 
                                                                                          update_input:00188780(c), 
                                                                                          unzip_file:001a7750(c), 
                                                                                          unzip_file:001a7844(c), 
                                                                                          Write:001b8824(c), [more]
        0010e1a0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1a4 11 52 46 f9     ldr        x17,[x16, #0xca0]=>-><EXTERNAL>::fwrite          = 04033800
        0010e1a8 10 82 32 91     add        x16,x16,#0xca0
        0010e1ac 20 02 1f d6     br         x17=><EXTERNAL>::fwrite                          size_t fwrite(void * __ptr, size
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk noreturn undefined _Unwind_Resume()
                               Thunked-Function: <EXTERNAL>::_Unwind_Res
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::_Unwind_Resume                      XREF[48]:    001b3550(c), 001b3a50(c), 
                                                                                          001b3e3c(c), 001b4208(c), 
                                                                                          001b4334(c), 001b761c(c), 
                                                                                          001b82a8(c), 001b8cac(c), 
                                                                                          001b9148(c), 001b9658(c), 
                                                                                          001b9b90(c), 001b9da4(c), 
                                                                                          001baa30(c), 001bab2c(c), 
                                                                                          001bb3f8(c), 001bb424(c), 
                                                                                          001bc178(c), 001bd4a4(c), 
                                                                                          001bdd94(c), 001be7d4(c), [more]
        0010e1b0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1b4 11 56 46 f9     ldr        x17,[x16, #0xca8]=>-><EXTERNAL>::_Unwind_Resume  = 04033808
        0010e1b8 10 a2 32 91     add        x16,x16,#0xca8
        0010e1bc 20 02 1f d6     br         x17=><EXTERNAL>::_Unwind_Resume                  undefined _Unwind_Resume()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int getpagesize(void)
                               Thunked-Function: <EXTERNAL>::getpagesize
             int               w0:4           <RETURN>
                             <EXTERNAL>::getpagesize                         XREF[1]:     initialize_memory:0011bfa0(c)  
        0010e1c0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1c4 11 5a 46 f9     ldr        x17,[x16, #0xcb0]=>-><EXTERNAL>::getpagesize     = 04033810
        0010e1c8 10 c2 32 91     add        x16,x16,#0xcb0
        0010e1cc 20 02 1f d6     br         x17=><EXTERNAL>::getpagesize                     int getpagesize(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int pthread_cond_wait(pthread_cond_t * __cond, pth
                               Thunked-Function: <EXTERNAL>::pthread_con
             int               w0:4           <RETURN>
             pthread_cond_t    x0:8           __cond
             pthread_mutex_    x1:8           __mutex
                             <EXTERNAL>::pthread_cond_wait                   XREF[14]:    video_render_thread:0012faf0(c), 
                                                                                          video_render_thread:0012fb04(c), 
                                                                                          video_render_scanlines:00130d30(
                                                                                          update_frame_3d_1x:00152c58(c), 
                                                                                          video_3d_render_thread:00158eb8(
                                                                                          update_frame_3d_4x:001592f8(c), 
                                                                                          video_3d_run_thread:001594b8(c), 
                                                                                          video_3d_run_thread:00159528(c), 
                                                                                          video_3d_finish_rendering:001596
                                                                                          ~ThreadPool:001e7960(c), 
                                                                                          PoolThreadLoop:001e7a50(c), 
                                                                                          GetQueuedTask:001e7bb0(c), 
                                                                                          AddTask:001e7d30(c), 
                                                                                          WaitDone:001e7e50(c)  
        0010e1d0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1d4 11 5e 46 f9     ldr        x17,[x16, #0xcb8]=>-><EXTERNAL>::pthread_cond_   = 04033818
        0010e1d8 10 e2 32 91     add        x16,x16,#0xcb8
        0010e1dc 20 02 1f d6     br         x17=><EXTERNAL>::pthread_cond_wait               int pthread_cond_wait(pthread_co
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int ferror(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::ferror
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::ferror                              XREF[15]:    FileOutStream_Write:001aee48(c), 
                                                                                          FileSeqInStream_Read:001aeea4(c), 
                                                                                          FileInStream_Read:001aef24(c), 
                                                                                          File_Read:001af0a0(c), 
                                                                                          File_Write:001af120(c), 
                                                                                          DirectRead:001b7e38(c), 
                                                                                          Read:001b83f8(c), 
                                                                                          PutByte:001b8798(c), 
                                                                                          Write:001b8950(c), 
                                                                                          Copy:001b8bf0(c), 
                                                                                          luaL_loadfilex:00207ed0(c), 
                                                                                          luaL_loadfilex:0020801c(c), 
                                                                                          g_read:0020ba40(c), 
                                                                                          g_read:0020bd64(c), 
                                                                                          g_read:0020bdd0(c)  
        0010e1e0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1e4 11 62 46 f9     ldr        x17,[x16, #0xcc0]=>-><EXTERNAL>::ferror          = 04033820
        0010e1e8 10 02 33 91     add        x16,x16,#0xcc0
        0010e1ec 20 02 1f d6     br         x17=><EXTERNAL>::ferror                          int ferror(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk FILE * fdopen(int __fd, char * __modes)
                               Thunked-Function: <EXTERNAL>::fdopen
             FILE *            x0:8           <RETURN>
             int               w0:4           __fd
             char *            x1:8           __modes
                             <EXTERNAL>::fdopen                              XREF[4]:     Open:001b790c(c), 
                                                                                          PutByte:001b87b4(c), 
                                                                                          Write:001b88a8(c), 
                                                                                          Copy:001b8b40(c)  
        0010e1f0 90 0a 00 b0     adrp       x16,0x25f000
        0010e1f4 11 66 46 f9     ldr        x17,[x16, #0xcc8]=>-><EXTERNAL>::fdopen          = 04033828
        0010e1f8 10 22 33 91     add        x16,x16,#0xcc8
        0010e1fc 20 02 1f d6     br         x17=><EXTERNAL>::fdopen                          FILE * fdopen(int __fd, char * _
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk long random(void)
                               Thunked-Function: <EXTERNAL>::random
             long              x0:8           <RETURN>
                             <EXTERNAL>::random                              XREF[1]:     math_random:0020c908(c)  
        0010e200 90 0a 00 b0     adrp       x16,0x25f000
        0010e204 11 6a 46 f9     ldr        x17,[x16, #0xcd0]=>-><EXTERNAL>::random          = 04033830
        0010e208 10 42 33 91     add        x16,x16,#0xcd0
        0010e20c 20 02 1f d6     br         x17=><EXTERNAL>::random                          long random(void)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __printf_chk()
                               Thunked-Function: <EXTERNAL>::__printf_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__printf_chk                        XREF[416]:   main:0010e400(c), 
                                                                                          main:0010e464(c), 
                                                                                          main:0010e4dc(c), 
                                                                                          main:0010e4f4(c), 
                                                                                          quit:0010e944(c), 
                                                                                          quit:0010e95c(c), 
                                                                                          quit:0010e988(c), 
                                                                                          quit:0010e9b0(c), 
                                                                                          quit:0010e9d8(c), 
                                                                                          quit:0010ea00(c), 
                                                                                          process_arguments:0010f26c(c), 
                                                                                          process_arguments:0010f2e8(c), 
                                                                                          process_arguments:0010f424(c), 
                                                                                          process_arguments:0010f4bc(c), 
                                                                                          process_arguments:0010f51c(c), 
                                                                                          process_arguments:0010f594(c), 
                                                                                          process_arguments:0010f610(c), 
                                                                                          process_arguments:0010f658(c), 
                                                                                          initialize_system_directory:0010
                                                                                          apply_cycle_adjustment_hacks:001
                                                                                          [more]
        0010e210 90 0a 00 b0     adrp       x16,0x25f000
        0010e214 11 6e 46 f9     ldr        x17,[x16, #0xcd8]=>-><EXTERNAL>::__printf_chk    = 04033838
        0010e218 10 62 33 91     add        x16,x16,#0xcd8
        0010e21c 20 02 1f d6     br         x17=><EXTERNAL>::__printf_chk                    undefined __printf_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk __off_t lseek(int __fd, __off_t __offset, int __wh
                               Thunked-Function: <EXTERNAL>::lseek
             __off_t           x0:8           <RETURN>
             int               w0:4           __fd
             __off_t           x1:8           __offset
             int               w2:4           __whence
                             <EXTERNAL>::lseek                               XREF[9]:     gamecard_command:001704c4(c), 
                                                                                          nds_file_open_cached:00175424(c), 
                                                                                          nds_file_open_cached:00175450(c), 
                                                                                          nds_file_open_cached:001754a0(c), 
                                                                                          nds_file_open_cached:001754f0(c), 
                                                                                          nds_file_open:00175870(c), 
                                                                                          nds_file_open:00175898(c), 
                                                                                          nds_file_open:001758e8(c), 
                                                                                          nds_file_open:00175948(c)  
        0010e220 90 0a 00 b0     adrp       x16,0x25f000
        0010e224 11 72 46 f9     ldr        x17,[x16, #0xce0]=>-><EXTERNAL>::lseek           = 04033840
        0010e228 10 82 33 91     add        x16,x16,#0xce0
        0010e22c 20 02 1f d6     br         x17=><EXTERNAL>::lseek                           __off_t lseek(int __fd, __off_t 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk wint_t towlower(wint_t __wc)
                               Thunked-Function: <EXTERNAL>::towlower
             wint_t            w0:4           <RETURN>
             wint_t            w0:4           __wc
                             <EXTERNAL>::towlower                            XREF[2]:     wcslower:001bf0b0(c), 
                                                                                          tolowerw:001bf120(j)  
        0010e230 90 0a 00 b0     adrp       x16,0x25f000
        0010e234 11 76 46 f9     ldr        x17,[x16, #0xce8]=>-><EXTERNAL>::towlower        = 04033848
        0010e238 10 a2 33 91     add        x16,x16,#0xce8
        0010e23c 20 02 1f d6     br         x17=><EXTERNAL>::towlower                        wint_t towlower(wint_t __wc)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_CreateTexture()
                               Thunked-Function: <EXTERNAL>::SDL_CreateT
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_CreateTexture                   XREF[4]:     set_screen_hires_mode:0018a350(c
                                                                                          initialize_screen:0018a8c0(c), 
                                                                                          initialize_screen:0018a8e0(c), 
                                                                                          set_screen_menu_on:0018ab5c(c)  
        0010e240 90 0a 00 b0     adrp       x16,0x25f000
        0010e244 11 7a 46 f9     ldr        x17,[x16, #0xcf0]=>-><EXTERNAL>::SDL_CreateTex   = 04033850
        0010e248 10 c2 33 91     add        x16,x16,#0xcf0
        0010e24c 20 02 1f d6     br         x17=><EXTERNAL>::SDL_CreateTexture               undefined SDL_CreateTexture()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float logf(float __x)
                               Thunked-Function: <EXTERNAL>::logf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::logf                                XREF[3]:     math_log:0020cc34(c), 
                                                                                          math_log:0020cc40(c), 
                                                                                          math_log:0020cc88(c)  
        0010e250 90 0a 00 b0     adrp       x16,0x25f000
        0010e254 11 7e 46 f9     ldr        x17,[x16, #0xcf8]=>-><EXTERNAL>::logf            = 04033858
        0010e258 10 e2 33 91     add        x16,x16,#0xcf8
        0010e25c 20 02 1f d6     br         x17=><EXTERNAL>::logf                            float logf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int strncasecmp(char * __s1, char * __s2, size_t _
                               Thunked-Function: <EXTERNAL>::strncasecmp
             int               w0:4           <RETURN>
             char *            x0:8           __s1
             char *            x1:8           __s2
             size_t            x2:8           __n
                             <EXTERNAL>::strncasecmp                         XREF[5]:     initialize_game_database:0017322
                                                                                          load_file:0017bea0(c), 
                                                                                          load_file:0017beb4(c), 
                                                                                          load_file:0017c27c(c), 
                                                                                          cheat_menu:0017ce2c(c)  
        0010e260 90 0a 00 b0     adrp       x16,0x25f000
        0010e264 11 82 46 f9     ldr        x17,[x16, #0xd00]=>-><EXTERNAL>::strncasecmp     = 04033860
        0010e268 10 02 34 91     add        x16,x16,#0xd00
        0010e26c 20 02 1f d6     br         x17=><EXTERNAL>::strncasecmp                     int strncasecmp(char * __s1, cha
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __gmon_start__()
                               Thunked-Function: <EXTERNAL>::__gmon_star
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__gmon_start__                      XREF[1]:     call_weak_fn:0010e808(c)  
        0010e270 90 0a 00 b0     adrp       x16,0x25f000
        0010e274 11 86 46 f9     ldr        x17,[x16, #0xd08]=>-><EXTERNAL>::__gmon_start__  = 04033868
        0010e278 10 22 34 91     add        x16,x16,#0xd08
        0010e27c 20 02 1f d6     br         x17=><EXTERNAL>::__gmon_start__                  undefined __gmon_start__()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int __xstat64(int __ver, char * __filename, stat64
                               Thunked-Function: <EXTERNAL>::__xstat64
             int               w0:4           <RETURN>
             int               w0:4           __ver
             char *            x1:8           __filename
             stat64 *          x2:8           __stat_buf
                             <EXTERNAL>::__xstat64                           XREF[2]:     GetFileAttr:001b9250(c), 
                                                                                          FastFind:001cb960(c)  
        0010e280 90 0a 00 b0     adrp       x16,0x25f000
        0010e284 11 8a 46 f9     ldr        x17,[x16, #0xd10]=>-><EXTERNAL>::__xstat64       = 04033870
        0010e288 10 42 34 91     add        x16,x16,#0xd10
        0010e28c 20 02 1f d6     br         x17=><EXTERNAL>::__xstat64                       int __xstat64(int __ver, char * 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __read_chk()
                               Thunked-Function: <EXTERNAL>::__read_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__read_chk                          XREF[3]:     unzip_file:001a766c(c), 
                                                                                          unzip_file:001a7784(c), 
                                                                                          unzip_file:001a78dc(c)  
        0010e290 90 0a 00 b0     adrp       x16,0x25f000
        0010e294 11 8e 46 f9     ldr        x17,[x16, #0xd18]=>-><EXTERNAL>::__read_chk      = 04033880
        0010e298 10 62 34 91     add        x16,x16,#0xd18
        0010e29c 20 02 1f d6     br         x17=><EXTERNAL>::__read_chk                      undefined __read_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float fmodf(float __x, float __y)
                               Thunked-Function: <EXTERNAL>::fmodf
             float             s0:4           <RETURN>
             float             s0:4           __x
             float             s1:4           __y
                             <EXTERNAL>::fmodf                               XREF[3]:     numarith.isra.0:001faadc(c), 
                                                                                          luaV_execute:0020480c(c), 
                                                                                          math_fmod:0020d134(c)  
        0010e2a0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2a4 11 92 46 f9     ldr        x17,[x16, #0xd20]=>-><EXTERNAL>::fmodf           = 04033890
        0010e2a8 10 82 34 91     add        x16,x16,#0xd20
        0010e2ac 20 02 1f d6     br         x17=><EXTERNAL>::fmodf                           float fmodf(float __x, float __y)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float sinf(float __x)
                               Thunked-Function: <EXTERNAL>::sinf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::sinf                                XREF[1]:     math_sin:0020c898(c)  
        0010e2b0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2b4 11 96 46 f9     ldr        x17,[x16, #0xd28]=>-><EXTERNAL>::sinf            = 04033898
        0010e2b8 10 a2 34 91     add        x16,x16,#0xd28
        0010e2bc 20 02 1f d6     br         x17=><EXTERNAL>::sinf                            float sinf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined SDL_NumHaptics()
                               Thunked-Function: <EXTERNAL>::SDL_NumHapt
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::SDL_NumHaptics                      XREF[1]:     platform_initialize_input:0018c3
        0010e2c0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2c4 11 9a 46 f9     ldr        x17,[x16, #0xd30]=>-><EXTERNAL>::SDL_NumHaptics  = 040338a0
        0010e2c8 10 c2 34 91     add        x16,x16,#0xd30
        0010e2cc 20 02 1f d6     br         x17=><EXTERNAL>::SDL_NumHaptics                  undefined SDL_NumHaptics()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk float coshf(float __x)
                               Thunked-Function: <EXTERNAL>::coshf
             float             s0:4           <RETURN>
             float             s0:4           __x
                             <EXTERNAL>::coshf                               XREF[1]:     math_cosh:0020c7c8(c)  
        0010e2d0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2d4 11 9e 46 f9     ldr        x17,[x16, #0xd38]=>-><EXTERNAL>::coshf           = 040338a8
        0010e2d8 10 e2 34 91     add        x16,x16,#0xd38
        0010e2dc 20 02 1f d6     br         x17=><EXTERNAL>::coshf                           float coshf(float __x)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk void operator.delete[](void * param_1, ulong param
                               Thunked-Function: <EXTERNAL>::operator.de
             void              <VOID>         <RETURN>
             void *            x0:8           param_1
             ulong             x1:8           param_2
                             <EXTERNAL>::operator.delete[]                   XREF[2]:     001cd2f8(c), ~Unpack:001e18ac(c)  
        0010e2e0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2e4 11 a2 46 f9     ldr        x17,[x16, #0xd40]=>-><EXTERNAL>::operator.dele   = 040338b0
        0010e2e8 10 02 35 91     add        x16,x16,#0xd40
        0010e2ec 20 02 1f d6     br         x17=><EXTERNAL>::operator.delete[]               void operator.delete[](void * pa
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int fseek(FILE * __stream, long __off, int __whence)
                               Thunked-Function: <EXTERNAL>::fseek
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
             long              x1:8           __off
             int               w2:4           __whence
                             <EXTERNAL>::fseek                               XREF[34]:    load_system_file:0010eb14(c), 
                                                                                          load_system_file:0010eb30(c), 
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          spu_load_fake_microphone_data:00
                                                                                          gamecard_load_gba:0016ed04(c), 
                                                                                          gamecard_load_gba:0016ed20(c), 
                                                                                          gamecard_load_gba:0016ede0(c), 
                                                                                          gamecard_load_gba:0016edfc(c), 
                                                                                          backup_save.part.0:00171e14(c), 
                                                                                          backup_save.part.0:00171ecc(c), 
                                                                                          initialize_backup:001725f0(c), 
                                                                                          initialize_backup:0017260c(c), 
                                                                                          load_state:00174bf0(c), 
                                                                                          load_state:00174c18(c), 
                                                                                          nds_file_open:00175a68(c), 
                                                                                          nds_file_open:00175b24(c), 
                                                                                          nds_file_read_to_memory_partial:
                                                                                          nds_file_read_to_memory_partial:
                                                                                          load_config_file:00178000(c), 
                                                                                          [more]
        0010e2f0 90 0a 00 b0     adrp       x16,0x25f000
        0010e2f4 11 a6 46 f9     ldr        x17,[x16, #0xd48]=>-><EXTERNAL>::fseek           = 040338b8
        0010e2f8 10 22 35 91     add        x16,x16,#0xd48
        0010e2fc 20 02 1f d6     br         x17=><EXTERNAL>::fseek                           int fseek(FILE * __stream, long 
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk int feof(FILE * __stream)
                               Thunked-Function: <EXTERNAL>::feof
             int               w0:4           <RETURN>
             FILE *            x0:8           __stream
                             <EXTERNAL>::feof                                XREF[1]:     getF:00206460(c)  
        0010e300 90 0a 00 b0     adrp       x16,0x25f000
        0010e304 11 aa 46 f9     ldr        x17,[x16, #0xd50]=>-><EXTERNAL>::feof            = 040338c0
        0010e308 10 42 35 91     add        x16,x16,#0xd50
        0010e30c 20 02 1f d6     br         x17=><EXTERNAL>::feof                            int feof(FILE * __stream)
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
                             **************************************************************
                             *                       THUNK FUNCTION                       *
                             **************************************************************
                             thunk undefined __fread_chk()
                               Thunked-Function: <EXTERNAL>::__fread_chk
             undefined         w0:1           <RETURN>
                             <EXTERNAL>::__fread_chk                         XREF[1]:     game_database_generate_crc32_fro
        0010e310 90 0a 00 b0     adrp       x16,0x25f000
        0010e314 11 ae 46 f9     ldr        x17,[x16, #0xd58]=>-><EXTERNAL>::__fread_chk     = 040338c8
        0010e318 10 62 35 91     add        x16,x16,#0xd58
        0010e31c 20 02 1f d6     br         x17=><EXTERNAL>::__fread_chk                     undefined __fread_chk()
                             -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
