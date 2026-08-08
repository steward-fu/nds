/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0758
 * Address  : 080a0758
 * Program  : drastic16
 */


void FUN_080a0758(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  char acStack_4d [53];
  uint local_18;
  uint local_14;
  
  lVar3 = CONCAT44(param_2,param_1);
  local_14 = 0;
  do {
    uVar1 = local_14;
    uStack_54 = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_58 = (undefined4)lVar3;
    local_14 = local_14 + 1;
    cVar2 = '\n';
    __aeabi_ldivmod(local_58,uStack_54,10,0);
    acStack_4d[uVar1 + 1] = cVar2 + '0';
    lVar3 = __aeabi_ldivmod(local_58,uStack_54,10,0);
  } while (lVar3 != 0);
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    *(char *)(param_3 + local_18) = acStack_4d[local_14 - local_18];
  }
  *(undefined *)(param_3 + local_14) = 0;
  return;
}


