/*
 * Ghidra decompilation
 *
 * Function : FUN_08062024
 * Address  : 08062024
 * Program  : drastic16
 */


void FUN_08062024(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_110 [256];
  
  iVar1 = param_2[8];
  if (iVar1 < 0x2711) {
    if (iVar1 < 0x3e9) {
      if (iVar1 < 0x65) {
        if (iVar1 < 0xb) {
          uVar2 = 1;
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 5;
  }
  sprintf(acStack_110,"%s%*d",*param_2,uVar2,*(undefined4 *)param_2[6]);
  FUN_08076bb8(acStack_110,0xffff);
  return;
}


