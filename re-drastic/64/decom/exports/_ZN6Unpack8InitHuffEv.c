/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8InitHuffEv
 * Address  : 001cf220
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::InitHuff() */

void Unpack::InitHuff(void)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long in_x0;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar11;
  ulong uVar12;
  short sVar14;
  short sVar18;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar19;
  short sVar23;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  ulong uVar30;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar40;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar46;
  ulong uVar48;
  ulong uVar50;
  ulong uVar52;
  ulong uVar54;
  ulong uVar56;
  ulong uVar58;
  ulong uVar60;
  ulong uVar62;
  ulong uVar64;
  ulong uVar66;
  ulong uVar68;
  ulong uVar70;
  ulong uVar10;
  ulong uVar13;
  ulong uVar22;
  ulong uVar27;
  ulong uVar29;
  ulong uVar31;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  ulong uVar41;
  ulong uVar45;
  ulong uVar47;
  ulong uVar49;
  ulong uVar51;
  ulong uVar53;
  ulong uVar55;
  ulong uVar57;
  ulong uVar59;
  ulong uVar61;
  ulong uVar63;
  ulong uVar65;
  ulong uVar67;
  ulong uVar69;
  ulong uVar71;
  
  puVar6 = (undefined8 *)(in_x0 + 0x4dba);
  uVar8 = 0x100000000;
  uVar11 = 0x300000002;
  do {
    puVar1 = puVar6 + 2;
    sVar2 = (short)uVar8;
    sVar14 = sVar2 + 4;
    sVar3 = (short)((ulong)uVar8 >> 0x20);
    sVar18 = sVar3 + 4;
    sVar4 = (short)uVar11;
    sVar19 = sVar4 + 4;
    sVar5 = (short)((ulong)uVar11 >> 0x20);
    sVar23 = sVar5 + 4;
    auVar7._2_2_ = sVar3;
    auVar7._0_2_ = sVar2;
    auVar7._4_2_ = sVar4;
    auVar7._6_2_ = sVar5;
    auVar7._8_2_ = sVar14;
    auVar7._10_2_ = sVar18;
    auVar7._12_2_ = sVar19;
    auVar7._14_2_ = sVar23;
    auVar7 = NEON_neg(auVar7,2);
    uVar15 = CONCAT26(sVar5 << 8,CONCAT24(sVar4 << 8,CONCAT22(sVar3 << 8,sVar2 << 8)));
    uVar20 = CONCAT26(sVar23 * 0x100,
                      CONCAT24(sVar19 * 0x100,CONCAT22(sVar18 * 0x100,sVar14 * 0x100)));
    puVar6[0x41] = CONCAT26(sVar23,CONCAT24(sVar19,CONCAT22(sVar18,sVar14)));
    puVar6[0x40] = CONCAT26(sVar5,CONCAT24(sVar4,CONCAT22(sVar3,sVar2)));
    puVar6[1] = uVar20;
    *puVar6 = uVar15;
    puVar6[0x81] = uVar20;
    puVar6[0x80] = uVar15;
    *(short *)(puVar6 + 0xc2) = auVar7._8_2_ << 8;
    *(short *)((long)puVar6 + 0x612) = auVar7._10_2_ << 8;
    *(short *)((long)puVar6 + 0x614) = auVar7._12_2_ << 8;
    *(short *)((long)puVar6 + 0x616) = auVar7._14_2_ << 8;
    *(short *)(puVar6 + 0xc0) = auVar7._0_2_ << 8;
    *(short *)((long)puVar6 + 0x602) = auVar7._2_2_ << 8;
    *(short *)((long)puVar6 + 0x604) = auVar7._4_2_ << 8;
    *(short *)((long)puVar6 + 0x606) = auVar7._6_2_ << 8;
    puVar6 = puVar1;
    uVar8 = CONCAT44((int)((ulong)uVar8 >> 0x20) + 8,(int)uVar8 + 8);
    uVar11 = CONCAT44((int)((ulong)uVar11 >> 0x20) + 8,(int)uVar11 + 8);
  } while ((undefined8 *)(in_x0 + 0x4fba) != puVar1);
  memset((void *)(in_x0 + 0x55ba),0,0x100);
  memset((void *)(in_x0 + 0x56ba),0,0x100);
  memset((void *)(in_x0 + 0x57ba),0,0x100);
  uVar68 = *(ulong *)(in_x0 + 0x51ba) & 0xffffffffffffff00;
  uVar69 = CONCAT44((int)(uVar68 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51ba) >> 0x10),(short)uVar68)) &
           0xffffffffff00ffff;
  uVar70 = *(ulong *)(in_x0 + 0x51c2) & 0xffffffffffffff00;
  uVar71 = CONCAT44((int)(uVar70 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51c2) >> 0x10),(short)uVar70)) &
           0xffffffffff00ffff;
  uVar64 = *(ulong *)(in_x0 + 0x51ca) & 0xffffffffffffff00;
  uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51ca) >> 0x10),(short)uVar64)) &
           0xffffffffff00ffff;
  uVar66 = *(ulong *)(in_x0 + 0x51d2) & 0xffffffffffffff00;
  uVar67 = CONCAT44((int)(uVar66 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51d2) >> 0x10),(short)uVar66)) &
           0xffffffffff00ffff;
  uVar60 = *(ulong *)(in_x0 + 0x51da) & 0xffffffffffffff00;
  uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51da) >> 0x10),(short)uVar60)) &
           0xffffffffff00ffff;
  uVar62 = *(ulong *)(in_x0 + 0x51e2) & 0xffffffffffffff00;
  uVar63 = CONCAT44((int)(uVar62 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51e2) >> 0x10),(short)uVar62)) &
           0xffffffffff00ffff;
  uVar56 = *(ulong *)(in_x0 + 0x51ea) & 0xffffffffffffff00;
  uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51ea) >> 0x10),(short)uVar56)) &
           0xffffffffff00ffff;
  uVar58 = *(ulong *)(in_x0 + 0x51f2) & 0xffffffffffffff00;
  uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51f2) >> 0x10),(short)uVar58)) &
           0xffffffffff00ffff;
  uVar52 = *(ulong *)(in_x0 + 0x51fa) & 0xffffffffffffff00;
  uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x51fa) >> 0x10),(short)uVar52)) &
           0xffffffffff00ffff;
  uVar54 = *(ulong *)(in_x0 + 0x5202) & 0xffffffffffffff00;
  uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5202) >> 0x10),(short)uVar54)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(in_x0 + 0x520a) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x520a) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(in_x0 + 0x5212) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5212) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(in_x0 + 0x521a) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x521a) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar46 = *(ulong *)(in_x0 + 0x5222) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5222) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(in_x0 + 0x522a) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x522a) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar42 = *(ulong *)(in_x0 + 0x5232) & 0xffffffffffffff00;
  uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5232) >> 0x10),(short)uVar42)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(in_x0 + 0x523a) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x523a) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(in_x0 + 0x5242) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5242) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  uVar32 = *(ulong *)(in_x0 + 0x524a) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x524a) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(in_x0 + 0x5252) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5252) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(in_x0 + 0x525a) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x525a) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(in_x0 + 0x5262) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5262) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(in_x0 + 0x526a) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x526a) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(in_x0 + 0x5272) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5272) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(in_x0 + 0x527a) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x527a) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(in_x0 + 0x5282) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5282) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar9 = *(ulong *)(in_x0 + 0x528a) & 0xffffffffffffff00;
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x528a) >> 0x10),(short)uVar9)) &
           0xffffffffff00ffff;
  uVar12 = *(ulong *)(in_x0 + 0x5292) & 0xffffffffffffff00;
  uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5292) >> 0x10),(short)uVar12)) &
           0xffffffffff00ffff;
  *(ulong *)(in_x0 + 0x51c2) =
       CONCAT26((short)(uVar71 >> 0x30),CONCAT24((short)(uVar70 >> 0x20),(int)uVar71)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51ba) =
       CONCAT26((short)(uVar69 >> 0x30),CONCAT24((short)(uVar68 >> 0x20),(int)uVar69)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51d2) =
       CONCAT26((short)(uVar67 >> 0x30),CONCAT24((short)(uVar66 >> 0x20),(int)uVar67)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51ca) =
       CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51e2) =
       CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51da) =
       CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51f2) =
       CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x51ea) =
       CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(in_x0 + 0x5202) =
       CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x51fa) =
       CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x5212) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x520a) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x5222) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x521a) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x5232) =
       CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x522a) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(in_x0 + 0x5242) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x523a) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x5252) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x524a) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x5262) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x525a) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x5272) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x526a) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(in_x0 + 0x5282) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(in_x0 + 0x527a) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(in_x0 + 0x5292) =
       CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(in_x0 + 0x528a) =
       CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(in_x0 + 0x52a2) = *(ulong *)(in_x0 + 0x52a2) & 0xff00ff00ff00ff00 | 0x4000400040004;
  *(ulong *)(in_x0 + 0x529a) = *(ulong *)(in_x0 + 0x529a) & 0xff00ff00ff00ff00 | 0x4000400040004;
  *(ushort *)(in_x0 + 0x52ba) = *(ushort *)(in_x0 + 0x52b2) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52bc) = *(ushort *)(in_x0 + 0x52b4) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52be) = *(ushort *)(in_x0 + 0x52b6) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52c0) = *(ushort *)(in_x0 + 0x52b8) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52aa) = *(ushort *)(in_x0 + 0x52aa) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52ac) = *(ushort *)(in_x0 + 0x52ac) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52ae) = *(ushort *)(in_x0 + 0x52ae) & 0xff00 | 4;
  *(ushort *)(in_x0 + 0x52b0) = *(ushort *)(in_x0 + 0x52b0) & 0xff00 | 4;
  uVar25 = *(ulong *)(in_x0 + 0x52ba) & 0xffffffffffffff00;
  uVar24 = CONCAT44((int)(uVar25 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52ba) >> 0x10),(short)uVar25)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(in_x0 + 0x52c2) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52c2) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar17 = *(ulong *)(in_x0 + 0x52ca) & 0xffffffffffffff00;
  uVar16 = CONCAT44((int)(uVar17 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52ca) >> 0x10),(short)uVar17)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(in_x0 + 0x52d2) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52d2) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar9 = *(ulong *)(in_x0 + 0x52da) & 0xffffffffffffff00;
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52da) >> 0x10),(short)uVar9)) &
           0xffffffffff00ffff;
  uVar12 = *(ulong *)(in_x0 + 0x52e2) & 0xffffffffffffff00;
  uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x52e2) >> 0x10),(short)uVar12)) &
           0xffffffffff00ffff;
  *(ulong *)(in_x0 + 0x52c2) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52ba) =
       CONCAT26((short)(uVar24 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar24)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52d2) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52ca) =
       CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar16)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52e2) =
       CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52da) =
       CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52f2) = *(ulong *)(in_x0 + 0x52f2) & 0xff00ff00ff00ff00 | 0x3000300030003;
  *(ulong *)(in_x0 + 0x52ea) = *(ulong *)(in_x0 + 0x52ea) & 0xff00ff00ff00ff00 | 0x3000300030003;
  *(ushort *)(in_x0 + 0x530a) = *(ushort *)(in_x0 + 0x5302) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x530c) = *(ushort *)(in_x0 + 0x5304) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x530e) = *(ushort *)(in_x0 + 0x5306) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x5310) = *(ushort *)(in_x0 + 0x5308) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x52fa) = *(ushort *)(in_x0 + 0x52fa) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x52fc) = *(ushort *)(in_x0 + 0x52fc) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x52fe) = *(ushort *)(in_x0 + 0x52fe) & 0xff00 | 2;
  *(ushort *)(in_x0 + 0x5300) = *(ushort *)(in_x0 + 0x5300) & 0xff00 | 2;
  uVar32 = *(ulong *)(in_x0 + 0x530a) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x530a) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(in_x0 + 0x5312) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5312) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(in_x0 + 0x531a) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x531a) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(in_x0 + 0x5322) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5322) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(in_x0 + 0x532a) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x532a) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(in_x0 + 0x5332) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5332) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(in_x0 + 0x533a) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x533a) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(in_x0 + 0x5342) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5342) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar9 = *(ulong *)(in_x0 + 0x534a) & 0xffffffffffffff00;
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x534a) >> 0x10),(short)uVar9)) &
           0xffffffffff00ffff;
  uVar12 = *(ulong *)(in_x0 + 0x5352) & 0xffffffffffffff00;
  uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5352) >> 0x10),(short)uVar12)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(in_x0 + 0x537a) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x537a) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(in_x0 + 0x5382) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5382) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(in_x0 + 0x538a) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x538a) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar46 = *(ulong *)(in_x0 + 0x5392) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x5392) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(in_x0 + 0x539a) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x539a) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar43 = *(ulong *)(in_x0 + 0x53a2) & 0xffffffffffffff00;
  uVar42 = CONCAT44((int)(uVar43 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x53a2) >> 0x10),(short)uVar43)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(in_x0 + 0x53aa) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x53aa) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(in_x0 + 0x53b2) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(in_x0 + 0x53b2) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  *(ulong *)(in_x0 + 0x5312) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x530a) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x5322) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x531a) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x5332) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x532a) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(in_x0 + 0x5342) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(in_x0 + 0x533a) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(in_x0 + 0x5352) =
       CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(in_x0 + 0x534a) =
       CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(in_x0 + 0x5362) = *(ulong *)(in_x0 + 0x5362) & 0xff00ff00ff00ff00 | 0x1000100010001;
  *(ulong *)(in_x0 + 0x535a) = *(ulong *)(in_x0 + 0x535a) & 0xff00ff00ff00ff00 | 0x1000100010001;
  *(ushort *)(in_x0 + 0x537a) = *(ushort *)(in_x0 + 0x5372) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x537c) = *(ushort *)(in_x0 + 0x5374) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x537e) = *(ushort *)(in_x0 + 0x5376) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x5380) = *(ushort *)(in_x0 + 0x5378) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x536a) = *(ushort *)(in_x0 + 0x536a) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x536c) = *(ushort *)(in_x0 + 0x536c) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x536e) = *(ushort *)(in_x0 + 0x536e) & 0xff00 | 1;
  *(ushort *)(in_x0 + 0x5370) = *(ushort *)(in_x0 + 0x5370) & 0xff00 | 1;
  *(ulong *)(in_x0 + 0x5382) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x537a) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x5392) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x538a) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x53a2) =
       CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar42)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x539a) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x53b2) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff;
  *(ulong *)(in_x0 + 0x53aa) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff;
  memset((void *)(in_x0 + 0x56ba),0,0x100);
  *(undefined4 *)(in_x0 + 0x56ba) = 0x80a0c0e0;
  *(undefined2 *)(in_x0 + 0x56be) = 0x4060;
  *(undefined *)(in_x0 + 0x56c0) = 0x20;
  return;
}


