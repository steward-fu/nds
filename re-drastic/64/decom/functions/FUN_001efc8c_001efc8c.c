/*
 * Ghidra decompilation
 *
 * Function : FUN_001efc8c
 * Address  : 001efc8c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001efc8c(blake2s_state *param_1,void *param_2,ulong param_3)

{
  blake2s_state *pbVar1;
  ulong uVar2;
  bool bVar3;
  blake2s_state *pbVar4;
  long lVar5;
  uint uVar6;
  blake2s_state *pbVar7;
  ulong uVar8;
  uchar *puVar9;
  uchar *puVar10;
  uint uVar11;
  void *pvStack_e0;
  long lStack_d8;
  blake2s_state *pbStack_c8;
  uchar *puStack_c0;
  ulong auStack_b8 [22];
  long lStack_8;
  
  lVar5 = *(long *)(param_1 + 0xc20);
  lStack_8 = ___stack_chk_guard;
  uVar8 = 0x200 - lVar5;
  pvStack_e0 = param_2;
  lStack_d8 = lVar5;
  if (lVar5 != 0 && uVar8 < param_3 || lVar5 != 0 && uVar8 == param_3) {
    pbVar4 = param_1 + 0xa20;
    memcpy(pbVar4 + lVar5,param_2,uVar8);
    pbVar7 = param_1;
    do {
      pbVar1 = pbVar7 + 0x120;
      blake2s_update(pbVar7,(uchar *)pbVar4,0x40);
      pbVar4 = pbVar4 + 0x40;
      pbVar7 = pbVar1;
    } while (param_1 + 0x900 != pbVar1);
    pvStack_e0 = (void *)((long)param_2 + uVar8);
    lStack_d8 = 0;
    param_3 = lVar5 + (param_3 - 0x200);
  }
  if (param_3 < 0x1000) {
    uVar6 = 1;
    bVar3 = false;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xc30);
    if (uVar6 - 6 < 2) {
      uVar6 = 4;
      bVar3 = false;
    }
    else {
      bVar3 = uVar6 == 0;
    }
  }
  uVar8 = 0;
  do {
    if (!bVar3 && uVar8 < 7 || !bVar3 && uVar8 == 7) {
      uVar11 = 0;
      puVar10 = (uchar *)((long)pvStack_e0 + uVar8 * 0x40);
      do {
        while( true ) {
          uVar2 = (ulong)uVar11;
          pbVar4 = param_1 + uVar8 * 0x120;
          (&puStack_c0)[uVar2 * 3] = puVar10;
          auStack_b8[uVar2 * 3] = param_3;
          (&pbStack_c8)[uVar2 * 3] = pbVar4;
          if (uVar6 < 2) break;
          ThreadPool::AddTask(*(ThreadPool **)(param_1 + 0xc28),Blake2Thread,&pbStack_c8 + uVar2 * 3
                             );
LAB_001efd68:
          uVar11 = uVar11 + 1;
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 0x40;
          if ((uVar6 <= uVar11 || 6 < uVar8) && (uVar6 <= uVar11 || uVar8 != 7)) goto LAB_001efdf0;
        }
        if (param_3 < 0x200) goto LAB_001efd68;
        puVar9 = puVar10;
        while( true ) {
          blake2s_update(pbVar4,puVar9,0x40);
          if (puVar9 + 0x200 == puVar10 + (param_3 - 0x200 & 0xfffffffffffffe00) + 0x200) break;
          pbVar4 = (&pbStack_c8)[uVar2 * 3];
          puVar9 = puVar9 + 0x200;
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 0x40;
      } while (uVar11 < uVar6 && uVar8 < 7 || uVar11 < uVar6 && uVar8 == 7);
    }
LAB_001efdf0:
    if (*(long *)(param_1 + 0xc28) != 0) {
      ThreadPool::WaitDone();
    }
    if (7 < uVar8) {
      uVar8 = param_3 & 0x1ff;
      if (uVar8 != 0) {
        memcpy(param_1 + lStack_d8 + 0xa20,
               (void *)((long)pvStack_e0 + (param_3 & 0xfffffffffffffe00)),uVar8);
      }
      *(ulong *)(param_1 + 0xc20) = lStack_d8 + uVar8;
      if (lStack_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lStack_8 - ___stack_chk_guard,&__stack_chk_guard,0);
    }
  } while( true );
}


