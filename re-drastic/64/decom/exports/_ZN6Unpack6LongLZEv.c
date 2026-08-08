/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack6LongLZEv
 * Address  : 001cdd50
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::LongLZ() */

void Unpack::LongLZ(void)

{
  bool bVar1;
  BitInput *this;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  long in_x0;
  void *__s;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar17;
  ulong uVar19;
  ulong uVar21;
  ulong uVar23;
  ulong uVar25;
  ulong uVar27;
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
  uint local_10;
  ulong uVar16;
  ulong uVar18;
  ulong uVar20;
  ulong uVar22;
  ulong uVar24;
  ulong uVar26;
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
  
  *(undefined4 *)(in_x0 + 0x58d8) = 0;
  uVar5 = *(int *)(in_x0 + 0x58ec) + 0x10;
  if (uVar5 < 0x100) {
    *(uint *)(in_x0 + 0x58ec) = uVar5;
  }
  else {
    *(undefined4 *)(in_x0 + 0x58ec) = 0x90;
    *(uint *)(in_x0 + 0x58e8) = *(uint *)(in_x0 + 0x58e8) >> 1;
  }
  uVar2 = *(uint *)(in_x0 + 0x58cc);
  this = (BitInput *)(in_x0 + 8);
  uVar5 = BitInput::fgetbits();
  if (*(uint *)(in_x0 + 0x58cc) < 0x7a) {
    if (0x3f < *(uint *)(in_x0 + 0x58cc)) {
      uVar5 = uVar5 & 0xfff0;
      if (uVar5 < DecL1) {
        BitInput::faddbits(this,2);
        lVar11 = 8;
        uVar6 = 0xe;
      }
      else {
        uVar14 = 2;
        lVar11 = 4;
        do {
          lVar10 = lVar11;
          uVar6 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar6;
          lVar11 = lVar10 + 4;
        } while (*(uint *)((long)&DecL1 + lVar10) <= uVar5);
        BitInput::faddbits(this,uVar6);
        lVar11 = uVar14 << 2;
        uVar5 = uVar5 - *(int *)(lVar10 + 0x267ecc);
        uVar6 = 0x10 - uVar6;
      }
      uVar5 = uVar5 >> (ulong)(uVar6 & 0x1f);
      iVar12 = *(int *)(PosL1 + lVar11);
      goto LAB_001ce428;
    }
    if (uVar5 < 0x100) {
      BitInput::faddbits(this,0x10);
      bVar1 = uVar5 != 4 && uVar5 != 1;
    }
    else {
      uVar6 = uVar5 & 0x8000;
      if ((uVar5 >> 0xf & 1) == 0) {
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (((uVar5 << (ulong)(uVar6 & 0x1f)) >> 0xf & 1) == 0);
        uVar7 = uVar7 + 2;
        bVar1 = uVar6 != 4 && uVar6 != 1;
      }
      else {
        uVar6 = 0;
        uVar7 = 1;
        bVar1 = true;
      }
      BitInput::faddbits(this,uVar7);
      uVar5 = uVar6;
    }
  }
  else {
    uVar5 = uVar5 & 0xfff0;
    if (uVar5 < DecL2) {
      BitInput::faddbits(this,3);
      lVar11 = 0xc;
      uVar6 = 0xd;
    }
    else {
      uVar14 = 3;
      lVar11 = 4;
      do {
        lVar10 = lVar11;
        uVar6 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar6;
        lVar11 = lVar10 + 4;
      } while (*(uint *)((long)&DecL2 + lVar10) <= uVar5);
      BitInput::faddbits(this,uVar6);
      lVar11 = uVar14 << 2;
      uVar5 = uVar5 - *(int *)((long)&DAT_00267e58 + lVar10 + 4);
      uVar6 = 0x10 - uVar6;
    }
    uVar5 = uVar5 >> (ulong)(uVar6 & 0x1f);
    iVar12 = *(int *)(PosL2 + lVar11);
LAB_001ce428:
    uVar5 = uVar5 + iVar12;
    bVar1 = uVar5 != 4 && uVar5 != 1;
  }
  uVar6 = uVar5 + *(int *)(in_x0 + 0x58cc);
  *(uint *)(in_x0 + 0x58cc) = uVar6 - (uVar6 >> 5);
  uVar6 = BitInput::fgetbits();
  if (*(uint *)(in_x0 + 0x58c4) < 0x2900) {
    uVar6 = uVar6 & 0xfff0;
    if (*(uint *)(in_x0 + 0x58c4) < 0x700) {
      if (uVar6 < DecHf0) {
        BitInput::faddbits(this,4);
        lVar11 = 0x10;
        uVar7 = 0xc;
      }
      else {
        uVar14 = 4;
        lVar11 = 4;
        do {
          lVar10 = lVar11;
          uVar7 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar7;
          lVar11 = lVar10 + 4;
        } while (*(uint *)((long)&DecHf0 + lVar10) <= uVar6);
        BitInput::faddbits(this,uVar7);
        lVar11 = uVar14 << 2;
        uVar6 = uVar6 - *(int *)(lVar10 + 0x267ffc);
        uVar7 = 0x10 - uVar7;
      }
      local_10 = (uVar6 >> (ulong)(uVar7 & 0x1f)) + *(int *)(PosHf0 + lVar11);
    }
    else {
      if (uVar6 < DecHf1) {
        BitInput::faddbits(this,5);
        lVar11 = 0x14;
        uVar7 = 0xb;
      }
      else {
        uVar14 = 5;
        lVar11 = 4;
        do {
          lVar10 = lVar11;
          uVar7 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar7;
          lVar11 = lVar10 + 4;
        } while (*(uint *)((long)&DecHf1 + lVar10) <= uVar6);
        BitInput::faddbits(this,uVar7);
        lVar11 = uVar14 << 2;
        uVar6 = uVar6 - *(int *)(lVar10 + 0x267f9c);
        uVar7 = 0x10 - uVar7;
      }
      local_10 = (uVar6 >> (ulong)(uVar7 & 0x1f)) + *(int *)(PosHf1 + lVar11);
    }
  }
  else {
    uVar6 = uVar6 & 0xfff0;
    if (uVar6 < DecHf2) {
      BitInput::faddbits(this,5);
      lVar11 = 0x14;
      uVar7 = 0xb;
    }
    else {
      uVar14 = 5;
      lVar11 = 4;
      do {
        lVar10 = lVar11;
        uVar7 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar7;
        lVar11 = lVar10 + 4;
      } while (*(uint *)((long)&DecHf2 + lVar10) <= uVar6);
      BitInput::faddbits(this,uVar7);
      lVar11 = uVar14 << 2;
      uVar6 = uVar6 - *(int *)(lVar10 + 0x267f3c);
      uVar7 = 0x10 - uVar7;
    }
    local_10 = (uVar6 >> (ulong)(uVar7 & 0x1f)) + *(int *)(PosHf2 + lVar11);
  }
  lVar11 = in_x0 + (ulong)(byte)local_10 * 2;
  uVar6 = local_10 + *(int *)(in_x0 + 0x58c4);
  *(uint *)(in_x0 + 0x58c4) = uVar6 - (uVar6 >> 8);
  uVar3 = *(ushort *)(lVar11 + 0x51ba);
  uVar6 = uVar3 + 1;
  lVar10 = in_x0 + (ulong)(byte)uVar3;
  bVar4 = *(byte *)(lVar10 + 0x56ba);
  *(byte *)(lVar10 + 0x56ba) = bVar4 + 1;
  if ((uVar6 & 0xff) == 0) {
    __s = (void *)(in_x0 + 0x56ba);
    do {
      uVar73 = *(ulong *)(in_x0 + 0x51ba) & 0xffffffffffffff00;
      uVar74 = CONCAT44((int)(uVar73 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51ba) >> 0x10),(short)uVar73)) &
               0xffffffffff00ffff;
      uVar75 = *(ulong *)(in_x0 + 0x51c2) & 0xffffffffffffff00;
      uVar76 = CONCAT44((int)(uVar75 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51c2) >> 0x10),(short)uVar75)) &
               0xffffffffff00ffff;
      uVar69 = *(ulong *)(in_x0 + 0x51ca) & 0xffffffffffffff00;
      uVar70 = CONCAT44((int)(uVar69 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51ca) >> 0x10),(short)uVar69)) &
               0xffffffffff00ffff;
      uVar71 = *(ulong *)(in_x0 + 0x51d2) & 0xffffffffffffff00;
      uVar72 = CONCAT44((int)(uVar71 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51d2) >> 0x10),(short)uVar71)) &
               0xffffffffff00ffff;
      uVar65 = *(ulong *)(in_x0 + 0x51da) & 0xffffffffffffff00;
      uVar66 = CONCAT44((int)(uVar65 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51da) >> 0x10),(short)uVar65)) &
               0xffffffffff00ffff;
      uVar67 = *(ulong *)(in_x0 + 0x51e2) & 0xffffffffffffff00;
      uVar68 = CONCAT44((int)(uVar67 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51e2) >> 0x10),(short)uVar67)) &
               0xffffffffff00ffff;
      uVar61 = *(ulong *)(in_x0 + 0x51ea) & 0xffffffffffffff00;
      uVar62 = CONCAT44((int)(uVar61 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51ea) >> 0x10),(short)uVar61)) &
               0xffffffffff00ffff;
      uVar63 = *(ulong *)(in_x0 + 0x51f2) & 0xffffffffffffff00;
      uVar64 = CONCAT44((int)(uVar63 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51f2) >> 0x10),(short)uVar63)) &
               0xffffffffff00ffff;
      uVar57 = *(ulong *)(in_x0 + 0x51fa) & 0xffffffffffffff00;
      uVar58 = CONCAT44((int)(uVar57 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x51fa) >> 0x10),(short)uVar57)) &
               0xffffffffff00ffff;
      uVar59 = *(ulong *)(in_x0 + 0x5202) & 0xffffffffffffff00;
      uVar60 = CONCAT44((int)(uVar59 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5202) >> 0x10),(short)uVar59)) &
               0xffffffffff00ffff;
      uVar53 = *(ulong *)(in_x0 + 0x520a) & 0xffffffffffffff00;
      uVar54 = CONCAT44((int)(uVar53 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x520a) >> 0x10),(short)uVar53)) &
               0xffffffffff00ffff;
      uVar55 = *(ulong *)(in_x0 + 0x5212) & 0xffffffffffffff00;
      uVar56 = CONCAT44((int)(uVar55 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5212) >> 0x10),(short)uVar55)) &
               0xffffffffff00ffff;
      uVar49 = *(ulong *)(in_x0 + 0x521a) & 0xffffffffffffff00;
      uVar50 = CONCAT44((int)(uVar49 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x521a) >> 0x10),(short)uVar49)) &
               0xffffffffff00ffff;
      uVar51 = *(ulong *)(in_x0 + 0x5222) & 0xffffffffffffff00;
      uVar52 = CONCAT44((int)(uVar51 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5222) >> 0x10),(short)uVar51)) &
               0xffffffffff00ffff;
      uVar45 = *(ulong *)(in_x0 + 0x522a) & 0xffffffffffffff00;
      uVar46 = CONCAT44((int)(uVar45 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x522a) >> 0x10),(short)uVar45)) &
               0xffffffffff00ffff;
      uVar47 = *(ulong *)(in_x0 + 0x5232) & 0xffffffffffffff00;
      uVar48 = CONCAT44((int)(uVar47 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5232) >> 0x10),(short)uVar47)) &
               0xffffffffff00ffff;
      uVar41 = *(ulong *)(in_x0 + 0x523a) & 0xffffffffffffff00;
      uVar42 = CONCAT44((int)(uVar41 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x523a) >> 0x10),(short)uVar41)) &
               0xffffffffff00ffff;
      uVar43 = *(ulong *)(in_x0 + 0x5242) & 0xffffffffffffff00;
      uVar44 = CONCAT44((int)(uVar43 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5242) >> 0x10),(short)uVar43)) &
               0xffffffffff00ffff;
      uVar37 = *(ulong *)(in_x0 + 0x524a) & 0xffffffffffffff00;
      uVar38 = CONCAT44((int)(uVar37 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x524a) >> 0x10),(short)uVar37)) &
               0xffffffffff00ffff;
      uVar39 = *(ulong *)(in_x0 + 0x5252) & 0xffffffffffffff00;
      uVar40 = CONCAT44((int)(uVar39 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5252) >> 0x10),(short)uVar39)) &
               0xffffffffff00ffff;
      uVar33 = *(ulong *)(in_x0 + 0x525a) & 0xffffffffffffff00;
      uVar34 = CONCAT44((int)(uVar33 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x525a) >> 0x10),(short)uVar33)) &
               0xffffffffff00ffff;
      uVar35 = *(ulong *)(in_x0 + 0x5262) & 0xffffffffffffff00;
      uVar36 = CONCAT44((int)(uVar35 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5262) >> 0x10),(short)uVar35)) &
               0xffffffffff00ffff;
      uVar29 = *(ulong *)(in_x0 + 0x526a) & 0xffffffffffffff00;
      uVar30 = CONCAT44((int)(uVar29 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x526a) >> 0x10),(short)uVar29)) &
               0xffffffffff00ffff;
      uVar31 = *(ulong *)(in_x0 + 0x5272) & 0xffffffffffffff00;
      uVar32 = CONCAT44((int)(uVar31 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5272) >> 0x10),(short)uVar31)) &
               0xffffffffff00ffff;
      uVar25 = *(ulong *)(in_x0 + 0x527a) & 0xffffffffffffff00;
      uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x527a) >> 0x10),(short)uVar25)) &
               0xffffffffff00ffff;
      uVar27 = *(ulong *)(in_x0 + 0x5282) & 0xffffffffffffff00;
      uVar28 = CONCAT44((int)(uVar27 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5282) >> 0x10),(short)uVar27)) &
               0xffffffffff00ffff;
      uVar21 = *(ulong *)(in_x0 + 0x528a) & 0xffffffffffffff00;
      uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x528a) >> 0x10),(short)uVar21)) &
               0xffffffffff00ffff;
      uVar23 = *(ulong *)(in_x0 + 0x5292) & 0xffffffffffffff00;
      uVar24 = CONCAT44((int)(uVar23 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5292) >> 0x10),(short)uVar23)) &
               0xffffffffff00ffff;
      uVar17 = *(ulong *)(in_x0 + 0x529a) & 0xffffffffffffff00;
      uVar18 = CONCAT44((int)(uVar17 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x529a) >> 0x10),(short)uVar17)) &
               0xffffffffff00ffff;
      uVar19 = *(ulong *)(in_x0 + 0x52a2) & 0xffffffffffffff00;
      uVar20 = CONCAT44((int)(uVar19 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52a2) >> 0x10),(short)uVar19)) &
               0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x52aa) & 0xffffffffffffff00;
      uVar13 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52aa) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      uVar15 = *(ulong *)(in_x0 + 0x52b2) & 0xffffffffffffff00;
      uVar16 = CONCAT44((int)(uVar15 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52b2) >> 0x10),(short)uVar15)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x51c2) =
           CONCAT26((short)(uVar76 >> 0x30),CONCAT24((short)(uVar75 >> 0x20),(int)uVar76)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51ba) =
           CONCAT26((short)(uVar74 >> 0x30),CONCAT24((short)(uVar73 >> 0x20),(int)uVar74)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51d2) =
           CONCAT26((short)(uVar72 >> 0x30),CONCAT24((short)(uVar71 >> 0x20),(int)uVar72)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51ca) =
           CONCAT26((short)(uVar70 >> 0x30),CONCAT24((short)(uVar69 >> 0x20),(int)uVar70)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51e2) =
           CONCAT26((short)(uVar68 >> 0x30),CONCAT24((short)(uVar67 >> 0x20),(int)uVar68)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51da) =
           CONCAT26((short)(uVar66 >> 0x30),CONCAT24((short)(uVar65 >> 0x20),(int)uVar66)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51f2) =
           CONCAT26((short)(uVar64 >> 0x30),CONCAT24((short)(uVar63 >> 0x20),(int)uVar64)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x51ea) =
           CONCAT26((short)(uVar62 >> 0x30),CONCAT24((short)(uVar61 >> 0x20),(int)uVar62)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x5202) =
           CONCAT26((short)(uVar60 >> 0x30),CONCAT24((short)(uVar59 >> 0x20),(int)uVar60)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x51fa) =
           CONCAT26((short)(uVar58 >> 0x30),CONCAT24((short)(uVar57 >> 0x20),(int)uVar58)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5212) =
           CONCAT26((short)(uVar56 >> 0x30),CONCAT24((short)(uVar55 >> 0x20),(int)uVar56)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x520a) =
           CONCAT26((short)(uVar54 >> 0x30),CONCAT24((short)(uVar53 >> 0x20),(int)uVar54)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5222) =
           CONCAT26((short)(uVar52 >> 0x30),CONCAT24((short)(uVar51 >> 0x20),(int)uVar52)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x521a) =
           CONCAT26((short)(uVar50 >> 0x30),CONCAT24((short)(uVar49 >> 0x20),(int)uVar50)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5232) =
           CONCAT26((short)(uVar48 >> 0x30),CONCAT24((short)(uVar47 >> 0x20),(int)uVar48)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x522a) =
           CONCAT26((short)(uVar46 >> 0x30),CONCAT24((short)(uVar45 >> 0x20),(int)uVar46)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x5242) =
           CONCAT26((short)(uVar44 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar44)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x523a) =
           CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar42)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5252) =
           CONCAT26((short)(uVar40 >> 0x30),CONCAT24((short)(uVar39 >> 0x20),(int)uVar40)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x524a) =
           CONCAT26((short)(uVar38 >> 0x30),CONCAT24((short)(uVar37 >> 0x20),(int)uVar38)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5262) =
           CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x525a) =
           CONCAT26((short)(uVar34 >> 0x30),CONCAT24((short)(uVar33 >> 0x20),(int)uVar34)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5272) =
           CONCAT26((short)(uVar32 >> 0x30),CONCAT24((short)(uVar31 >> 0x20),(int)uVar32)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x526a) =
           CONCAT26((short)(uVar30 >> 0x30),CONCAT24((short)(uVar29 >> 0x20),(int)uVar30)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x5282) =
           CONCAT26((short)(uVar28 >> 0x30),CONCAT24((short)(uVar27 >> 0x20),(int)uVar28)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x527a) =
           CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x5292) =
           CONCAT26((short)(uVar24 >> 0x30),CONCAT24((short)(uVar23 >> 0x20),(int)uVar24)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x528a) =
           CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x52a2) =
           CONCAT26((short)(uVar20 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar20)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x529a) =
           CONCAT26((short)(uVar18 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar18)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x52b2) =
           CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar15 >> 0x20),(int)uVar16)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x52aa) =
           CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar13)) &
           0xff00ff00ffffffff | 0x4000400040004;
      uVar29 = *(ulong *)(in_x0 + 0x52ba) & 0xffffffffffffff00;
      uVar30 = CONCAT44((int)(uVar29 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52ba) >> 0x10),(short)uVar29)) &
               0xffffffffff00ffff;
      uVar31 = *(ulong *)(in_x0 + 0x52c2) & 0xffffffffffffff00;
      uVar32 = CONCAT44((int)(uVar31 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52c2) >> 0x10),(short)uVar31)) &
               0xffffffffff00ffff;
      uVar25 = *(ulong *)(in_x0 + 0x52ca) & 0xffffffffffffff00;
      uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52ca) >> 0x10),(short)uVar25)) &
               0xffffffffff00ffff;
      uVar27 = *(ulong *)(in_x0 + 0x52d2) & 0xffffffffffffff00;
      uVar28 = CONCAT44((int)(uVar27 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52d2) >> 0x10),(short)uVar27)) &
               0xffffffffff00ffff;
      uVar21 = *(ulong *)(in_x0 + 0x52da) & 0xffffffffffffff00;
      uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52da) >> 0x10),(short)uVar21)) &
               0xffffffffff00ffff;
      uVar23 = *(ulong *)(in_x0 + 0x52e2) & 0xffffffffffffff00;
      uVar24 = CONCAT44((int)(uVar23 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52e2) >> 0x10),(short)uVar23)) &
               0xffffffffff00ffff;
      uVar17 = *(ulong *)(in_x0 + 0x52ea) & 0xffffffffffffff00;
      uVar18 = CONCAT44((int)(uVar17 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52ea) >> 0x10),(short)uVar17)) &
               0xffffffffff00ffff;
      uVar19 = *(ulong *)(in_x0 + 0x52f2) & 0xffffffffffffff00;
      uVar20 = CONCAT44((int)(uVar19 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52f2) >> 0x10),(short)uVar19)) &
               0xffffffffff00ffff;
      uVar13 = *(ulong *)(in_x0 + 0x52fa) & 0xffffffffffffff00;
      uVar14 = CONCAT44((int)(uVar13 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x52fa) >> 0x10),(short)uVar13)) &
               0xffffffffff00ffff;
      uVar15 = *(ulong *)(in_x0 + 0x5302) & 0xffffffffffffff00;
      uVar16 = CONCAT44((int)(uVar15 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5302) >> 0x10),(short)uVar15)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x52c2) =
           CONCAT26((short)(uVar32 >> 0x30),CONCAT24((short)(uVar31 >> 0x20),(int)uVar32)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52ba) =
           CONCAT26((short)(uVar30 >> 0x30),CONCAT24((short)(uVar29 >> 0x20),(int)uVar30)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52d2) =
           CONCAT26((short)(uVar28 >> 0x30),CONCAT24((short)(uVar27 >> 0x20),(int)uVar28)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52ca) =
           CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52e2) =
           CONCAT26((short)(uVar24 >> 0x30),CONCAT24((short)(uVar23 >> 0x20),(int)uVar24)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52da) =
           CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52f2) =
           CONCAT26((short)(uVar20 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar20)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x52ea) =
           CONCAT26((short)(uVar18 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar18)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x5302) =
           CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar15 >> 0x20),(int)uVar16)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x52fa) =
           CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar14)) &
           0xff00ff00ffffffff | 0x2000200020002;
      uVar37 = *(ulong *)(in_x0 + 0x530a) & 0xffffffffffffff00;
      uVar38 = CONCAT44((int)(uVar37 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x530a) >> 0x10),(short)uVar37)) &
               0xffffffffff00ffff;
      uVar39 = *(ulong *)(in_x0 + 0x5312) & 0xffffffffffffff00;
      uVar40 = CONCAT44((int)(uVar39 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5312) >> 0x10),(short)uVar39)) &
               0xffffffffff00ffff;
      uVar33 = *(ulong *)(in_x0 + 0x531a) & 0xffffffffffffff00;
      uVar34 = CONCAT44((int)(uVar33 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x531a) >> 0x10),(short)uVar33)) &
               0xffffffffff00ffff;
      uVar35 = *(ulong *)(in_x0 + 0x5322) & 0xffffffffffffff00;
      uVar36 = CONCAT44((int)(uVar35 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5322) >> 0x10),(short)uVar35)) &
               0xffffffffff00ffff;
      uVar29 = *(ulong *)(in_x0 + 0x532a) & 0xffffffffffffff00;
      uVar30 = CONCAT44((int)(uVar29 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x532a) >> 0x10),(short)uVar29)) &
               0xffffffffff00ffff;
      uVar31 = *(ulong *)(in_x0 + 0x5332) & 0xffffffffffffff00;
      uVar32 = CONCAT44((int)(uVar31 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5332) >> 0x10),(short)uVar31)) &
               0xffffffffff00ffff;
      uVar25 = *(ulong *)(in_x0 + 0x533a) & 0xffffffffffffff00;
      uVar26 = CONCAT44((int)(uVar25 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x533a) >> 0x10),(short)uVar25)) &
               0xffffffffff00ffff;
      uVar27 = *(ulong *)(in_x0 + 0x5342) & 0xffffffffffffff00;
      uVar28 = CONCAT44((int)(uVar27 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5342) >> 0x10),(short)uVar27)) &
               0xffffffffff00ffff;
      uVar21 = *(ulong *)(in_x0 + 0x534a) & 0xffffffffffffff00;
      uVar22 = CONCAT44((int)(uVar21 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x534a) >> 0x10),(short)uVar21)) &
               0xffffffffff00ffff;
      uVar23 = *(ulong *)(in_x0 + 0x5352) & 0xffffffffffffff00;
      uVar24 = CONCAT44((int)(uVar23 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5352) >> 0x10),(short)uVar23)) &
               0xffffffffff00ffff;
      uVar17 = *(ulong *)(in_x0 + 0x535a) & 0xffffffffffffff00;
      uVar18 = CONCAT44((int)(uVar17 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x535a) >> 0x10),(short)uVar17)) &
               0xffffffffff00ffff;
      uVar19 = *(ulong *)(in_x0 + 0x5362) & 0xffffffffffffff00;
      uVar20 = CONCAT44((int)(uVar19 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5362) >> 0x10),(short)uVar19)) &
               0xffffffffff00ffff;
      uVar13 = *(ulong *)(in_x0 + 0x536a) & 0xffffffffffffff00;
      uVar14 = CONCAT44((int)(uVar13 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x536a) >> 0x10),(short)uVar13)) &
               0xffffffffff00ffff;
      uVar15 = *(ulong *)(in_x0 + 0x5372) & 0xffffffffffffff00;
      uVar16 = CONCAT44((int)(uVar15 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5372) >> 0x10),(short)uVar15)) &
               0xffffffffff00ffff;
      uVar54 = *(ulong *)(in_x0 + 0x537a) & 0xffffffffffffff00;
      uVar53 = CONCAT44((int)(uVar54 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x537a) >> 0x10),(short)uVar54)) &
               0xffffffffff00ffff;
      uVar55 = *(ulong *)(in_x0 + 0x5382) & 0xffffffffffffff00;
      uVar56 = CONCAT44((int)(uVar55 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5382) >> 0x10),(short)uVar55)) &
               0xffffffffff00ffff;
      uVar49 = *(ulong *)(in_x0 + 0x538a) & 0xffffffffffffff00;
      uVar50 = CONCAT44((int)(uVar49 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x538a) >> 0x10),(short)uVar49)) &
               0xffffffffff00ffff;
      uVar51 = *(ulong *)(in_x0 + 0x5392) & 0xffffffffffffff00;
      uVar52 = CONCAT44((int)(uVar51 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x5392) >> 0x10),(short)uVar51)) &
               0xffffffffff00ffff;
      uVar45 = *(ulong *)(in_x0 + 0x539a) & 0xffffffffffffff00;
      uVar46 = CONCAT44((int)(uVar45 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x539a) >> 0x10),(short)uVar45)) &
               0xffffffffff00ffff;
      uVar47 = *(ulong *)(in_x0 + 0x53a2) & 0xffffffffffffff00;
      uVar48 = CONCAT44((int)(uVar47 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53a2) >> 0x10),(short)uVar47)) &
               0xffffffffff00ffff;
      uVar41 = *(ulong *)(in_x0 + 0x53aa) & 0xffffffffffffff00;
      uVar42 = CONCAT44((int)(uVar41 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53aa) >> 0x10),(short)uVar41)) &
               0xffffffffff00ffff;
      uVar43 = *(ulong *)(in_x0 + 0x53b2) & 0xffffffffffffff00;
      uVar44 = CONCAT44((int)(uVar43 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x53b2) >> 0x10),(short)uVar43)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x5312) =
           CONCAT26((short)(uVar40 >> 0x30),CONCAT24((short)(uVar39 >> 0x20),(int)uVar40)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x530a) =
           CONCAT26((short)(uVar38 >> 0x30),CONCAT24((short)(uVar37 >> 0x20),(int)uVar38)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5322) =
           CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x531a) =
           CONCAT26((short)(uVar34 >> 0x30),CONCAT24((short)(uVar33 >> 0x20),(int)uVar34)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5332) =
           CONCAT26((short)(uVar32 >> 0x30),CONCAT24((short)(uVar31 >> 0x20),(int)uVar32)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x532a) =
           CONCAT26((short)(uVar30 >> 0x30),CONCAT24((short)(uVar29 >> 0x20),(int)uVar30)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x5342) =
           CONCAT26((short)(uVar28 >> 0x30),CONCAT24((short)(uVar27 >> 0x20),(int)uVar28)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x533a) =
           CONCAT26((short)(uVar26 >> 0x30),CONCAT24((short)(uVar25 >> 0x20),(int)uVar26)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5352) =
           CONCAT26((short)(uVar24 >> 0x30),CONCAT24((short)(uVar23 >> 0x20),(int)uVar24)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x534a) =
           CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar21 >> 0x20),(int)uVar22)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5362) =
           CONCAT26((short)(uVar20 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar20)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x535a) =
           CONCAT26((short)(uVar18 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar18)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5372) =
           CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar15 >> 0x20),(int)uVar16)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x536a) =
           CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar14)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x5382) =
           CONCAT26((short)(uVar56 >> 0x30),CONCAT24((short)(uVar55 >> 0x20),(int)uVar56)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x537a) =
           CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar53)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x5392) =
           CONCAT26((short)(uVar52 >> 0x30),CONCAT24((short)(uVar51 >> 0x20),(int)uVar52)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x538a) =
           CONCAT26((short)(uVar50 >> 0x30),CONCAT24((short)(uVar49 >> 0x20),(int)uVar50)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x53a2) =
           CONCAT26((short)(uVar48 >> 0x30),CONCAT24((short)(uVar47 >> 0x20),(int)uVar48)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x539a) =
           CONCAT26((short)(uVar46 >> 0x30),CONCAT24((short)(uVar45 >> 0x20),(int)uVar46)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x53b2) =
           CONCAT26((short)(uVar44 >> 0x30),CONCAT24((short)(uVar43 >> 0x20),(int)uVar44)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x53aa) =
           CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar42)) &
           0xff00ff00ffffffff;
      __s = memset(__s,0,0x100);
      *(undefined4 *)(in_x0 + 0x56ba) = 0x80a0c0e0;
      *(undefined2 *)(in_x0 + 0x56be) = 0x4060;
      *(undefined *)(in_x0 + 0x56c0) = 0x20;
      uVar3 = *(ushort *)(lVar11 + 0x51ba);
      uVar6 = uVar3 + 1;
      lVar10 = in_x0 + (ulong)(byte)uVar3;
      bVar4 = *(byte *)(lVar10 + 0x56ba);
      *(byte *)(lVar10 + 0x56ba) = bVar4 + 1;
    } while ((uVar6 & 0xff) == 0);
  }
  lVar11 = in_x0 + (ulong)bVar4 * 2;
  *(undefined2 *)(in_x0 + (ulong)local_10 * 2 + 0x51ba) = *(undefined2 *)(lVar11 + 0x51ba);
  *(short *)(lVar11 + 0x51ba) = (short)uVar6;
  uVar7 = BitInput::fgetbits();
  uVar7 = (uVar6 & 0xff00 | uVar7 >> 8) >> 1;
  BitInput::faddbits(this,7);
  uVar6 = *(uint *)(in_x0 + 0x58d0);
  if (bVar1) {
    uVar8 = *(uint *)(in_x0 + 0x58f0);
    if (uVar5 != 0) {
      if (uVar6 != 0) {
LAB_001ce4c8:
        *(uint *)(in_x0 + 0x58d0) = uVar6 - 1;
      }
      goto LAB_001ce1bc;
    }
    if (uVar7 <= uVar8) {
      *(uint *)(in_x0 + 0x58d0) = (uVar6 + 1) - (uVar6 + 1 >> 8);
      goto LAB_001ce1bc;
    }
    if (uVar6 != 0) goto LAB_001ce4c8;
  }
  else {
    uVar8 = *(uint *)(in_x0 + 0x58f0);
LAB_001ce1bc:
    if (uVar7 < uVar8) {
      uVar5 = uVar5 + 3;
      goto LAB_001ce1c8;
    }
  }
  uVar5 = uVar5 + 4;
LAB_001ce1c8:
  uVar8 = uVar5 + 8;
  if (0x100 < uVar7) {
    uVar8 = uVar5;
  }
  uVar9 = 0x7f00;
  if ((uVar6 < 0xb1) &&
     (bVar1 = 0x3f < uVar2, uVar9 = 0x7f00,
     (bVar1 || *(uint *)(in_x0 + 0x58c0) < 0x29ff) || !bVar1 && *(uint *)(in_x0 + 0x58c0) == 0x29ff)
     ) {
    uVar9 = 0x2001;
  }
  lVar11 = *(long *)(in_x0 + 0x4da0);
  *(undefined4 *)(in_x0 + 0x58f0) = uVar9;
  iVar12 = uVar8 - 1;
  uVar5 = *(uint *)(in_x0 + 0xb0);
  *(uint *)(in_x0 + (ulong)uVar5 * 4 + 0xa0) = uVar7;
  *(uint *)(in_x0 + 0xb0) = uVar5 + 1 & 3;
  *(uint *)(in_x0 + 0xb4) = uVar8;
  *(uint *)(in_x0 + 0xb8) = uVar7;
  *(ulong *)(in_x0 + 0x4da0) = lVar11 - (ulong)uVar8;
  if (uVar8 != 0) {
    uVar14 = *(ulong *)(in_x0 + 0xc0);
    uVar13 = *(ulong *)(in_x0 + 0xe980);
    do {
      iVar12 = iVar12 + -1;
      *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar14) =
           *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar14 - uVar7 & uVar13));
      uVar13 = *(ulong *)(in_x0 + 0xe980);
      uVar14 = *(long *)(in_x0 + 0xc0) + 1U & uVar13;
      *(ulong *)(in_x0 + 0xc0) = uVar14;
    } while (iVar12 != -1);
  }
  return;
}


