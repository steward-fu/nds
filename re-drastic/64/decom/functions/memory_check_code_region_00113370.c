/*
 * Ghidra decompilation
 *
 * Function : memory_check_code_region
 * Address  : 00113370
 * Program  : drastic64
 */


uint memory_check_code_region(uint *param_1,uint *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint uVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined auVar31 [16];
  
  uVar9 = (uint)param_3;
  uVar12 = param_4 + -1 + uVar9;
  uVar14 = param_3 >> 0xb & 0x1f;
  uVar13 = (ulong)(uVar12 >> 0xb) & 0x1f;
  uVar1 = (uVar12 >> 0x10) - (uVar9 >> 0x10);
  uVar5 = ~(-2 << uVar13);
  uVar11 = -1 << uVar14 & *param_1;
  if (uVar1 == 0) {
    uVar5 = uVar5 & uVar11;
    if ((uVar5 == 0) || (uVar5 = 1, (int)uVar14 != (int)uVar13)) {
      return uVar5;
    }
    uVar1 = (uVar12 >> 6) - (uVar9 >> 6);
    uVar11 = ~(-2 << ((ulong)(uVar12 >> 1) & 0x1f));
    uVar12 = -1 << (param_3 >> 1 & 0x1f) & *param_2;
    if (uVar1 == 0) {
      return uVar11 & uVar12;
    }
    pauVar6 = (undefined (*) [16])(param_2 + 1);
    if (uVar1 < 2) goto LAB_001135cc;
    uVar9 = uVar1 - 1;
    pauVar7 = pauVar6;
    if (uVar1 - 2 < 6) {
LAB_00113554:
      uVar12 = uVar12 | *(uint *)*pauVar7;
      if ((((uVar5 + 1 < uVar1) &&
           (uVar12 = uVar12 | *(uint *)((long)*pauVar7 + 4), uVar5 + 2 < uVar1)) &&
          (uVar12 = uVar12 | *(uint *)((long)*pauVar7 + 8), uVar5 + 3 < uVar1)) &&
         ((uVar12 = uVar12 | *(uint *)((long)*pauVar7 + 0xc), uVar5 + 4 < uVar1 &&
          (uVar12 = uVar12 | *(uint *)pauVar7[1], uVar5 + 5 < uVar1)))) {
        uVar12 = uVar12 | *(uint *)((long)pauVar7[1] + 4);
      }
    }
    else {
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      do {
        pauVar8 = pauVar7 + 1;
        auVar31 = *pauVar7;
        bVar15 = bVar15 | auVar31[0];
        bVar16 = bVar16 | auVar31[1];
        bVar17 = bVar17 | auVar31[2];
        bVar18 = bVar18 | auVar31[3];
        bVar19 = bVar19 | auVar31[4];
        bVar20 = bVar20 | auVar31[5];
        bVar21 = bVar21 | auVar31[6];
        bVar22 = bVar22 | auVar31[7];
        bVar23 = bVar23 | auVar31[8];
        bVar24 = bVar24 | auVar31[9];
        bVar25 = bVar25 | auVar31[10];
        bVar26 = bVar26 | auVar31[11];
        bVar27 = bVar27 | auVar31[12];
        bVar28 = bVar28 | auVar31[13];
        bVar29 = bVar29 | auVar31[14];
        bVar30 = bVar30 | auVar31[15];
        pauVar7 = pauVar8;
      } while (pauVar8 != pauVar6 + (uVar9 >> 2));
      auVar31[1] = bVar16;
      auVar31[0] = bVar15;
      auVar31[2] = bVar17;
      auVar31[3] = bVar18;
      auVar31[4] = bVar19;
      auVar31[5] = bVar20;
      auVar31[6] = bVar21;
      auVar31[7] = bVar22;
      auVar31[8] = bVar23;
      auVar31[9] = bVar24;
      auVar31[10] = bVar25;
      auVar31[11] = bVar26;
      auVar31[12] = bVar27;
      auVar31[13] = bVar28;
      auVar31[14] = bVar29;
      auVar31[15] = bVar30;
      auVar31 = NEON_ext(auVar31,ZEXT816(0),8,1);
      uVar5 = (uVar9 & 0xfffffffc) + 1;
      bVar15 = bVar15 | auVar31[0];
      bVar16 = bVar16 | auVar31[1];
      bVar17 = bVar17 | auVar31[2];
      bVar18 = bVar18 | auVar31[3];
      auVar2[1] = bVar16;
      auVar2[0] = bVar15;
      auVar2[2] = bVar17;
      auVar2[3] = bVar18;
      auVar2[4] = bVar19 | auVar31[4];
      auVar2[5] = bVar20 | auVar31[5];
      auVar2[6] = bVar21 | auVar31[6];
      auVar2[7] = bVar22 | auVar31[7];
      auVar2[8] = bVar23 | auVar31[8];
      auVar2[9] = bVar24 | auVar31[9];
      auVar2[10] = bVar25 | auVar31[10];
      auVar2[11] = bVar26 | auVar31[11];
      auVar2[12] = bVar27 | auVar31[12];
      auVar2[13] = bVar28 | auVar31[13];
      auVar2[14] = bVar29 | auVar31[14];
      auVar2[15] = bVar30 | auVar31[15];
      auVar31 = NEON_ext(auVar2,ZEXT816(0),4,1);
      uVar12 = uVar12 | CONCAT13(bVar18 | auVar31[3],
                                 CONCAT12(bVar17 | auVar31[2],
                                          CONCAT11(bVar16 | auVar31[1],bVar15 | auVar31[0])));
      pauVar7 = (undefined (*) [16])((long)*pauVar6 + ((ulong)uVar9 & 0xfffffffc) * 4);
      if ((uVar9 & 0xfffffffc) != uVar9) goto LAB_00113554;
    }
    pauVar6 = (undefined (*) [16])((long)*pauVar6 + ((ulong)(uVar1 - 2) + 1) * 4);
LAB_001135cc:
    return uVar11 & *(uint *)*pauVar6 | uVar12;
  }
  pauVar6 = (undefined (*) [16])(param_1 + 1);
  if (uVar1 < 2) goto LAB_001134d4;
  uVar12 = uVar1 - 1;
  if (uVar1 - 2 < 6) {
    iVar10 = 1;
    pauVar7 = pauVar6;
LAB_0011345c:
    uVar11 = uVar11 | *(uint *)*pauVar7;
    if (((iVar10 + 1U < uVar1) &&
        (uVar11 = uVar11 | *(uint *)((long)*pauVar7 + 4), iVar10 + 2U < uVar1)) &&
       ((uVar11 = uVar11 | *(uint *)((long)*pauVar7 + 8), iVar10 + 3U < uVar1 &&
        ((uVar11 = uVar11 | *(uint *)((long)*pauVar7 + 0xc), iVar10 + 4U < uVar1 &&
         (uVar11 = uVar11 | *(uint *)pauVar7[1], iVar10 + 5U < uVar1)))))) {
      uVar11 = uVar11 | *(uint *)((long)pauVar7[1] + 4);
    }
  }
  else {
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    pauVar7 = pauVar6;
    do {
      pauVar8 = pauVar7 + 1;
      auVar31 = *pauVar7;
      bVar15 = bVar15 | auVar31[0];
      bVar16 = bVar16 | auVar31[1];
      bVar17 = bVar17 | auVar31[2];
      bVar18 = bVar18 | auVar31[3];
      bVar19 = bVar19 | auVar31[4];
      bVar20 = bVar20 | auVar31[5];
      bVar21 = bVar21 | auVar31[6];
      bVar22 = bVar22 | auVar31[7];
      bVar23 = bVar23 | auVar31[8];
      bVar24 = bVar24 | auVar31[9];
      bVar25 = bVar25 | auVar31[10];
      bVar26 = bVar26 | auVar31[11];
      bVar27 = bVar27 | auVar31[12];
      bVar28 = bVar28 | auVar31[13];
      bVar29 = bVar29 | auVar31[14];
      bVar30 = bVar30 | auVar31[15];
      pauVar7 = pauVar8;
    } while (pauVar8 != pauVar6 + (uVar12 >> 2));
    auVar3[1] = bVar16;
    auVar3[0] = bVar15;
    auVar3[2] = bVar17;
    auVar3[3] = bVar18;
    auVar3[4] = bVar19;
    auVar3[5] = bVar20;
    auVar3[6] = bVar21;
    auVar3[7] = bVar22;
    auVar3[8] = bVar23;
    auVar3[9] = bVar24;
    auVar3[10] = bVar25;
    auVar3[11] = bVar26;
    auVar3[12] = bVar27;
    auVar3[13] = bVar28;
    auVar3[14] = bVar29;
    auVar3[15] = bVar30;
    auVar31 = NEON_ext(auVar3,ZEXT816(0),8,1);
    iVar10 = (uVar12 & 0xfffffffc) + 1;
    bVar15 = bVar15 | auVar31[0];
    bVar16 = bVar16 | auVar31[1];
    bVar17 = bVar17 | auVar31[2];
    bVar18 = bVar18 | auVar31[3];
    auVar4[1] = bVar16;
    auVar4[0] = bVar15;
    auVar4[2] = bVar17;
    auVar4[3] = bVar18;
    auVar4[4] = bVar19 | auVar31[4];
    auVar4[5] = bVar20 | auVar31[5];
    auVar4[6] = bVar21 | auVar31[6];
    auVar4[7] = bVar22 | auVar31[7];
    auVar4[8] = bVar23 | auVar31[8];
    auVar4[9] = bVar24 | auVar31[9];
    auVar4[10] = bVar25 | auVar31[10];
    auVar4[11] = bVar26 | auVar31[11];
    auVar4[12] = bVar27 | auVar31[12];
    auVar4[13] = bVar28 | auVar31[13];
    auVar4[14] = bVar29 | auVar31[14];
    auVar4[15] = bVar30 | auVar31[15];
    auVar31 = NEON_ext(auVar4,ZEXT816(0),4,1);
    uVar11 = uVar11 | CONCAT13(bVar18 | auVar31[3],
                               CONCAT12(bVar17 | auVar31[2],
                                        CONCAT11(bVar16 | auVar31[1],bVar15 | auVar31[0])));
    pauVar7 = (undefined (*) [16])((long)*pauVar6 + ((ulong)uVar12 & 0xfffffffc) * 4);
    if (uVar12 != (uVar12 & 0xfffffffc)) goto LAB_0011345c;
  }
  pauVar6 = (undefined (*) [16])((long)*pauVar6 + ((ulong)(uVar1 - 2) + 1) * 4);
LAB_001134d4:
  return uVar5 & *(uint *)*pauVar6 | uVar11;
}


