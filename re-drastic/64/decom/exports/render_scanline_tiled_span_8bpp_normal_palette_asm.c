/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_8bpp_normal_palette_asm
 * Address  : 0019f0f0
 * Program  : drastic64
 */


void render_scanline_tiled_span_8bpp_normal_palette_asm
               (ulong *param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  iVar5 = 0x20;
  do {
    puVar4 = param_4 + 1;
    uVar1 = *param_4;
    puVar3 = param_3 + 1;
    uVar6 = *param_3;
    auVar11._4_4_ = uVar1;
    auVar11._0_4_ = uVar1;
    auVar11._8_4_ = uVar1;
    auVar11._12_4_ = uVar1;
    auVar12._4_4_ = uVar1;
    auVar12._0_4_ = uVar1;
    auVar12._8_4_ = uVar1;
    auVar12._12_4_ = uVar1;
    auVar7._8_8_ = *(undefined8 *)(param_2 + (uVar6 >> 0x10 & 0xffff));
    auVar7._0_8_ = *(undefined8 *)(param_2 + (uVar6 & 0xffff));
    auVar8._8_8_ = *(undefined8 *)(param_2 + (uVar6 >> 0x30));
    auVar8._0_8_ = *(undefined8 *)(param_2 + (uVar6 >> 0x20 & 0xffff));
    auVar9._8_4_ = 0x400;
    auVar9._0_8_ = 0x400000004;
    auVar9._12_4_ = 0x400;
    auVar11 = NEON_cmtst(auVar11,auVar9,4);
    auVar10._8_4_ = 0x4000000;
    auVar10._0_8_ = 0x4000000040000;
    auVar10._12_4_ = 0x4000000;
    auVar12 = NEON_cmtst(auVar12,auVar10,4);
    auVar9 = NEON_rev64(auVar7,1);
    auVar10 = NEON_rev64(auVar8,1);
    auVar9 = NEON_bit(auVar7,auVar9,auVar11,1);
    auVar10 = NEON_bit(auVar8,auVar10,auVar12,1);
    *(char *)param_1 = auVar9[0];
    *(char *)((long)param_1 + 1) = auVar9[1];
    *(char *)((long)param_1 + 2) = auVar9[2];
    *(char *)((long)param_1 + 3) = auVar9[3];
    *(char *)((long)param_1 + 4) = auVar9[4];
    *(char *)((long)param_1 + 5) = auVar9[5];
    *(char *)((long)param_1 + 6) = auVar9[6];
    *(char *)((long)param_1 + 7) = auVar9[7];
    *(char *)(param_1 + 1) = auVar9[8];
    *(char *)((long)param_1 + 9) = auVar9[9];
    *(char *)((long)param_1 + 10) = auVar9[10];
    *(char *)((long)param_1 + 0xb) = auVar9[11];
    *(char *)((long)param_1 + 0xc) = auVar9[12];
    *(char *)((long)param_1 + 0xd) = auVar9[13];
    *(char *)((long)param_1 + 0xe) = auVar9[14];
    *(char *)((long)param_1 + 0xf) = auVar9[15];
    *(char *)(param_1 + 2) = auVar10[0];
    *(char *)((long)param_1 + 0x11) = auVar10[1];
    *(char *)((long)param_1 + 0x12) = auVar10[2];
    *(char *)((long)param_1 + 0x13) = auVar10[3];
    *(char *)((long)param_1 + 0x14) = auVar10[4];
    *(char *)((long)param_1 + 0x15) = auVar10[5];
    *(char *)((long)param_1 + 0x16) = auVar10[6];
    *(char *)((long)param_1 + 0x17) = auVar10[7];
    *(char *)(param_1 + 3) = auVar10[8];
    *(char *)((long)param_1 + 0x19) = auVar10[9];
    *(char *)((long)param_1 + 0x1a) = auVar10[10];
    *(char *)((long)param_1 + 0x1b) = auVar10[11];
    *(char *)((long)param_1 + 0x1c) = auVar10[12];
    *(char *)((long)param_1 + 0x1d) = auVar10[13];
    *(char *)((long)param_1 + 0x1e) = auVar10[14];
    *(char *)((long)param_1 + 0x1f) = auVar10[15];
    param_1 = param_1 + 4;
    iVar5 = iVar5 + -4;
    param_3 = puVar3;
    param_4 = puVar4;
  } while (iVar5 != 0);
  uVar6 = *(ulong *)(param_2 + (ulong)*(ushort *)puVar3);
  uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  if ((*(byte *)puVar4 & 4) != 0) {
    uVar6 = uVar2 >> 0x20 | uVar2 << 0x20;
  }
  *param_1 = uVar6;
  return;
}


