/*
 * Ghidra decompilation
 *
 * Function : luaK_nil
 * Address  : 00214ce0
 * Program  : drastic64
 */


void luaK_nil(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  lVar7 = *param_1;
  if (*(int *)((long)param_1 + 0x24) < iVar5) {
    lVar4 = (long)iVar5 * 4 + -4;
    uVar2 = *(uint *)(*(long *)(lVar7 + 0x38) + lVar4);
    if ((uVar2 & 0x3f) != 4) goto LAB_00214d24;
    uVar3 = uVar2 >> 6 & 0xff;
    iVar1 = uVar3 + (uVar2 >> 0x17);
    if ((int)uVar3 <= (int)param_2) {
      if ((int)param_2 <= iVar1 + 1) goto LAB_00214dd8;
      if (param_2 != uVar3) goto LAB_00214d24;
    }
    if ((int)uVar3 <= (int)(param_2 + param_3)) {
LAB_00214dd8:
      iVar5 = param_2 + param_3 + -1;
      if ((int)uVar3 < (int)param_2) {
        param_2 = uVar3;
      }
      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }
      *(uint *)(*(long *)(lVar7 + 0x38) + lVar4) =
           uVar2 & 0x7fc000 | uVar2 & 0x3f | (param_2 & 0xff) << 6 | (iVar5 - param_2) * 0x800000;
      return;
    }
  }
LAB_00214d24:
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),iVar5,0xff);
  iVar5 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (iVar5 < *(int *)(lVar7 + 0x18)) {
    lVar4 = *(long *)(lVar7 + 0x38);
  }
  else {
    lVar4 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar7 + 0x38),
                          lVar7 + 0x18,4,0x7fffffff,"opcodes");
    iVar5 = *(int *)(param_1 + 4);
    *(long *)(lVar7 + 0x38) = lVar4;
  }
  *(uint *)(lVar4 + (long)iVar5 * 4) = param_2 << 6 | (param_3 + -1) * 0x800000 | 4;
  lVar6 = param_1[2];
  iVar5 = *(int *)(param_1 + 4);
  lVar4 = *(long *)(lVar7 + 0x48);
  if (*(int *)(lVar7 + 0x1c) <= iVar5) {
    lVar4 = luaM_growaux_(*(undefined8 *)(lVar6 + 0x38),lVar4,lVar7 + 0x1c,4,0x7fffffff,"opcodes");
    iVar5 = *(int *)(param_1 + 4);
    lVar6 = param_1[2];
    *(long *)(lVar7 + 0x48) = lVar4;
  }
  *(undefined4 *)(lVar4 + (long)iVar5 * 4) = *(undefined4 *)(lVar6 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


