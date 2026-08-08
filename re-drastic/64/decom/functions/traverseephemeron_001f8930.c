/*
 * Ghidra decompilation
 *
 * Function : traverseephemeron
 * Address  : 001f8930
 * Program  : drastic64
 */


ulong traverseephemeron(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar10;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  plVar4 = *(long **)(param_2 + 0x18);
  uVar2 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
  plVar6 = (long *)((long)plVar4 +
                   (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5));
  if (uVar3 == 0) {
    uVar7 = 0;
    if (plVar4 < plVar6) goto LAB_001f89c4;
LAB_001f8b08:
    if (*(char *)(param_1 + 0x55) != '\0') goto LAB_001f8a6c;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        lVar1 = (uVar5 & 0xffffffff) * 0x10;
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar2;
        if (((*(uint *)(*(long *)(param_2 + 0x10) + lVar1 + 8) >> 6 & 1) != 0) &&
           ((*(byte *)(*(long *)(*(long *)(param_2 + 0x10) + lVar1) + 9) & 3) != 0)) break;
        if (uVar3 <= uVar2) goto LAB_001f89b8;
      }
      reallymarkobject(param_1);
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar7 = 1;
      param_1 = extraout_x8;
    } while ((uint)uVar5 < uVar3);
LAB_001f89b8:
    plVar4 = *(long **)(param_2 + 0x18);
    if (plVar6 <= plVar4) goto LAB_001f8b08;
LAB_001f89c4:
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 10;
    do {
      while( true ) {
        uVar2 = *(uint *)(plVar4 + 1);
        uVar3 = *(uint *)(plVar4 + 3) & 0x40;
        if (uVar2 != 0) break;
        if ((uVar3 != 0) && ((*(byte *)(plVar4[2] + 9) & 3) != 0)) {
          *(int *)(plVar4 + 3) = (int)uVar10;
        }
LAB_001f89f0:
        iVar8 = (int)uVar9;
        iVar11 = (int)uVar12;
        plVar4 = plVar4 + 4;
        if (plVar6 <= plVar4) goto LAB_001f8a58;
      }
      if (uVar3 == 0) {
LAB_001f8abc:
        uVar2 = uVar2 & 0x40;
LAB_001f8a98:
        if ((uVar2 != 0) && ((*(byte *)(*plVar4 + 9) & 3) != 0)) {
          reallymarkobject(param_1);
          param_1 = extraout_x8_01;
          uVar7 = extraout_x9_00;
          uVar9 = extraout_x10_00;
          uVar10 = extraout_x11_00;
          uVar12 = extraout_x12_00;
        }
        goto LAB_001f89f0;
      }
      lVar1 = plVar4[2];
      if ((*(uint *)(plVar4 + 3) & 0xf) == 4) {
        if ((lVar1 == 0) || ((*(byte *)(lVar1 + 9) & 3) == 0)) goto LAB_001f8abc;
        reallymarkobject(param_1);
        uVar2 = *(uint *)(plVar4 + 1) & 0x40;
        param_1 = extraout_x8_00;
        uVar7 = extraout_x9;
        uVar9 = extraout_x10;
        uVar10 = extraout_x11;
        uVar12 = extraout_x12;
        goto LAB_001f8a98;
      }
      uVar2 = uVar2 & 0x40;
      if ((*(byte *)(lVar1 + 9) & 3) == 0) goto LAB_001f8a98;
      uVar9 = 1;
      iVar8 = 1;
      if ((uVar2 == 0) || ((*(byte *)(*plVar4 + 9) & 3) == 0)) goto LAB_001f89f0;
      plVar4 = plVar4 + 4;
      uVar12 = 1;
      iVar11 = 1;
    } while (plVar4 < plVar6);
LAB_001f8a58:
    if (*(char *)(param_1 + 0x55) != '\0') {
      if (iVar11 != 0) {
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x88);
        *(long *)(param_1 + 0x88) = param_2;
        return uVar7 & 0xffffffff;
      }
      if (iVar8 != 0) {
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x90);
        *(long *)(param_1 + 0x90) = param_2;
        return uVar7 & 0xffffffff;
      }
      goto LAB_001f8a6c;
    }
  }
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = param_2;
LAB_001f8a6c:
  return uVar7 & 0xffffffff;
}


