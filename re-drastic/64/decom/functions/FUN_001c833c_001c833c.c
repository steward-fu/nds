/*
 * Ghidra decompilation
 *
 * Function : FUN_001c833c
 * Address  : 001c833c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c833c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined auStack_130 [36];
  int aiStack_10c [17];
  long alStack_c8 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 == (undefined8 *)0x0) {
    cleandata(auStack_130,0x20);
    cleandata(aiStack_10c + 1,0x100);
  }
  else {
    puVar10 = (uint *)param_1[5];
    uVar13 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    aiStack_10c[1] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[1] & 0xff00ff00) >> 8 | (puVar10[1] & 0xff00ff) << 8;
    aiStack_10c[2] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[2] & 0xff00ff00) >> 8 | (puVar10[2] & 0xff00ff) << 8;
    aiStack_10c[3] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[3] & 0xff00ff00) >> 8 | (puVar10[3] & 0xff00ff) << 8;
    aiStack_10c[4] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[4] & 0xff00ff00) >> 8 | (puVar10[4] & 0xff00ff) << 8;
    aiStack_10c[5] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[5] & 0xff00ff00) >> 8 | (puVar10[5] & 0xff00ff) << 8;
    aiStack_10c[6] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[6] & 0xff00ff00) >> 8 | (puVar10[6] & 0xff00ff) << 8;
    aiStack_10c[7] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[7] & 0xff00ff00) >> 8 | (puVar10[7] & 0xff00ff) << 8;
    aiStack_10c[8] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[8] & 0xff00ff00) >> 8 | (puVar10[8] & 0xff00ff) << 8;
    aiStack_10c[9] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[9] & 0xff00ff00) >> 8 | (puVar10[9] & 0xff00ff) << 8;
    aiStack_10c[10] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[10] & 0xff00ff00) >> 8 | (puVar10[10] & 0xff00ff) << 8;
    aiStack_10c[11] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[0xb] & 0xff00ff00) >> 8 | (puVar10[0xb] & 0xff00ff) << 8;
    aiStack_10c[12] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[0xc] & 0xff00ff00) >> 8 | (puVar10[0xc] & 0xff00ff) << 8;
    aiStack_10c[13] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[0xd] & 0xff00ff00) >> 8 | (puVar10[0xd] & 0xff00ff) << 8;
    aiStack_10c[14] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[0xe] & 0xff00ff00) >> 8 | (puVar10[0xe] & 0xff00ff) << 8;
    aiStack_10c[15] = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = (puVar10[0xf] & 0xff00ff00) >> 8 | (puVar10[0xf] & 0xff00ff) << 8;
    aiStack_10c[16] = uVar13 >> 0x10 | uVar13 << 0x10;
    lVar11 = CONCAT44(aiStack_10c[16],aiStack_10c[15]);
    plVar8 = alStack_c8;
    do {
      uVar13 = (uint)lVar11;
      iVar1 = uVar13 << 0xf;
      uVar12 = (uint)((ulong)lVar11 >> 0x20);
      iVar2 = uVar12 << 0xf;
      bVar14 = (byte)((ulong)lVar11 >> 0x18);
      bVar15 = (byte)((ulong)lVar11 >> 0x38);
      iVar3 = uVar13 << 0xd;
      iVar4 = uVar12 << 0xd;
      uVar28 = *(undefined8 *)((long)plVar8 + -0x3c);
      uVar25 = (uint)uVar28;
      uVar32 = (uint)((ulong)uVar28 >> 0x20);
      iVar30 = uVar25 << 0xe;
      iVar31 = uVar32 << 0xe;
      uVar23 = uVar25 >> 7;
      uVar24 = uVar32 >> 7;
      bVar16 = (byte)((ulong)uVar28 >> 0x18);
      bVar17 = (byte)((ulong)uVar28 >> 0x38);
      uVar26 = uVar25 >> 3;
      uVar29 = uVar32 >> 3;
      iVar1 = CONCAT13((byte)((uint)iVar1 >> 0x18) ^ (byte)((uint)iVar3 >> 0x18),
                       CONCAT12((byte)((uint)iVar1 >> 0x10) ^ (byte)((uint)iVar3 >> 0x10) ^
                                bVar14 >> 2,
                                CONCAT11((bVar14 >> 1 | (byte)((uint)iVar1 >> 8)) ^
                                         (bVar14 >> 3 | (byte)((uint)iVar3 >> 8)) ^
                                         (byte)((uVar13 >> 10) >> 8),
                                         (byte)(uVar13 >> 0x11) ^ (byte)(uVar13 >> 0x13) ^
                                         (byte)(uVar13 >> 10))));
      lVar11 = CONCAT44((int)(CONCAT17((byte)((uint)iVar2 >> 0x18) ^ (byte)((uint)iVar4 >> 0x18),
                                       CONCAT16((byte)((uint)iVar2 >> 0x10) ^
                                                (byte)((uint)iVar4 >> 0x10) ^ bVar15 >> 2,
                                                CONCAT15((bVar15 >> 1 | (byte)((uint)iVar2 >> 8)) ^
                                                         (bVar15 >> 3 | (byte)((uint)iVar4 >> 8)) ^
                                                         (byte)((uVar12 >> 10) >> 8),
                                                         CONCAT14((byte)(uVar12 >> 0x11) ^
                                                                  (byte)(uVar12 >> 0x13) ^
                                                                  (byte)(uVar12 >> 10),iVar1)))) >>
                             0x20) +
                        (int)((ulong)*(undefined8 *)((long)plVar8 + -0x1c) >> 0x20) +
                        (int)((ulong)plVar8[-8] >> 0x20) +
                        CONCAT13((bVar17 >> 7 | (byte)((uVar32 << 0x19) >> 0x18)) ^
                                 (byte)((uint)iVar31 >> 0x18) ^ bVar17 >> 3,
                                 CONCAT12((byte)(uVar24 >> 0x10) ^ (byte)((uint)iVar31 >> 0x10) ^
                                          (byte)(uVar29 >> 0x10),
                                          CONCAT11((byte)(uVar24 >> 8) ^
                                                   (bVar17 >> 2 | (byte)((uint)iVar31 >> 8)) ^
                                                   (byte)(uVar29 >> 8),
                                                   (byte)uVar24 ^ (byte)(uVar32 >> 0x12) ^
                                                   (byte)uVar29))),
                        iVar1 + (int)*(undefined8 *)((long)plVar8 + -0x1c) + (int)plVar8[-8] +
                        CONCAT13((bVar16 >> 7 | (byte)((uVar25 << 0x19) >> 0x18)) ^
                                 (byte)((uint)iVar30 >> 0x18) ^ bVar16 >> 3,
                                 CONCAT12((byte)(uVar23 >> 0x10) ^ (byte)((uint)iVar30 >> 0x10) ^
                                          (byte)(uVar26 >> 0x10),
                                          CONCAT11((byte)(uVar23 >> 8) ^
                                                   (bVar16 >> 2 | (byte)((uint)iVar30 >> 8)) ^
                                                   (byte)(uVar26 >> 8),
                                                   (byte)uVar23 ^ (byte)(uVar25 >> 0x12) ^
                                                   (byte)uVar26))));
      plVar9 = plVar8 + 1;
      *plVar8 = lVar11;
      plVar8 = plVar9;
    } while (&lStack_8 != plVar9);
    uVar29 = *(uint *)((long)param_1 + 4);
    uVar32 = *(uint *)(param_1 + 1);
    lVar11 = 1;
    uVar23 = *(uint *)param_1;
    uVar12 = *(uint *)((long)param_1 + 0xc);
    uVar24 = *(uint *)((long)param_1 + 0x1c);
    bVar14 = (byte)uVar32;
    bVar15 = (byte)(uVar32 >> 8);
    bVar16 = (byte)(uVar32 >> 0x10);
    bVar17 = (byte)(uVar32 >> 0x18);
    bVar19 = (byte)uVar29;
    bVar20 = (byte)(uVar29 >> 8);
    bVar21 = (byte)(uVar29 >> 0x10);
    bVar22 = (byte)(uVar29 >> 0x18);
    uVar13 = *(uint *)(param_1 + 2);
    uVar25 = *(uint *)((long)param_1 + 0x14);
    uVar26 = *(uint *)(param_1 + 3);
    while( true ) {
      uVar27 = uVar25;
      uVar25 = uVar13;
      iVar1 = ((uVar25 >> 0xb | uVar25 << 0x15) ^ (uVar25 >> 6 | uVar25 << 0x1a) ^
              (uVar25 >> 0x19 | uVar25 << 7)) + (uVar26 & (uVar25 ^ 0xffffffff) ^ uVar25 & uVar27) +
              *(int *)(&UNK_00228d2c + lVar11 * 4) + aiStack_10c[lVar11] + uVar24;
      lVar11 = lVar11 + 1;
      uVar13 = iVar1 + uVar12;
      uVar24 = iVar1 + ((uVar23 >> 0xd | uVar23 << 0x13) ^ (uVar23 >> 2 | uVar23 << 0x1e) ^
                       (uVar23 >> 0x16 | uVar23 << 10)) +
                       (CONCAT13(bVar22 ^ bVar17,
                                 CONCAT12(bVar21 ^ bVar16,CONCAT11(bVar20 ^ bVar15,bVar19 ^ bVar14))
                                ) & uVar23 ^
                       CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) &
                       CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14))));
      uVar12 = CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)));
      if (lVar11 == 0x41) break;
      bVar18 = (byte)uVar23;
      uVar5 = uVar23 >> 8;
      uVar6 = uVar23 >> 0x10;
      uVar7 = uVar23 >> 0x18;
      uVar23 = uVar24;
      uVar24 = uVar26;
      bVar14 = bVar19;
      bVar15 = bVar20;
      bVar16 = bVar21;
      bVar17 = bVar22;
      bVar19 = bVar18;
      bVar20 = (byte)uVar5;
      bVar21 = (byte)uVar6;
      bVar22 = (byte)uVar7;
      uVar26 = uVar27;
    }
    iVar1 = uVar25 + *(uint *)((long)param_1 + 0x14);
    param_1[1] = CONCAT44(*(uint *)((long)param_1 + 0xc) +
                          CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14))),
                          uVar32 + CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))));
    *param_1 = CONCAT44(uVar29 + uVar23,*(uint *)param_1 + uVar24);
    param_1[3] = CONCAT44(*(uint *)((long)param_1 + 0x1c) + uVar26,uVar27 + *(uint *)(param_1 + 3));
    param_1[2] = CONCAT17((char)((uint)iVar1 >> 0x18),
                          CONCAT16((char)((uint)iVar1 >> 0x10),
                                   CONCAT15((char)((uint)iVar1 >> 8),
                                            CONCAT14((char)iVar1,*(uint *)(param_1 + 2) + uVar13))))
    ;
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


