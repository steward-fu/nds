/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_wrap_wrap_c
 * Address  : 001462b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_wrap_wrap_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,int param_4,int param_5)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  undefined4 uVar9;
  undefined6 uVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  ushort *puVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  
  lVar16 = ___stack_chk_guard;
  uVar32 = (uint)param_3;
  if (uVar32 != 0) {
    param_5 = param_5 + -1;
    iVar1 = param_4 + -1;
    if (uVar32 - 1 < 7) {
      uVar34 = 0;
    }
    else {
      puVar33 = param_1;
      puVar35 = param_2;
      do {
        uVar12 = *puVar35;
        puVar17 = puVar35 + 1;
        puVar18 = puVar35 + 2;
        puVar19 = puVar35 + 3;
        puVar20 = puVar35 + 4;
        puVar21 = puVar35 + 5;
        puVar22 = puVar35 + 6;
        puVar23 = puVar35 + 7;
        puVar24 = puVar35 + 8;
        puVar25 = puVar35 + 9;
        puVar26 = puVar35 + 10;
        puVar27 = puVar35 + 0xb;
        puVar28 = puVar35 + 0xc;
        puVar29 = puVar35 + 0xd;
        puVar30 = puVar35 + 0xe;
        puVar31 = puVar35 + 0xf;
        puVar35 = puVar35 + 0x10;
        bVar50 = (byte)iVar1;
        bVar51 = (byte)((uint)iVar1 >> 8);
        bVar45 = bVar51 & (byte)(uVar12 >> 8);
        bVar46 = bVar51 & (byte)(*puVar24 >> 8);
        bVar48 = (byte)param_5;
        bVar49 = (byte)((uint)param_5 >> 8);
        bVar47 = bVar49 & (byte)(*puVar25 >> 8);
        sVar2 = CONCAT11(bVar45,bVar50 & (byte)uVar12);
        uVar3 = CONCAT13(bVar51 & (byte)(*puVar18 >> 8),CONCAT12(bVar50 & (byte)*puVar18,sVar2));
        uVar4 = CONCAT15(bVar51 & (byte)(*puVar20 >> 8),CONCAT14(bVar50 & (byte)*puVar20,uVar3));
        sVar36 = (short)((uint)uVar3 >> 0x10);
        sVar39 = (short)((uint6)uVar4 >> 0x20);
        sVar42 = (short)(CONCAT17(bVar51 & (byte)(*puVar22 >> 8),
                                  CONCAT16(bVar50 & (byte)*puVar22,uVar4)) >> 0x30);
        sVar8 = CONCAT11(bVar49 & (byte)(*puVar17 >> 8),bVar48 & (byte)*puVar17);
        uVar9 = CONCAT13(bVar49 & (byte)(*puVar19 >> 8),CONCAT12(bVar48 & (byte)*puVar19,sVar8));
        uVar10 = CONCAT15(bVar49 & (byte)(*puVar21 >> 8),CONCAT14(bVar48 & (byte)*puVar21,uVar9));
        sVar6 = CONCAT11(bVar46,bVar50 & (byte)*puVar24);
        uVar3 = CONCAT13(bVar51 & (byte)(*puVar26 >> 8),CONCAT12(bVar50 & (byte)*puVar26,sVar6));
        uVar4 = CONCAT15(bVar51 & (byte)(*puVar28 >> 8),CONCAT14(bVar50 & (byte)*puVar28,uVar3));
        sVar37 = (short)((uint)uVar3 >> 0x10);
        sVar40 = (short)((uint6)uVar4 >> 0x20);
        sVar43 = (short)(CONCAT17(bVar51 & (byte)(*puVar30 >> 8),
                                  CONCAT16(bVar50 & (byte)*puVar30,uVar4)) >> 0x30);
        sVar11 = CONCAT11(bVar47,bVar48 & (byte)*puVar25);
        uVar3 = CONCAT13(bVar49 & (byte)(*puVar27 >> 8),CONCAT12(bVar48 & (byte)*puVar27,sVar11));
        uVar4 = CONCAT15(bVar49 & (byte)(*puVar29 >> 8),CONCAT14(bVar48 & (byte)*puVar29,uVar3));
        sVar38 = (short)((uint)uVar3 >> 0x10);
        sVar41 = (short)((uint6)uVar4 >> 0x20);
        sVar44 = (short)(CONCAT17(bVar49 & (byte)(*puVar31 >> 8),
                                  CONCAT16(bVar48 & (byte)*puVar31,uVar4)) >> 0x30);
        iVar13 = CONCAT13(sVar36 >> 0xf,(int3)sVar36) + (short)((uint)uVar9 >> 0x10) * param_4;
        iVar14 = CONCAT13(sVar42 >> 0xf,(int3)sVar42) +
                 (short)(CONCAT17(bVar49 & (byte)(*puVar23 >> 8),
                                  CONCAT16(bVar48 & (byte)*puVar23,uVar10)) >> 0x30) * param_4;
        iVar5 = CONCAT13(sVar37 >> 0xf,(int3)sVar37) +
                CONCAT13(sVar38 >> 0xf,(int3)sVar38) * param_4;
        iVar7 = CONCAT13(sVar43 >> 0xf,(int3)sVar43) +
                CONCAT13(sVar44 >> 0xf,(int3)sVar44) * param_4;
        puVar33[1] = CONCAT17((char)((uint)iVar14 >> 0x18),
                              CONCAT16((char)((uint)iVar14 >> 0x10),
                                       CONCAT15((char)((uint)iVar14 >> 8),
                                                CONCAT14((char)iVar14,
                                                         CONCAT13(sVar39 >> 0xf,(int3)sVar39) +
                                                         (short)((uint6)uVar10 >> 0x20) * param_4)))
                             );
        *puVar33 = CONCAT17((char)((uint)iVar13 >> 0x18),
                            CONCAT16((char)((uint)iVar13 >> 0x10),
                                     CONCAT15((char)((uint)iVar13 >> 8),
                                              CONCAT14((char)iVar13,
                                                       CONCAT13((short)(char)bVar45 >> 7,(int3)sVar2
                                                               ) + sVar8 * param_4))));
        puVar33[3] = CONCAT17((char)((uint)iVar7 >> 0x18),
                              CONCAT16((char)((uint)iVar7 >> 0x10),
                                       CONCAT15((char)((uint)iVar7 >> 8),
                                                CONCAT14((char)iVar7,
                                                         CONCAT13(sVar40 >> 0xf,(int3)sVar40) +
                                                         CONCAT13(sVar41 >> 0xf,(int3)sVar41) *
                                                         param_4))));
        puVar33[2] = CONCAT17((char)((uint)iVar5 >> 0x18),
                              CONCAT16((char)((uint)iVar5 >> 0x10),
                                       CONCAT15((char)((uint)iVar5 >> 8),
                                                CONCAT14((char)iVar5,
                                                         CONCAT13((short)(char)bVar46 >> 7,
                                                                  (int3)sVar6) +
                                                         CONCAT13((short)(char)bVar47 >> 7,
                                                                  (int3)sVar11) * param_4))));
        puVar33 = puVar33 + 4;
      } while (puVar35 != param_2 + (ulong)((uVar32 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar34 = uVar32 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00146490;
    }
    uVar12 = (ushort)iVar1;
    uVar15 = (ushort)param_5;
    *(int *)param_1 = (int)(short)(uVar12 & *param_2) + (short)(uVar15 & param_2[1]) * param_4;
    if (uVar34 + 1 < uVar32) {
      *(int *)((long)param_1 + 4) =
           (int)(short)(uVar12 & param_2[2]) + (short)(uVar15 & param_2[3]) * param_4;
      if (uVar34 + 2 < uVar32) {
        *(int *)(param_1 + 1) =
             (int)(short)(uVar12 & param_2[4]) + (short)(uVar15 & param_2[5]) * param_4;
        if (uVar34 + 3 < uVar32) {
          *(int *)((long)param_1 + 0xc) =
               (int)(short)(uVar12 & param_2[6]) + (short)(uVar15 & param_2[7]) * param_4;
          if (uVar34 + 4 < uVar32) {
            *(int *)(param_1 + 2) =
                 (int)(short)(uVar12 & param_2[8]) + (short)(uVar15 & param_2[9]) * param_4;
            if (uVar34 + 5 < uVar32) {
              *(int *)((long)param_1 + 0x14) =
                   (int)(short)(uVar12 & param_2[10]) + (short)(uVar15 & param_2[0xb]) * param_4;
              if (uVar34 + 6 < uVar32) {
                *(int *)(param_1 + 3) =
                     (int)(short)(uVar12 & param_2[0xc]) + (short)(uVar15 & param_2[0xd]) * param_4;
              }
            }
          }
        }
      }
    }
  }
LAB_00146490:
  if (lVar16 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16 - ___stack_chk_guard,0);
}


