/*
 * Ghidra decompilation
 *
 * Function : FUN_001900bc
 * Address  : 001900bc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001900bc(uint **param_1,uint param_2,ulong param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *extraout_x8;
  uint extraout_w9;
  uint extraout_w10;
  uint **extraout_x11;
  int iStack_10;
  int iStack_c;
  long lStack_8;
  
  puVar5 = &DAT_0025f000;
  lStack_8 = ___stack_chk_guard;
  uVar4 = param_3 & 0xffffffff;
  uVar3 = (uint)param_3;
  if ((param_3 & 0xffff) == 0) {
    puVar2 = *param_1;
    *puVar2 = param_2 | (uVar3 >> 0x10) << 5 | 0x52a00000;
    *param_1 = puVar2 + 1;
  }
  else if ((param_3 & 0xffff0000) == 0) {
    puVar2 = *param_1;
    *puVar2 = param_2 | uVar3 << 5 | 0x52800000;
    *param_1 = puVar2 + 1;
  }
  else if ((uVar3 & 0xffff) == 0xffff) {
    puVar2 = *param_1;
    *puVar2 = param_2 | (~uVar3 >> 0x10) << 5 | 0x12a00000;
    *param_1 = puVar2 + 1;
  }
  else if ((uVar3 & 0xffff0000) == 0xffff0000) {
    puVar2 = *param_1;
    *puVar2 = param_2 | ~uVar3 << 5 | 0x12800000;
    *param_1 = puVar2 + 1;
  }
  else {
    iVar1 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar4,&iStack_10,&iStack_c);
    puVar5 = extraout_x8;
    if (iVar1 == 0) {
      puVar2 = *extraout_x11;
      *puVar2 = ((uint)uVar4 & 0xffff) << 5 | extraout_w9 | 0x52800000;
      puVar2[1] = extraout_w9 | ((uint)(uVar4 >> 0x10) & 0xffff) << 5 | 0x72a00000;
      *extraout_x11 = puVar2 + 2;
    }
    else {
      puVar2 = *extraout_x11;
      *puVar2 = iStack_c << 10 | iStack_10 << 0x10 | extraout_w10;
      *extraout_x11 = puVar2 + 1;
    }
  }
  if (lStack_8 - **(long **)(puVar5 + 0xdc0) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - **(long **)(puVar5 + 0xdc0),0);
}


