/*
 * Ghidra decompilation
 *
 * Function : Lzma2Decode
 * Address  : 001b2e00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Lzma2Decode(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               uint param_5,undefined4 param_6,int *param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auStack_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  undefined local_c;
  long local_8;
  
  uVar1 = param_5 & 0xff;
  local_8 = ___stack_chk_guard;
  uVar4 = *param_2;
  local_a8 = 0;
  uVar3 = *param_4;
  *param_4 = 0;
  *param_2 = 0;
  *param_7 = 0;
  iVar2 = 4;
  uStack_a0 = param_1;
  local_80 = uVar4;
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      local_c = 0xff;
      local_d = 0xff;
      local_e = 0xff;
      local_f = 0xff;
    }
    else {
      iVar2 = (param_5 & 1 | 2) << (ulong)((uVar1 >> 1) + 0xb & 0x1f);
      local_e = (undefined)((uint)iVar2 >> 8);
      local_f = (undefined)iVar2;
      local_d = (undefined)((uint)iVar2 >> 0x10);
      local_c = (undefined)((uint)iVar2 >> 0x18);
    }
    local_10 = 4;
    iVar2 = LzmaDec_AllocateProbs(auStack_b8,&local_10,5,param_8);
    if (iVar2 == 0) {
      *param_4 = uVar3;
      iVar2 = Lzma2Dec_DecodeToDic(auStack_b8,uVar4,param_3,param_4,param_6,param_7);
      *param_2 = local_88;
      if ((iVar2 == 0) && (iVar2 = 0, *param_7 == 3)) {
        iVar2 = 6;
      }
      LzmaDec_FreeProbs(auStack_b8,param_8);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


