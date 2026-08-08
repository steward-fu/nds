                             //
                             // .data 
                             // SHT_PROGBITS  [0x815a500 - 0x8161e2b]
                             // ram:0815a500-ram:08161e2b
                             //
                             __data_start                                    XREF[2]:     Entry Point(*), 
                             data_start                                                   _elfSectionHeaders::000003cc(*)  
        0815a500 00              undefined1 00h
        0815a501 00              ??         00h
        0815a502 00              ??         00h
        0815a503 00              ??         00h
                             __dso_handle                                    XREF[2]:     Entry Point(*), 
                                                                                          _GLOBAL__sub_I__ZN9CryptData8Set
        0815a504 00              undefined1 00h
        0815a505 00              ??         00h
        0815a506 00              ??         00h
        0815a507 00              ??         00h
                             long_options.13249                              XREF[1]:     process_arguments:08006c74(*)  
                             process_arguments::long_options
        0815a508 f4 b0 13        option[15]                                                  system.c:357
                 08 01 00 
                 00 00 00 
                             count_frames.13451                              XREF[6]:     update_frame:080361e4(R), 
                             update_frame::lexical_block_1::count_frames                  update_frame:080361ec(*), 
                                                                                          update_frame:080361fc(W), 
                                                                                          update_frame:08036204(R), 
                                                                                          update_frame:08036340(R), 
                                                                                          update_frame:08036364(W)  
        0815a5f8 14 00 00 00     u32        14h                                              video.c:1158
        0815a5fc 00              ??         00h
        0815a5fd 00              ??         00h
        0815a5fe 00              ??         00h
        0815a5ff 00              ??         00h
                             adpcm_step_table                                XREF[2]:     Entry Point(*), 
                                                                                          spu_adpcm_decode_block:0808d310(
        0815a600 07 00 08        s16[89]                                                     spu.c:35
                 00 09 00 
                 0a 00 0b 
        0815a6b2 00              ??         00h
        0815a6b3 00              ??         00h
        0815a6b4 00              ??         00h
        0815a6b5 00              ??         00h
        0815a6b6 00              ??         00h
        0815a6b7 00              ??         00h
                             adpcm_index_step_table                          XREF[2]:     Entry Point(*), 
                                                                                          spu_adpcm_decode_block:0808d2d8(
        0815a6b8 ff ff ff        s8[8]      FFh,FFh,FFh,FFh,02h,04h,06h,"\b"                 spu.c:49
                 ff 02 04 
                 06 08
                             psg_samples                                     XREF[1]:     Entry Point(*)  
        0815a6c0 01 80 01        s16[8][8]                                                   spu.c:681
                 80 01 80 
                 01 80 01 
                             desmume_footer_str.13298                        XREF[1]:     initialize_backup:08093070(*)  
                             initialize_backup::lexical_block_0::lexical_bl
        0815a740 7c 3c 2d        char[83]   "|<--Snip above here to create a raw sav by ex   backup.c:458
                 2d 53 6e 
                 69 70 20 
        0815a793 00              ??         00h
        0815a794 00              ??         00h
        0815a795 00              ??         00h
        0815a796 00              ??         00h
        0815a797 00              ??         00h
                             nds_ext                                         XREF[2]:     select_load_game:0809d914(*), 
                                                                                          menu:080a1010(*)  
        0815a798 c0 e0 13        char *[5]                                                   menu.c:1241
                 08 0c e2 
                 13 08 18 
        0815a7ac 00              ??         00h
        0815a7ad 00              ??         00h
        0815a7ae 00              ??         00h
        0815a7af 00              ??         00h
                             frameskip_labels.13950                          XREF[2]:     create_menu_options:0809e9f0(*), 
                             create_menu_options::frameskip_labels                        create_menu_options:0809ea54(*)  
        0815a7b0 c8 04 14        char *[3]                                                   menu.c:2630
                 08 98 05 
                 14 08 a8 
        0815a7bc 00              ??         00h
        0815a7bd 00              ??         00h
        0815a7be 00              ??         00h
        0815a7bf 00              ??         00h
                             orientation_labels.13951                        XREF[2]:     create_menu_options:0809eacc(*), 
                             create_menu_options::orientation_labels                      create_menu_options:0809eb14(*)  
        0815a7c0 68 05 14        char *[3]                                                   menu.c:2637
                 08 78 05 
                 14 08 88 
        0815a7cc 00              ??         00h
        0815a7cd 00              ??         00h
        0815a7ce 00              ??         00h
        0815a7cf 00              ??         00h
                             yes_no_labels.13949                             XREF[14]:    create_menu_options:0809eb80(*), 
                             create_menu_options::yes_no_labels                           create_menu_options:0809ebe4(*), 
                                                                                          create_menu_options:0809ec4c(*), 
                                                                                          create_menu_options:0809ecb8(*), 
                                                                                          create_menu_options:0809ed1c(*), 
                                                                                          create_menu_options:0809ed84(*), 
                                                                                          create_menu_options:0809edf4(*), 
                                                                                          create_menu_options:0809ee68(*), 
                                                                                          create_menu_options:0809eecc(*), 
                                                                                          create_menu_options:0809ef34(*), 
                                                                                          create_menu_options:0809f008(*), 
                                                                                          create_menu_options:0809f078(*), 
                                                                                          create_menu_options:0809f0ec(*), 
                                                                                          create_menu_options:0809f14c(*)  
        0815a7d0 48 05 14        char *[2]                                                   menu.c:2624
                 08 58 05 
                 14 08
                             speed_override_labels.13954                     XREF[2]:     create_menu_options:0809ef58(*), 
                             create_menu_options::speed_override_labels                   create_menu_options:0809efa0(*)  
        0815a7d8 c8 04 14        char *[8]                                                   menu.c:2666
                 08 d8 04 
                 14 08 e8 
                             language_labels.14001                           XREF[1]:     create_menu_firmware:0809fe4c(*)  
                             create_menu_firmware::language_labels
        0815a7f8 b0 00 14        char *[8]                                                   menu.c:2988
                 08 c4 00 
                 14 08 d8 
                             color_labels.14002                              XREF[2]:     create_menu_firmware:0809fe70(*), 
                             create_menu_firmware::color_labels                           create_menu_firmware:0809feb4(*)  
        0815a818 30 ff 13        char *[16]                                                  menu.c:3000
                 08 48 ff 
                 13 08 60 
                             birthday_month_labels.14003                     XREF[1]:     create_menu_firmware:0809ff1c(*)  
                             create_menu_firmware::birthday_month_labels
        0815a858 40 fe 13        char *[12]                                                  menu.c:3020
                 08 54 fe 
                 13 08 68 
                             reg_names[1]                                    XREF[100,4]  Entry Point(*), 
                             reg_names                                                    disasm_arm_reg_operand:080a33ec(
                                                                                          disasm_arm_reg_operand:080a33f0(
                                                                                          disasm_arm_reg_operand2:080a344c
                                                                                          disasm_arm_reg_operand2:080a3484
                                                                                          disasm_arm_reg_operand2:080a34c8
                                                                                          disasm_arm_reg_operand2:080a34d0
                                                                                          disasm_arm_reg_operand2:080a3500
                                                                                          disasm_arm_reg_operand2:080a3504
                                                                                          disasm_arm_mem_reg_operand2:080a
                                                                                          disasm_arm_mem_reg_operand2:080a
                                                                                          disasm_arm_mem_reg_operand2:080a
                                                                                          disasm_arm_data_proc:080a36a4(*), 
                                                                                          disasm_arm_data_proc:080a36b8(*), 
                                                                                          disasm_arm_data_proc:080a36fc(*), 
                                                                                          disasm_arm_data_proc:080a373c(*), 
                                                                                          disasm_thumb_instruction:080a480
                                                                                          disasm_thumb_instruction:080a481
                                                                                          disasm_thumb_instruction:080a4c6
                                                                                          disasm_thumb_instruction:080a4d8
                                                                                          [more]
        0815a888 ec 0e 14        char *[16]                                                  arm_disasm.c:48
                 08 f0 0e 
                 14 08 f4 
                             shift_table                                     XREF[6]:     Entry Point(*), 
                                                                                          disasm_arm_reg_operand2:080a3490
                                                                                          disasm_arm_reg_operand2:080a34d8
                                                                                          disasm_arm_mem_reg_operand2:080a
                                                                                          disasm_arm_instruction:080a4340(
                                                                                          disasm_thumb_instruction:080a4a4
        0815a8c8 b4 0e 14        char *[4]                                                   arm_disasm.c:24
                 08 b8 0e 
                 14 08 bc 
                             condition_table                                 XREF[6]:     Entry Point(*), 
                                                                                          disasm_arm_data_proc:080a3680(*), 
                                                                                          disasm_arm_memory_transfer:080a3
                                                                                          disasm_arm_memory_transfer2:080a
                                                                                          disasm_arm_instruction:080a3bb0(
                                                                                          disasm_thumb_instruction:080a47a
        0815a8d8 a0 0f 14        char *[16]                                                  arm_disasm.c:12
                 08 a4 0f 
                 14 08 a8 
                             data_proc_opcode_table                          XREF[4]:     Entry Point(*), 
                                                                                          disasm_arm_data_proc:080a36ac(*), 
                                                                                          disasm_arm_data_proc:080a3708(*), 
                                                                                          disasm_arm_data_proc:080a3748(*)  
        0815a918 ac 0e 14        char *[16]                                                  arm_disasm.c:18
                 08 b0 0e 
                 14 08 e8 
                             memory_transfer_op_type                         XREF[3]:     Entry Point(*), 
                                                                                          disasm_arm_memory_transfer:080a3
                                                                                          disasm_arm_memory_transfer2:080a
        0815a958 74 0e 14        char *[2]                                                   arm_disasm.c:34
                 08 78 0e 
                 14 08
                             memory_transfer_op2_type[1][0]                  XREF[2,1]:   Entry Point(*), 
                             memory_transfer_op2_type                                     disasm_arm_memory_transfer2:080a
                                                                                          disasm_arm_instruction:080a416c(
        0815a960 6c 44 14        char *[2                                                    arm_disasm.c:36
                 08 e0 3c 
                 14 08 d8 
                             long_multiply_type                              XREF[1]:     Entry Point(*)  
        0815a980 3c 0f 14        char *[4]                                                   arm_disasm.c:42
                 08 44 0f 
                 14 08 4c 
                             psr_flags                                       XREF[2]:     Entry Point(*), 
                                                                                          disasm_arm_instruction:080a4390(
        0815a990 6c 44 14        char *[16]                                                  arm_disasm.c:28
                 08 b4 05 
                 14 08 70 
                             psr_op_type                                     XREF[4]:     Entry Point(*), 
                                                                                          disasm_arm_instruction:080a439c(
                                                                                          disasm_arm_instruction:080a44a0(
                                                                                          disasm_arm_instruction:080a44d0(
        0815a9d0 0c 43 14        char *[2]                                                   arm_disasm.c:26
                 08 fc 42 
                 14 08
                             block_memory_table                              XREF[2]:     Entry Point(*), 
                                                                                          disasm_arm_instruction:080a3e0c(
        0815a9d8 24 0f 14        char *[4]                                                   arm_disasm.c:46
                 08 28 0f 
                 14 08 2c 
                             block_memory_op_type                            XREF[2]:     Entry Point(*), 
                                                                                          disasm_arm_instruction:080a3de4(
        0815a9e8 5c 0e 14        char *[2]                                                   arm_disasm.c:43
                 08 60 0e 
                 14 08
                             coprocessor_register_transfer_type              XREF[2]:     Entry Point(*), 
                                                                                          disasm_arm_instruction:080a4020(
        0815a9f0 34 0f 14        char *[2]                                                   arm_disasm.c:44
                 08 38 0f 
                 14 08
                             t_add_sub_table                                 XREF[3]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a481
                                                                                          disasm_thumb_instruction:080a4c7
        0815a9f8 9c 0e 14        char *[2]                                                   arm_disasm.c:692
                 08 e8 0e 
                 14 08
                             t_alu_op_imm_table                              XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a485
        0815aa00 a4 0e 14        char *[4]                                                   arm_disasm.c:693
                 08 a0 0e 
                 14 08 9c 
                             t_alu_op_table                                  XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4bd
        0815aa10 ac 0e 14        char *[16]                                                  arm_disasm.c:695
                 08 b0 0e 
                 14 08 b4 
                             t_alu_op_hi_table                               XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4e5
        0815aa50 9c 0e 14        char *[4]                                                   arm_disasm.c:701
                 08 a0 0e 
                 14 08 a4 
                             t_mem_op2_reg_table                             XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4d5
        0815aa60 64 0e 14        char *[4]                                                   arm_disasm.c:703
                 08 8c 0e 
                 14 08 6c 
                             t_mem_op_reg_table                              XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4de
        0815aa70 74 0e 14        char *[4]                                                   arm_disasm.c:702
                 08 7c 0e 
                 14 08 78 
                             t_mem_op_imm_table                              XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a491
        0815aa80 74 0e 14        char *[4]                                                   arm_disasm.c:704
                 08 78 0e 
                 14 08 7c 
                             t_mem_op_table                                  XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a495
        0815aa90 74 0e 14        char *[2]                                                   arm_disasm.c:705
                 08 78 0e 
                 14 08
                             t_mem_op2_table                                 XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4a9
        0815aa98 64 0e 14        char *[2]                                                   arm_disasm.c:706
                 08 6c 0e 
                 14 08
                             t_bmem_op_table                                 XREF[2]:     Entry Point(*), 
                                                                                          disasm_thumb_instruction:080a4cc
        0815aaa0 5c 0e 14        char *[2]                                                   arm_disasm.c:707
                 08 60 0e 
                 14 08
                             current_font                                    XREF[10]:    Entry Point(*), 
                                                                                          print_string_ext:080a500c(R), 
                                                                                          print_string_ext:080a5144(R), 
                                                                                          print_string:080a5440(R), 
                                                                                          print_string:080a5554(R), 
                                                                                          print_string_bg:080a571c(R), 
                                                                                          print_string_bg:080a582c(R), 
                                                                                          set_font_narrow_small:080a59a0(W
                                                                                          set_font_wide:080a59b4(W), 
                                                                                          set_font_narrow:080a59cc(W)  
        0815aaa8 bc f2 15 08     font_str   font_c                                           screen.c:4
                             font_a                                          XREF[2]:     Entry Point(*), 
                                                                                          set_font_narrow_small:080a59a0(*
        0815aaac 06 00 00        font_str                                                    font.h:28
                 00 0a 00 
                 00 00 00 
                             font_b                                          XREF[2]:     Entry Point(*), 
                                                                                          set_font_wide:080a59b4(*)  
        0815ceb4 08 00 00        font_str                                                    font.h:5871
                 00 08 00 
                 00 00 00 
                             font_c.height                                   XREF[25,20+  Entry Point(*), 
                             font_c._font_bits[0]                                         print_string_ext:080a5038(*), 
                             font_c._font_bits[1]                                         print_string_ext:080a503c(R), 
                             font_c._font_offset[32]                                      print_string_ext:080a5060(R), 
                             font_c                                                       print_string_ext:080a5098(R), 
                                                                                          print_string:080a5464(*), 
                                                                                          print_string:080a5468(R), 
                                                                                          print_string:080a5488(R), 
                                                                                          print_string:080a54c0(R), 
                                                                                          print_string:080a5590(R), 
                                                                                          print_string:080a5594(*), 
                                                                                          print_string_bg:080a5740(*), 
                                                                                          print_string_bg:080a5744(R), 
                                                                                          print_string_bg:080a5764(R), 
                                                                                          print_string_bg:080a579c(R), 
                                                                                          print_string_bg:080a5838(*), 
                                                                                          print_string_bg:080a5870(*), 
                                                                                          print_string_bg:080a5898(R), 
                                                                                          print_string_bg:080a598c(R), 
                                                                                          set_font_narrow:080a59cc(*), 
                                                                                          [more]
        0815f2bc 09 00 00        font_str                                                    font.h:8199
                 00 0f 00 
                 00 00 00 
                             frame_count                                     XREF[4]:     Entry Point(*), 
                                                                                          update_screen:080a8438(*), 
                                                                                          update_screen:080a8444(W), 
                                                                                          update_screen:080a8508(R)  
        081616c4 2c 01           u16        12Ch                                             SDL_screen.c:14
        081616c6 00              ??         00h
        081616c7 00              ??         00h
                             cursor_repeat.18162                             XREF[4]:     get_gui_input:080aa0d0(R), 
                             get_gui_input::cursor_repeat                                 get_gui_input:080aa62c(R), 
                                                                                          get_gui_input:080aa658(W), 
                                                                                          get_gui_input:080aa68c(R)  
        081616c8 0b 00 00 00     u32        Bh                                               SDL_input.c:721
        081616cc 00              ??         00h
        081616cd 00              ??         00h
        081616ce 00              ??         00h
        081616cf 00              ??         00h
        081616d0 00              ??         00h
        081616d1 00              ??         00h
        081616d2 00              ??         00h
        081616d3 00              ??         00h
        081616d4 00              ??         00h
        081616d5 00              ??         00h
        081616d6 00              ??         00h
        081616d7 00              ??         00h
        081616d8 00              ??         00h
        081616d9 00              ??         00h
        081616da 00              ??         00h
        081616db 00              ??         00h
        081616dc 00              ??         00h
        081616dd 00              ??         00h
        081616de 00              ??         00h
        081616df 00              ??         00h
        081616e0 00              ??         00h
        081616e1 00              ??         00h
        081616e2 00              ??         00h
        081616e3 00              ??         00h
        081616e4 00              ??         00h
        081616e5 00              ??         00h
        081616e6 00              ??         00h
        081616e7 00              ??         00h
        081616e8 00              ??         00h
        081616e9 00              ??         00h
        081616ea 00              ??         00h
        081616eb 00              ??         00h
        081616ec 00              ??         00h
        081616ed 00              ??         00h
        081616ee 00              ??         00h
        081616ef 00              ??         00h
        081616f0 00              ??         00h
        081616f1 00              ??         00h
        081616f2 00              ??         00h
        081616f3 00              ??         00h
        081616f4 00              ??         00h
        081616f5 00              ??         00h
        081616f6 00              ??         00h
        081616f7 00              ??         00h
        081616f8 00              ??         00h
        081616f9 00              ??         00h
        081616fa 00              ??         00h
        081616fb 00              ??         00h
                             DAT_081616fc                                    XREF[2]:     cpu_translate_instruction:080b55
                                                                                          cpu_translate_instruction:080b62
        081616fc 00              ??         00h
        081616fd 00              ??         00h
        081616fe 00              ??         00h
        081616ff 00              ??         00h
                             arm_load_block_unrolled                         XREF[1]:     Entry Point(*)  
        08161700 3c c6 0a        arm_bloc                                                    cpu_translate_arm.c:2237
                 08 90 c6 
                 0a 08 ec 
                             arm_store_block_unrolled                        XREF[2]:     Entry Point(*), 
                                                                                          cpu_translate_instruction:080b5d
        08161740 b0 cf 0a        arm_bloc                                                    cpu_translate_arm.c:2213
                 08 fc d0 
                 0a 08 58 
                             disasm_labels                                   XREF[3]:     Entry Point(*), 
                                                                                          cpu_translate_log_translated_cod
                                                                                          cpu_translate_log_block:080b86dc
        081617c0 30 af 0a        disasm_l                                                    cpu_translate_arm.c:3662
                 08 60 3c 
                 14 08 d0 
                             g_Alloc                                         XREF[6]:     Utf16_To_Utf8Buf:080c70dc(*), 
                                                                                          Utf16_To_Utf8Buf:080c70ec(*), 
                                                                                          Utf16_To_Utf8Buf:080c7144(*), 
                                                                                          Utf16_To_Utf8Buf:080c7154(*), 
                                                                                          un7z_file:080c74b8(*), 
                                                                                          un7z_file_to_memory_partial:080c
        08161a40 d4 98 0c        ISzAlloc                                                    unarchive.c:46
                 08 e4 98 
                 0c 08
                             s_z_'_08161a49                                  XREF[2,5]:   Entry Point(*), 
                             s__'_08161a4a                                                SzArEx_Open:080ca834(R), 
                             s__'_08161a4b                                                SzArEx_Open:080ca844(R), 
                             s_'_08161a4c                                                 SzArEx_Open:080ca850(R), 
                             s__08161a4d                                                  SzArEx_Open:080ca864(R), 
                             k7zSignature                                                 SzArEx_Open:080ca874(R), 
                                                                                          SzArEx_Open:080ca880(R)  
        08161a48 37 7a bc        Byte[6]    "7z",BCh,AFh,"'",1Ch                             7zIn.c:10
                 af 27 1c
        08161a4e 00              ??         00h
        08161a4f 00              ??         00h
                             _ZZN7Archive17ConvertAttributesEvE4mask         XREF[6]:     ConvertAttributes:080db5a4(R), 
                             Archive::ConvertAttributes::mask                             ConvertAttributes:080db5e4(R), 
                                                                                          ConvertAttributes:080db618(R), 
                                                                                          ConvertAttributes:080db62c(R), 
                                                                                          ConvertAttributes:080db648(W), 
                                                                                          ConvertAttributes:080db654(R)  
        08161a50 ff ff ff ff     mode_t     FFFFFFFFh                                        arcread.cpp:1223
        08161a54 00              ??         00h
        08161a55 00              ??         00h
        08161a56 00              ??         00h
        08161a57 00              ??         00h
                             **************************************************************
                             * InitSubstTable20                                           *
                             **************************************************************
                             _ZL16InitSubstTable20                           XREF[1]:     SetKey20:080dde8c(*)  
                             InitSubstTable20
        08161a58 d7 13 95        byte[256]  D7h,13h,95h,"#I",C5h,C0h,CDh,F9h,1Ch,10h,"w0",   crypt2.cpp:9
                 23 49 c5 
                 c0 cd f9 
                             s_v_?C_2_~%t_,_08161b5c                         XREF[1,7]:   Init:080e9228(R), 
                             s__2_~%t_,_08161b60                                          Init:080e922c(R), 
                             s__~%t_,_08161b64                                            Init:080e9238(R), 
                             s_t_,_08161b68                                               Init:080e9238(R), 
                             s__,_08161b6c                                                Init:080e9244(R), 
                             s__08161b70                                                  Init:080e9244(R), 
                             s__08161b74                                                  Init:080e9250(R), 
                             _ZZN9HashValue4InitE9HASH_TYPEE9EmptyHash                    Init:080e9254(R)  
                             HashValue::Init::lexical_block_0::EmptyHash
        08161b58 dd 0e 89        byte[32]   DDh,0Eh,89h,17h,"v",93h,"?C",C7h,D0h,"2",B0h,8   hash.cpp:18
                 17 76 93 
                 3f 43 c7 
                             **************************************************************
                             * DecL2                                                      *
                             **************************************************************
                             _ZL5DecL2                                       XREF[2]:     ShortLZ:080ef96c(*), 
                             DecL2                                                        LongLZ:080f0114(*)  
        08161b78 00 a0 00        uint[10]                                                    unpack15.cpp:7
                 00 00 c0 
                 00 00 00 
                             **************************************************************
                             * PosL2                                                      *
                             **************************************************************
                             _ZL5PosL2                                       XREF[3]:     ShortLZ:080ef968(*), 
                             PosL2                                                        LongLZ:080f00c4(*), 
                                                                                          LongLZ:080f0110(*)  
        08161ba0 00 00 00        uint[13]                                                    unpack15.cpp:9
                 00 00 00 
                 00 00 00 
        08161bd4 00              ??         00h
        08161bd5 00              ??         00h
        08161bd6 00              ??         00h
        08161bd7 00              ??         00h
                             **************************************************************
                             * DecL1                                                      *
                             **************************************************************
                             _ZL5DecL1                                       XREF[2]:     ShortLZ:080ef3fc(*), 
                             DecL1                                                        LongLZ:080f00c0(*)  
        08161bd8 00 80 00        uint[11]                                                    unpack15.cpp:2
                 00 00 a0 
                 00 00 00 
        08161c04 00              ??         00h
        08161c05 00              ??         00h
        08161c06 00              ??         00h
        08161c07 00              ??         00h
                             **************************************************************
                             * PosL1                                                      *
                             **************************************************************
                             _ZL5PosL1                                       XREF[2]:     ShortLZ:080ef3f8(*), 
                             PosL1                                                        LongLZ:080f00bc(*)  
        08161c08 00 00 00        uint[13]                                                    unpack15.cpp:4
                 00 00 00 
                 00 00 00 
        08161c3c 00              ??         00h
        08161c3d 00              ??         00h
        08161c3e 00              ??         00h
        08161c3f 00              ??         00h
                             **************************************************************
                             * DecHf2                                                     *
                             **************************************************************
                             _ZL6DecHf2                                      XREF[4]:     ShortLZ:080ef5e4(*), 
                             DecHf2                                                       HuffDecode:080f04f0(*), 
                                                                                          HuffDecode:080f0588(*), 
                                                                                          GetFlagsBuf:080f078c(*)  
        08161c40 00 10 00        uint[8]                                                     unpack15.cpp:24
                 00 00 24 
                 00 00 00 
                             **************************************************************
                             * PosHf2                                                     *
                             **************************************************************
                             _ZL6PosHf2                                      XREF[4]:     ShortLZ:080ef5e0(*), 
                             PosHf2                                                       HuffDecode:080f04e4(*), 
                                                                                          HuffDecode:080f0584(*), 
                                                                                          GetFlagsBuf:080f0788(*)  
        08161c60 00 00 00        uint[13]                                                    unpack15.cpp:26
                 00 00 00 
                 00 00 00 
        08161c94 00              ??         00h
        08161c95 00              ??         00h
        08161c96 00              ??         00h
        08161c97 00              ??         00h
                             **************************************************************
                             * DecHf1                                                     *
                             **************************************************************
                             _ZL6DecHf1                                      XREF[1]:     LongLZ:080efbe8(*)  
                             DecHf1
        08161c98 00 20 00        uint[8]                                                     unpack15.cpp:18
                 00 00 c0 
                 00 00 00 
                             **************************************************************
                             * PosHf1                                                     *
                             **************************************************************
                             _ZL6PosHf1                                      XREF[1]:     LongLZ:080efbdc(*)  
                             PosHf1
        08161cb8 00 00 00        uint[13]                                                    unpack15.cpp:20
                 00 00 00 
                 00 00 00 
        08161cec 00              ??         00h
        08161ced 00              ??         00h
        08161cee 00              ??         00h
        08161cef 00              ??         00h
                             **************************************************************
                             * DecHf0                                                     *
                             **************************************************************
                             _ZL6DecHf0                                      XREF[2]:     LongLZ:080f00f0(*), 
                             DecHf0                                                       HuffDecode:080f01d0(*)  
        08161cf0 00 80 00        uint[9]                                                     unpack15.cpp:12
                 00 00 c0 
                 00 00 00 
        08161d14 00              ??         00h
        08161d15 00              ??         00h
        08161d16 00              ??         00h
        08161d17 00              ??         00h
                             **************************************************************
                             * PosHf0                                                     *
                             **************************************************************
                             _ZL6PosHf0                                      XREF[2]:     LongLZ:080f00ec(*), 
                             PosHf0                                                       HuffDecode:080f01cc(*)  
        08161d18 00 00 00        uint[13]                                                    unpack15.cpp:14
                 00 00 00 
                 00 00 00 
        08161d4c 00              ??         00h
        08161d4d 00              ??         00h
        08161d4e 00              ??         00h
        08161d4f 00              ??         00h
                             **************************************************************
                             * DecHf4                                                     *
                             **************************************************************
                             _ZL6DecHf4                                      XREF[1]:     HuffDecode:080f071c(*)  
                             DecHf4
        08161d50 00 ff 00        uint[6]                                                     unpack15.cpp:36
                 00 ff ff 
                 00 00 ff 
                             **************************************************************
                             * PosHf4                                                     *
                             **************************************************************
                             _ZL6PosHf4                                      XREF[1]:     HuffDecode:080f0718(*)  
                             PosHf4
        08161d68 00 00 00        uint[13]                                                    unpack15.cpp:37
                 00 00 00 
                 00 00 00 
        08161d9c 00              ??         00h
        08161d9d 00              ??         00h
        08161d9e 00              ??         00h                                              ?  ->  08000000
        08161d9f 00              ??         00h
                             **************************************************************
                             * DecHf3                                                     *
                             **************************************************************
                             _ZL6DecHf3
                             DecHf3
        08161da0 00 08 00        uint[7]                                                     unpack15.cpp:30
                 00 00 24 
                 00 00 00 
        08161dbc 00              ??         00h
        08161dbd 00              ??         00h
        08161dbe 00              ??         00h
        08161dbf 00              ??         00h
                             **************************************************************
                             * PosHf3                                                     *
                             **************************************************************
                             _ZL6PosHf3
                             PosHf3
        08161dc0 00 00 00        uint[13]                                                    unpack15.cpp:32
                 00 00 00 
                 00 00 00 
                             funcs                                           XREF[1]:     luaopen_utf8:08132218(*)  
        08161df4 74 7a 14        luaL_Reg                                                    lutf8lib.c:237
                 08 e8 17 
                 13 08 7c 
