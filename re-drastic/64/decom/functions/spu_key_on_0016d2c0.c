/*
 * Ghidra decompilation
 *
 * Function : spu_key_on
 * Address  : 0016d2c0
 * Program  : drastic64
 */


void spu_key_on(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  uVar15 = (ulong)param_2;
  lVar13 = param_1 + uVar15 * 200;
  if (*(char *)(lVar13 + 0x400e6) != '\0') {
    return;
  }
  puVar10 = *(uint **)(lVar13 + 0x400c0);
  uVar3 = *puVar10;
  uVar7 = *(ushort *)((long)puVar10 + 10);
  uVar4 = puVar10[3];
  uVar9 = uVar3 >> 0x1d & 3;
  iVar1 = uVar4 + uVar7;
  if ((iVar1 == 0) && (uVar9 != 3)) {
    return;
  }
  uVar2 = puVar10[1] & 0x7ffffff;
  lVar13 = *(long *)(param_1 + 0x40cf8) + ((ulong)(puVar10[1] >> 0x17) & 0xf) * 0x60;
  lVar14 = param_1 + uVar15 * 200;
  cVar5 = *(char *)(lVar13 + 0xfc6f0);
  *(undefined8 *)(lVar14 + 0x400a8) = 0;
  *(uint *)(lVar14 + 0x400d0) = uVar2;
  *(undefined *)(lVar14 + 0x400e6) = 1;
  if (cVar5 == '\0') {
    *(ulong *)(lVar14 + 0x400c8) =
         *(long *)(lVar13 + 0xfc6a0) + (ulong)(uVar2 & *(uint *)(lVar13 + 0xfc698));
  }
  else {
    if (cVar5 != '\x01') {
      *(undefined8 *)(lVar14 + 0x400c8) = 0;
      if (uVar9 == 3) goto LAB_0016d40c;
      *(undefined *)(lVar14 + 0x400e6) = 0;
      if (uVar9 != 2) goto LAB_0016d380;
      goto LAB_0016d4a4;
    }
    uVar11 = (**(code **)(lVar13 + 0xfc6a0))();
    *(undefined8 *)(lVar14 + 0x400c8) = uVar11;
  }
  if (uVar9 != 2) {
    if (uVar9 != 3) {
LAB_0016d380:
      if (uVar9 != 1) {
        param_1 = param_1 + uVar15 * 200;
        *(undefined *)(param_1 + 0x400e4) = 0;
        *(int *)(param_1 + 0x400d4) = iVar1 * 4;
        *(uint *)(param_1 + 0x400d8) = uVar4 << 2;
        return;
      }
      param_1 = param_1 + uVar15 * 200;
      *(undefined *)(param_1 + 0x400e4) = 1;
      *(int *)(param_1 + 0x400d4) = iVar1 * 2;
      *(uint *)(param_1 + 0x400d8) = uVar4 * 2;
      return;
    }
LAB_0016d40c:
    if (0xd < param_2) {
      lVar13 = param_1 + uVar15 * 200;
      *(undefined *)(lVar13 + 0x400e4) = 4;
      *(undefined1 **)(lVar13 + 0x400c8) = &noise_samples;
      *(undefined8 *)(param_1 + uVar15 * 200 + 0x400d4) = 0x7fff00007fff;
      return;
    }
    if (7 < param_2) {
      lVar13 = param_1 + uVar15 * 200;
      *(undefined *)(lVar13 + 0x400e4) = 3;
      *(undefined1 **)(lVar13 + 0x400c8) = psg_samples + ((ulong)(uVar3 >> 0x18) & 7) * 0x10;
      *(undefined8 *)(param_1 + uVar15 * 200 + 0x400d4) = 0x800000008;
      return;
    }
    *(undefined *)(param_1 + uVar15 * 200 + 0x400e4) = 5;
    return;
  }
LAB_0016d4a4:
  param_1 = param_1 + uVar15 * 200;
  puVar12 = *(undefined2 **)(param_1 + 0x400c8);
  uVar8 = *puVar12;
  uVar3 = **(uint **)(param_1 + 0x400c0);
  *(undefined2 *)(param_1 + 0x400e2) = uVar8;
  bVar6 = *(byte *)(puVar12 + 1);
  *(undefined4 *)(param_1 + 0x400b8) = 0;
  *(undefined2 **)(param_1 + 0x400c8) = puVar12 + 2;
  *(undefined *)(param_1 + 0x400e4) = 2;
  *(byte *)(param_1 + 0x400e8) = bVar6 & 0x7f;
  if ((uVar3 >> 0x1b & 1) == 0) {
    *(int *)(param_1 + 0x400d4) = (iVar1 + -1) * 8;
  }
  else {
    *(uint *)(param_1 + 0x400d8) = uVar4 << 3;
    if (uVar7 < 2) {
      *(undefined2 *)(param_1 + 0x400e0) = uVar8;
      *(byte *)(param_1 + 0x400e7) = bVar6 & 0x7f;
      *(undefined *)(param_1 + 0x400e9) = 1;
      *(uint *)(param_1 + 0x400d4) = uVar4 << 3;
    }
    else {
      *(undefined *)(param_1 + 0x400e9) = 0;
      *(uint *)(param_1 + 0x400d4) = (uVar7 - 1) * 8;
    }
  }
  return;
}


