/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0860
 * Address  : 080a0860
 * Program  : drastic16
 */


void FUN_080a0860(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int aiStack_e0 [50];
  uint local_18;
  uint local_14;
  
  lVar3 = CONCAT44(param_2,param_1);
  local_14 = 0;
  do {
    uVar1 = local_14;
    uStack_e4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_e8 = (undefined4)lVar3;
    local_14 = local_14 + 1;
    iVar2 = 10;
    __aeabi_ldivmod(local_e8,uStack_e4,10,0);
    aiStack_e0[uVar1] = iVar2 + 0x30;
    lVar3 = __aeabi_ldivmod(local_e8,uStack_e4,10,0);
  } while (lVar3 != 0);
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    *(int *)(param_3 + local_18 * 4) = aiStack_e0[(local_14 - local_18) + -1];
  }
  *(undefined4 *)(param_3 + local_14 * 4) = 0;
  return;
}


