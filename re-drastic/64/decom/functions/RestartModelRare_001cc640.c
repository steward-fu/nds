/*
 * Ghidra decompilation
 *
 * Function : RestartModelRare
 * Address  : 001cc640
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ModelPPM::RestartModelRare() */

void ModelPPM::RestartModelRare(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short *in_x0;
  undefined8 *puVar12;
  short *psVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  psVar13 = in_x0 + 0x2554;
  memset(in_x0 + 0x340,0,0x100);
  SubAllocator::InitSubAllocator();
  uVar16 = *(uint *)(in_x0 + 0x33a);
  uVar17 = uVar16;
  if (0xc < (int)uVar16) {
    uVar17 = 0xc;
  }
  *(uint *)(in_x0 + 0x33e) = ~uVar17;
  if (*(long *)(in_x0 + 0x25b4) == *(long *)(in_x0 + 0x25b0)) {
    puVar12 = *(undefined8 **)(in_x0 + 0x25b8);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)SubAllocator::AllocUnitsRare((SubAllocator *)psVar13,0);
      uVar16 = *(uint *)(in_x0 + 0x33a);
    }
    else {
      *(undefined8 *)(in_x0 + 0x25b8) = *puVar12;
    }
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(in_x0 + 0x25b4) + -0x14);
    *(undefined8 **)(in_x0 + 0x25b4) = puVar12;
  }
  *(undefined8 **)(in_x0 + 0x324) = puVar12;
  *(undefined8 **)(in_x0 + 0x32c) = puVar12;
  *(undefined8 *)((long)puVar12 + 0xc) = 0;
  *(uint *)(in_x0 + 0x338) = uVar16;
  **(undefined4 **)(in_x0 + 0x324) = 0x1010100;
  bVar4 = *(byte *)((long)in_x0 + 0x4b55);
  lVar18 = *(long *)(in_x0 + 0x324);
  puVar12 = *(undefined8 **)(in_x0 + (ulong)bVar4 * 4 + 0x25b8);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(in_x0 + 0x25b0);
    uVar1 = (long)puVar12 +
            (ulong)((uint)(byte)*(SubAllocator *)((long)psVar13 + (ulong)bVar4 + 8) * 0x14);
    *(ulong *)(in_x0 + 0x25b0) = uVar1;
    if (*(ulong *)(in_x0 + 0x25b4) < uVar1) {
      *(undefined8 **)(in_x0 + 0x25b0) = puVar12;
      puVar12 = (undefined8 *)SubAllocator::AllocUnitsRare((SubAllocator *)psVar13,(uint)bVar4);
    }
  }
  else {
    *(undefined8 *)(in_x0 + (ulong)bVar4 * 4 + 0x25b8) = *puVar12;
  }
  uVar3 = *(undefined4 *)(in_x0 + 0x33e);
  *(undefined8 **)(lVar18 + 4) = puVar12;
  lVar18 = 0;
  iVar15 = 0;
  *(undefined8 **)(in_x0 + 0x330) = puVar12;
  *(undefined4 *)(in_x0 + 0x33c) = uVar3;
  *(undefined *)((long)in_x0 + 0xa81) = 0;
  do {
    *(char *)(*(long *)(*(long *)(in_x0 + 0x324) + 4) + lVar18) = (char)iVar15;
    iVar15 = iVar15 + 1;
    *(undefined *)(*(long *)(*(long *)(in_x0 + 0x324) + 4) + lVar18 + 1) = 1;
    lVar2 = *(long *)(*(long *)(in_x0 + 0x324) + 4) + lVar18;
    lVar18 = lVar18 + 10;
    *(undefined8 *)(lVar2 + 2) = 0;
  } while (iVar15 != 0x100);
  uVar17 = 2;
  psVar13 = in_x0 + 0x542;
  do {
    sVar14 = 0;
    if (uVar17 != 0) {
      sVar14 = (short)(0x3cdd / uVar17);
    }
    sVar5 = 0;
    if (uVar17 != 0) {
      sVar5 = (short)(7999 / uVar17);
    }
    sVar6 = 0;
    if (uVar17 != 0) {
      sVar6 = (short)(0x59bf / uVar17);
    }
    sVar14 = 0x4000 - sVar14;
    sVar7 = 0;
    if (uVar17 != 0) {
      sVar7 = (short)(0x48f3 / uVar17);
    }
    sVar5 = 0x4000 - sVar5;
    sVar8 = 0;
    if (uVar17 != 0) {
      sVar8 = (short)(0x64a1 / uVar17);
    }
    sVar6 = 0x4000 - sVar6;
    sVar9 = 0;
    if (uVar17 != 0) {
      sVar9 = (short)(0x5abc / uVar17);
    }
    sVar7 = 0x4000 - sVar7;
    sVar10 = 0;
    if (uVar17 != 0) {
      sVar10 = (short)(0x6632 / uVar17);
    }
    sVar11 = 0;
    if (uVar17 != 0) {
      sVar11 = (short)(0x6051 / uVar17);
    }
    sVar8 = 0x4000 - sVar8;
    sVar9 = 0x4000 - sVar9;
    sVar10 = 0x4000 - sVar10;
    sVar11 = 0x4000 - sVar11;
    *psVar13 = sVar14;
    psVar13[1] = sVar5;
    psVar13[2] = sVar6;
    psVar13[3] = sVar7;
    psVar13[8] = sVar14;
    psVar13[9] = sVar5;
    psVar13[10] = sVar6;
    psVar13[0xb] = sVar7;
    psVar13[0x10] = sVar14;
    psVar13[0x11] = sVar5;
    psVar13[0x12] = sVar6;
    psVar13[0x13] = sVar7;
    psVar13[0x18] = sVar14;
    psVar13[0x19] = sVar5;
    psVar13[0x1a] = sVar6;
    psVar13[0x1b] = sVar7;
    psVar13[0x20] = sVar14;
    psVar13[0x21] = sVar5;
    psVar13[0x22] = sVar6;
    psVar13[0x23] = sVar7;
    psVar13[0x28] = sVar14;
    psVar13[0x29] = sVar5;
    psVar13[0x2a] = sVar6;
    psVar13[0x2b] = sVar7;
    psVar13[0x30] = sVar14;
    psVar13[0x31] = sVar5;
    psVar13[0x32] = sVar6;
    psVar13[0x33] = sVar7;
    psVar13[0x38] = sVar14;
    psVar13[0x39] = sVar5;
    psVar13[0x3a] = sVar6;
    psVar13[0x3b] = sVar7;
    psVar13[4] = sVar8;
    psVar13[5] = sVar9;
    psVar13[6] = sVar10;
    psVar13[7] = sVar11;
    psVar13[0xc] = sVar8;
    psVar13[0xd] = sVar9;
    psVar13[0xe] = sVar10;
    psVar13[0xf] = sVar11;
    psVar13[0x14] = sVar8;
    psVar13[0x15] = sVar9;
    psVar13[0x16] = sVar10;
    psVar13[0x17] = sVar11;
    psVar13[0x1c] = sVar8;
    psVar13[0x1d] = sVar9;
    psVar13[0x1e] = sVar10;
    psVar13[0x1f] = sVar11;
    psVar13[0x24] = sVar8;
    psVar13[0x25] = sVar9;
    psVar13[0x26] = sVar10;
    psVar13[0x27] = sVar11;
    psVar13[0x2c] = sVar8;
    psVar13[0x2d] = sVar9;
    psVar13[0x2e] = sVar10;
    psVar13[0x2f] = sVar11;
    psVar13[0x34] = sVar8;
    psVar13[0x35] = sVar9;
    psVar13[0x36] = sVar10;
    psVar13[0x37] = sVar11;
    psVar13[0x3c] = sVar8;
    psVar13[0x3d] = sVar9;
    psVar13[0x3e] = sVar10;
    psVar13[0x3f] = sVar11;
    uVar17 = uVar17 + 1;
    psVar13 = psVar13 + 0x40;
  } while (uVar17 != 0x82);
  sVar14 = 0x50;
  do {
    *in_x0 = sVar14;
    *(undefined *)(in_x0 + 1) = 3;
    *(undefined *)((long)in_x0 + 3) = 4;
    in_x0[2] = sVar14;
    *(undefined *)(in_x0 + 3) = 3;
    *(undefined *)((long)in_x0 + 7) = 4;
    in_x0[4] = sVar14;
    *(undefined *)(in_x0 + 5) = 3;
    *(undefined *)((long)in_x0 + 0xb) = 4;
    in_x0[6] = sVar14;
    *(undefined *)(in_x0 + 7) = 3;
    *(undefined *)((long)in_x0 + 0xf) = 4;
    in_x0[8] = sVar14;
    *(undefined *)(in_x0 + 9) = 3;
    *(undefined *)((long)in_x0 + 0x13) = 4;
    in_x0[10] = sVar14;
    *(undefined *)(in_x0 + 0xb) = 3;
    *(undefined *)((long)in_x0 + 0x17) = 4;
    in_x0[0xc] = sVar14;
    *(undefined *)(in_x0 + 0xd) = 3;
    *(undefined *)((long)in_x0 + 0x1b) = 4;
    in_x0[0xe] = sVar14;
    *(undefined *)(in_x0 + 0xf) = 3;
    *(undefined *)((long)in_x0 + 0x1f) = 4;
    in_x0[0x10] = sVar14;
    *(undefined *)(in_x0 + 0x11) = 3;
    *(undefined *)((long)in_x0 + 0x23) = 4;
    in_x0[0x12] = sVar14;
    *(undefined *)(in_x0 + 0x13) = 3;
    *(undefined *)((long)in_x0 + 0x27) = 4;
    in_x0[0x14] = sVar14;
    *(undefined *)(in_x0 + 0x15) = 3;
    sVar5 = sVar14 + 0x28;
    *(undefined *)((long)in_x0 + 0x2b) = 4;
    in_x0[0x16] = sVar14;
    *(undefined *)(in_x0 + 0x17) = 3;
    *(undefined *)((long)in_x0 + 0x2f) = 4;
    in_x0[0x18] = sVar14;
    *(undefined *)(in_x0 + 0x19) = 3;
    *(undefined *)((long)in_x0 + 0x33) = 4;
    in_x0[0x1a] = sVar14;
    *(undefined *)(in_x0 + 0x1b) = 3;
    *(undefined *)((long)in_x0 + 0x37) = 4;
    in_x0[0x1c] = sVar14;
    *(undefined *)(in_x0 + 0x1d) = 3;
    *(undefined *)((long)in_x0 + 0x3b) = 4;
    in_x0[0x1e] = sVar14;
    *(undefined *)(in_x0 + 0x1f) = 3;
    *(undefined *)((long)in_x0 + 0x3f) = 4;
    in_x0 = in_x0 + 0x20;
    sVar14 = sVar5;
  } while (sVar5 != 0x438);
  return;
}


