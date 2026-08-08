/*
 * Ghidra decompilation
 *
 * Function : benchmark_step
 * Address  : 08096ed8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void benchmark_step(benchmark_struct *benchmark)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  u32 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  u64 *puVar8;
  system_struct *psVar9;
  bool bVar10;
  u64 uVar11;
  double dVar12;
  double dVar13;
  u64 current_time;
  char print_str [128];
  
  iVar2 = __stack_chk_guard;
  uVar1 = benchmark->phases_active;
  if (uVar1 != 0) {
    uVar4 = benchmark->current_frame;
    if (uVar4 == 0) {
      uVar3 = benchmark->current_phase;
      if ((uVar1 & 1 << (uVar3 & 0xff)) == 0) {
        do {
          uVar3 = uVar3 + 1;
        } while ((uVar1 & 1 << (uVar3 & 0xff)) == 0);
        benchmark->current_phase = uVar3;
      }
      psVar9 = benchmark->system;
      __printf_chk(1,"Starting benchmark phase %d: %s (%llx%llx in)\n",uVar3,
                   benchmark_phase_names[uVar3],
                   *(undefined4 *)&(psVar9->cpu_arm9).debug.instruction_count,
                   *(undefined4 *)((int)&(psVar9->cpu_arm9).debug.instruction_count + 4),
                   *(undefined4 *)&(psVar9->cpu_arm7).debug.instruction_count,
                   *(undefined4 *)((int)&(psVar9->cpu_arm7).debug.instruction_count + 4));
      psVar9 = benchmark->system;
      uVar1 = benchmark->current_phase;
      uVar4 = benchmark->savestate_load_index;
      (psVar9->config).fast_forward = 1;
      benchmark->disable = 1 << (uVar1 & 0xff) | 0x20;
      load_state_index(psVar9,uVar4,(u16 *)0x0,(u16 *)0x0,0);
      delay_us(2000000);
      fflush(stdout);
      get_ticks_us(&benchmark->run_start_time);
      uVar4 = benchmark->current_frame;
    }
    if (benchmark->interval_frames == uVar4) {
      get_ticks_us(&current_time);
      uVar1 = *(uint *)&benchmark->run_start_time;
      iVar5 = *(int *)((int)&benchmark->run_start_time + 4);
      uVar4 = benchmark->current_phase;
      *(uint *)(benchmark->run_times + uVar4) = (uint)current_time - uVar1;
      *(uint *)((int)benchmark->run_times + uVar4 * 8 + 4) =
           current_time._4_4_ - (iVar5 + (uint)((uint)current_time < uVar1));
      dVar12 = (double)__aeabi_ul2d();
      dVar13 = dVar12 / 1000.0;
      dVar12 = dVar12 / ((double)(ulonglong)benchmark->interval_frames * 1000.0);
      __printf_chk(1,"Benchmark phase %s took %lfms (%lfms per frame)\n",
                   benchmark_phase_names[uVar4]);
      benchmark->current_frame = 0xffffffff;
      uVar1 = benchmark->current_phase + 1;
      benchmark->current_phase = uVar1;
      if (benchmark->phases_active < (uint)(1 << (uVar1 & 0xff))) {
        uVar11 = benchmark->run_times[1];
        __printf_chk(1,"Benchmark complete (%s).\n",benchmark->system->gamecard_name,
                     benchmark->system,dVar13,dVar12);
        iVar2 = (int)(uVar11 >> 0x20);
        uVar3 = (uint)uVar11;
        dVar12 = (double)__aeabi_ul2d(uVar3,iVar2);
        dVar12 = dVar12 / ((double)(ulonglong)benchmark->interval_frames * 1000.0);
        __printf_chk(1,"  Full run time:                %3.2lfms per frame\n",SUB84(dVar12,0),
                     (int)((ulonglong)dVar12 >> 0x20));
        uVar1 = benchmark->phases_active;
        if (3 < uVar1) {
          puVar8 = benchmark->run_times + 2;
          uVar7 = 2;
          uVar6 = 4;
          do {
            if ((uVar6 & uVar1) != 0) {
              uVar1 = uVar3 - *(uint *)puVar8;
              iVar5 = iVar2 - (*(int *)((int)puVar8 + 4) + (uint)(uVar3 < *(uint *)puVar8));
              if (uVar7 == 4) {
                uVar6 = *(uint *)(benchmark->run_times + 3) - uVar3;
                bVar10 = CARRY4(uVar1,uVar6);
                uVar1 = uVar1 + uVar6;
                iVar5 = iVar5 + (*(int *)((int)benchmark->run_times + 0x1c) -
                                (iVar2 + (uint)(*(uint *)(benchmark->run_times + 3) < uVar3))) +
                        (uint)bVar10;
              }
              __sprintf_chk(print_str,1,0x80,"%s run time:",benchmark_phase_disable_names[uVar7]);
              if (iVar5 < 0) {
                uVar1 = 0;
                iVar5 = 0;
              }
              __aeabi_l2d(uVar1,iVar5);
              __printf_chk(1,"  %-30s%3.2lfms per frame\n",print_str);
              uVar1 = benchmark->phases_active;
            }
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 1;
            uVar6 = 1 << (uVar7 & 0xff);
          } while (uVar6 <= uVar1);
        }
                    /* WARNING: Subroutine does not return */
        quit(benchmark->system);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 + 1;
    }
    benchmark->current_frame = uVar4;
  }
  if (iVar2 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


