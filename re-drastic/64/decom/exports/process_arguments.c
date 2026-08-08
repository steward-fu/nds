/*
 * Ghidra decompilation
 *
 * Function : process_arguments
 * Address  : 0010f0e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_arguments(long param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  ulong uVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts("Processing command line options.");
LAB_0010f150:
  do {
    iVar2 = getopt_long(param_2,param_3,"",&long_options_11199,&local_c);
    while( true ) {
      if (iVar2 == -1) {
        if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(local_8 - ___stack_chk_guard,0);
        }
        return;
      }
      if (iVar2 != 0) goto LAB_0010f150;
      if (local_c == 7) {
        uVar4 = strtol(_optarg,(char **)0x0,10);
        if (((int)uVar4 - 0x10U & 0xffffffef) == 0) {
          __printf_chk(1,"Using a color depth of %dbpp.\n",uVar4 & 0xffffffff);
          nds_system[param_1 + 0x362e9a9] = (char)uVar4;
        }
        else {
          __printf_chk(1,"Invalid color depth %s specified.\n",_optarg);
        }
        goto LAB_0010f150;
      }
      if (7 < local_c) {
        if (local_c == 0xb) {
          *(undefined4 *)(param_1 + 0x85a04) = 1;
        }
        else if (local_c < 0xc) {
          if (local_c == 9) {
            uVar4 = strtol(_optarg,(char **)0x0,10);
            initialize_benchmark
                      (param_1 + 0x8a318,param_1,uVar4 & 0xffffffff,0x7f,
                       *(undefined4 *)(param_1 + 0x85a00),1);
            *(undefined4 *)(param_1 + 0x85a04) = 1;
          }
          else if (local_c == 10) {
            uVar4 = strtol(_optarg,(char **)0x0,10);
            initialize_benchmark
                      (param_1 + 0x8a318,param_1,uVar4 & 0xffffffff,2,
                       *(undefined4 *)(param_1 + 0x85a00),1);
            *(undefined4 *)(param_1 + 0x85a04) = 1;
          }
          else if (local_c == 8) {
            uVar4 = strtol(_optarg,(char **)0x0,10);
            initialize_benchmark
                      (param_1 + 0x8a318,param_1,uVar4 & 0xffffffff,0x7f,
                       *(undefined4 *)(param_1 + 0x85a00),0);
            *(undefined4 *)(param_1 + 0x85a04) = 1;
          }
        }
        else if (local_c == 0xd) {
          input_log_playback(param_1 + 0x5550,_optarg);
        }
        else if (local_c == 0xe) {
          puts("Using interpreter.");
          nds_system[param_1 + 0x362e9a8] = 0;
        }
        else if (local_c == 0xc) {
          input_log_record(param_1 + 0x5550,_optarg);
        }
        goto LAB_0010f150;
      }
      if (local_c == 3) {
        __printf_chk(1,"debug option %d: %s %s %s\n",3,&DAT_0021aac0,"COUNTDOWN_BREAKPOINT",_optarg)
        ;
        pcVar1 = _optarg;
        set_debug_mode(param_1 + 0x15c9e68,4);
        if (pcVar1 != (char *)0x0) {
          uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
          *(ulonglong *)(nds_system + param_1 + 0x10cdf78) = uVar3;
        }
        goto LAB_0010f150;
      }
      if (local_c < 4) {
        if (local_c == 1) {
          __printf_chk(1,"debug option %d: %s %s %s\n",1,&DAT_0021aac0,"PC_BREAKPOINT",_optarg);
          pcVar1 = _optarg;
          set_debug_mode(param_1 + 0x15c9e68,3);
          if (pcVar1 != (char *)0x0) {
            uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
            *(ulonglong *)(nds_system + param_1 + 0x10cdf78) = uVar3;
          }
        }
        else if (local_c == 2) {
          __printf_chk(1,"debug option %d: %s %s %s\n",2,&DAT_0021aa98,"COUNTDOWN_BREAKPOINT",
                       _optarg);
          pcVar1 = _optarg;
          set_debug_mode(param_1 + 0x25d0458,4);
          if (pcVar1 != (char *)0x0) {
            uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
            *(ulonglong *)(nds_system + param_1 + 0x20d4568) = uVar3;
          }
        }
        else if (local_c == 0) {
          __printf_chk(1,"debug option %d: %s %s %s\n",0,&DAT_0021aa98,"PC_BREAKPOINT",_optarg);
          pcVar1 = _optarg;
          set_debug_mode(param_1 + 0x25d0458,3);
          if (pcVar1 != (char *)0x0) {
            uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
            *(ulonglong *)(nds_system + param_1 + 0x20d4568) = uVar3;
          }
        }
        goto LAB_0010f150;
      }
      if (local_c == 5) {
        __printf_chk(1,"debug option %d: %s %s %s\n",5,&DAT_0021aac0,&DAT_0021aae0,_optarg);
        pcVar1 = _optarg;
        set_debug_mode(param_1 + 0x15c9e68,0);
        if (pcVar1 != (char *)0x0) {
          uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
          *(ulonglong *)(nds_system + param_1 + 0x10cdf78) = uVar3;
        }
        goto LAB_0010f150;
      }
      if (local_c != 6) break;
      puts("Using recompiler.");
      nds_system[param_1 + 0x362e9a8] = 1;
      iVar2 = getopt_long(param_2,param_3,"",&long_options_11199,&local_c);
    }
    if (local_c == 4) {
      __printf_chk(1,"debug option %d: %s %s %s\n",4,&DAT_0021aa98,&DAT_0021aae0,_optarg);
      pcVar1 = _optarg;
      set_debug_mode(param_1 + 0x25d0458,0);
      if (pcVar1 != (char *)0x0) {
        uVar3 = strtoull(pcVar1,(char **)0x0,0x10);
        *(ulonglong *)(nds_system + param_1 + 0x20d4568) = uVar3;
      }
    }
  } while( true );
}


