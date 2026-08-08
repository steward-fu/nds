/*
 * Ghidra decompilation
 *
 * Function : singlevaraux
 * Address  : 001fbd20
 * Program  : drastic64
 */


undefined8 singlevaraux(long *param_1,long param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*(byte *)((long)param_1 + 0x3a) != 0) {
    lVar5 = (long)(int)(*(byte *)((long)param_1 + 0x3a) - 1);
    do {
      if (param_2 ==
          *(long *)(*(long *)(*param_1 + 0x50) +
                   (long)*(short *)(**(long **)(param_1[2] + 0x58) +
                                    (long)*(int *)((long)param_1 + 0x34) * 2 + lVar5 * 2) * 0x10)) {
        *param_3 = 8;
        param_3[1] = (int)lVar5;
        *(undefined8 *)(param_3 + 2) = 0xffffffffffffffff;
        if (param_4 == 0) {
          plVar4 = (long *)param_1[3];
          bVar1 = *(byte *)(plVar4 + 2);
          while ((int)lVar5 < (int)(uint)bVar1) {
            plVar4 = (long *)*plVar4;
            bVar1 = *(byte *)(plVar4 + 2);
          }
          *(undefined *)((long)plVar4 + 0x11) = 1;
          return 8;
        }
        return 8;
      }
      lVar5 = lVar5 + -1;
    } while ((int)lVar5 != -1);
  }
  uVar3 = 0;
  plVar4 = *(long **)(*param_1 + 0x58);
  if (*(byte *)((long)param_1 + 0x3b) != 0) {
    do {
      lVar5 = *plVar4;
      plVar4 = plVar4 + 2;
      if (param_2 == lVar5) goto LAB_001fbe14;
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(byte *)((long)param_1 + 0x3b));
  }
  iVar2 = singlevaraux(param_1[1],param_2,param_3,0);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = newupvalue_isra_0(param_1,param_2,param_3,param_3 + 1);
LAB_001fbe14:
  *param_3 = 9;
  param_3[1] = uVar3;
  *(undefined8 *)(param_3 + 2) = 0xffffffffffffffff;
  return 9;
}


