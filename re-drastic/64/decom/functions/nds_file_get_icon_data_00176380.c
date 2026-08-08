/*
 * Ghidra decompilation
 *
 * Function : nds_file_get_icon_data
 * Address  : 00176380
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nds_file_get_icon_data(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined auStack_44c [4];
  undefined auStack_448 [32];
  undefined4 local_428 [8];
  undefined4 local_408 [8];
  undefined4 local_3e8 [8];
  undefined4 local_3c8 [104];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = nds_file_read_to_memory_partial(param_1,auStack_44c,auStack_448,0x80,0);
  if (iVar4 == 0) {
    iVar4 = nds_file_read_to_memory_partial(param_1,auStack_44c,auStack_448,0x440,local_3e8[2]);
    if (iVar4 == 0) {
      *(undefined8 *)(param_2 + 0x80) = local_228;
      *(undefined8 *)(param_2 + 0x82) = uStack_220;
      *(undefined8 *)(param_2 + 0x84) = local_218;
      *(undefined8 *)(param_2 + 0x86) = uStack_210;
      memcpy(param_2 + 0x88,auStack_108,0x100);
      uVar6 = 0;
      puVar5 = param_2;
      do {
        uVar1 = uVar6 & 7;
        uVar3 = uVar6 >> 3;
        uVar6 = uVar6 + 1;
        uVar1 = uVar1 + uVar3 * 0x20;
        uVar7 = local_408[uVar1];
        uVar2 = local_3c8[uVar1];
        *puVar5 = local_428[uVar1];
        puVar5[1] = uVar7;
        puVar5[2] = local_3e8[uVar1];
        puVar5[3] = uVar2;
        puVar5 = puVar5 + 4;
      } while (uVar6 != 0x20);
      *(undefined2 *)(param_2 + 0x80) = 0;
      uVar7 = 0;
      goto LAB_00176468;
    }
  }
  uVar7 = 0xffffffff;
LAB_00176468:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


