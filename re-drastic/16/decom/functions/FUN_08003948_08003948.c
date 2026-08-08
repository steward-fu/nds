/*
 * Ghidra decompilation
 *
 * Function : FUN_08003948
 * Address  : 08003948
 * Program  : drastic16
 */


int FUN_08003948(undefined4 param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  uint local_18;
  int iStack_14;
  
  iVar1 = FUN_08003878(param_1,&local_18);
  if (iVar1 == 0) {
    bVar2 = iStack_14 == 0;
    if (bVar2 && local_18 < 0x3ffffff || bVar2 && local_18 == 0x3ffffff) {
      *param_2 = local_18;
    }
    if ((!bVar2 || local_18 >= 0x3ffffff) && (!bVar2 || local_18 != 0x3ffffff)) {
      iVar1 = 4;
    }
  }
  return iVar1;
}


