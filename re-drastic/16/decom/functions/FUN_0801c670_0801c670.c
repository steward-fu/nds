/*
 * Ghidra decompilation
 *
 * Function : FUN_0801c670
 * Address  : 0801c670
 * Program  : drastic16
 */


void FUN_0801c670(int *param_1,int param_2,int param_3,int param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_4;
  if (DAT_0aaec0ff == '\0') {
    uVar1 = 0;
    iVar3 = 0;
    while( true ) {
      (&DAT_0aaec000)[iVar3] = uVar1;
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x100) break;
      uVar1 = __popcountsi2(iVar3);
    }
  }
  param_1[0x8c3] = param_2 + 0x25ab720;
  param_1[0x8c4] = param_2 + 0x282c7b0;
  *(char *)(param_1 + 0x841) = (char)param_3;
  param_1[0x8c2] = param_2;
  param_1[0x821] = param_2 + 0x83000;
  param_1[0x8de] = param_4;
  FUN_080750c0(param_1 + 0x842,param_1,param_2 + 0x25ab720,param_2 + 0x83000,iVar5);
  iVar3 = 0;
  iVar5 = 8;
  piVar4 = param_1;
  do {
    piVar4[4] = iVar5;
    iVar2 = param_3 * 4 + 3 + iVar3;
    *(char *)((int)piVar4 + 0x1d) = (char)iVar3;
    *piVar4 = (int)param_1;
    iVar3 = iVar3 + 1;
    FUN_08015438(param_2 + 0x18,iVar2,&LAB_080146e4,piVar4);
    iVar5 = iVar5 << 1;
    piVar4 = piVar4 + 8;
  } while (iVar3 != 4);
  if (param_3 != 1) {
    return;
  }
  param_1[0x8c5] = param_2 + 0x1523020;
  param_1[0x8c6] = param_2 + 0x152b020;
  return;
}


