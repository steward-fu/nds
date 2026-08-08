/*
 * Ghidra decompilation
 *
 * Function : SzFolder_GetUnpackSize
 * Address  : 001ad170
 * Program  : drastic64
 */


undefined8 SzFolder_GetUnpackSize(long *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar5 = 0;
    piVar3 = (int *)(*param_1 + 4);
    do {
      piVar2 = piVar3 + 8;
      iVar5 = iVar5 + *piVar3;
      piVar3 = piVar2;
    } while ((int *)(*param_1 + 0x24 + (ulong)(*(int *)(param_1 + 4) - 1) * 0x20) != piVar2);
    if ((iVar5 != 0) && (iVar5 = iVar5 + -1, -1 < iVar5)) {
      do {
        if (*(int *)((long)param_1 + 0x24) == 0) {
LAB_001ad208:
          return *(undefined8 *)(param_1[3] + (long)iVar5 * 8);
        }
        iVar4 = 0;
        piVar3 = (int *)(param_1[1] + 4);
        while (iVar1 = *piVar3, piVar3 = piVar3 + 2, iVar1 != iVar5) {
          iVar4 = iVar4 + 1;
          if (iVar4 == *(int *)((long)param_1 + 0x24)) goto LAB_001ad208;
        }
        if (iVar4 < 0) goto LAB_001ad208;
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  return 0;
}


