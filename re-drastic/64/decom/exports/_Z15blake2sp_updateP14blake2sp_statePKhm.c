/*
 * Ghidra decompilation
 *
 * Function : _Z15blake2sp_updateP14blake2sp_statePKhm
 * Address  : 001efc90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* blake2sp_update(blake2sp_state*, unsigned char const*, unsigned long) */

void blake2sp_update(blake2sp_state *param_1,uchar *param_2,ulong param_3)

{
  blake2sp_state *pbVar1;
  ulong uVar2;
  bool bVar3;
  blake2s_state *pbVar4;
  long lVar5;
  uint uVar6;
  blake2sp_state *pbVar7;
  blake2sp_state *pbVar8;
  ulong uVar9;
  uchar *puVar10;
  uchar *puVar11;
  uint uVar12;
  uchar *local_e0;
  long local_d8;
  blake2s_state *local_c8;
  uchar *local_c0;
  ulong auStack_b8 [22];
  long local_8;
  
  lVar5 = *(long *)(param_1 + 0xc20);
  local_8 = ___stack_chk_guard;
  uVar9 = 0x200 - lVar5;
  local_e0 = param_2;
  local_d8 = lVar5;
  if (lVar5 != 0 && uVar9 < param_3 || lVar5 != 0 && uVar9 == param_3) {
    pbVar8 = param_1 + 0xa20;
    memcpy(pbVar8 + lVar5,param_2,uVar9);
    pbVar7 = param_1;
    do {
      pbVar1 = (blake2sp_state *)((blake2s_state *)pbVar7 + 0x120);
      blake2s_update((blake2s_state *)pbVar7,(uchar *)pbVar8,0x40);
      pbVar8 = pbVar8 + 0x40;
      pbVar7 = pbVar1;
    } while (param_1 + 0x900 != pbVar1);
    local_e0 = param_2 + uVar9;
    local_d8 = 0;
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
  uVar9 = 0;
  do {
    if (!bVar3 && uVar9 < 7 || !bVar3 && uVar9 == 7) {
      uVar12 = 0;
      puVar11 = local_e0 + uVar9 * 0x40;
      do {
        while( true ) {
          uVar2 = (ulong)uVar12;
          pbVar4 = (blake2s_state *)(param_1 + uVar9 * 0x120);
          (&local_c0)[uVar2 * 3] = puVar11;
          auStack_b8[uVar2 * 3] = param_3;
          (&local_c8)[uVar2 * 3] = pbVar4;
          if (uVar6 < 2) break;
          ThreadPool::AddTask(*(ThreadPool **)(param_1 + 0xc28),Blake2Thread,&local_c8 + uVar2 * 3);
LAB_001efd68:
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1;
          puVar11 = puVar11 + 0x40;
          if ((uVar6 <= uVar12 || 6 < uVar9) && (uVar6 <= uVar12 || uVar9 != 7)) goto LAB_001efdf0;
        }
        if (param_3 < 0x200) goto LAB_001efd68;
        puVar10 = puVar11;
        while( true ) {
          blake2s_update(pbVar4,puVar10,0x40);
          if (puVar10 + 0x200 == puVar11 + (param_3 - 0x200 & 0xfffffffffffffe00) + 0x200) break;
          pbVar4 = (&local_c8)[uVar2 * 3];
          puVar10 = puVar10 + 0x200;
        }
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 0x40;
      } while (uVar12 < uVar6 && uVar9 < 7 || uVar12 < uVar6 && uVar9 == 7);
    }
LAB_001efdf0:
    if (*(long *)(param_1 + 0xc28) != 0) {
      ThreadPool::WaitDone();
    }
    if (7 < uVar9) {
      uVar9 = param_3 & 0x1ff;
      if (uVar9 != 0) {
        memcpy(param_1 + local_d8 + 0xa20,local_e0 + (param_3 & 0xfffffffffffffe00),uVar9);
      }
      *(ulong *)(param_1 + 0xc20) = local_d8 + uVar9;
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,0);
    }
  } while( true );
}


