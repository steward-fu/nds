/*
 * Ghidra decompilation
 *
 * Function : process_arguments
 * Address  : 08006c10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void process_arguments(system_struct *system,int argc,char **argv)

{
  char *pcVar1;
  int iVar2;
  u32 current_option;
  u32 interval_frames_00;
  u32 interval_frames;
  u32 interval_frames_1;
  long lVar3;
  u32 color_depth;
  u32 benchmark_phases;
  debug_struct *debug;
  u32 savestate_load_index;
  ulonglong uVar4;
  s32 option_index;
  int local_2c;
  
  debug = &(system->cpu_arm9).debug;
  local_2c = __stack_chk_guard;
  puts("Processing command line options.");
switchD_08006ca0_caseD_e:
  do {
    iVar2 = getopt_long(argc,argv,"",process_arguments::long_options,&option_index);
    if (iVar2 == -1) {
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while (iVar2 != 0);
  switch(option_index) {
  case 0:
    __printf_chk(1,"debug option %d: %s %s %s\n",0,&DAT_0813abd0,"PC_BREAKPOINT",optarg);
    pcVar1 = optarg;
    set_debug_mode(&(system->cpu_arm7).debug,DEBUG_PC_BREAKPOINT);
    break;
  case 1:
    __printf_chk(1,"debug option %d: %s %s %s\n",1,&DAT_0813ac04,"PC_BREAKPOINT",optarg);
    pcVar1 = optarg;
    set_debug_mode(debug,DEBUG_PC_BREAKPOINT);
    goto joined_r0x08006eac;
  case 2:
    __printf_chk(1,"debug option %d: %s %s %s\n",2,&DAT_0813abd0,"COUNTDOWN_BREAKPOINT",optarg);
    pcVar1 = optarg;
    set_debug_mode(&(system->cpu_arm7).debug,DEBUG_COUNTDOWN_BREAKPOINT);
    break;
  case 3:
    __printf_chk(1,"debug option %d: %s %s %s\n",3,&DAT_0813ac04,"COUNTDOWN_BREAKPOINT",optarg);
    pcVar1 = optarg;
    set_debug_mode(debug,DEBUG_COUNTDOWN_BREAKPOINT);
    goto joined_r0x08006eac;
  case 4:
    __printf_chk(1,"debug option %d: %s %s %s\n",4,&DAT_0813abd0,&DAT_0813ac24,optarg);
    pcVar1 = optarg;
    set_debug_mode(&(system->cpu_arm7).debug,DEBUG_STEP);
    break;
  case 5:
    __printf_chk(1,"debug option %d: %s %s %s\n",5,&DAT_0813ac04,&DAT_0813ac24,optarg);
    pcVar1 = optarg;
    set_debug_mode(debug,DEBUG_STEP);
joined_r0x08006eac:
    if (pcVar1 != (char *)0x0) {
      uVar4 = strtoull(pcVar1,(char **)0x0,0x10);
      (system->cpu_arm9).debug.breakpoint = uVar4;
    }
    goto switchD_08006ca0_caseD_e;
  case 6:
    puts("Using recompiler.");
    system->use_recompiler = '\x01';
    goto switchD_08006ca0_caseD_e;
  case 7:
    lVar3 = strtol(optarg,(char **)0x0,10);
    if ((lVar3 - 0x10U & 0xffffffef) == 0) {
      __printf_chk(1,"Using a color depth of %dbpp.\n",lVar3);
      system->color_depth = (u8)lVar3;
    }
    else {
      __printf_chk(1,"Invalid color depth %s specified.\n",optarg);
    }
    goto switchD_08006ca0_caseD_e;
  case 8:
    interval_frames_00 = strtol(optarg,(char **)0x0,10);
    savestate_load_index = (system->config).savestate_number;
    benchmark_phases = 0x7f;
    goto LAB_08006da4;
  case 9:
    interval_frames_00 = strtol(optarg,(char **)0x0,10);
    savestate_load_index = (system->config).savestate_number;
    benchmark_phases = 2;
LAB_08006da4:
    initialize_benchmark
              (&system->benchmark,system,interval_frames_00,benchmark_phases,savestate_load_index);
    (system->config).fast_forward = 1;
    goto switchD_08006ca0_caseD_e;
  case 10:
    (system->config).fast_forward = 1;
    goto switchD_08006ca0_caseD_e;
  case 0xb:
    input_log_record(&system->input,optarg);
    goto switchD_08006ca0_caseD_e;
  case 0xc:
    input_log_playback(&system->input,optarg);
    goto switchD_08006ca0_caseD_e;
  case 0xd:
    puts("Using interpreter.");
    system->use_recompiler = '\0';
  default:
    goto switchD_08006ca0_caseD_e;
  }
  if (pcVar1 != (char *)0x0) {
    uVar4 = strtoull(pcVar1,(char **)0x0,0x10);
    (system->cpu_arm7).debug.breakpoint = uVar4;
  }
  goto switchD_08006ca0_caseD_e;
}


