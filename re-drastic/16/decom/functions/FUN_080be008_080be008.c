/*
 * Ghidra decompilation
 *
 * Function : FUN_080be008
 * Address  : 080be008
 * Program  : drastic16
 */


int FUN_080be008(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  for (iVar1 = 7; iVar1 != -1; iVar1 = iVar1 + -1) {
    FUN_080bdeb8(iVar2);
    iVar2 = iVar2 + 0x108;
  }
  FUN_080bdeb8(param_1 + 0x840);
  return param_1;
}


