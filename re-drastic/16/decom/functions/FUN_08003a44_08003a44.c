/*
 * Ghidra decompilation
 *
 * Function : FUN_08003a44
 * Address  : 08003a44
 * Program  : drastic16
 */


undefined4 FUN_08003a44(byte **param_1,int param_2,int *param_3,code **param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    iVar3 = (**param_4)(param_4);
    *param_3 = iVar3;
    if (iVar3 == 0) {
      return 2;
    }
  }
  uVar5 = 0;
  iVar3 = 0;
  uVar4 = 0;
  do {
    if (iVar3 == param_2) {
      return 0;
    }
    if (uVar4 == 0) {
      uVar4 = 0x80;
      if (param_1[1] == (byte *)0x0) {
        return 0x10;
      }
      pbVar2 = *param_1;
      param_1[1] = param_1[1] + -1;
      *param_1 = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    uVar1 = uVar5 & uVar4;
    uVar4 = uVar4 >> 1;
    *(bool *)(*param_3 + iVar3) = uVar1 != 0;
    iVar3 = iVar3 + 1;
  } while( true );
}


