/*
 * Ghidra decompilation
 *
 * Function : CorrHuff
 * Address  : 001cf520
 * Program  : drastic64
 */


/* Unpack::CorrHuff(unsigned short*, unsigned char*) */

void __thiscall Unpack::CorrHuff(Unpack *this,ushort *param_1,uchar *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar8;
  ulong uVar10;
  ulong uVar12;
  ulong uVar14;
  ulong uVar16;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar22;
  ulong uVar24;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar30;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar40;
  ulong uVar42;
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
  ulong uVar3;
  ulong uVar7;
  ulong uVar9;
  ulong uVar11;
  ulong uVar13;
  ulong uVar15;
  ulong uVar17;
  ulong uVar21;
  ulong uVar23;
  ulong uVar25;
  ulong uVar29;
  ulong uVar31;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  ulong uVar41;
  ulong uVar43;
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
  
  uVar62 = *(ulong *)param_1 & 0xffffffffffffff00;
  uVar63 = CONCAT44((int)(uVar62 >> 0x20),CONCAT22((short)(*(ulong *)param_1 >> 0x10),(short)uVar62)
                   ) & 0xffffffffff00ffff;
  uVar64 = *(ulong *)(param_1 + 4) & 0xffffffffffffff00;
  uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 4) >> 0x10),(short)uVar64)) &
           0xffffffffff00ffff;
  uVar58 = *(ulong *)(param_1 + 8) & 0xffffffffffffff00;
  uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 8) >> 0x10),(short)uVar58)) &
           0xffffffffff00ffff;
  uVar60 = *(ulong *)(param_1 + 0xc) & 0xffffffffffffff00;
  uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xc) >> 0x10),(short)uVar60)) &
           0xffffffffff00ffff;
  uVar54 = *(ulong *)(param_1 + 0x10) & 0xffffffffffffff00;
  uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x10) >> 0x10),(short)uVar54)) &
           0xffffffffff00ffff;
  uVar56 = *(ulong *)(param_1 + 0x14) & 0xffffffffffffff00;
  uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x14) >> 0x10),(short)uVar56)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(param_1 + 0x18) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x18) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar52 = *(ulong *)(param_1 + 0x1c) & 0xffffffffffffff00;
  uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x1c) >> 0x10),(short)uVar52)) &
           0xffffffffff00ffff;
  uVar46 = *(ulong *)(param_1 + 0x20) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x20) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(param_1 + 0x24) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x24) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar42 = *(ulong *)(param_1 + 0x28) & 0xffffffffffffff00;
  uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x28) >> 0x10),(short)uVar42)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(param_1 + 0x2c) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x2c) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(param_1 + 0x30) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x30) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(param_1 + 0x34) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x34) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(param_1 + 0x38) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x38) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(param_1 + 0x3c) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x3c) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(param_1 + 0x40) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x40) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar32 = *(ulong *)(param_1 + 0x44) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x44) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar26 = *(ulong *)(param_1 + 0x48) & 0xffffffffffffff00;
  uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x48) >> 0x10),(short)uVar26)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(param_1 + 0x4c) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x4c) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar22 = *(ulong *)(param_1 + 0x50) & 0xffffffffffffff00;
  uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x50) >> 0x10),(short)uVar22)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(param_1 + 0x54) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x54) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar18 = *(ulong *)(param_1 + 0x58) & 0xffffffffffffff00;
  uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x58) >> 0x10),(short)uVar18)) &
           0xffffffffff00ffff;
  uVar20 = *(ulong *)(param_1 + 0x5c) & 0xffffffffffffff00;
  uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x5c) >> 0x10),(short)uVar20)) &
           0xffffffffff00ffff;
  uVar14 = *(ulong *)(param_1 + 0x60) & 0xffffffffffffff00;
  uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x60) >> 0x10),(short)uVar14)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(param_1 + 100) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 100) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar10 = *(ulong *)(param_1 + 0x68) & 0xffffffffffffff00;
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x68) >> 0x10),(short)uVar10)) &
           0xffffffffff00ffff;
  uVar12 = *(ulong *)(param_1 + 0x6c) & 0xffffffffffffff00;
  uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x6c) >> 0x10),(short)uVar12)) &
           0xffffffffff00ffff;
  uVar6 = *(ulong *)(param_1 + 0x70) & 0xffffffffffffff00;
  uVar7 = CONCAT44((int)(uVar6 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0x70) >> 0x10),(short)uVar6)) &
          0xffffffffff00ffff;
  uVar8 = *(ulong *)(param_1 + 0x74) & 0xffffffffffffff00;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0x74) >> 0x10),(short)uVar8)) &
          0xffffffffff00ffff;
  uVar2 = *(ulong *)(param_1 + 0x78) & 0xffffffffffffff00;
  uVar3 = CONCAT44((int)(uVar2 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0x78) >> 0x10),(short)uVar2)) &
          0xffffffffff00ffff;
  uVar4 = *(ulong *)(param_1 + 0x7c) & 0xffffffffffffff00;
  uVar5 = CONCAT44((int)(uVar4 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0x7c) >> 0x10),(short)uVar4)) &
          0xffffffffff00ffff;
  *(ulong *)(param_1 + 4) =
       CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)param_1 =
       CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0xc) =
       CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 8) =
       CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0x14) =
       CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0x10) =
       CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0x1c) =
       CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0x18) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff | 0x7000700070007;
  *(ulong *)(param_1 + 0x24) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x20) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x2c) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x28) =
       CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x34) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x30) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x3c) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x38) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x6000600060006;
  *(ulong *)(param_1 + 0x44) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x40) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x4c) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x48) =
       CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x54) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x50) =
       CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x5c) =
       CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 0x58) =
       CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
       0xff00ff00ffffffff | 0x5000500050005;
  *(ulong *)(param_1 + 100) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x60) =
       CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x6c) =
       CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x68) =
       CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x74) =
       CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x70) =
       CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar7)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x7c) =
       CONCAT26((short)(uVar5 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar5)) &
       0xff00ff00ffffffff | 0x4000400040004;
  *(ulong *)(param_1 + 0x78) =
       CONCAT26((short)(uVar3 >> 0x30),CONCAT24((short)(uVar2 >> 0x20),(int)uVar3)) &
       0xff00ff00ffffffff | 0x4000400040004;
  uVar46 = *(ulong *)(param_1 + 0x80) & 0xffffffffffffff00;
  uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x80) >> 0x10),(short)uVar46)) &
           0xffffffffff00ffff;
  uVar48 = *(ulong *)(param_1 + 0x84) & 0xffffffffffffff00;
  uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x84) >> 0x10),(short)uVar48)) &
           0xffffffffff00ffff;
  uVar42 = *(ulong *)(param_1 + 0x88) & 0xffffffffffffff00;
  uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x88) >> 0x10),(short)uVar42)) &
           0xffffffffff00ffff;
  uVar44 = *(ulong *)(param_1 + 0x8c) & 0xffffffffffffff00;
  uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x8c) >> 0x10),(short)uVar44)) &
           0xffffffffff00ffff;
  uVar38 = *(ulong *)(param_1 + 0x90) & 0xffffffffffffff00;
  uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x90) >> 0x10),(short)uVar38)) &
           0xffffffffff00ffff;
  uVar40 = *(ulong *)(param_1 + 0x94) & 0xffffffffffffff00;
  uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x94) >> 0x10),(short)uVar40)) &
           0xffffffffff00ffff;
  uVar34 = *(ulong *)(param_1 + 0x98) & 0xffffffffffffff00;
  uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x98) >> 0x10),(short)uVar34)) &
           0xffffffffff00ffff;
  uVar36 = *(ulong *)(param_1 + 0x9c) & 0xffffffffffffff00;
  uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0x9c) >> 0x10),(short)uVar36)) &
           0xffffffffff00ffff;
  uVar30 = *(ulong *)(param_1 + 0xa0) & 0xffffffffffffff00;
  uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xa0) >> 0x10),(short)uVar30)) &
           0xffffffffff00ffff;
  uVar32 = *(ulong *)(param_1 + 0xa4) & 0xffffffffffffff00;
  uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xa4) >> 0x10),(short)uVar32)) &
           0xffffffffff00ffff;
  uVar27 = *(ulong *)(param_1 + 0xa8) & 0xffffffffffffff00;
  uVar26 = CONCAT44((int)(uVar27 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xa8) >> 0x10),(short)uVar27)) &
           0xffffffffff00ffff;
  uVar28 = *(ulong *)(param_1 + 0xac) & 0xffffffffffffff00;
  uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xac) >> 0x10),(short)uVar28)) &
           0xffffffffff00ffff;
  uVar22 = *(ulong *)(param_1 + 0xb0) & 0xffffffffffffff00;
  uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xb0) >> 0x10),(short)uVar22)) &
           0xffffffffff00ffff;
  uVar24 = *(ulong *)(param_1 + 0xb4) & 0xffffffffffffff00;
  uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xb4) >> 0x10),(short)uVar24)) &
           0xffffffffff00ffff;
  uVar19 = *(ulong *)(param_1 + 0xb8) & 0xffffffffffffff00;
  uVar18 = CONCAT44((int)(uVar19 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xb8) >> 0x10),(short)uVar19)) &
           0xffffffffff00ffff;
  uVar20 = *(ulong *)(param_1 + 0xbc) & 0xffffffffffffff00;
  uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xbc) >> 0x10),(short)uVar20)) &
           0xffffffffff00ffff;
  uVar14 = *(ulong *)(param_1 + 0xc0) & 0xffffffffffffff00;
  uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xc0) >> 0x10),(short)uVar14)) &
           0xffffffffff00ffff;
  uVar16 = *(ulong *)(param_1 + 0xc4) & 0xffffffffffffff00;
  uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xc4) >> 0x10),(short)uVar16)) &
           0xffffffffff00ffff;
  uVar10 = *(ulong *)(param_1 + 200) & 0xffffffffffffff00;
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 200) >> 0x10),(short)uVar10)) &
           0xffffffffff00ffff;
  uVar12 = *(ulong *)(param_1 + 0xcc) & 0xffffffffffffff00;
  uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xcc) >> 0x10),(short)uVar12)) &
           0xffffffffff00ffff;
  uVar6 = *(ulong *)(param_1 + 0xd0) & 0xffffffffffffff00;
  uVar7 = CONCAT44((int)(uVar6 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0xd0) >> 0x10),(short)uVar6)) &
          0xffffffffff00ffff;
  uVar8 = *(ulong *)(param_1 + 0xd4) & 0xffffffffffffff00;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0xd4) >> 0x10),(short)uVar8)) &
          0xffffffffff00ffff;
  uVar2 = *(ulong *)(param_1 + 0xd8) & 0xffffffffffffff00;
  uVar3 = CONCAT44((int)(uVar2 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0xd8) >> 0x10),(short)uVar2)) &
          0xffffffffff00ffff;
  uVar5 = *(ulong *)(param_1 + 0xdc) & 0xffffffffffffff00;
  uVar4 = CONCAT44((int)(uVar5 >> 0x20),
                   CONCAT22((short)(*(ulong *)(param_1 + 0xdc) >> 0x10),(short)uVar5)) &
          0xffffffffff00ffff;
  uVar62 = *(ulong *)(param_1 + 0xe0) & 0xffffffffffffff00;
  uVar63 = CONCAT44((int)(uVar62 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xe0) >> 0x10),(short)uVar62)) &
           0xffffffffff00ffff;
  uVar64 = *(ulong *)(param_1 + 0xe4) & 0xffffffffffffff00;
  uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xe4) >> 0x10),(short)uVar64)) &
           0xffffffffff00ffff;
  uVar58 = *(ulong *)(param_1 + 0xe8) & 0xffffffffffffff00;
  uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xe8) >> 0x10),(short)uVar58)) &
           0xffffffffff00ffff;
  uVar60 = *(ulong *)(param_1 + 0xec) & 0xffffffffffffff00;
  uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xec) >> 0x10),(short)uVar60)) &
           0xffffffffff00ffff;
  uVar54 = *(ulong *)(param_1 + 0xf0) & 0xffffffffffffff00;
  uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xf0) >> 0x10),(short)uVar54)) &
           0xffffffffff00ffff;
  uVar56 = *(ulong *)(param_1 + 0xf4) & 0xffffffffffffff00;
  uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xf4) >> 0x10),(short)uVar56)) &
           0xffffffffff00ffff;
  uVar50 = *(ulong *)(param_1 + 0xf8) & 0xffffffffffffff00;
  uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xf8) >> 0x10),(short)uVar50)) &
           0xffffffffff00ffff;
  uVar52 = *(ulong *)(param_1 + 0xfc) & 0xffffffffffffff00;
  uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                    CONCAT22((short)(*(ulong *)(param_1 + 0xfc) >> 0x10),(short)uVar52)) &
           0xffffffffff00ffff;
  *(ulong *)(param_1 + 0x84) =
       CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x80) =
       CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x8c) =
       CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x88) =
       CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x94) =
       CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x90) =
       CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x9c) =
       CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0x98) =
       CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
       0xff00ff00ffffffff | 0x3000300030003;
  *(ulong *)(param_1 + 0xa4) =
       CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xa0) =
       CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xac) =
       CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xa8) =
       CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar27 >> 0x20),(int)uVar26)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xb4) =
       CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xb0) =
       CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xbc) =
       CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xb8) =
       CONCAT26((short)(uVar18 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar18)) &
       0xff00ff00ffffffff | 0x2000200020002;
  *(ulong *)(param_1 + 0xc4) =
       CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xc0) =
       CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xcc) =
       CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 200) =
       CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xd4) =
       CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xd0) =
       CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar7)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xdc) =
       CONCAT26((short)(uVar4 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar4)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xd8) =
       CONCAT26((short)(uVar3 >> 0x30),CONCAT24((short)(uVar2 >> 0x20),(int)uVar3)) &
       0xff00ff00ffffffff | 0x1000100010001;
  *(ulong *)(param_1 + 0xe4) =
       CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xe0) =
       CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xec) =
       CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xe8) =
       CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xf4) =
       CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xf0) =
       CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xfc) =
       CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
       0xff00ff00ffffffff;
  *(ulong *)(param_1 + 0xf8) =
       CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
       0xff00ff00ffffffff;
  puVar1 = (undefined4 *)memset(param_2,0,0x100);
  *puVar1 = 0x80a0c0e0;
  *(undefined2 *)(puVar1 + 1) = 0x4060;
  *(undefined *)((long)puVar1 + 6) = 0x20;
  return;
}


