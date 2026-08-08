/*
 * Ghidra decompilation
 *
 * Function : luaT_callbinTM
 * Address  : 002019a0
 * Program  : drastic64
 */


int luaT_callbinTM(long param_1,long *param_2,long *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_2 + 1) & 0xf;
  if (uVar1 == 5) {
    lVar2 = *(long *)(*param_2 + 0x28);
  }
  else if (uVar1 == 7) {
    lVar2 = *(long *)(*param_2 + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8 + 0x1b8);
  }
  if (lVar2 == 0) {
    puVar3 = &luaO_nilobject_;
    if (DAT_00229c08 != 0) goto LAB_00201a10;
  }
  else {
    puVar3 = (undefined8 *)
             luaH_getstr(lVar2,*(undefined8 *)
                                (*(long *)(param_1 + 0x18) + (param_5 & 0xffffffff) * 8 + 0xf8));
    if (*(int *)(puVar3 + 1) != 0) goto LAB_00201a10;
  }
  uVar1 = *(uint *)(param_3 + 1) & 0xf;
  if (uVar1 == 5) {
    lVar2 = *(long *)(*param_3 + 0x28);
LAB_00201ac0:
    if (lVar2 != 0) goto LAB_00201ac4;
LAB_00201b18:
    puVar3 = &luaO_nilobject_;
  }
  else {
    if (uVar1 != 7) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8 + 0x1b8);
      goto LAB_00201ac0;
    }
    lVar2 = *(long *)(*param_3 + 0x10);
    if (lVar2 == 0) goto LAB_00201b18;
LAB_00201ac4:
    puVar3 = (undefined8 *)
             luaH_getstr(lVar2,*(undefined8 *)
                                (*(long *)(param_1 + 0x18) + (param_5 & 0xffffffff) * 8 + 0xf8));
  }
  if (*(int *)(puVar3 + 1) == 0) {
    return *(int *)(puVar3 + 1);
  }
LAB_00201a10:
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  uVar8 = puVar3[1];
  lVar5 = *(long *)(param_1 + 0x38);
  *puVar4 = *puVar3;
  puVar4[1] = uVar8;
  lVar2 = param_2[1];
  puVar4[2] = *param_2;
  puVar4[3] = lVar2;
  lVar7 = *param_3;
  lVar9 = param_3[1];
  *(undefined8 **)(param_1 + 0x10) = puVar4 + 6;
  lVar2 = *(long *)(param_1 + 0x20);
  puVar4[4] = lVar7;
  puVar4[5] = lVar9;
  luaD_call(param_1,puVar4,1,*(byte *)(lVar2 + 0x42) & 2);
  lVar2 = *(long *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (param_4 - lVar5));
  uVar8 = *(undefined8 *)(lVar2 + -0x10);
  uVar6 = *(undefined8 *)(lVar2 + -8);
  *(long *)(param_1 + 0x10) = lVar2 + -0x10;
  *puVar3 = uVar8;
  puVar3[1] = uVar6;
  return 1;
}


