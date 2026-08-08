/*
 * Ghidra decompilation
 *
 * Function : FUN_08061350
 * Address  : 08061350
 * Program  : drastic16
 */


void FUN_08061350(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  uint local_b8;
  int iStack_b4;
  char acStack_b0 [132];
  
  uVar1 = param_1[0x14];
  if (uVar1 != 0) {
    iVar4 = param_1[0x16];
    if (iVar4 == 0) {
      uVar3 = param_1[0x15];
      if ((uVar1 & 1 << (uVar3 & 0xff)) == 0) {
        do {
          uVar3 = uVar3 + 1;
        } while ((uVar1 & 1 << (uVar3 & 0xff)) == 0);
        param_1[0x15] = uVar3;
      }
      iVar4 = *param_1;
      printf("Starting benchmark phase %d: %s (%llx%llx in)\n",uVar3,(&PTR_s_Warmup_080e89c0)[uVar3]
             ,(undefined4 *)(iVar4 + 0x1da7398),*(undefined4 *)(iVar4 + 0x15a0e08),
             *(undefined4 *)(iVar4 + 0x15a0e0c),*(undefined4 *)(iVar4 + 0x1da7398),
             *(undefined4 *)(iVar4 + 0x1da739c));
      param_1[0x17] = 1 << (param_1[0x15] & 0xffU);
      FUN_08060414(*param_1,param_1[0x12],0,0,0);
      usleep(2000000);
      fflush(stdout);
      FUN_0807b7f0(param_1 + 0x10);
      iVar4 = param_1[0x16];
    }
    if (param_1[0x13] == iVar4) {
      FUN_0807b7f0(&local_b8);
      iVar5 = param_1[0x15];
      iVar4 = local_b8 - param_1[0x10];
      iStack_b4 = iStack_b4 - (param_1[0x11] + (uint)(local_b8 < (uint)param_1[0x10]));
      param_1[iVar5 * 2 + 2] = iVar4;
      param_1[iVar5 * 2 + 3] = iStack_b4;
      dVar9 = (double)__aeabi_ul2d(iVar4,iStack_b4);
      dVar10 = dVar9 / ((double)(ulonglong)(uint)param_1[0x13] * 1000.0);
      printf("Benchmark phase %s took %lfms (%lfms per frame)\n",(&PTR_s_Warmup_080e89c0)[iVar5],
             SUB84(dVar9 / 1000.0,0),(int)((ulonglong)(dVar9 / 1000.0) >> 0x20),dVar10);
      uVar1 = param_1[0x15] + 1;
      param_1[0x15] = uVar1;
      param_1[0x16] = -1;
      if ((uint)param_1[0x14] < (uint)(1 << (uVar1 & 0xff))) {
        uVar3 = param_1[4];
        iVar4 = param_1[5];
        printf("Benchmark complete (%s).\n",*param_1 + 0x82830,0xffffffff,uVar1,dVar10);
        dVar10 = (double)__aeabi_ul2d(uVar3,iVar4);
        dVar9 = dVar10 / ((double)(ulonglong)(uint)param_1[0x13] * 1000.0);
        printf("  Full run time:                %3.2lfms per frame\n",
               (int)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
        uVar1 = param_1[0x14];
        if (3 < uVar1) {
          puVar7 = (uint *)(param_1 + 6);
          uVar6 = 2;
          uVar2 = 4;
          do {
            if ((uVar1 & uVar2) != 0) {
              uVar1 = uVar3 - *puVar7;
              iVar5 = iVar4 - (puVar7[1] + (uint)(uVar3 < *puVar7));
              if (uVar6 == 4) {
                uVar2 = param_1[8] - uVar3;
                bVar8 = CARRY4(uVar1,uVar2);
                uVar1 = uVar1 + uVar2;
                iVar5 = iVar5 + (param_1[9] - (iVar4 + (uint)((uint)param_1[8] < uVar3))) +
                        (uint)bVar8;
              }
              sprintf(acStack_b0,"%s run time:",(&PTR_s_Warmup_080e89e0)[uVar6]);
              if (iVar5 < 0) {
                uVar1 = 0;
                iVar5 = 0;
              }
              dVar9 = (double)__aeabi_l2d(uVar1,iVar5);
              dVar9 = dVar9 / ((double)(ulonglong)(uint)param_1[0x13] * 1000.0);
              printf("  %-30s%3.2lfms per frame\n",acStack_b0,SUB84(dVar9,0),
                     (int)((ulonglong)dVar9 >> 0x20));
              uVar1 = param_1[0x14];
            }
            uVar6 = uVar6 + 1;
            uVar2 = 1 << (uVar6 & 0xff);
            puVar7 = puVar7 + 2;
          } while (uVar2 <= uVar1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_08004cd4(*param_1);
      }
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    param_1[0x16] = iVar4;
  }
  return;
}


