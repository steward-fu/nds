/*
 * Ghidra decompilation
 *
 * Function : FUN_080591bc
 * Address  : 080591bc
 * Program  : drastic16
 */


void FUN_080591bc(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar11;
  
  iVar8 = param_2 * 0xb8 + param_1;
  iVar15 = *(int *)(param_1 + 0x40bdc);
  piVar7 = *(int **)(iVar8 + 0x400ac);
  iVar9 = piVar7[3];
  uVar12 = (uint)*(ushort *)((int)piVar7 + 10);
  iVar13 = *piVar7;
  iVar14 = uVar12 + iVar9;
  uVar10 = iVar13 << 1;
  uVar11 = uVar10 >> 0x1e;
  if ((iVar14 == 0) && (uVar11 != 3)) {
    return;
  }
  uVar6 = piVar7[1] & 0x7ffffff;
  *(undefined *)(iVar8 + 0x400ca) = 1;
  *(uint *)(iVar8 + 0x400b4) = uVar6;
  *(undefined8 *)(iVar8 + 0x40098) = 0;
  iVar15 = iVar15 + (uVar6 >> 0x17) * 0x30;
  bVar4 = (byte)(uVar10 >> 0x1e);
  if (*(char *)(iVar15 + 0xfc060) == '\0') {
    puVar5 = (undefined2 *)(*(int *)(iVar15 + 0xfc038) + (uVar6 & *(uint *)(iVar15 + 0xfc034)));
    *(undefined2 **)(iVar8 + 0x400b0) = puVar5;
  }
  else if (*(char *)(iVar15 + 0xfc060) == '\x01') {
    puVar5 = (undefined2 *)(**(code **)(iVar15 + 0xfc038))(*(undefined4 *)(param_1 + 0x40bdc),uVar6)
    ;
    *(undefined2 **)(iVar8 + 0x400b0) = puVar5;
  }
  else {
    puVar5 = (undefined2 *)0x0;
    *(undefined4 *)(iVar8 + 0x400b0) = 0;
    if (uVar11 == 3) goto LAB_0805937c;
    *(undefined *)(iVar8 + 0x400ca) = 0;
  }
  if (uVar11 == 2) {
    uVar3 = *puVar5;
    uVar10 = **(uint **)(iVar8 + 0x400ac);
    *(undefined2 *)(iVar8 + 0x400c6) = uVar3;
    bVar2 = *(byte *)(puVar5 + 1);
    *(undefined2 **)(iVar8 + 0x400b0) = puVar5 + 2;
    *(byte *)(iVar8 + 0x400c8) = bVar4;
    *(byte *)(iVar8 + 0x400cc) = bVar2 & 0x7f;
    *(undefined4 *)(iVar8 + 0x400a8) = 0;
    if ((uVar10 & 0x8000000) == 0) {
      *(int *)(iVar8 + 0x400b8) = (iVar14 + 0x1fffffff) * 8;
      return;
    }
    uVar10 = uVar12;
    if (1 < uVar12) {
      uVar10 = uVar12 + 0x1fffffff;
    }
    *(int *)(iVar8 + 0x400bc) = iVar9 << 3;
    bVar1 = uVar12 < 2;
    if (!bVar1) {
      *(bool *)(iVar8 + 0x400cd) = bVar1;
      *(uint *)(iVar8 + 0x400b8) = uVar10 << 3;
      return;
    }
    *(undefined2 *)(iVar8 + 0x400c4) = uVar3;
    *(byte *)(iVar8 + 0x400cb) = bVar2 & 0x7f;
    *(int *)(iVar8 + 0x400b8) = iVar9 << 3;
    *(bool *)(iVar8 + 0x400cd) = bVar1;
    return;
  }
  if (uVar11 != 3) {
    if (uVar11 != 1) {
      *(undefined *)(iVar8 + 0x400c8) = 0;
      uVar16 = VectorShiftLeft(CONCAT44(iVar9,iVar14),2,0x20,0);
      *(undefined8 *)(iVar8 + 0x400b8) = uVar16;
      return;
    }
    *(byte *)(iVar8 + 0x400c8) = bVar4;
    uVar16 = VectorShiftLeft(CONCAT44(iVar9,iVar14),1,0x20,0);
    *(undefined8 *)(iVar8 + 0x400b8) = uVar16;
    return;
  }
LAB_0805937c:
  if (param_2 < 0xe) {
    if (param_2 < 8) {
      *(undefined *)(iVar8 + 0x400c8) = 5;
    }
    else {
      *(undefined *)(iVar8 + 0x400c8) = 3;
      *(uint *)(iVar8 + 0x400b0) = ((uint)(iVar13 << 5) >> 0x1d) * 0x10 + 0x80fa6c0;
      *(undefined4 *)(iVar8 + 0x400b8) = 8;
      *(undefined4 *)(iVar8 + 0x400bc) = 8;
    }
  }
  else {
    *(undefined *)(iVar8 + 0x400c8) = 4;
    *(undefined1 **)(iVar8 + 0x400b0) = &DAT_0aaed110;
    *(undefined4 *)(iVar8 + 0x400b8) = 0x7fff;
    *(undefined4 *)(iVar8 + 0x400bc) = 0x7fff;
  }
  return;
}


