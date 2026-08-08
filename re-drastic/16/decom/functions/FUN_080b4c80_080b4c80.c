/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4c80
 * Address  : 080b4c80
 * Program  : drastic16
 */


ushort FUN_080b4c80(int param_1,char param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 0x14) < 3) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_080a609c(param_1,2);
    if (param_2 == '\0') {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
    }
    uVar1 = FUN_080b4060(0xffffffff,uVar2,iVar3 + -2);
    uVar1 = ~uVar1;
  }
  return uVar1;
}


