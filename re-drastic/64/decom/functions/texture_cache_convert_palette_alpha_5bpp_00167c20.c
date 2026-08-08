/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_alpha_5bpp
 * Address  : 00167c20
 * Program  : drastic64
 */


void texture_cache_convert_palette_alpha_5bpp(long param_1,ushort *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  
  puVar18 = *(undefined8 **)(param_1 + 0x18);
  *(undefined *)(param_1 + 0x4a) = 1;
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)malloc(0x400);
    *(undefined8 **)(param_1 + 0x18) = puVar18;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[2];
  uVar11 = param_2[6];
  uVar12 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
  uVar13 = (uVar7 >> 5 & 0x1f) << 8 | (uVar7 >> 10 & 0x1f) << 0x10 | uVar7 & 0x1f;
  uVar14 = (uVar8 >> 5 & 0x1f) << 8 | (uVar8 >> 10 & 0x1f) << 0x10 | uVar8 & 0x1f;
  uVar15 = (uVar9 >> 5 & 0x1f) << 8 | (uVar9 >> 10 & 0x1f) << 0x10 | uVar9 & 0x1f;
  uVar6 = param_2[3];
  uVar7 = param_2[7];
  iVar2 = (uVar13 + 0x1f1f1f >> 5 & 0x10101) + uVar13 * 2;
  uVar13 = (uVar10 >> 5 & 0x1f) << 8 | (uVar10 >> 10 & 0x1f) << 0x10 | uVar10 & 0x1f;
  uVar16 = (uVar11 >> 5 & 0x1f) << 8 | (uVar11 >> 10 & 0x1f) << 0x10 | uVar11 & 0x1f;
  iVar3 = (uVar15 + 0x1f1f1f >> 5 & 0x10101) + uVar15 * 2;
  uVar15 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
  uVar17 = (uVar7 >> 5 & 0x1f) << 8 | (uVar7 >> 10 & 0x1f) << 0x10 | uVar7 & 0x1f;
  iVar4 = (uVar15 + 0x1f1f1f >> 5 & 0x10101) + uVar15 * 2;
  iVar5 = (uVar17 + 0x1f1f1f >> 5 & 0x10101) + uVar17 * 2;
  puVar1 = puVar18 + 0x80;
  cVar23 = '\0';
  cVar24 = '\0';
  cVar25 = '\0';
  cVar26 = '\0';
  cVar19 = '\0';
  cVar20 = '\0';
  cVar21 = '\0';
  cVar22 = '\0';
  do {
    puVar18[1] = CONCAT17(cVar26,CONCAT16((char)((uint)iVar4 >> 0x10),
                                          CONCAT15((char)((uint)iVar4 >> 8),
                                                   CONCAT14((char)iVar4,
                                                            CONCAT13(cVar25,((uint3)(uVar13 + 
                                                  0x1f1f1f >> 5) & 0x10101) + (int3)uVar13 * 2)))));
    *puVar18 = CONCAT17(cVar24,CONCAT16((char)((uint)iVar2 >> 0x10),
                                        CONCAT15((char)((uint)iVar2 >> 8),
                                                 CONCAT14((char)iVar2,
                                                          CONCAT13(cVar23,((uint3)(uVar12 + 0x1f1f1f
                                                                                  >> 5) & 0x10101) +
                                                                          (int3)uVar12 * 2)))));
    puVar18[3] = CONCAT17(cVar22,CONCAT16((char)((uint)iVar5 >> 0x10),
                                          CONCAT15((char)((uint)iVar5 >> 8),
                                                   CONCAT14((char)iVar5,
                                                            CONCAT13(cVar21,((uint3)(uVar16 + 
                                                  0x1f1f1f >> 5) & 0x10101) + (int3)uVar16 * 2)))));
    puVar18[2] = CONCAT17(cVar20,CONCAT16((char)((uint)iVar3 >> 0x10),
                                          CONCAT15((char)((uint)iVar3 >> 8),
                                                   CONCAT14((char)iVar3,
                                                            CONCAT13(cVar19,((uint3)(uVar14 + 
                                                  0x1f1f1f >> 5) & 0x10101) + (int3)uVar14 * 2)))));
    puVar18 = puVar18 + 4;
    cVar23 = cVar23 + '\x01';
    cVar24 = cVar24 + '\x01';
    cVar25 = cVar25 + '\x01';
    cVar26 = cVar26 + '\x01';
    cVar19 = cVar19 + '\x01';
    cVar20 = cVar20 + '\x01';
    cVar21 = cVar21 + '\x01';
    cVar22 = cVar22 + '\x01';
  } while (puVar1 != puVar18);
  return;
}


