/*
 * Ghidra decompilation
 *
 * Function : addk
 * Address  : 00214870
 * Program  : drastic64
 */


int addk(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar10;
  
  lVar11 = *param_1;
  uVar12 = *(undefined8 *)(param_1[2] + 0x38);
  piVar7 = (int *)luaH_set(uVar12,*(undefined8 *)(param_1[2] + 0x50),param_2);
  if (piVar7[2] == 0x13) {
    iVar6 = *(int *)((long)param_1 + 0x2c);
    iVar3 = *piVar7;
    lVar8 = *(long *)(lVar11 + 0x30);
    if ((iVar6 <= iVar3) ||
       (lVar2 = lVar8 + (long)iVar3 * 0x10,
       ((*(uint *)(lVar2 + 8) ^ *(uint *)(param_3 + 1)) & 0x3f) != 0)) goto LAB_002148c4;
    iVar6 = luaV_equalobj(0,lVar2,param_3);
    if (iVar6 != 0) {
      return iVar3;
    }
  }
  iVar6 = *(int *)((long)param_1 + 0x2c);
  lVar8 = *(long *)(lVar11 + 0x30);
LAB_002148c4:
  iVar3 = *(int *)(lVar11 + 0x14);
  *piVar7 = iVar6;
  piVar7[2] = 0x13;
  iVar5 = iVar6;
  if (iVar3 <= iVar6) {
    lVar8 = luaM_growaux_(uVar12,lVar8,lVar11 + 0x14,0x10,0x3ffffff,"constants");
    iVar5 = *(int *)(lVar11 + 0x14);
    *(long *)(lVar11 + 0x30) = lVar8;
    if (iVar3 < iVar5) {
      puVar9 = (undefined4 *)(lVar8 + (long)iVar3 * 0x10 + 8);
      do {
        puVar10 = puVar9 + 4;
        *puVar9 = 0;
        puVar9 = puVar10;
      } while ((undefined4 *)
               (lVar8 + ((ulong)(uint)((iVar5 + -1) - iVar3) + (long)iVar3) * 0x10 + 0x18) !=
               puVar10);
    }
    iVar5 = *(int *)((long)param_1 + 0x2c);
  }
  plVar1 = (long *)(lVar8 + (long)iVar6 * 0x10);
  lVar8 = param_3[1];
  *plVar1 = *param_3;
  plVar1[1] = lVar8;
  uVar4 = *(uint *)(param_3 + 1);
  *(int *)((long)param_1 + 0x2c) = iVar5 + 1;
  if ((((uVar4 >> 6 & 1) != 0) && ((*(byte *)(lVar11 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*param_3 + 9) & 3) != 0)) {
    luaC_barrier_(uVar12,lVar11);
  }
  return iVar6;
}


