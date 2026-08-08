/*
 * Ghidra decompilation
 *
 * Function : render_scanline_priority_encode_single_c
 * Address  : 00138630
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_priority_encode_single_c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte bVar34;
  uint uVar30;
  byte bVar32;
  byte bVar33;
  ulong uVar31;
  byte bVar39;
  uint uVar35;
  byte bVar37;
  byte bVar38;
  ulong uVar36;
  byte bVar41;
  byte bVar42;
  uint uVar40;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  uint uVar44;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  uint uVar48;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  uint uVar52;
  byte bVar55;
  byte bVar57;
  byte bVar58;
  uint uVar56;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  uint uVar60;
  byte bVar63;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar19 = ___stack_chk_guard;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined8 *)(param_3 + 0x98) = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  if (*(char *)(param_1 + 0xb3) != '\0') {
    lVar21 = 0;
    uVar40 = 0;
    uVar48 = 0;
    uVar56 = 0;
    uVar31 = 0;
    uVar44 = 0;
    uVar52 = 0;
    uVar60 = 0;
    uVar36 = 0;
    uVar29 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar25 = 0;
    uVar28 = 0;
    uVar27 = 0;
    do {
      while( true ) {
        bVar18 = *(byte *)(param_1 + 0x84 + lVar21);
        lVar20 = (ulong)bVar18 * 0x20;
        lVar1 = lVar20 + 4;
        uVar11 = *(uint *)(param_2 + lVar20);
        lVar2 = lVar20 + 8;
        lVar3 = lVar20 + 0xc;
        lVar4 = lVar20 + 0x10;
        lVar5 = lVar20 + 0x14;
        lVar6 = lVar20 + 0x18;
        lVar7 = lVar20 + 0x1c;
        bVar37 = (byte)(uVar36 >> 8);
        bVar38 = (byte)(uVar36 >> 0x10);
        bVar39 = (byte)(uVar36 >> 0x18);
        bVar61 = (byte)(uVar60 >> 8);
        bVar62 = (byte)(uVar60 >> 0x10);
        bVar63 = (byte)(uVar60 >> 0x18);
        bVar53 = (byte)(uVar52 >> 8);
        bVar54 = (byte)(uVar52 >> 0x10);
        bVar55 = (byte)(uVar52 >> 0x18);
        bVar45 = (byte)(uVar44 >> 8);
        bVar46 = (byte)(uVar44 >> 0x10);
        bVar47 = (byte)(uVar44 >> 0x18);
        bVar32 = (byte)(uVar31 >> 8);
        bVar33 = (byte)(uVar31 >> 0x10);
        bVar34 = (byte)(uVar31 >> 0x18);
        bVar57 = (byte)(uVar56 >> 8);
        bVar58 = (byte)(uVar56 >> 0x10);
        bVar59 = (byte)(uVar56 >> 0x18);
        bVar49 = (byte)(uVar48 >> 8);
        bVar50 = (byte)(uVar48 >> 0x10);
        bVar51 = (byte)(uVar48 >> 0x18);
        bVar41 = (byte)(uVar40 >> 8);
        bVar42 = (byte)(uVar40 >> 0x10);
        bVar43 = (byte)(uVar40 >> 0x18);
        if ((bVar18 >> 2 & 1) == 0) break;
        uVar8 = uVar11 & (uVar22 ^ 0xffffffff);
        *(uint *)(param_3 + 0x80) = *(uint *)(param_3 + 0x80) | uVar8 & ~(uint)uVar36;
        uVar12 = *(uint *)(param_2 + lVar1);
        uVar30 = uVar12 & (uVar23 ^ 0xffffffff);
        *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) | uVar30 & ~uVar60;
        uVar13 = *(uint *)(param_2 + lVar2);
        uVar9 = uVar13 & (uVar24 ^ 0xffffffff);
        *(uint *)(param_3 + 0x88) = *(uint *)(param_3 + 0x88) | uVar9 & ~uVar52;
        uVar14 = *(uint *)(param_2 + lVar3);
        uVar35 = CONCAT13(bVar39 | (byte)(uVar8 >> 0x18),
                          CONCAT12(bVar38 | (byte)(uVar8 >> 0x10),
                                   CONCAT11(bVar37 | (byte)(uVar8 >> 8),(byte)uVar36 | (byte)uVar8))
                         );
        uVar36 = (ulong)uVar35;
        uVar8 = uVar14 & (uVar25 ^ 0xffffffff);
        *(uint *)(param_3 + 0x8c) = *(uint *)(param_3 + 0x8c) | uVar8 & ~uVar44;
        uVar15 = *(uint *)(param_2 + lVar4);
        uVar60 = CONCAT13(bVar63 | (byte)(uVar30 >> 0x18),
                          CONCAT12(bVar62 | (byte)(uVar30 >> 0x10),
                                   CONCAT11(bVar61 | (byte)(uVar30 >> 8),(byte)uVar60 | (byte)uVar30
                                           )));
        uVar30 = uVar15 & (uVar26 ^ 0xffffffff);
        *(uint *)(param_3 + 0x90) = *(uint *)(param_3 + 0x90) | uVar30 & ~(uint)uVar31;
        uVar16 = *(uint *)(param_2 + lVar5);
        uVar52 = CONCAT13(bVar55 | (byte)(uVar9 >> 0x18),
                          CONCAT12(bVar54 | (byte)(uVar9 >> 0x10),
                                   CONCAT11(bVar53 | (byte)(uVar9 >> 8),(byte)uVar52 | (byte)uVar9))
                         );
        uVar9 = uVar16 & (uVar27 ^ 0xffffffff);
        *(uint *)(param_3 + 0x94) = *(uint *)(param_3 + 0x94) | uVar9 & ~uVar56;
        uVar17 = *(uint *)(param_2 + lVar6);
        uVar10 = uVar17 & (uVar28 ^ 0xffffffff);
        *(uint *)(param_3 + 0x98) = *(uint *)(param_3 + 0x98) | uVar10 & ~uVar48;
        uVar44 = CONCAT13(bVar47 | (byte)(uVar8 >> 0x18),
                          CONCAT12(bVar46 | (byte)(uVar8 >> 0x10),
                                   CONCAT11(bVar45 | (byte)(uVar8 >> 8),(byte)uVar44 | (byte)uVar8))
                         );
        uVar8 = *(uint *)(param_2 + lVar7);
        uVar22 = uVar22 | uVar11;
        uVar30 = CONCAT13(bVar34 | (byte)(uVar30 >> 0x18),
                          CONCAT12(bVar33 | (byte)(uVar30 >> 0x10),
                                   CONCAT11(bVar32 | (byte)(uVar30 >> 8),(byte)uVar31 | (byte)uVar30
                                           )));
        uVar31 = (ulong)uVar30;
        uVar24 = uVar24 | uVar13;
        uVar11 = uVar8 & (uVar29 ^ 0xffffffff);
        uVar56 = CONCAT13(bVar59 | (byte)(uVar9 >> 0x18),
                          CONCAT12(bVar58 | (byte)(uVar9 >> 0x10),
                                   CONCAT11(bVar57 | (byte)(uVar9 >> 8),(byte)uVar56 | (byte)uVar9))
                         );
        *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | uVar11 & ~uVar40;
        uVar48 = CONCAT13(bVar51 | (byte)(uVar10 >> 0x18),
                          CONCAT12(bVar50 | (byte)(uVar10 >> 0x10),
                                   CONCAT11(bVar49 | (byte)(uVar10 >> 8),(byte)uVar48 | (byte)uVar10
                                           )));
        lVar21 = lVar21 + 1;
        uVar40 = CONCAT13(bVar43 | (byte)(uVar11 >> 0x18),
                          CONCAT12(bVar42 | (byte)(uVar11 >> 0x10),
                                   CONCAT11(bVar41 | (byte)(uVar11 >> 8),(byte)uVar40 | (byte)uVar11
                                           )));
        uVar23 = uVar23 | uVar12;
        uVar25 = uVar25 | uVar14;
        uVar26 = uVar26 | uVar15;
        uVar27 = uVar27 | uVar16;
        uVar28 = uVar28 | uVar17;
        uVar29 = uVar29 | uVar8;
        if ((uint)*(byte *)(param_1 + 0xb3) <= (uint)lVar21) goto LAB_00138868;
      }
      *(uint *)(param_3 + lVar20) = uVar11 & ~(uint)uVar36;
      uVar8 = *(uint *)(param_2 + lVar1);
      uVar35 = CONCAT13(bVar39 | (byte)(uVar11 >> 0x18),
                        CONCAT12(bVar38 | (byte)(uVar11 >> 0x10),
                                 CONCAT11(bVar37 | (byte)(uVar11 >> 8),(byte)uVar36 | (byte)uVar11))
                       );
      uVar36 = (ulong)uVar35;
      *(uint *)(param_3 + lVar1) = uVar8 & ~uVar60;
      uVar11 = *(uint *)(param_2 + lVar2);
      uVar60 = CONCAT13(bVar63 | (byte)(uVar8 >> 0x18),
                        CONCAT12(bVar62 | (byte)(uVar8 >> 0x10),
                                 CONCAT11(bVar61 | (byte)(uVar8 >> 8),(byte)uVar60 | (byte)uVar8)));
      *(uint *)(param_3 + lVar2) = uVar11 & ~uVar52;
      uVar8 = *(uint *)(param_2 + lVar3);
      uVar52 = CONCAT13(bVar55 | (byte)(uVar11 >> 0x18),
                        CONCAT12(bVar54 | (byte)(uVar11 >> 0x10),
                                 CONCAT11(bVar53 | (byte)(uVar11 >> 8),(byte)uVar52 | (byte)uVar11))
                       );
      *(uint *)(param_3 + lVar3) = uVar8 & ~uVar44;
      uVar11 = *(uint *)(param_2 + lVar4);
      uVar44 = CONCAT13(bVar47 | (byte)(uVar8 >> 0x18),
                        CONCAT12(bVar46 | (byte)(uVar8 >> 0x10),
                                 CONCAT11(bVar45 | (byte)(uVar8 >> 8),(byte)uVar44 | (byte)uVar8)));
      *(uint *)(param_3 + lVar4) = uVar11 & ~(uint)uVar31;
      uVar8 = *(uint *)(param_2 + lVar5);
      uVar30 = CONCAT13(bVar34 | (byte)(uVar11 >> 0x18),
                        CONCAT12(bVar33 | (byte)(uVar11 >> 0x10),
                                 CONCAT11(bVar32 | (byte)(uVar11 >> 8),(byte)uVar31 | (byte)uVar11))
                       );
      uVar31 = (ulong)uVar30;
      *(uint *)(param_3 + lVar5) = uVar8 & ~uVar56;
      uVar11 = *(uint *)(param_2 + lVar6);
      uVar56 = CONCAT13(bVar59 | (byte)(uVar8 >> 0x18),
                        CONCAT12(bVar58 | (byte)(uVar8 >> 0x10),
                                 CONCAT11(bVar57 | (byte)(uVar8 >> 8),(byte)uVar56 | (byte)uVar8)));
      *(uint *)(param_3 + lVar6) = uVar11 & ~uVar48;
      uVar8 = *(uint *)(param_2 + lVar7);
      uVar48 = CONCAT13(bVar51 | (byte)(uVar11 >> 0x18),
                        CONCAT12(bVar50 | (byte)(uVar11 >> 0x10),
                                 CONCAT11(bVar49 | (byte)(uVar11 >> 8),(byte)uVar48 | (byte)uVar11))
                       );
      *(uint *)(param_3 + lVar7) = uVar8 & ~uVar40;
      lVar21 = lVar21 + 1;
      uVar40 = CONCAT13(bVar43 | (byte)(uVar8 >> 0x18),
                        CONCAT12(bVar42 | (byte)(uVar8 >> 0x10),
                                 CONCAT11(bVar41 | (byte)(uVar8 >> 8),(byte)uVar40 | (byte)uVar8)));
    } while ((uint)lVar21 < (uint)*(byte *)(param_1 + 0xb3));
LAB_00138868:
    local_30 = CONCAT44(uVar60,uVar35);
    local_20 = CONCAT44(uVar56,uVar30);
    uStack_28 = CONCAT44(uVar44,uVar52);
    uStack_18 = CONCAT44(uVar40,uVar48);
  }
  lVar19 = lVar19 - ___stack_chk_guard;
  *(ulong *)(param_3 + 0xa8) =
       CONCAT17(~(byte)((ulong)uStack_28 >> 0x38),
                CONCAT16(~(byte)((ulong)uStack_28 >> 0x30),
                         CONCAT15(~(byte)((ulong)uStack_28 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uStack_28 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uStack_28 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uStack_28 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uStack_28 >> 8)
                                                                      ,~(byte)uStack_28)))))));
  *(ulong *)(param_3 + 0xa0) =
       CONCAT17(~(byte)((ulong)local_30 >> 0x38),
                CONCAT16(~(byte)((ulong)local_30 >> 0x30),
                         CONCAT15(~(byte)((ulong)local_30 >> 0x28),
                                  CONCAT14(~(byte)((ulong)local_30 >> 0x20),
                                           CONCAT13(~(byte)((ulong)local_30 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)local_30 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)local_30 >> 8),
                                                                      ~(byte)local_30)))))));
  *(ulong *)(param_3 + 0xb8) =
       CONCAT17(~(byte)((ulong)uStack_18 >> 0x38),
                CONCAT16(~(byte)((ulong)uStack_18 >> 0x30),
                         CONCAT15(~(byte)((ulong)uStack_18 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uStack_18 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uStack_18 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uStack_18 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uStack_18 >> 8)
                                                                      ,~(byte)uStack_18)))))));
  *(ulong *)(param_3 + 0xb0) =
       CONCAT17(~(byte)((ulong)local_20 >> 0x38),
                CONCAT16(~(byte)((ulong)local_20 >> 0x30),
                         CONCAT15(~(byte)((ulong)local_20 >> 0x28),
                                  CONCAT14(~(byte)((ulong)local_20 >> 0x20),
                                           CONCAT13(~(byte)((ulong)local_20 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)local_20 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)local_20 >> 8),
                                                                      ~(byte)local_20)))))));
  if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,lVar19,param_3,0);
  }
  return;
}


