/*
 * Ghidra decompilation
 *
 * Function : FUN_0020063c
 * Address  : 0020063c
 * Program  : drastic64
 */


undefined4 FUN_0020063c(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  
  if (*(uint *)(param_3 + 1) == 0) {
    uVar5 = *(uint *)(param_2 + 0xc);
    uVar6 = 0;
  }
  else {
    if (*(uint *)(param_3 + 1) == 0x13) {
      uVar1 = *(uint *)param_3;
      uVar6 = (ulong)uVar1;
      if ((0 < (int)uVar1) && (uVar5 = *(uint *)(param_2 + 0xc), uVar1 <= uVar5)) goto LAB_002006e0;
    }
    for (lVar3 = mainposition(param_2,param_3);
        (iVar2 = luaV_equalobj(0,lVar3 + 0x10,param_3), iVar2 == 0 &&
        (((*(int *)(lVar3 + 0x18) != 10 || ((*(uint *)(param_3 + 1) >> 6 & 1) == 0)) ||
         (*(long *)(lVar3 + 0x10) != *param_3))));
        lVar3 = lVar3 + (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5)) {
      uVar5 = *(uint *)(lVar3 + 0x1c);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_runerror(param_1,"invalid key to \'next\'");
      }
    }
    uVar5 = *(uint *)(param_2 + 0xc);
    uVar6 = (ulong)(uVar5 + 1 + (int)(lVar3 - *(long *)(param_2 + 0x18) >> 5));
  }
LAB_002006e0:
  if ((uint)uVar6 < uVar5) {
    plVar4 = (long *)(*(long *)(param_2 + 0x10) + uVar6 * 0x10);
    do {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      if (*(int *)(plVar4 + 1) != 0) {
        *(uint *)param_3 = uVar1;
        *(uint *)(param_3 + 1) = 0x13;
        lVar3 = plVar4[1];
        param_3[2] = *plVar4;
        param_3[3] = lVar3;
        return 1;
      }
      plVar4 = plVar4 + 2;
    } while (uVar1 != uVar5);
  }
  uVar5 = (int)uVar6 - uVar5;
  iVar2 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
  if ((int)uVar5 < iVar2) {
    do {
      plVar4 = (long *)(*(long *)(param_2 + 0x18) + (ulong)uVar5 * 0x20);
      if (*(int *)(plVar4 + 1) != 0) {
        lVar3 = plVar4[3];
        *param_3 = plVar4[2];
        param_3[1] = lVar3;
        lVar3 = plVar4[1];
        param_3[2] = *plVar4;
        param_3[3] = lVar3;
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
  }
  return 0;
}


