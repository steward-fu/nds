/*
 * Ghidra decompilation
 *
 * Function : GetFlagsBuf
 * Address  : 001cee30
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::GetFlagsBuf() */

void Unpack::GetFlagsBuf(void)

{
  short sVar1;
  uint uVar2;
  long in_x0;
  void *__s;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar12;
  ulong uVar14;
  ulong uVar16;
  ulong uVar18;
  ulong uVar20;
  ulong uVar22;
  ulong uVar24;
  ulong uVar26;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar40;
  ulong uVar42;
  ulong uVar44;
  ulong uVar45;
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
  ulong uVar11;
  ulong uVar13;
  ulong uVar15;
  ulong uVar17;
  ulong uVar19;
  ulong uVar21;
  ulong uVar23;
  ulong uVar25;
  ulong uVar27;
  ulong uVar31;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  ulong uVar41;
  ulong uVar43;
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
  
  uVar2 = BitInput::fgetbits();
  uVar2 = uVar2 & 0xfff0;
  if (uVar2 < DecHf2) {
    BitInput::faddbits((BitInput *)(in_x0 + 8),5);
    lVar3 = 0x14;
    uVar8 = 0xb;
  }
  else {
    uVar7 = 5;
    lVar3 = 4;
    do {
      lVar6 = lVar3;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar8;
      lVar3 = lVar6 + 4;
    } while (*(uint *)((long)&DecHf2 + lVar6) <= uVar2);
    BitInput::faddbits((BitInput *)(in_x0 + 8),uVar8);
    lVar3 = uVar7 << 2;
    uVar8 = 0x10 - uVar8;
    uVar2 = uVar2 - *(int *)(lVar6 + 0x267f3c);
  }
  lVar6 = in_x0 + (ulong)((uVar2 >> (ulong)(uVar8 & 0x1f)) + *(int *)(PosHf2 + lVar3)) * 2;
  sVar1 = *(short *)(lVar6 + 0x53ba);
  uVar5 = sVar1 + 1;
  lVar3 = in_x0 + (ulong)(byte)sVar1;
  *(uint *)(in_x0 + 0x58bc) = (uint)(byte)((ushort)sVar1 >> 8);
  bVar4 = *(byte *)(lVar3 + 0x57ba);
  *(byte *)(lVar3 + 0x57ba) = bVar4 + 1;
  if ((uVar5 & 0xff) == 0) {
    __s = (void *)(in_x0 + 0x57ba);
    do {
      uVar68 = *(ulong *)(in_x0 + 0x53ba) & 0xffffffffffffff00;
      uVar69 = CONCAT44((int)(uVar68 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53ba) >> 0x10),(short)uVar68)) &
               0xffffffffff00ffff;
      uVar70 = *(ulong *)(in_x0 + 0x53c2) & 0xffffffffffffff00;
      uVar71 = CONCAT44((int)(uVar70 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53c2) >> 0x10),(short)uVar70)) &
               0xffffffffff00ffff;
      uVar64 = *(ulong *)(in_x0 + 0x53ca) & 0xffffffffffffff00;
      uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53ca) >> 0x10),(short)uVar64)) &
               0xffffffffff00ffff;
      uVar66 = *(ulong *)(in_x0 + 0x53d2) & 0xffffffffffffff00;
      uVar67 = CONCAT44((int)(uVar66 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53d2) >> 0x10),(short)uVar66)) &
               0xffffffffff00ffff;
      uVar60 = *(ulong *)(in_x0 + 0x53da) & 0xffffffffffffff00;
      uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53da) >> 0x10),(short)uVar60)) &
               0xffffffffff00ffff;
      uVar62 = *(ulong *)(in_x0 + 0x53e2) & 0xffffffffffffff00;
      uVar63 = CONCAT44((int)(uVar62 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53e2) >> 0x10),(short)uVar62)) &
               0xffffffffff00ffff;
      uVar56 = *(ulong *)(in_x0 + 0x53ea) & 0xffffffffffffff00;
      uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53ea) >> 0x10),(short)uVar56)) &
               0xffffffffff00ffff;
      uVar58 = *(ulong *)(in_x0 + 0x53f2) & 0xffffffffffffff00;
      uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53f2) >> 0x10),(short)uVar58)) &
               0xffffffffff00ffff;
      uVar52 = *(ulong *)(in_x0 + 0x53fa) & 0xffffffffffffff00;
      uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53fa) >> 0x10),(short)uVar52)) &
               0xffffffffff00ffff;
      uVar54 = *(ulong *)(in_x0 + 0x5402) & 0xffffffffffffff00;
      uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5402) >> 0x10),(short)uVar54)) &
               0xffffffffff00ffff;
      uVar48 = *(ulong *)(in_x0 + 0x540a) & 0xffffffffffffff00;
      uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x540a) >> 0x10),(short)uVar48)) &
               0xffffffffff00ffff;
      uVar50 = *(ulong *)(in_x0 + 0x5412) & 0xffffffffffffff00;
      uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5412) >> 0x10),(short)uVar50)) &
               0xffffffffff00ffff;
      uVar44 = *(ulong *)(in_x0 + 0x541a) & 0xffffffffffffff00;
      uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x541a) >> 0x10),(short)uVar44)) &
               0xffffffffff00ffff;
      uVar46 = *(ulong *)(in_x0 + 0x5422) & 0xffffffffffffff00;
      uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5422) >> 0x10),(short)uVar46)) &
               0xffffffffff00ffff;
      uVar40 = *(ulong *)(in_x0 + 0x542a) & 0xffffffffffffff00;
      uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x542a) >> 0x10),(short)uVar40)) &
               0xffffffffff00ffff;
      uVar42 = *(ulong *)(in_x0 + 0x5432) & 0xffffffffffffff00;
      uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5432) >> 0x10),(short)uVar42)) &
               0xffffffffff00ffff;
      uVar36 = *(ulong *)(in_x0 + 0x543a) & 0xffffffffffffff00;
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x543a) >> 0x10),(short)uVar36)) &
               0xffffffffff00ffff;
      uVar38 = *(ulong *)(in_x0 + 0x5442) & 0xffffffffffffff00;
      uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5442) >> 0x10),(short)uVar38)) &
               0xffffffffff00ffff;
      uVar32 = *(ulong *)(in_x0 + 0x544a) & 0xffffffffffffff00;
      uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x544a) >> 0x10),(short)uVar32)) &
               0xffffffffff00ffff;
      uVar34 = *(ulong *)(in_x0 + 0x5452) & 0xffffffffffffff00;
      uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5452) >> 0x10),(short)uVar34)) &
               0xffffffffff00ffff;
      uVar28 = *(ulong *)(in_x0 + 0x545a) & 0xffffffffffffff00;
      uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x545a) >> 0x10),(short)uVar28)) &
               0xffffffffff00ffff;
      uVar30 = *(ulong *)(in_x0 + 0x5462) & 0xffffffffffffff00;
      uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5462) >> 0x10),(short)uVar30)) &
               0xffffffffff00ffff;
      uVar24 = *(ulong *)(in_x0 + 0x546a) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x546a) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x5472) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5472) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x547a) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x547a) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x5482) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5482) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x548a) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x548a) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x5492) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5492) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar12 = *(ulong *)(in_x0 + 0x549a) & 0xffffffffffffff00;
      uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x549a) >> 0x10),(short)uVar12)) &
               0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x54a2) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54a2) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      uVar7 = *(ulong *)(in_x0 + 0x54aa) & 0xffffffffffffff00;
      uVar9 = CONCAT44((int)(uVar7 >> 0x20),
                       CONCAT22((short)(*(ulong *)(in_x0 + 0x54aa) >> 0x10),(short)uVar7)) &
              0xffffffffff00ffff;
      uVar10 = *(ulong *)(in_x0 + 0x54b2) & 0xffffffffffffff00;
      uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54b2) >> 0x10),(short)uVar10)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x53c2) =
           CONCAT26((short)(uVar71 >> 0x30),CONCAT24((short)(uVar70 >> 0x20),(int)uVar71)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53ba) =
           CONCAT26((short)(uVar69 >> 0x30),CONCAT24((short)(uVar68 >> 0x20),(int)uVar69)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53d2) =
           CONCAT26((short)(uVar67 >> 0x30),CONCAT24((short)(uVar66 >> 0x20),(int)uVar67)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53ca) =
           CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53e2) =
           CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53da) =
           CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53f2) =
           CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x53ea) =
           CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x5402) =
           CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x53fa) =
           CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5412) =
           CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x540a) =
           CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5422) =
           CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x541a) =
           CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5432) =
           CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x542a) =
           CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5442) =
           CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x543a) =
           CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5452) =
           CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x544a) =
           CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5462) =
           CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x545a) =
           CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5472) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x546a) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5482) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x547a) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x5492) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x548a) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x54a2) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x549a) =
           CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x54b2) =
           CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x54aa) =
           CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar9)) &
           0xff00ff00ffffffff | 0x4000400040004;
      uVar24 = *(ulong *)(in_x0 + 0x54ba) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54ba) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x54c2) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54c2) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x54ca) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54ca) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x54d2) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54d2) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x54da) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54da) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x54e2) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54e2) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar12 = *(ulong *)(in_x0 + 0x54ea) & 0xffffffffffffff00;
      uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54ea) >> 0x10),(short)uVar12)) &
               0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x54f2) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x54f2) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      uVar7 = *(ulong *)(in_x0 + 0x54fa) & 0xffffffffffffff00;
      uVar9 = CONCAT44((int)(uVar7 >> 0x20),
                       CONCAT22((short)(*(ulong *)(in_x0 + 0x54fa) >> 0x10),(short)uVar7)) &
              0xffffffffff00ffff;
      uVar10 = *(ulong *)(in_x0 + 0x5502) & 0xffffffffffffff00;
      uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5502) >> 0x10),(short)uVar10)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x54c2) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54ba) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54d2) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54ca) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54e2) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54da) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54f2) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x54ea) =
           CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x5502) =
           CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x54fa) =
           CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar9)) &
           0xff00ff00ffffffff | 0x2000200020002;
      uVar32 = *(ulong *)(in_x0 + 0x550a) & 0xffffffffffffff00;
      uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x550a) >> 0x10),(short)uVar32)) &
               0xffffffffff00ffff;
      uVar34 = *(ulong *)(in_x0 + 0x5512) & 0xffffffffffffff00;
      uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5512) >> 0x10),(short)uVar34)) &
               0xffffffffff00ffff;
      uVar29 = *(ulong *)(in_x0 + 0x551a) & 0xffffffffffffff00;
      uVar28 = CONCAT44((int)(uVar29 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x551a) >> 0x10),(short)uVar29)) &
               0xffffffffff00ffff;
      uVar30 = *(ulong *)(in_x0 + 0x5522) & 0xffffffffffffff00;
      uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5522) >> 0x10),(short)uVar30)) &
               0xffffffffff00ffff;
      uVar24 = *(ulong *)(in_x0 + 0x552a) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x552a) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x5532) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5532) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x553a) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x553a) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x5542) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5542) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x554a) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x554a) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x5552) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5552) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar12 = *(ulong *)(in_x0 + 0x555a) & 0xffffffffffffff00;
      uVar13 = CONCAT44((int)(uVar12 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x555a) >> 0x10),(short)uVar12)) &
               0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x5562) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5562) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      uVar7 = *(ulong *)(in_x0 + 0x556a) & 0xffffffffffffff00;
      uVar9 = CONCAT44((int)(uVar7 >> 0x20),
                       CONCAT22((short)(*(ulong *)(in_x0 + 0x556a) >> 0x10),(short)uVar7)) &
              0xffffffffff00ffff;
      uVar10 = *(ulong *)(in_x0 + 0x5572) & 0xffffffffffffff00;
      uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5572) >> 0x10),(short)uVar10)) &
               0xffffffffff00ffff;
      uVar48 = *(ulong *)(in_x0 + 0x557a) & 0xffffffffffffff00;
      uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x557a) >> 0x10),(short)uVar48)) &
               0xffffffffff00ffff;
      uVar50 = *(ulong *)(in_x0 + 0x5582) & 0xffffffffffffff00;
      uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5582) >> 0x10),(short)uVar50)) &
               0xffffffffff00ffff;
      uVar45 = *(ulong *)(in_x0 + 0x558a) & 0xffffffffffffff00;
      uVar44 = CONCAT44((int)(uVar45 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x558a) >> 0x10),(short)uVar45)) &
               0xffffffffff00ffff;
      uVar46 = *(ulong *)(in_x0 + 0x5592) & 0xffffffffffffff00;
      uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5592) >> 0x10),(short)uVar46)) &
               0xffffffffff00ffff;
      uVar40 = *(ulong *)(in_x0 + 0x559a) & 0xffffffffffffff00;
      uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x559a) >> 0x10),(short)uVar40)) &
               0xffffffffff00ffff;
      uVar42 = *(ulong *)(in_x0 + 0x55a2) & 0xffffffffffffff00;
      uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x55a2) >> 0x10),(short)uVar42)) &
               0xffffffffff00ffff;
      uVar36 = *(ulong *)(in_x0 + 0x55aa) & 0xffffffffffffff00;
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x55aa) >> 0x10),(short)uVar36)) &
               0xffffffffff00ffff;
      uVar38 = *(ulong *)(in_x0 + 0x55b2) & 0xffffffffffffff00;
      uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x55b2) >> 0x10),(short)uVar38)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x5512) =
           CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x550a) =
           CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5522) =
           CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x551a) =
           CONCAT26((short)(uVar28 >> 0x30),CONCAT24((short)(uVar29 >> 0x20),(int)uVar28)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5532) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x552a) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5542) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x553a) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5552) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x554a) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5562) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x555a) =
           CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5572) =
           CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x556a) =
           CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar9)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5582) =
           CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x557a) =
           CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x5592) =
           CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x558a) =
           CONCAT26((short)(uVar44 >> 0x30),CONCAT24((short)(uVar45 >> 0x20),(int)uVar44)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x55a2) =
           CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x559a) =
           CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x55b2) =
           CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x55aa) =
           CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
           0xff00ff00ffffffff;
      __s = memset(__s,0,0x100);
      *(undefined4 *)(in_x0 + 0x57ba) = 0x80a0c0e0;
      *(undefined2 *)(in_x0 + 0x57be) = 0x4060;
      *(undefined *)(in_x0 + 0x57c0) = 0x20;
      sVar1 = *(short *)(lVar6 + 0x53ba);
      uVar5 = sVar1 + 1;
      lVar3 = in_x0 + (ulong)(byte)sVar1;
      *(uint *)(in_x0 + 0x58bc) = (uint)(byte)((ushort)sVar1 >> 8);
      bVar4 = *(byte *)(lVar3 + 0x57ba);
      *(byte *)(lVar3 + 0x57ba) = bVar4 + 1;
    } while ((uVar5 & 0xff) == 0);
  }
  lVar3 = in_x0 + (ulong)bVar4 * 2;
  *(undefined2 *)(lVar6 + 0x53ba) = *(undefined2 *)(lVar3 + 0x53ba);
  *(ushort *)(lVar3 + 0x53ba) = uVar5;
  return;
}


