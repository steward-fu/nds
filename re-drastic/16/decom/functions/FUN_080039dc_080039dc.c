/*
 * Ghidra decompilation
 *
 * Function : FUN_080039dc
 * Address  : 080039dc
 * Program  : drastic16
 */


int FUN_080039dc(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint local_20;
  uint uStack_1c;
  
  do {
    iVar1 = FUN_08003878(param_1,&local_20);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (uStack_1c == param_4 && local_20 == param_3) {
      return 0;
    }
    if ((local_20 | uStack_1c) == 0) {
      return 0x10;
    }
    iVar1 = FUN_08003988(param_1);
  } while (iVar1 == 0);
  return iVar1;
}


