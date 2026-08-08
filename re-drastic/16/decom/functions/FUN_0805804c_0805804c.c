/*
 * Ghidra decompilation
 *
 * Function : FUN_0805804c
 * Address  : 0805804c
 * Program  : drastic16
 */


void FUN_0805804c(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(*param_1 + (param_6 + 0x448) * 4 + 8);
  if (0x1ffff < (uint)(param_7 + param_4)) {
    uVar4 = param_6 + 1U & 3;
    uVar5 = param_4 - (0x20000 - param_7);
    uVar1 = *(undefined4 *)(*param_1 + (uVar4 + 0x448) * 4 + 8);
    iVar3 = (uint)(byte)(&DAT_080e70f0)[param_8] *
            ((uint)(0x20000 - param_7 << (uint)(byte)(&DAT_080e70e8)[param_8]) >> 1) + param_3;
    if (0x1ffff < uVar5) {
      FUN_0805804c(param_1,param_2,
                   (uint)(byte)(&DAT_080e70f0)[param_8] *
                   ((uint)(0x20000 << (uint)(byte)(&DAT_080e70e8)[param_8]) >> 1) + iVar3,
                   uVar5 - 0x20000,param_5,uVar4 + 1 & 3,0,param_8,param_9);
      uVar5 = 0x20000;
    }
    FUN_0805658c(param_2,iVar3,uVar1,param_5,param_8,uVar5,param_9);
  }
  if (iVar2 != 0) {
    iVar2 = iVar2 + param_7;
  }
  FUN_0805658c(param_2,param_3,iVar2,param_5);
  return;
}


