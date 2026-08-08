/*
 * Ghidra decompilation
 *
 * Function : _ZN6UnpackC2EP11ComprDataIO
 * Address  : 001e4bc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::Unpack(ComprDataIO*) */

void __thiscall Unpack::Unpack(Unpack *this,ComprDataIO *param_1)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar10;
  ulong uVar11;
  undefined auVar13 [16];
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
  ulong uVar9;
  ulong uVar12;
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
  
  BitInput::BitInput((BitInput *)(this + 8),true);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  memset(this + 0x4b98,0,0x100);
  memset(this + 0x4c98,0,0x100);
  *(undefined8 *)(this + 0xe4d8) = 0;
  *(undefined8 *)(this + 0xa088) = 0;
  *(undefined8 *)(this + 0xa080) = 0;
  *(undefined8 *)(this + 0xa078) = 0;
                    /* try { // try from 001e4c6c to 001e4c6f has its CatchHandler @ 001e5018 */
  RarVM::RarVM((RarVM *)(this + 0xe8b0));
                    /* try { // try from 001e4c80 to 001e4c83 has its CatchHandler @ 001e50b8 */
  BitInput::BitInput((BitInput *)(this + 0xe8f8),true);
  *(undefined8 *)(this + 0xe910) = 0;
  *(undefined8 *)(this + 0xe920) = 0;
  *(undefined8 *)(this + 0xe918) = 0;
  *(undefined8 *)(this + 0xe928) = 0;
  *(undefined8 *)(this + 0xe930) = 0;
  *(undefined8 *)(this + 0xe940) = 0;
  *(undefined8 *)(this + 0xe938) = 0;
  *(undefined8 *)(this + 0xe948) = 0;
  *(undefined8 *)(this + 0xe950) = 0;
  *(undefined8 *)(this + 0xe960) = 0;
  *(undefined8 *)(this + 0xe958) = 0;
  *(undefined8 *)(this + 0xe968) = 0;
  *(ComprDataIO **)this = param_1;
  *(undefined8 *)(this + 0x4b90) = 0;
  this[0x4d98] = (Unpack)0x0;
  *(undefined2 *)(this + 0x4da8) = 0;
  this[0x4daa] = (Unpack)0x0;
  *(undefined4 *)(this + 0x30) = 1;
                    /* try { // try from 001e4cd4 to 001e4cd7 has its CatchHandler @ 001e5074 */
  uVar6 = CreateThreadPool();
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xe978) = 0;
  *(undefined8 *)(this + 0xe980) = 0;
  UnpInitData(this,false);
  auVar13 = _DAT_00228e70;
  *(undefined8 *)(this + 0x58d4) = 0;
  *(undefined8 *)(this + 0x58dc) = 0;
  *(long *)(this + 0x58c4) = auVar13._8_8_;
  *(long *)(this + 0x58bc) = auVar13._0_8_;
  *(undefined8 *)(this + 0x58cc) = 0;
  *(undefined8 *)(this + 0x58e4) = 0x8000000000;
  *(undefined8 *)(this + 0x58ec) = 0x200100000080;
  *(undefined4 *)(this + 0xd0) = 0;
  puVar7 = (undefined8 *)(this + 0x4dba);
  uVar6 = 0x100000000;
  uVar10 = 0x300000002;
  do {
    puVar1 = puVar7 + 2;
    sVar2 = (short)uVar6;
    sVar14 = sVar2 + 4;
    sVar3 = (short)((ulong)uVar6 >> 0x20);
    sVar18 = sVar3 + 4;
    sVar4 = (short)uVar10;
    sVar19 = sVar4 + 4;
    sVar5 = (short)((ulong)uVar10 >> 0x20);
    sVar23 = sVar5 + 4;
    auVar13._2_2_ = sVar3;
    auVar13._0_2_ = sVar2;
    auVar13._4_2_ = sVar4;
    auVar13._6_2_ = sVar5;
    auVar13._8_2_ = sVar14;
    auVar13._10_2_ = sVar18;
    auVar13._12_2_ = sVar19;
    auVar13._14_2_ = sVar23;
    auVar13 = NEON_neg(auVar13,2);
    uVar15 = CONCAT26(sVar5 << 8,CONCAT24(sVar4 << 8,CONCAT22(sVar3 << 8,sVar2 << 8)));
    uVar20 = CONCAT26(sVar23 * 0x100,
                      CONCAT24(sVar19 * 0x100,CONCAT22(sVar18 * 0x100,sVar14 * 0x100)));
    puVar7[0x41] = CONCAT26(sVar23,CONCAT24(sVar19,CONCAT22(sVar18,sVar14)));
    puVar7[0x40] = CONCAT26(sVar5,CONCAT24(sVar4,CONCAT22(sVar3,sVar2)));
    puVar7[1] = uVar20;
    *puVar7 = uVar15;
    puVar7[0x81] = uVar20;
    puVar7[0x80] = uVar15;
    *(short *)(puVar7 + 0xc2) = auVar13._8_2_ << 8;
    *(short *)((long)puVar7 + 0x612) = auVar13._10_2_ << 8;
    *(short *)((long)puVar7 + 0x614) = auVar13._12_2_ << 8;
    *(short *)((long)puVar7 + 0x616) = auVar13._14_2_ << 8;
    *(short *)(puVar7 + 0xc0) = auVar13._0_2_ << 8;
    *(short *)((long)puVar7 + 0x602) = auVar13._2_2_ << 8;
    *(short *)((long)puVar7 + 0x604) = auVar13._4_2_ << 8;
    *(short *)((long)puVar7 + 0x606) = auVar13._6_2_ << 8;
    puVar7 = puVar1;
    uVar6 = CONCAT44((int)((ulong)uVar6 >> 0x20) + 8,(int)uVar6 + 8);
    uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20) + 8,(int)uVar10 + 8);
  } while ((undefined8 *)(this + 0x4fba) != puVar1);
  memset(this + 0x55ba,0,0x100);
  memset(this + 0x56ba,0,0x100);
  memset(this + 0x57ba,0,0x100);
  uVar68 = *(ulong *)(this + 0x51ba) & 0xffffffffffffff00;
  uVar69 = CONCAT44((int)(uVar68 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51ba) >> 0x10),(short)uVar68)) &
           0xffffffffff00ffff;
  uVar70 = *(ulong *)(this + 0x51c2) & 0xffffffffffffff00;
  uVar71 = CONCAT44((int)(uVar70 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51c2) >> 0x10),(short)uVar70)) &
           0xffffffffff00ffff;
  uVar64 = *(ulong *)(this + 0x51ca) & 0xffffffffffffff00;
  uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51ca) >> 0x10),(short)uVar64)) &
           0xffffffffff00ffff;
  uVar66 = *(ulong *)(this + 0x51d2) & 0xffffffffffffff00;
  uVar67 = CONCAT44((int)(uVar66 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51d2) >> 0x10),(short)uVar66)) &
           0xffffffffff00ffff;
  uVar60 = *(ulong *)(this + 0x51da) & 0xffffffffffffff00;
  uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51da) >> 0x10),(short)uVar60)) &
           0xffffffffff00ffff;
  uVar62 = *(ulong *)(this + 0x51e2) & 0xffffffffffffff00;
  uVar63 = CONCAT44((int)(uVar62 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51e2) >> 0x10),(short)uVar62)) &
           0xffffffffff00ffff;
  uVar56 = *(ulong *)(this + 0x51ea) & 0xffffffffffffff00;
  uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51ea) >> 0x10),(short)uVar56)) &
           0xffffffffff00ffff;
  uVar58 = *(ulong *)(this + 0x51f2) & 0xffffffffffffff00;
  uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51f2) >> 0x10),(short)uVar58)) &
           0xffffffffff00ffff;
  uVar52 = *(ulong *)(this + 0x51fa) & 0xffffffffffffff00;
  uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x51fa) >> 0x10),(short)uVar52)) &
           0xffffffffff00ffff;
  uVar54 = *(ulong *)(this + 0x5202) & 0xffffffffffffff00;
  uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5202) >> 0x10),(short)uVar54)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(this + 0x520a) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x520a) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(this + 0x5212) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5212) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(this + 0x521a) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x521a) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar46 = *(ulong *)(this + 0x5222) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5222) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(this + 0x522a) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x522a) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar42 = *(ulong *)(this + 0x5232) & 0xffffffffffffff00;
  uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5232) >> 0x10),(short)uVar42)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(this + 0x523a) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x523a) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(this + 0x5242) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5242) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  uVar32 = *(ulong *)(this + 0x524a) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x524a) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(this + 0x5252) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5252) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(this + 0x525a) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x525a) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(this + 0x5262) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5262) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(this + 0x526a) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x526a) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(this + 0x5272) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5272) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(this + 0x527a) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x527a) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(this + 0x5282) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5282) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar8 = *(ulong *)(this + 0x52aa) & 0xffffffffffffff00;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),
                   CONCAT22((short)(*(ulong *)(this + 0x52aa) >> 0x10),(short)uVar8)) &
          0xffffffffff00ffff;
  uVar11 = *(ulong *)(this + 0x52b2) & 0xffffffffffffff00;
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x52b2) >> 0x10),(short)uVar11)) &
           0xffffffffff00ffff;
  *(ulong *)(this + 0x51c2) =
       CONCAT26((short)(uVar71 >> 0x30),CONCAT24((short)(uVar70 >> 0x20),(int)uVar71)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51ba) =
       CONCAT26((short)(uVar69 >> 0x30),CONCAT24((short)(uVar68 >> 0x20),(int)uVar69)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51d2) =
       CONCAT26((short)(uVar67 >> 0x30),CONCAT24((short)(uVar66 >> 0x20),(int)uVar67)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51ca) =
       CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51e2) =
       CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51da) =
       CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51f2) =
       CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x51ea) =
       CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(this + 0x5202) =
       CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x51fa) =
       CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x5212) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x520a) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x5222) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x521a) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x5232) =
       CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x522a) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(this + 0x5242) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x523a) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x5252) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x524a) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x5262) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x525a) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x5272) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x526a) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(this + 0x5282) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(this + 0x527a) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(this + 0x5292) = *(ulong *)(this + 0x5292) & 0xff00ff00ff00ff00 | 0x4000400040004;
  *(ulong *)(this + 0x528a) = *(ulong *)(this + 0x528a) & 0xff00ff00ff00ff00 | 0x4000400040004;
  *(ushort *)(this + 0x52aa) = *(ushort *)(this + 0x52a2) & 0xff00 | 4;
  *(ushort *)(this + 0x52ac) = *(ushort *)(this + 0x52a4) & 0xff00 | 4;
  *(ushort *)(this + 0x52ae) = *(ushort *)(this + 0x52a6) & 0xff00 | 4;
  *(ushort *)(this + 0x52b0) = *(ushort *)(this + 0x52a8) & 0xff00 | 4;
  *(ushort *)(this + 0x529a) = *(ushort *)(this + 0x529a) & 0xff00 | 4;
  *(ushort *)(this + 0x529c) = *(ushort *)(this + 0x529c) & 0xff00 | 4;
  *(ushort *)(this + 0x529e) = *(ushort *)(this + 0x529e) & 0xff00 | 4;
  *(ushort *)(this + 0x52a0) = *(ushort *)(this + 0x52a0) & 0xff00 | 4;
  *(ulong *)(this + 0x52b2) =
       CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(this + 0x52aa) =
       CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
       0xff00ff00ffffffff | 0x4000400040004;
  uVar25 = *(ulong *)(this + 0x52ba) & 0xffffffffffffff00;
  uVar24 = CONCAT44((int)(uVar25 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x52ba) >> 0x10),(short)uVar25)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(this + 0x52c2) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x52c2) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar17 = *(ulong *)(this + 0x52ca) & 0xffffffffffffff00;
  uVar16 = CONCAT44((int)(uVar17 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x52ca) >> 0x10),(short)uVar17)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(this + 0x52d2) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x52d2) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar8 = *(ulong *)(this + 0x52fa) & 0xffffffffffffff00;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),
                   CONCAT22((short)(*(ulong *)(this + 0x52fa) >> 0x10),(short)uVar8)) &
          0xffffffffff00ffff;
  uVar11 = *(ulong *)(this + 0x5302) & 0xffffffffffffff00;
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5302) >> 0x10),(short)uVar11)) &
           0xffffffffff00ffff;
  *(ulong *)(this + 0x52c2) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(this + 0x52ba) =
       CONCAT26((short)(uVar24 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar24)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(this + 0x52d2) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(this + 0x52ca) =
       CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar16)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(this + 0x52e2) = *(ulong *)(this + 0x52e2) & 0xff00ff00ff00ff00 | 0x3000300030003;
  *(ulong *)(this + 0x52da) = *(ulong *)(this + 0x52da) & 0xff00ff00ff00ff00 | 0x3000300030003;
  *(ushort *)(this + 0x52fa) = *(ushort *)(this + 0x52f2) & 0xff00 | 3;
  *(ushort *)(this + 0x52fc) = *(ushort *)(this + 0x52f4) & 0xff00 | 3;
  *(ushort *)(this + 0x52fe) = *(ushort *)(this + 0x52f6) & 0xff00 | 3;
  *(ushort *)(this + 0x5300) = *(ushort *)(this + 0x52f8) & 0xff00 | 3;
  *(ushort *)(this + 0x52ea) = *(ushort *)(this + 0x52ea) & 0xff00 | 3;
  *(ushort *)(this + 0x52ec) = *(ushort *)(this + 0x52ec) & 0xff00 | 3;
  *(ushort *)(this + 0x52ee) = *(ushort *)(this + 0x52ee) & 0xff00 | 3;
  *(ushort *)(this + 0x52f0) = *(ushort *)(this + 0x52f0) & 0xff00 | 3;
  *(ulong *)(this + 0x5302) =
       CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x52fa) =
       CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
       0xff00ff00ffffffff | 0x2000200020002;
  uVar32 = *(ulong *)(this + 0x530a) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x530a) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(this + 0x5312) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5312) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(this + 0x531a) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x531a) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(this + 0x5322) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5322) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(this + 0x532a) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x532a) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(this + 0x5332) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5332) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(this + 0x533a) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x533a) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar21 = *(ulong *)(this + 0x5342) & 0xffffffffffffff00;
  uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5342) >> 0x10),(short)uVar21)) &
           0xffffffffff00ffff;
  uVar8 = *(ulong *)(this + 0x536a) & 0xffffffffffffff00;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),
                   CONCAT22((short)(*(ulong *)(this + 0x536a) >> 0x10),(short)uVar8)) &
          0xffffffffff00ffff;
  uVar11 = *(ulong *)(this + 0x5372) & 0xffffffffffffff00;
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5372) >> 0x10),(short)uVar11)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(this + 0x537a) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x537a) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(this + 0x5382) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5382) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(this + 0x538a) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x538a) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar46 = *(ulong *)(this + 0x5392) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x5392) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(this + 0x539a) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x539a) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar43 = *(ulong *)(this + 0x53a2) & 0xffffffffffffff00;
  uVar42 = CONCAT44((int)(uVar43 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x53a2) >> 0x10),(short)uVar43)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(this + 0x53aa) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x53aa) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(this + 0x53b2) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(this + 0x53b2) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  *(ulong *)(this + 0x5312) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x530a) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x5322) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x531a) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x5332) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x532a) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(this + 0x5342) =
       CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(this + 0x533a) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(this + 0x5352) = *(ulong *)(this + 0x5352) & 0xff00ff00ff00ff00 | 0x1000100010001;
  *(ulong *)(this + 0x534a) = *(ulong *)(this + 0x534a) & 0xff00ff00ff00ff00 | 0x1000100010001;
  *(ushort *)(this + 0x536a) = *(ushort *)(this + 0x5362) & 0xff00 | 1;
  *(ushort *)(this + 0x536c) = *(ushort *)(this + 0x5364) & 0xff00 | 1;
  *(ushort *)(this + 0x536e) = *(ushort *)(this + 0x5366) & 0xff00 | 1;
  *(ushort *)(this + 0x5370) = *(ushort *)(this + 0x5368) & 0xff00 | 1;
  *(ushort *)(this + 0x535a) = *(ushort *)(this + 0x535a) & 0xff00 | 1;
  *(ushort *)(this + 0x535c) = *(ushort *)(this + 0x535c) & 0xff00 | 1;
  *(ushort *)(this + 0x535e) = *(ushort *)(this + 0x535e) & 0xff00 | 1;
  *(ushort *)(this + 0x5360) = *(ushort *)(this + 0x5360) & 0xff00 | 1;
  *(ulong *)(this + 0x5372) =
       CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(this + 0x536a) =
       CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(this + 0x5382) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x537a) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x5392) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x538a) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x53a2) =
       CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar42)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x539a) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x53b2) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff;
  *(ulong *)(this + 0x53aa) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff;
  memset(this + 0x56ba,0,0x100);
  *(undefined4 *)(this + 0x56ba) = 0x80a0c0e0;
  *(undefined2 *)(this + 0x56be) = 0x4060;
  this[0x56c0] = (Unpack)0x20;
  return;
}


