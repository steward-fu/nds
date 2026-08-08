/*
 * Ghidra decompilation
 *
 * Function : sha256_transform
 * Address  : 001c8340
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sha256_transform(sha256_context*) */

void sha256_transform(sha256_context *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined auStack_130 [36];
  int aiStack_10c [17];
  long alStack_c8 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (sha256_context *)0x0) {
    cleandata(auStack_130,0x20);
    cleandata(aiStack_10c + 1,0x100);
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    uVar9 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
    aiStack_10c[1] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
    aiStack_10c[2] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
    aiStack_10c[3] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[3] & 0xff00ff00) >> 8 | (puVar5[3] & 0xff00ff) << 8;
    aiStack_10c[4] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[4] & 0xff00ff00) >> 8 | (puVar5[4] & 0xff00ff) << 8;
    aiStack_10c[5] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[5] & 0xff00ff00) >> 8 | (puVar5[5] & 0xff00ff) << 8;
    aiStack_10c[6] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[6] & 0xff00ff00) >> 8 | (puVar5[6] & 0xff00ff) << 8;
    aiStack_10c[7] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[7] & 0xff00ff00) >> 8 | (puVar5[7] & 0xff00ff) << 8;
    aiStack_10c[8] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[8] & 0xff00ff00) >> 8 | (puVar5[8] & 0xff00ff) << 8;
    aiStack_10c[9] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[9] & 0xff00ff00) >> 8 | (puVar5[9] & 0xff00ff) << 8;
    aiStack_10c[10] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[10] & 0xff00ff00) >> 8 | (puVar5[10] & 0xff00ff) << 8;
    aiStack_10c[11] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[0xb] & 0xff00ff00) >> 8 | (puVar5[0xb] & 0xff00ff) << 8;
    aiStack_10c[12] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[0xc] & 0xff00ff00) >> 8 | (puVar5[0xc] & 0xff00ff) << 8;
    aiStack_10c[13] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[0xd] & 0xff00ff00) >> 8 | (puVar5[0xd] & 0xff00ff) << 8;
    aiStack_10c[14] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[0xe] & 0xff00ff00) >> 8 | (puVar5[0xe] & 0xff00ff) << 8;
    aiStack_10c[15] = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (puVar5[0xf] & 0xff00ff00) >> 8 | (puVar5[0xf] & 0xff00ff) << 8;
    aiStack_10c[16] = uVar9 >> 0x10 | uVar9 << 0x10;
    lVar7 = CONCAT44(aiStack_10c[16],aiStack_10c[15]);
    plVar3 = alStack_c8;
    do {
      uVar9 = (uint)lVar7;
      iVar8 = uVar9 << 0xf;
      uVar6 = (uint)((ulong)lVar7 >> 0x20);
      iVar28 = uVar6 << 0xf;
      bVar10 = (byte)((ulong)lVar7 >> 0x18);
      bVar11 = (byte)((ulong)lVar7 >> 0x38);
      iVar29 = uVar9 << 0xd;
      iVar1 = uVar6 << 0xd;
      uVar23 = *(undefined8 *)((long)plVar3 + -0x3c);
      uVar21 = (uint)uVar23;
      uVar24 = (uint)((ulong)uVar23 >> 0x20);
      iVar26 = uVar21 << 0xe;
      iVar27 = uVar24 << 0xe;
      uVar19 = uVar21 >> 7;
      uVar20 = uVar24 >> 7;
      bVar12 = (byte)((ulong)uVar23 >> 0x18);
      bVar13 = (byte)((ulong)uVar23 >> 0x38);
      uVar22 = uVar21 >> 3;
      uVar25 = uVar24 >> 3;
      iVar8 = CONCAT13((byte)((uint)iVar8 >> 0x18) ^ (byte)((uint)iVar29 >> 0x18),
                       CONCAT12((byte)((uint)iVar8 >> 0x10) ^ (byte)((uint)iVar29 >> 0x10) ^
                                bVar10 >> 2,
                                CONCAT11((bVar10 >> 1 | (byte)((uint)iVar8 >> 8)) ^
                                         (bVar10 >> 3 | (byte)((uint)iVar29 >> 8)) ^
                                         (byte)((uVar9 >> 10) >> 8),
                                         (byte)(uVar9 >> 0x11) ^ (byte)(uVar9 >> 0x13) ^
                                         (byte)(uVar9 >> 10))));
      lVar7 = CONCAT44((int)(CONCAT17((byte)((uint)iVar28 >> 0x18) ^ (byte)((uint)iVar1 >> 0x18),
                                      CONCAT16((byte)((uint)iVar28 >> 0x10) ^
                                               (byte)((uint)iVar1 >> 0x10) ^ bVar11 >> 2,
                                               CONCAT15((bVar11 >> 1 | (byte)((uint)iVar28 >> 8)) ^
                                                        (bVar11 >> 3 | (byte)((uint)iVar1 >> 8)) ^
                                                        (byte)((uVar6 >> 10) >> 8),
                                                        CONCAT14((byte)(uVar6 >> 0x11) ^
                                                                 (byte)(uVar6 >> 0x13) ^
                                                                 (byte)(uVar6 >> 10),iVar8)))) >>
                            0x20) +
                       (int)((ulong)*(undefined8 *)((long)plVar3 + -0x1c) >> 0x20) +
                       (int)((ulong)plVar3[-8] >> 0x20) +
                       CONCAT13((bVar13 >> 7 | (byte)((uVar24 << 0x19) >> 0x18)) ^
                                (byte)((uint)iVar27 >> 0x18) ^ bVar13 >> 3,
                                CONCAT12((byte)(uVar20 >> 0x10) ^ (byte)((uint)iVar27 >> 0x10) ^
                                         (byte)(uVar25 >> 0x10),
                                         CONCAT11((byte)(uVar20 >> 8) ^
                                                  (bVar13 >> 2 | (byte)((uint)iVar27 >> 8)) ^
                                                  (byte)(uVar25 >> 8),
                                                  (byte)uVar20 ^ (byte)(uVar24 >> 0x12) ^
                                                  (byte)uVar25))),
                       iVar8 + (int)*(undefined8 *)((long)plVar3 + -0x1c) + (int)plVar3[-8] +
                       CONCAT13((bVar12 >> 7 | (byte)((uVar21 << 0x19) >> 0x18)) ^
                                (byte)((uint)iVar26 >> 0x18) ^ bVar12 >> 3,
                                CONCAT12((byte)(uVar19 >> 0x10) ^ (byte)((uint)iVar26 >> 0x10) ^
                                         (byte)(uVar22 >> 0x10),
                                         CONCAT11((byte)(uVar19 >> 8) ^
                                                  (bVar12 >> 2 | (byte)((uint)iVar26 >> 8)) ^
                                                  (byte)(uVar22 >> 8),
                                                  (byte)uVar19 ^ (byte)(uVar21 >> 0x12) ^
                                                  (byte)uVar22))));
      plVar4 = plVar3 + 1;
      *plVar3 = lVar7;
      plVar3 = plVar4;
    } while (&local_8 != plVar4);
    iVar29 = *(int *)(param_1 + 4);
    iVar28 = *(int *)(param_1 + 8);
    lVar7 = 1;
    uVar6 = *(uint *)param_1;
    iVar8 = *(int *)(param_1 + 0xc);
    uVar19 = *(uint *)(param_1 + 0x1c);
    bVar10 = (byte)iVar28;
    bVar11 = (byte)((uint)iVar28 >> 8);
    bVar12 = (byte)((uint)iVar28 >> 0x10);
    bVar13 = (byte)((uint)iVar28 >> 0x18);
    bVar15 = (byte)iVar29;
    bVar16 = (byte)((uint)iVar29 >> 8);
    bVar17 = (byte)((uint)iVar29 >> 0x10);
    bVar18 = (byte)((uint)iVar29 >> 0x18);
    uVar9 = *(uint *)(param_1 + 0x10);
    uVar20 = *(uint *)(param_1 + 0x14);
    uVar21 = *(uint *)(param_1 + 0x18);
    while( true ) {
      uVar22 = uVar20;
      uVar20 = uVar9;
      iVar1 = ((uVar20 >> 0xb | uVar20 << 0x15) ^ (uVar20 >> 6 | uVar20 << 0x1a) ^
              (uVar20 >> 0x19 | uVar20 << 7)) + (uVar21 & (uVar20 ^ 0xffffffff) ^ uVar20 & uVar22) +
              *(int *)(&UNK_00228d2c + lVar7 * 4) + aiStack_10c[lVar7] + uVar19;
      lVar7 = lVar7 + 1;
      uVar9 = iVar1 + iVar8;
      uVar19 = iVar1 + ((uVar6 >> 0xd | uVar6 << 0x13) ^ (uVar6 >> 2 | uVar6 << 0x1e) ^
                       (uVar6 >> 0x16 | uVar6 << 10)) +
                       (CONCAT13(bVar18 ^ bVar13,
                                 CONCAT12(bVar17 ^ bVar12,CONCAT11(bVar16 ^ bVar11,bVar15 ^ bVar10))
                                ) & uVar6 ^
                       CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))) &
                       CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))));
      iVar8 = CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10)));
      if (lVar7 == 0x41) break;
      bVar14 = (byte)uVar6;
      uVar24 = uVar6 >> 8;
      uVar25 = uVar6 >> 0x10;
      uVar2 = uVar6 >> 0x18;
      uVar6 = uVar19;
      uVar19 = uVar21;
      bVar10 = bVar15;
      bVar11 = bVar16;
      bVar12 = bVar17;
      bVar13 = bVar18;
      bVar15 = bVar14;
      bVar16 = (byte)uVar24;
      bVar17 = (byte)uVar25;
      bVar18 = (byte)uVar2;
      uVar21 = uVar22;
    }
    iVar8 = uVar20 + *(uint *)(param_1 + 0x14);
    *(ulong *)(param_1 + 8) =
         CONCAT44(*(int *)(param_1 + 0xc) +
                  CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))),
                  iVar28 + CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))));
    *(ulong *)param_1 = CONCAT44(iVar29 + uVar6,*(uint *)param_1 + uVar19);
    *(ulong *)(param_1 + 0x18) =
         CONCAT44(*(uint *)(param_1 + 0x1c) + uVar21,uVar22 + *(uint *)(param_1 + 0x18));
    *(ulong *)(param_1 + 0x10) =
         CONCAT17((char)((uint)iVar8 >> 0x18),
                  CONCAT16((char)((uint)iVar8 >> 0x10),
                           CONCAT15((char)((uint)iVar8 >> 8),
                                    CONCAT14((char)iVar8,*(uint *)(param_1 + 0x10) + uVar9))));
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


