/*
 * Ghidra decompilation
 *
 * Function : benchmark_step
 * Address  : 001764b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void benchmark_step(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  long local_90;
  undefined auStack_88 [128];
  long local_8;
  
  uVar6 = *(uint *)(param_1 + 10);
  local_8 = ___stack_chk_guard;
  if (uVar6 != 0) {
    iVar2 = *(int *)(param_1 + 0xb);
    if (iVar2 == 0) {
      uVar1 = *(uint *)((long)param_1 + 0x54);
      if ((1 << (ulong)(uVar1 & 0x1f) & uVar6) == 0) {
        do {
          uVar1 = uVar1 + 1;
        } while ((1 << (ulong)(uVar1 & 0x1f) & uVar6) == 0);
        *(uint *)((long)param_1 + 0x54) = uVar1;
      }
      __printf_chk(1,"Starting benchmark phase %d: %s (%lx%lx in)\n",(ulong)uVar1,
                   (&benchmark_phase_names)[uVar1],
                   *(undefined8 *)(nds_system + *param_1 + 0x10cdf70),
                   *(undefined8 *)(nds_system + *param_1 + 0x20d4560));
      lVar4 = *param_1;
      iVar2 = *(int *)((long)param_1 + 100);
      uVar6 = 1 << (ulong)(*(uint *)((long)param_1 + 0x54) & 0x1f);
      *(uint *)((long)param_1 + 0x5c) = uVar6;
      *(undefined4 *)(lVar4 + 0x85a04) = 1;
      if (iVar2 == 0) {
        *(uint *)((long)param_1 + 0x5c) = uVar6 | 0x20;
      }
      load_state_index(lVar4,*(undefined4 *)(param_1 + 9),0,0,0);
      delay_us(2000000);
      fflush(_stdout);
      get_ticks_us(param_1 + 8);
      iVar2 = *(int *)(param_1 + 0xb);
    }
    if (*(int *)((long)param_1 + 0x4c) == iVar2) {
      get_ticks_us(&local_90);
      uVar6 = *(uint *)((long)param_1 + 0x4c);
      dVar8 = (double)NEON_ucvtf(local_90 - param_1[8]);
      puVar5 = (&benchmark_phase_names)[*(uint *)((long)param_1 + 0x54)];
      param_1[(ulong)*(uint *)((long)param_1 + 0x54) + 1] = local_90 - param_1[8];
      __printf_chk(dVar8 / 1000.0,dVar8 / ((double)(ulong)uVar6 * 1000.0),1,
                   "Benchmark phase %s took %lfms (%lfms per frame)\n",puVar5);
      uVar6 = *(int *)((long)param_1 + 0x54) + 1;
      *(uint *)((long)param_1 + 0x54) = uVar6;
      *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
      if (*(uint *)(param_1 + 10) < (uint)(1 << (ulong)(uVar6 & 0x1f))) {
        lVar4 = param_1[2];
        __printf_chk(1,"Benchmark complete (%s).\n",*param_1 + 0x8b380);
        dVar8 = (double)NEON_ucvtf(lVar4);
        uVar6 = 2;
        __printf_chk(dVar8 / ((double)(ulong)*(uint *)((long)param_1 + 0x4c) * 1000.0),1,
                     "  Full run time:                %3.2lfms per frame\n");
        uVar1 = *(uint *)(param_1 + 10);
        uVar3 = 4;
        if (3 < uVar1) {
          do {
            if ((uVar3 & uVar1) != 0) {
              if (uVar6 == 4) {
                lVar7 = param_1[4] - param_1[(ulong)uVar6 + 1];
              }
              else {
                lVar7 = lVar4 - param_1[(ulong)uVar6 + 1];
              }
              __sprintf_chk(auStack_88,1,0x80,"%s run time:",
                            *(undefined8 *)(benchmark_phase_disable_names + (ulong)uVar6 * 8));
              if (lVar7 < 0) {
                lVar7 = 0;
              }
              __printf_chk((double)lVar7 / ((double)(ulong)*(uint *)((long)param_1 + 0x4c) * 1000.0)
                           ,1,"  %-30s%3.2lfms per frame\n",auStack_88);
              uVar1 = *(uint *)(param_1 + 10);
            }
            uVar6 = uVar6 + 1;
            uVar3 = 1 << (ulong)(uVar6 & 0x1f);
          } while (uVar3 <= uVar1);
        }
                    /* WARNING: Subroutine does not return */
        quit(*param_1);
      }
      *(undefined4 *)(param_1 + 0xb) = 0;
    }
    else {
      *(int *)(param_1 + 0xb) = iVar2 + 1;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


