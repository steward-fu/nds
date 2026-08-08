/*
 * Ghidra decompilation
 *
 * Function : Unpack15
 * Address  : 001e1ca0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::Unpack15(bool) */

void __thiscall Unpack::Unpack15(Unpack *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  ComprDataIO *this_00;
  uchar *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  short sVar23;
  short sVar27;
  undefined8 uVar24;
  ulong uVar25;
  short sVar28;
  short sVar32;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  ulong uVar41;
  ulong uVar43;
  ulong uVar45;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar51;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar57;
  ulong uVar59;
  ulong uVar61;
  ulong uVar63;
  ulong uVar65;
  ulong uVar67;
  ulong uVar69;
  ulong uVar71;
  ulong uVar73;
  ulong uVar75;
  ulong uVar77;
  ulong uVar79;
  ulong uVar26;
  ulong uVar31;
  ulong uVar36;
  ulong uVar38;
  ulong uVar40;
  ulong uVar42;
  ulong uVar44;
  ulong uVar46;
  ulong uVar50;
  ulong uVar52;
  ulong uVar56;
  ulong uVar58;
  ulong uVar60;
  ulong uVar62;
  ulong uVar64;
  ulong uVar66;
  ulong uVar68;
  ulong uVar70;
  ulong uVar72;
  ulong uVar74;
  ulong uVar76;
  ulong uVar78;
  ulong uVar80;
  
  UnpInitData(this,param_1);
  auVar19 = _DAT_00228e70;
  if (param_1) {
    *(undefined4 *)(this + 0x58bc) = 0;
    *(undefined4 *)(this + 0x58e4) = 0;
    *(undefined8 *)(this + 0x58dc) = 0;
    *(undefined4 *)(this + 0xd0) = 0;
    UnpReadBuf();
    lVar14 = *(long *)(this + 0x4da0);
    uVar17 = *(ulong *)(this + 200);
    *(ulong *)(this + 0xc0) = uVar17;
    *(long *)(this + 0x4da0) = lVar14 + -1;
    if (-1 < lVar14 + -1) goto LAB_001e1ff8;
LAB_001e21e4:
    uVar18 = *(ulong *)(this + 200);
    bVar9 = uVar17 <= uVar18;
    bVar10 = uVar18 == uVar17;
    this_00 = *(ComprDataIO **)this;
    puVar15 = (uchar *)(*(long *)(this + 0x4b90) + uVar18);
    if (bVar10) goto LAB_001e2188;
  }
  else {
    *(undefined8 *)(this + 0x58d4) = 0;
    *(undefined8 *)(this + 0x58dc) = 0;
    *(long *)(this + 0x58c4) = auVar19._8_8_;
    *(long *)(this + 0x58bc) = auVar19._0_8_;
    *(undefined8 *)(this + 0x58cc) = 0;
    *(undefined8 *)(this + 0x58e4) = 0x8000000000;
    *(undefined8 *)(this + 0x58ec) = 0x200100000080;
    *(undefined4 *)(this + 0xd0) = 0;
    UnpReadBuf();
    puVar13 = (undefined8 *)(this + 0x4dba);
    uVar20 = 0x100000000;
    uVar21 = 0x300000002;
    do {
      puVar1 = puVar13 + 2;
      sVar5 = (short)uVar20;
      sVar23 = sVar5 + 4;
      sVar6 = (short)((ulong)uVar20 >> 0x20);
      sVar27 = sVar6 + 4;
      sVar7 = (short)uVar21;
      sVar28 = sVar7 + 4;
      sVar8 = (short)((ulong)uVar21 >> 0x20);
      sVar32 = sVar8 + 4;
      auVar19._2_2_ = sVar6;
      auVar19._0_2_ = sVar5;
      auVar19._4_2_ = sVar7;
      auVar19._6_2_ = sVar8;
      auVar19._8_2_ = sVar23;
      auVar19._10_2_ = sVar27;
      auVar19._12_2_ = sVar28;
      auVar19._14_2_ = sVar32;
      auVar19 = NEON_neg(auVar19,2);
      uVar24 = CONCAT26(sVar8 << 8,CONCAT24(sVar7 << 8,CONCAT22(sVar6 << 8,sVar5 << 8)));
      uVar29 = CONCAT26(sVar32 * 0x100,
                        CONCAT24(sVar28 * 0x100,CONCAT22(sVar27 * 0x100,sVar23 * 0x100)));
      puVar13[0x41] = CONCAT26(sVar32,CONCAT24(sVar28,CONCAT22(sVar27,sVar23)));
      puVar13[0x40] = CONCAT26(sVar8,CONCAT24(sVar7,CONCAT22(sVar6,sVar5)));
      puVar13[1] = uVar29;
      *puVar13 = uVar24;
      puVar13[0x81] = uVar29;
      puVar13[0x80] = uVar24;
      *(short *)(puVar13 + 0xc2) = auVar19._8_2_ << 8;
      *(short *)((long)puVar13 + 0x612) = auVar19._10_2_ << 8;
      *(short *)((long)puVar13 + 0x614) = auVar19._12_2_ << 8;
      *(short *)((long)puVar13 + 0x616) = auVar19._14_2_ << 8;
      *(short *)(puVar13 + 0xc0) = auVar19._0_2_ << 8;
      *(short *)((long)puVar13 + 0x602) = auVar19._2_2_ << 8;
      *(short *)((long)puVar13 + 0x604) = auVar19._4_2_ << 8;
      *(short *)((long)puVar13 + 0x606) = auVar19._6_2_ << 8;
      puVar13 = puVar1;
      uVar20 = CONCAT44((int)((ulong)uVar20 >> 0x20) + 8,(int)uVar20 + 8);
      uVar21 = CONCAT44((int)((ulong)uVar21 >> 0x20) + 8,(int)uVar21 + 8);
    } while ((undefined8 *)(this + 0x4fba) != puVar1);
    memset(this + 0x55ba,0,0x100);
    memset(this + 0x56ba,0,0x100);
    memset(this + 0x57ba,0,0x100);
    uVar77 = *(ulong *)(this + 0x51ba) & 0xffffffffffffff00;
    uVar78 = CONCAT44((int)(uVar77 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51ba) >> 0x10),(short)uVar77)) &
             0xffffffffff00ffff;
    uVar79 = *(ulong *)(this + 0x51c2) & 0xffffffffffffff00;
    uVar80 = CONCAT44((int)(uVar79 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51c2) >> 0x10),(short)uVar79)) &
             0xffffffffff00ffff;
    uVar73 = *(ulong *)(this + 0x51ca) & 0xffffffffffffff00;
    uVar74 = CONCAT44((int)(uVar73 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51ca) >> 0x10),(short)uVar73)) &
             0xffffffffff00ffff;
    uVar75 = *(ulong *)(this + 0x51d2) & 0xffffffffffffff00;
    uVar76 = CONCAT44((int)(uVar75 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51d2) >> 0x10),(short)uVar75)) &
             0xffffffffff00ffff;
    uVar69 = *(ulong *)(this + 0x51da) & 0xffffffffffffff00;
    uVar70 = CONCAT44((int)(uVar69 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51da) >> 0x10),(short)uVar69)) &
             0xffffffffff00ffff;
    uVar71 = *(ulong *)(this + 0x51e2) & 0xffffffffffffff00;
    uVar72 = CONCAT44((int)(uVar71 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51e2) >> 0x10),(short)uVar71)) &
             0xffffffffff00ffff;
    uVar65 = *(ulong *)(this + 0x51ea) & 0xffffffffffffff00;
    uVar66 = CONCAT44((int)(uVar65 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51ea) >> 0x10),(short)uVar65)) &
             0xffffffffff00ffff;
    uVar67 = *(ulong *)(this + 0x51f2) & 0xffffffffffffff00;
    uVar68 = CONCAT44((int)(uVar67 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51f2) >> 0x10),(short)uVar67)) &
             0xffffffffff00ffff;
    uVar61 = *(ulong *)(this + 0x51fa) & 0xffffffffffffff00;
    uVar62 = CONCAT44((int)(uVar61 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x51fa) >> 0x10),(short)uVar61)) &
             0xffffffffff00ffff;
    uVar63 = *(ulong *)(this + 0x5202) & 0xffffffffffffff00;
    uVar64 = CONCAT44((int)(uVar63 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5202) >> 0x10),(short)uVar63)) &
             0xffffffffff00ffff;
    uVar57 = *(ulong *)(this + 0x520a) & 0xffffffffffffff00;
    uVar58 = CONCAT44((int)(uVar57 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x520a) >> 0x10),(short)uVar57)) &
             0xffffffffff00ffff;
    uVar59 = *(ulong *)(this + 0x5212) & 0xffffffffffffff00;
    uVar60 = CONCAT44((int)(uVar59 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5212) >> 0x10),(short)uVar59)) &
             0xffffffffff00ffff;
    uVar53 = *(ulong *)(this + 0x521a) & 0xffffffffffffff00;
    uVar54 = CONCAT44((int)(uVar53 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x521a) >> 0x10),(short)uVar53)) &
             0xffffffffff00ffff;
    uVar55 = *(ulong *)(this + 0x5222) & 0xffffffffffffff00;
    uVar56 = CONCAT44((int)(uVar55 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5222) >> 0x10),(short)uVar55)) &
             0xffffffffff00ffff;
    uVar49 = *(ulong *)(this + 0x522a) & 0xffffffffffffff00;
    uVar50 = CONCAT44((int)(uVar49 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x522a) >> 0x10),(short)uVar49)) &
             0xffffffffff00ffff;
    uVar51 = *(ulong *)(this + 0x5232) & 0xffffffffffffff00;
    uVar52 = CONCAT44((int)(uVar51 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5232) >> 0x10),(short)uVar51)) &
             0xffffffffff00ffff;
    uVar45 = *(ulong *)(this + 0x523a) & 0xffffffffffffff00;
    uVar46 = CONCAT44((int)(uVar45 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x523a) >> 0x10),(short)uVar45)) &
             0xffffffffff00ffff;
    uVar47 = *(ulong *)(this + 0x5242) & 0xffffffffffffff00;
    uVar48 = CONCAT44((int)(uVar47 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5242) >> 0x10),(short)uVar47)) &
             0xffffffffff00ffff;
    uVar41 = *(ulong *)(this + 0x524a) & 0xffffffffffffff00;
    uVar42 = CONCAT44((int)(uVar41 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x524a) >> 0x10),(short)uVar41)) &
             0xffffffffff00ffff;
    uVar43 = *(ulong *)(this + 0x5252) & 0xffffffffffffff00;
    uVar44 = CONCAT44((int)(uVar43 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5252) >> 0x10),(short)uVar43)) &
             0xffffffffff00ffff;
    uVar37 = *(ulong *)(this + 0x525a) & 0xffffffffffffff00;
    uVar38 = CONCAT44((int)(uVar37 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x525a) >> 0x10),(short)uVar37)) &
             0xffffffffff00ffff;
    uVar39 = *(ulong *)(this + 0x5262) & 0xffffffffffffff00;
    uVar40 = CONCAT44((int)(uVar39 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5262) >> 0x10),(short)uVar39)) &
             0xffffffffff00ffff;
    uVar33 = *(ulong *)(this + 0x526a) & 0xffffffffffffff00;
    uVar34 = CONCAT44((int)(uVar33 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x526a) >> 0x10),(short)uVar33)) &
             0xffffffffff00ffff;
    uVar35 = *(ulong *)(this + 0x5272) & 0xffffffffffffff00;
    uVar36 = CONCAT44((int)(uVar35 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5272) >> 0x10),(short)uVar35)) &
             0xffffffffff00ffff;
    uVar25 = *(ulong *)(this + 0x527a) & 0xffffffffffffff00;
    uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x527a) >> 0x10),(short)uVar25)) &
             0xffffffffff00ffff;
    uVar30 = *(ulong *)(this + 0x5282) & 0xffffffffffffff00;
    uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5282) >> 0x10),(short)uVar30)) &
             0xffffffffff00ffff;
    uVar18 = *(ulong *)(this + 0x528a) & 0xffffffffffffff00;
    uVar17 = CONCAT44((int)(uVar18 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x528a) >> 0x10),(short)uVar18)) &
             0xffffffffff00ffff;
    uVar22 = *(ulong *)(this + 0x5292) & 0xffffffffffffff00;
    uVar16 = CONCAT44((int)(uVar22 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5292) >> 0x10),(short)uVar22)) &
             0xffffffffff00ffff;
    *(ulong *)(this + 0x51c2) =
         CONCAT26((short)(uVar80 >> 0x30),CONCAT24((short)(uVar79 >> 0x20),(int)uVar80)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51ba) =
         CONCAT26((short)(uVar78 >> 0x30),CONCAT24((short)(uVar77 >> 0x20),(int)uVar78)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51d2) =
         CONCAT26((short)(uVar76 >> 0x30),CONCAT24((short)(uVar75 >> 0x20),(int)uVar76)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51ca) =
         CONCAT26((short)(uVar74 >> 0x30),CONCAT24((short)(uVar73 >> 0x20),(int)uVar74)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51e2) =
         CONCAT26((short)(uVar72 >> 0x30),CONCAT24((short)(uVar71 >> 0x20),(int)uVar72)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51da) =
         CONCAT26((short)(uVar70 >> 0x30),CONCAT24((short)(uVar69 >> 0x20),(int)uVar70)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51f2) =
         CONCAT26((short)(uVar68 >> 0x30),CONCAT24((short)(uVar67 >> 0x20),(int)uVar68)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x51ea) =
         CONCAT26((short)(uVar66 >> 0x30),CONCAT24((short)(uVar65 >> 0x20),(int)uVar66)) &
         0xff00ff00ffffffff | 0x7000700070007;
    *(ulong *)(this + 0x5202) =
         CONCAT26((short)(uVar64 >> 0x30),CONCAT24((short)(uVar63 >> 0x20),(int)uVar64)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x51fa) =
         CONCAT26((short)(uVar62 >> 0x30),CONCAT24((short)(uVar61 >> 0x20),(int)uVar62)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x5212) =
         CONCAT26((short)(uVar60 >> 0x30),CONCAT24((short)(uVar59 >> 0x20),(int)uVar60)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x520a) =
         CONCAT26((short)(uVar58 >> 0x30),CONCAT24((short)(uVar57 >> 0x20),(int)uVar58)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x5222) =
         CONCAT26((short)(uVar56 >> 0x30),CONCAT24((short)(uVar55 >> 0x20),(int)uVar56)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x521a) =
         CONCAT26((short)(uVar54 >> 0x30),CONCAT24((short)(uVar53 >> 0x20),(int)uVar54)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x5232) =
         CONCAT26((short)(uVar52 >> 0x30),CONCAT24((short)(uVar51 >> 0x20),(int)uVar52)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x522a) =
         CONCAT26((short)(uVar50 >> 0x30),CONCAT24((short)(uVar49 >> 0x20),(int)uVar50)) &
         0xff00ff00ffffffff | 0x6000600060006;
    *(ulong *)(this + 0x5242) =
         CONCAT26((short)(uVar48 >> 0x30),CONCAT24((short)(uVar47 >> 0x20),(int)uVar48)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x523a) =
         CONCAT26((short)(uVar46 >> 0x30),CONCAT24((short)(uVar45 >> 0x20),(int)uVar46)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x5252) =
         CONCAT26((short)(uVar44 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar44)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x524a) =
         CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar42)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x5262) =
         CONCAT26((short)(uVar40 >> 0x30),CONCAT24((short)(uVar39 >> 0x20),(int)uVar40)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x525a) =
         CONCAT26((short)(uVar38 >> 0x30),CONCAT24((short)(uVar37 >> 0x20),(int)uVar38)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x5272) =
         CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x526a) =
         CONCAT26((short)(uVar34 >> 0x30),CONCAT24((short)(uVar33 >> 0x20),(int)uVar34)) &
         0xff00ff00ffffffff | 0x5000500050005;
    *(ulong *)(this + 0x5282) =
         CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
         0xff00ff00ffffffff | 0x4000400040004;
    *(ulong *)(this + 0x527a) =
         CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
         0xff00ff00ffffffff | 0x4000400040004;
    *(ulong *)(this + 0x5292) =
         CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar16)) &
         0xff00ff00ffffffff | 0x4000400040004;
    *(ulong *)(this + 0x528a) =
         CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar17)) &
         0xff00ff00ffffffff | 0x4000400040004;
    *(ulong *)(this + 0x52a2) = *(ulong *)(this + 0x52a2) & 0xff00ff00ff00ff00 | 0x4000400040004;
    *(ulong *)(this + 0x529a) = *(ulong *)(this + 0x529a) & 0xff00ff00ff00ff00 | 0x4000400040004;
    *(ushort *)(this + 0x52ba) = *(ushort *)(this + 0x52b2) & 0xff00 | 4;
    *(ushort *)(this + 0x52bc) = *(ushort *)(this + 0x52b4) & 0xff00 | 4;
    *(ushort *)(this + 0x52be) = *(ushort *)(this + 0x52b6) & 0xff00 | 4;
    *(ushort *)(this + 0x52c0) = *(ushort *)(this + 0x52b8) & 0xff00 | 4;
    *(ushort *)(this + 0x52aa) = *(ushort *)(this + 0x52aa) & 0xff00 | 4;
    *(ushort *)(this + 0x52ac) = *(ushort *)(this + 0x52ac) & 0xff00 | 4;
    *(ushort *)(this + 0x52ae) = *(ushort *)(this + 0x52ae) & 0xff00 | 4;
    *(ushort *)(this + 0x52b0) = *(ushort *)(this + 0x52b0) & 0xff00 | 4;
    uVar34 = *(ulong *)(this + 0x52ba) & 0xffffffffffffff00;
    uVar33 = CONCAT44((int)(uVar34 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52ba) >> 0x10),(short)uVar34)) &
             0xffffffffff00ffff;
    uVar35 = *(ulong *)(this + 0x52c2) & 0xffffffffffffff00;
    uVar36 = CONCAT44((int)(uVar35 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52c2) >> 0x10),(short)uVar35)) &
             0xffffffffff00ffff;
    uVar25 = *(ulong *)(this + 0x52ca) & 0xffffffffffffff00;
    uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52ca) >> 0x10),(short)uVar25)) &
             0xffffffffff00ffff;
    uVar30 = *(ulong *)(this + 0x52d2) & 0xffffffffffffff00;
    uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52d2) >> 0x10),(short)uVar30)) &
             0xffffffffff00ffff;
    uVar18 = *(ulong *)(this + 0x52da) & 0xffffffffffffff00;
    uVar17 = CONCAT44((int)(uVar18 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52da) >> 0x10),(short)uVar18)) &
             0xffffffffff00ffff;
    uVar22 = *(ulong *)(this + 0x52e2) & 0xffffffffffffff00;
    uVar16 = CONCAT44((int)(uVar22 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x52e2) >> 0x10),(short)uVar22)) &
             0xffffffffff00ffff;
    *(ulong *)(this + 0x52c2) =
         CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52ba) =
         CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar33)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52d2) =
         CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52ca) =
         CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52e2) =
         CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar16)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52da) =
         CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar17)) &
         0xff00ff00ffffffff | 0x3000300030003;
    *(ulong *)(this + 0x52f2) = *(ulong *)(this + 0x52f2) & 0xff00ff00ff00ff00 | 0x3000300030003;
    *(ulong *)(this + 0x52ea) = *(ulong *)(this + 0x52ea) & 0xff00ff00ff00ff00 | 0x3000300030003;
    *(ushort *)(this + 0x530a) = *(ushort *)(this + 0x5302) & 0xff00 | 2;
    *(ushort *)(this + 0x530c) = *(ushort *)(this + 0x5304) & 0xff00 | 2;
    *(ushort *)(this + 0x530e) = *(ushort *)(this + 0x5306) & 0xff00 | 2;
    *(ushort *)(this + 0x5310) = *(ushort *)(this + 0x5308) & 0xff00 | 2;
    *(ushort *)(this + 0x52fa) = *(ushort *)(this + 0x52fa) & 0xff00 | 2;
    *(ushort *)(this + 0x52fc) = *(ushort *)(this + 0x52fc) & 0xff00 | 2;
    *(ushort *)(this + 0x52fe) = *(ushort *)(this + 0x52fe) & 0xff00 | 2;
    *(ushort *)(this + 0x5300) = *(ushort *)(this + 0x5300) & 0xff00 | 2;
    uVar41 = *(ulong *)(this + 0x530a) & 0xffffffffffffff00;
    uVar42 = CONCAT44((int)(uVar41 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x530a) >> 0x10),(short)uVar41)) &
             0xffffffffff00ffff;
    uVar43 = *(ulong *)(this + 0x5312) & 0xffffffffffffff00;
    uVar44 = CONCAT44((int)(uVar43 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5312) >> 0x10),(short)uVar43)) &
             0xffffffffff00ffff;
    uVar37 = *(ulong *)(this + 0x531a) & 0xffffffffffffff00;
    uVar38 = CONCAT44((int)(uVar37 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x531a) >> 0x10),(short)uVar37)) &
             0xffffffffff00ffff;
    uVar39 = *(ulong *)(this + 0x5322) & 0xffffffffffffff00;
    uVar40 = CONCAT44((int)(uVar39 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5322) >> 0x10),(short)uVar39)) &
             0xffffffffff00ffff;
    uVar33 = *(ulong *)(this + 0x532a) & 0xffffffffffffff00;
    uVar34 = CONCAT44((int)(uVar33 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x532a) >> 0x10),(short)uVar33)) &
             0xffffffffff00ffff;
    uVar35 = *(ulong *)(this + 0x5332) & 0xffffffffffffff00;
    uVar36 = CONCAT44((int)(uVar35 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5332) >> 0x10),(short)uVar35)) &
             0xffffffffff00ffff;
    uVar25 = *(ulong *)(this + 0x533a) & 0xffffffffffffff00;
    uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x533a) >> 0x10),(short)uVar25)) &
             0xffffffffff00ffff;
    uVar30 = *(ulong *)(this + 0x5342) & 0xffffffffffffff00;
    uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5342) >> 0x10),(short)uVar30)) &
             0xffffffffff00ffff;
    uVar18 = *(ulong *)(this + 0x534a) & 0xffffffffffffff00;
    uVar17 = CONCAT44((int)(uVar18 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x534a) >> 0x10),(short)uVar18)) &
             0xffffffffff00ffff;
    uVar22 = *(ulong *)(this + 0x5352) & 0xffffffffffffff00;
    uVar16 = CONCAT44((int)(uVar22 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5352) >> 0x10),(short)uVar22)) &
             0xffffffffff00ffff;
    uVar57 = *(ulong *)(this + 0x537a) & 0xffffffffffffff00;
    uVar58 = CONCAT44((int)(uVar57 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x537a) >> 0x10),(short)uVar57)) &
             0xffffffffff00ffff;
    uVar59 = *(ulong *)(this + 0x5382) & 0xffffffffffffff00;
    uVar60 = CONCAT44((int)(uVar59 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5382) >> 0x10),(short)uVar59)) &
             0xffffffffff00ffff;
    uVar54 = *(ulong *)(this + 0x538a) & 0xffffffffffffff00;
    uVar53 = CONCAT44((int)(uVar54 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x538a) >> 0x10),(short)uVar54)) &
             0xffffffffff00ffff;
    uVar55 = *(ulong *)(this + 0x5392) & 0xffffffffffffff00;
    uVar56 = CONCAT44((int)(uVar55 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x5392) >> 0x10),(short)uVar55)) &
             0xffffffffff00ffff;
    uVar49 = *(ulong *)(this + 0x539a) & 0xffffffffffffff00;
    uVar50 = CONCAT44((int)(uVar49 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x539a) >> 0x10),(short)uVar49)) &
             0xffffffffff00ffff;
    uVar51 = *(ulong *)(this + 0x53a2) & 0xffffffffffffff00;
    uVar52 = CONCAT44((int)(uVar51 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x53a2) >> 0x10),(short)uVar51)) &
             0xffffffffff00ffff;
    uVar45 = *(ulong *)(this + 0x53aa) & 0xffffffffffffff00;
    uVar46 = CONCAT44((int)(uVar45 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x53aa) >> 0x10),(short)uVar45)) &
             0xffffffffff00ffff;
    uVar48 = *(ulong *)(this + 0x53b2) & 0xffffffffffffff00;
    uVar47 = CONCAT44((int)(uVar48 >> 0x20),
                      CONCAT22((short)(*(ulong *)(this + 0x53b2) >> 0x10),(short)uVar48)) &
             0xffffffffff00ffff;
    *(ulong *)(this + 0x5312) =
         CONCAT26((short)(uVar44 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar44)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x530a) =
         CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar42)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x5322) =
         CONCAT26((short)(uVar40 >> 0x30),CONCAT24((short)(uVar39 >> 0x20),(int)uVar40)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x531a) =
         CONCAT26((short)(uVar38 >> 0x30),CONCAT24((short)(uVar37 >> 0x20),(int)uVar38)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x5332) =
         CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x532a) =
         CONCAT26((short)(uVar34 >> 0x30),CONCAT24((short)(uVar33 >> 0x20),(int)uVar34)) &
         0xff00ff00ffffffff | 0x2000200020002;
    *(ulong *)(this + 0x5342) =
         CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
         0xff00ff00ffffffff | 0x1000100010001;
    *(ulong *)(this + 0x533a) =
         CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
         0xff00ff00ffffffff | 0x1000100010001;
    *(ulong *)(this + 0x5352) =
         CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar16)) &
         0xff00ff00ffffffff | 0x1000100010001;
    *(ulong *)(this + 0x534a) =
         CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar17)) &
         0xff00ff00ffffffff | 0x1000100010001;
    *(ulong *)(this + 0x5362) = *(ulong *)(this + 0x5362) & 0xff00ff00ff00ff00 | 0x1000100010001;
    *(ulong *)(this + 0x535a) = *(ulong *)(this + 0x535a) & 0xff00ff00ff00ff00 | 0x1000100010001;
    *(ushort *)(this + 0x537a) = *(ushort *)(this + 0x5372) & 0xff00 | 1;
    *(ushort *)(this + 0x537c) = *(ushort *)(this + 0x5374) & 0xff00 | 1;
    *(ushort *)(this + 0x537e) = *(ushort *)(this + 0x5376) & 0xff00 | 1;
    *(ushort *)(this + 0x5380) = *(ushort *)(this + 0x5378) & 0xff00 | 1;
    *(ushort *)(this + 0x536a) = *(ushort *)(this + 0x536a) & 0xff00 | 1;
    *(ushort *)(this + 0x536c) = *(ushort *)(this + 0x536c) & 0xff00 | 1;
    *(ushort *)(this + 0x536e) = *(ushort *)(this + 0x536e) & 0xff00 | 1;
    *(ushort *)(this + 0x5370) = *(ushort *)(this + 0x5370) & 0xff00 | 1;
    *(ulong *)(this + 0x5382) =
         CONCAT26((short)(uVar60 >> 0x30),CONCAT24((short)(uVar59 >> 0x20),(int)uVar60)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x537a) =
         CONCAT26((short)(uVar58 >> 0x30),CONCAT24((short)(uVar57 >> 0x20),(int)uVar58)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x5392) =
         CONCAT26((short)(uVar56 >> 0x30),CONCAT24((short)(uVar55 >> 0x20),(int)uVar56)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x538a) =
         CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar53)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x53a2) =
         CONCAT26((short)(uVar52 >> 0x30),CONCAT24((short)(uVar51 >> 0x20),(int)uVar52)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x539a) =
         CONCAT26((short)(uVar50 >> 0x30),CONCAT24((short)(uVar49 >> 0x20),(int)uVar50)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x53b2) =
         CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar47)) &
         0xff00ff00ffffffff;
    *(ulong *)(this + 0x53aa) =
         CONCAT26((short)(uVar46 >> 0x30),CONCAT24((short)(uVar45 >> 0x20),(int)uVar46)) &
         0xff00ff00ffffffff;
    memset(this + 0x56ba,0,0x100);
    *(undefined4 *)(this + 0x56ba) = 0x80a0c0e0;
    *(undefined2 *)(this + 0x56be) = 0x4060;
    this[0x56c0] = (Unpack)0x20;
    *(undefined8 *)(this + 0xc0) = 0;
    lVar14 = *(long *)(this + 0x4da0);
    uVar17 = 0;
    *(long *)(this + 0x4da0) = lVar14 + -1;
    if (lVar14 + -1 < 0) goto LAB_001e21e4;
LAB_001e1ff8:
    GetFlagsBuf();
    *(undefined4 *)(this + 0x58e4) = 8;
    if (*(long *)(this + 0x4da0) < 0) {
      uVar17 = *(ulong *)(this + 0xc0);
      goto LAB_001e21e4;
    }
    do {
      while( true ) {
        uVar18 = *(ulong *)(this + 0xe980);
        uVar17 = uVar18 & *(ulong *)(this + 0xc0);
        *(ulong *)(this + 0xc0) = uVar17;
        if (*(int *)(this + 0xd0) + -0x1d <= *(int *)(this + 8)) break;
        uVar16 = *(ulong *)(this + 200);
        if ((uVar16 - uVar17 & uVar18) < 0x10e && uVar16 != uVar17) goto LAB_001e2108;
LAB_001e2040:
        if (*(int *)(this + 0x58dc) == 0) goto LAB_001e2048;
LAB_001e2158:
        HuffDecode();
LAB_001e2160:
        if (*(long *)(this + 0x4da0) < 0) goto LAB_001e2168;
      }
      cVar11 = UnpReadBuf();
      uVar17 = *(ulong *)(this + 0xc0);
      if (cVar11 == '\0') goto LAB_001e21e4;
      uVar16 = *(ulong *)(this + 200);
      uVar18 = *(ulong *)(this + 0xe980);
      if (0x10d < (uVar16 - uVar17 & uVar18) || uVar16 == uVar17) goto LAB_001e2040;
LAB_001e2108:
      this[0x4daa] = (Unpack)0x1;
      if (uVar17 < uVar16) {
        ComprDataIO::UnpWrite
                  (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar16),
                   (long)-(int)uVar16 & uVar18);
        ComprDataIO::UnpWrite
                  (*(ComprDataIO **)this,*(uchar **)(this + 0x4b90),*(ulong *)(this + 0xc0));
        this[0x4da9] = (Unpack)0x1;
      }
      else {
        ComprDataIO::UnpWrite
                  (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar16),
                   uVar17 - uVar16);
      }
      *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
      if (*(int *)(this + 0x58dc) != 0) goto LAB_001e2158;
LAB_001e2048:
      iVar2 = *(int *)(this + 0x58e4);
      iVar4 = iVar2 + -1;
      *(int *)(this + 0x58e4) = iVar4;
      if (-1 < iVar4) {
        uVar12 = *(uint *)(this + 0x58bc) * 2;
        if ((*(uint *)(this + 0x58bc) >> 7 & 1) == 0) {
          iVar2 = iVar2 + -2;
          *(uint *)(this + 0x58bc) = uVar12;
          *(int *)(this + 0x58e4) = iVar2;
          if (iVar2 == -1) {
            GetFlagsBuf();
            uVar12 = *(uint *)(this + 0x58bc);
            *(undefined4 *)(this + 0x58e4) = 7;
          }
          *(uint *)(this + 0x58bc) = uVar12 * 2;
          if ((uVar12 >> 7 & 1) != 0) goto LAB_001e2094;
LAB_001e2294:
          ShortLZ();
          goto LAB_001e20ac;
        }
LAB_001e224c:
        *(uint *)(this + 0x58bc) = uVar12;
        if (*(uint *)(this + 0x58e8) < *(uint *)(this + 0x58ec)) goto LAB_001e20a4;
        HuffDecode();
        goto LAB_001e2160;
      }
      GetFlagsBuf();
      uVar3 = *(uint *)(this + 0x58bc);
      *(undefined4 *)(this + 0x58e4) = 7;
      uVar12 = uVar3 * 2;
      if ((uVar3 >> 7 & 1) != 0) goto LAB_001e224c;
      *(uint *)(this + 0x58bc) = uVar3 * 4;
      *(undefined4 *)(this + 0x58e4) = 6;
      if ((uVar12 >> 7 & 1) == 0) goto LAB_001e2294;
LAB_001e2094:
      if (*(uint *)(this + 0x58e8) < *(uint *)(this + 0x58ec)) goto LAB_001e2158;
LAB_001e20a4:
      LongLZ();
LAB_001e20ac:
    } while (-1 < *(long *)(this + 0x4da0));
LAB_001e2168:
    uVar17 = *(ulong *)(this + 0xc0);
    uVar18 = *(ulong *)(this + 200);
    bVar9 = uVar17 <= uVar18;
    bVar10 = uVar18 == uVar17;
    this_00 = *(ComprDataIO **)this;
    puVar15 = (uchar *)(*(long *)(this + 0x4b90) + uVar18);
    if (bVar10) goto LAB_001e2188;
  }
  this[0x4daa] = (Unpack)0x1;
  if (bVar9 && !bVar10) {
    ComprDataIO::UnpWrite(this_00,puVar15,(long)-(int)uVar18 & *(ulong *)(this + 0xe980));
    ComprDataIO::UnpWrite(*(ComprDataIO **)this,*(uchar **)(this + 0x4b90),*(ulong *)(this + 0xc0));
    this[0x4da9] = (Unpack)0x1;
    *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
    return;
  }
LAB_001e2188:
  ComprDataIO::UnpWrite(this_00,puVar15,uVar17 - uVar18);
  *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  return;
}


