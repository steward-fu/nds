/*
 * Ghidra decompilation
 *
 * Function : FUN_08097784
 * Address  : 08097784
 * Program  : drastic16
 */


undefined8 FUN_08097784(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1[4] != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar2 = *param_1 + iVar3;
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + *(int *)(iVar2 + 4);
    } while (iVar3 != param_1[4] * 0x18);
    if ((iVar4 != 0) && (iVar4 = iVar4 + -1, -1 < iVar4)) {
      if (param_1[5] == 0) {
LAB_080977dc:
        return *(undefined8 *)(param_1[3] + iVar4 * 8);
      }
      do {
        if (iVar4 != *(int *)(param_1[1] + 4)) {
          iVar2 = 0;
          iVar3 = param_1[1];
          do {
            iVar2 = iVar2 + 1;
            if (iVar2 == param_1[5]) goto LAB_080977dc;
            piVar1 = (int *)(iVar3 + 0xc);
            iVar3 = iVar3 + 8;
          } while (iVar4 != *piVar1);
          if (iVar2 < 0) goto LAB_080977dc;
        }
        bVar5 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar5);
    }
  }
  return 0;
}


