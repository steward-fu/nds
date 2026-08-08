/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_AllocateProbs
 * Address  : 001b20a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Lzma2Dec_AllocateProbs(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  undefined local_c;
  long local_8;
  
  uVar1 = param_2 & 0xff;
  local_8 = ___stack_chk_guard;
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      local_c = 0xff;
      local_d = 0xff;
      local_e = 0xff;
      local_f = 0xff;
    }
    else {
      iVar2 = (param_2 & 1 | 2) << (ulong)((uVar1 >> 1) + 0xb & 0x1f);
      local_e = (undefined)((uint)iVar2 >> 8);
      local_f = (undefined)iVar2;
      local_d = (undefined)((uint)iVar2 >> 0x10);
      local_c = (undefined)((uint)iVar2 >> 0x18);
    }
    local_10 = 4;
    uVar3 = LzmaDec_AllocateProbs(param_1,&local_10,5,param_3);
  }
  else {
    uVar3 = 4;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


