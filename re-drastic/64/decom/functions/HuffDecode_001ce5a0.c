/*
 * Ghidra decompilation
 *
 * Function : HuffDecode
 * Address  : 001ce5a0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::HuffDecode() */

void Unpack::HuffDecode(void)

{
  BitInput *this;
  int iVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long in_x0;
  long lVar7;
  void *__s;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar16;
  ulong uVar18;
  ulong uVar20;
  ulong uVar22;
  ulong uVar24;
  ulong uVar26;
  ulong uVar28;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar44;
  ulong uVar46;
  ulong uVar48;
  ulong uVar49;
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
  ulong uVar72;
  ulong uVar74;
  ulong uVar15;
  ulong uVar17;
  ulong uVar19;
  ulong uVar21;
  ulong uVar23;
  ulong uVar25;
  ulong uVar27;
  ulong uVar29;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  ulong uVar43;
  ulong uVar45;
  ulong uVar47;
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
  ulong uVar73;
  ulong uVar75;
  
  this = (BitInput *)(in_x0 + 8);
  uVar3 = BitInput::fgetbits();
  uVar4 = *(uint *)(in_x0 + 0x58c0);
  if (uVar4 < 0x7600) {
    uVar6 = uVar3 & 0xfff0;
    if (uVar4 < 0x5e00) {
      if (uVar4 < 0x3600) {
        if (0xdff < uVar4) {
          if (uVar6 < DecHf1) {
            BitInput::faddbits(this,5);
            lVar10 = 0x14;
            uVar4 = 0xb;
          }
          else {
            uVar13 = 5;
            lVar10 = 4;
            do {
              lVar7 = lVar10;
              uVar4 = (int)uVar13 + 1;
              uVar13 = (ulong)uVar4;
              lVar10 = lVar7 + 4;
            } while (*(uint *)((long)&DecHf1 + lVar7) <= uVar6);
            BitInput::faddbits(this,uVar4);
            lVar10 = uVar13 << 2;
            uVar4 = 0x10 - uVar4;
            uVar6 = uVar6 - *(int *)(lVar7 + 0x267f9c);
          }
          uVar4 = (uVar6 >> (ulong)(uVar4 & 0x1f)) + *(int *)(PosHf1 + lVar10);
          iVar5 = *(int *)(in_x0 + 0x58dc);
          goto joined_r0x001ceab4;
        }
        if (uVar6 < DecHf0) {
          BitInput::faddbits(this,4);
          lVar10 = 0x10;
          uVar4 = 0xc;
        }
        else {
          uVar13 = 4;
          lVar10 = 4;
          do {
            lVar7 = lVar10;
            uVar4 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar4;
            lVar10 = lVar7 + 4;
          } while (*(uint *)((long)&DecHf0 + lVar7) <= uVar6);
          BitInput::faddbits(this,uVar4);
          lVar10 = uVar13 << 2;
          uVar6 = uVar6 - *(int *)(lVar7 + 0x267ffc);
          uVar4 = 0x10 - uVar4;
        }
        uVar4 = (uVar6 >> (ulong)(uVar4 & 0x1f)) + *(int *)(PosHf0 + lVar10);
      }
      else {
        if (uVar6 < DecHf2) {
          BitInput::faddbits(this,5);
          lVar10 = 0x14;
          uVar4 = 0xb;
        }
        else {
          uVar13 = 5;
          lVar10 = 4;
          do {
            lVar7 = lVar10;
            uVar4 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar4;
            lVar10 = lVar7 + 4;
          } while (*(uint *)((long)&DecHf2 + lVar7) <= uVar6);
          BitInput::faddbits(this,uVar4);
          lVar10 = uVar13 << 2;
          uVar4 = 0x10 - uVar4;
          uVar6 = uVar6 - *(int *)(lVar7 + 0x267f3c);
        }
        uVar4 = (uVar6 >> (ulong)(uVar4 & 0x1f)) + *(int *)(PosHf2 + lVar10);
      }
    }
    else {
      if (uVar6 < DecHf3) {
        BitInput::faddbits(this,6);
        lVar10 = 0x18;
        uVar4 = 10;
      }
      else {
        uVar13 = 6;
        lVar10 = 4;
        do {
          lVar7 = lVar10;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar4;
          lVar10 = lVar7 + 4;
        } while (*(uint *)((long)&DecHf3 + lVar7) <= uVar6);
        BitInput::faddbits(this,uVar4);
        lVar10 = uVar13 << 2;
        uVar4 = 0x10 - uVar4;
        uVar6 = uVar6 - *(int *)(lVar7 + 0x2680cc);
      }
      uVar4 = (uVar6 >> (ulong)(uVar4 & 0x1f)) + *(int *)(PosHf3 + lVar10);
    }
  }
  else {
    uVar4 = uVar3 & 0xfff0;
    if (uVar4 < DecHf4) {
      BitInput::faddbits(this,8);
      lVar10 = 0x20;
      uVar6 = 8;
    }
    else {
      uVar13 = 8;
      lVar10 = 4;
      do {
        lVar7 = lVar10;
        uVar6 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar6;
        lVar10 = lVar7 + 4;
      } while (*(uint *)((long)&DecHf4 + lVar7) <= uVar4);
      BitInput::faddbits(this,uVar6);
      lVar10 = uVar13 << 2;
      uVar6 = 0x10 - uVar6;
      uVar4 = uVar4 - *(int *)(lVar7 + 0x26806c);
    }
    uVar4 = (uVar4 >> (ulong)(uVar6 & 0x1f)) + *(int *)(PosHf4 + lVar10);
  }
  iVar5 = *(int *)(in_x0 + 0x58dc);
joined_r0x001ceab4:
  uVar4 = uVar4 & 0xff;
  if (iVar5 == 0) {
    iVar5 = *(int *)(in_x0 + 0x58d8);
    *(int *)(in_x0 + 0x58d8) = iVar5 + 1;
    if ((0xf < iVar5) && (*(int *)(in_x0 + 0x58e4) == 0)) {
      *(undefined4 *)(in_x0 + 0x58dc) = 1;
    }
  }
  else if (uVar3 < 0x1000 || uVar4 != 0) {
    uVar4 = uVar4 - 1;
    if (uVar4 == 0xffffffff) {
      uVar4 = BitInput::fgetbits();
      BitInput::faddbits(this,1);
      if ((uVar4 >> 0xf & 1) != 0) {
        *(undefined8 *)(in_x0 + 0x58d8) = 0;
        return;
      }
      iVar5 = 3;
      if ((uVar4 & 0x4000) == 0) {
        iVar5 = 2;
      }
      lVar10 = 4;
      if ((uVar4 & 0x4000) == 0) {
        lVar10 = 3;
      }
      BitInput::faddbits(this,1);
      uVar4 = BitInput::fgetbits();
      uVar4 = uVar4 & 0xfff0;
      if (uVar4 < DecHf2) {
        BitInput::faddbits(this,5);
        lVar7 = 0x14;
        uVar3 = 0xb;
      }
      else {
        uVar13 = 5;
        lVar7 = 4;
        do {
          lVar8 = lVar7;
          uVar3 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar3;
          lVar7 = lVar8 + 4;
        } while (*(uint *)((long)&DecHf2 + lVar8) <= uVar4);
        BitInput::faddbits(this,uVar3);
        lVar7 = uVar13 << 2;
        uVar4 = uVar4 - *(int *)(lVar8 + 0x267f3c);
        uVar3 = 0x10 - uVar3;
      }
      iVar1 = *(int *)(PosHf2 + lVar7);
      uVar6 = BitInput::fgetbits();
      BitInput::faddbits(this,5);
      uVar13 = (ulong)(((uVar4 >> (ulong)(uVar3 & 0x1f)) + iVar1) * 0x20 | uVar6 >> 0xb);
      *(long *)(in_x0 + 0x4da0) = *(long *)(in_x0 + 0x4da0) - lVar10;
      *(undefined *)(*(long *)(in_x0 + 0x4b90) + *(long *)(in_x0 + 0xc0)) =
           *(undefined *)
            (*(long *)(in_x0 + 0x4b90) +
            (*(long *)(in_x0 + 0xc0) - uVar13 & *(ulong *)(in_x0 + 0xe980)));
      uVar9 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
      *(ulong *)(in_x0 + 0xc0) = uVar9;
      *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar9) =
           *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar9 - uVar13 & *(ulong *)(in_x0 + 0xe980)))
      ;
      uVar9 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
      *(ulong *)(in_x0 + 0xc0) = uVar9;
      *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar9) =
           *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar9 - uVar13 & *(ulong *)(in_x0 + 0xe980)))
      ;
      uVar9 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
      *(ulong *)(in_x0 + 0xc0) = uVar9;
      if (iVar5 != 2) {
        *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar9) =
             *(undefined *)
              (*(long *)(in_x0 + 0x4b90) + (uVar9 - uVar13 & *(ulong *)(in_x0 + 0xe980)));
        *(ulong *)(in_x0 + 0xc0) = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
        return;
      }
      return;
    }
  }
  else {
    uVar4 = 0xff;
  }
  uVar6 = uVar4 + *(int *)(in_x0 + 0x58c0);
  uVar3 = *(int *)(in_x0 + 0x58e8) + 0x10;
  *(uint *)(in_x0 + 0x58c0) = uVar6 - (uVar6 >> 8);
  if (uVar3 < 0x100) {
    *(uint *)(in_x0 + 0x58e8) = uVar3;
  }
  else {
    *(undefined4 *)(in_x0 + 0x58e8) = 0x90;
    *(uint *)(in_x0 + 0x58ec) = *(uint *)(in_x0 + 0x58ec) >> 1;
  }
  lVar10 = in_x0 + (long)(int)uVar4 * 2;
  lVar7 = *(long *)(in_x0 + 0xc0);
  uVar2 = *(undefined *)(lVar10 + 0x4dbb);
  *(long *)(in_x0 + 0xc0) = lVar7 + 1;
  *(undefined *)(*(long *)(in_x0 + 0x4b90) + lVar7) = uVar2;
  *(long *)(in_x0 + 0x4da0) = *(long *)(in_x0 + 0x4da0) + -1;
  uVar12 = *(short *)(lVar10 + 0x4dba) + 1;
  lVar7 = in_x0 + (ulong)(byte)*(short *)(lVar10 + 0x4dba);
  bVar11 = *(byte *)(lVar7 + 0x55ba);
  *(byte *)(lVar7 + 0x55ba) = bVar11 + 1;
  if (0xa1 < (uVar12 & 0xff)) {
    __s = (void *)(in_x0 + 0x55ba);
    do {
      uVar72 = *(ulong *)(in_x0 + 0x4dba) & 0xffffffffffffff00;
      uVar73 = CONCAT44((int)(uVar72 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dba) >> 0x10),(short)uVar72)) &
               0xffffffffff00ffff;
      uVar74 = *(ulong *)(in_x0 + 0x4dc2) & 0xffffffffffffff00;
      uVar75 = CONCAT44((int)(uVar74 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dc2) >> 0x10),(short)uVar74)) &
               0xffffffffff00ffff;
      uVar68 = *(ulong *)(in_x0 + 0x4dca) & 0xffffffffffffff00;
      uVar69 = CONCAT44((int)(uVar68 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dca) >> 0x10),(short)uVar68)) &
               0xffffffffff00ffff;
      uVar70 = *(ulong *)(in_x0 + 0x4dd2) & 0xffffffffffffff00;
      uVar71 = CONCAT44((int)(uVar70 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dd2) >> 0x10),(short)uVar70)) &
               0xffffffffff00ffff;
      uVar64 = *(ulong *)(in_x0 + 0x4dda) & 0xffffffffffffff00;
      uVar65 = CONCAT44((int)(uVar64 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dda) >> 0x10),(short)uVar64)) &
               0xffffffffff00ffff;
      uVar66 = *(ulong *)(in_x0 + 0x4de2) & 0xffffffffffffff00;
      uVar67 = CONCAT44((int)(uVar66 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4de2) >> 0x10),(short)uVar66)) &
               0xffffffffff00ffff;
      uVar60 = *(ulong *)(in_x0 + 0x4dea) & 0xffffffffffffff00;
      uVar61 = CONCAT44((int)(uVar60 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dea) >> 0x10),(short)uVar60)) &
               0xffffffffff00ffff;
      uVar62 = *(ulong *)(in_x0 + 0x4df2) & 0xffffffffffffff00;
      uVar63 = CONCAT44((int)(uVar62 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4df2) >> 0x10),(short)uVar62)) &
               0xffffffffff00ffff;
      uVar56 = *(ulong *)(in_x0 + 0x4dfa) & 0xffffffffffffff00;
      uVar57 = CONCAT44((int)(uVar56 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4dfa) >> 0x10),(short)uVar56)) &
               0xffffffffff00ffff;
      uVar58 = *(ulong *)(in_x0 + 0x4e02) & 0xffffffffffffff00;
      uVar59 = CONCAT44((int)(uVar58 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e02) >> 0x10),(short)uVar58)) &
               0xffffffffff00ffff;
      uVar52 = *(ulong *)(in_x0 + 0x4e0a) & 0xffffffffffffff00;
      uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e0a) >> 0x10),(short)uVar52)) &
               0xffffffffff00ffff;
      uVar54 = *(ulong *)(in_x0 + 0x4e12) & 0xffffffffffffff00;
      uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e12) >> 0x10),(short)uVar54)) &
               0xffffffffff00ffff;
      uVar48 = *(ulong *)(in_x0 + 0x4e1a) & 0xffffffffffffff00;
      uVar49 = CONCAT44((int)(uVar48 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e1a) >> 0x10),(short)uVar48)) &
               0xffffffffff00ffff;
      uVar50 = *(ulong *)(in_x0 + 0x4e22) & 0xffffffffffffff00;
      uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e22) >> 0x10),(short)uVar50)) &
               0xffffffffff00ffff;
      uVar44 = *(ulong *)(in_x0 + 0x4e2a) & 0xffffffffffffff00;
      uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e2a) >> 0x10),(short)uVar44)) &
               0xffffffffff00ffff;
      uVar46 = *(ulong *)(in_x0 + 0x4e32) & 0xffffffffffffff00;
      uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e32) >> 0x10),(short)uVar46)) &
               0xffffffffff00ffff;
      uVar40 = *(ulong *)(in_x0 + 0x4e3a) & 0xffffffffffffff00;
      uVar41 = CONCAT44((int)(uVar40 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e3a) >> 0x10),(short)uVar40)) &
               0xffffffffff00ffff;
      uVar42 = *(ulong *)(in_x0 + 0x4e42) & 0xffffffffffffff00;
      uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e42) >> 0x10),(short)uVar42)) &
               0xffffffffff00ffff;
      uVar36 = *(ulong *)(in_x0 + 0x4e4a) & 0xffffffffffffff00;
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e4a) >> 0x10),(short)uVar36)) &
               0xffffffffff00ffff;
      uVar38 = *(ulong *)(in_x0 + 0x4e52) & 0xffffffffffffff00;
      uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e52) >> 0x10),(short)uVar38)) &
               0xffffffffff00ffff;
      uVar32 = *(ulong *)(in_x0 + 0x4e5a) & 0xffffffffffffff00;
      uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e5a) >> 0x10),(short)uVar32)) &
               0xffffffffff00ffff;
      uVar34 = *(ulong *)(in_x0 + 0x4e62) & 0xffffffffffffff00;
      uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e62) >> 0x10),(short)uVar34)) &
               0xffffffffff00ffff;
      uVar28 = *(ulong *)(in_x0 + 0x4e6a) & 0xffffffffffffff00;
      uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e6a) >> 0x10),(short)uVar28)) &
               0xffffffffff00ffff;
      uVar30 = *(ulong *)(in_x0 + 0x4e72) & 0xffffffffffffff00;
      uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e72) >> 0x10),(short)uVar30)) &
               0xffffffffff00ffff;
      uVar24 = *(ulong *)(in_x0 + 0x4e7a) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e7a) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x4e82) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e82) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x4e8a) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e8a) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x4e92) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e92) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x4e9a) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4e9a) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x4ea2) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4ea2) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar9 = *(ulong *)(in_x0 + 0x4eaa) & 0xffffffffffffff00;
      uVar13 = CONCAT44((int)(uVar9 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eaa) >> 0x10),(short)uVar9)) &
               0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x4eb2) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eb2) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x4dc2) =
           CONCAT26((short)(uVar75 >> 0x30),CONCAT24((short)(uVar74 >> 0x20),(int)uVar75)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4dba) =
           CONCAT26((short)(uVar73 >> 0x30),CONCAT24((short)(uVar72 >> 0x20),(int)uVar73)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4dd2) =
           CONCAT26((short)(uVar71 >> 0x30),CONCAT24((short)(uVar70 >> 0x20),(int)uVar71)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4dca) =
           CONCAT26((short)(uVar69 >> 0x30),CONCAT24((short)(uVar68 >> 0x20),(int)uVar69)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4de2) =
           CONCAT26((short)(uVar67 >> 0x30),CONCAT24((short)(uVar66 >> 0x20),(int)uVar67)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4dda) =
           CONCAT26((short)(uVar65 >> 0x30),CONCAT24((short)(uVar64 >> 0x20),(int)uVar65)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4df2) =
           CONCAT26((short)(uVar63 >> 0x30),CONCAT24((short)(uVar62 >> 0x20),(int)uVar63)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4dea) =
           CONCAT26((short)(uVar61 >> 0x30),CONCAT24((short)(uVar60 >> 0x20),(int)uVar61)) &
           0xff00ff00ffffffff | 0x7000700070007;
      *(ulong *)(in_x0 + 0x4e02) =
           CONCAT26((short)(uVar59 >> 0x30),CONCAT24((short)(uVar58 >> 0x20),(int)uVar59)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4dfa) =
           CONCAT26((short)(uVar57 >> 0x30),CONCAT24((short)(uVar56 >> 0x20),(int)uVar57)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e12) =
           CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e0a) =
           CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e22) =
           CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e1a) =
           CONCAT26((short)(uVar49 >> 0x30),CONCAT24((short)(uVar48 >> 0x20),(int)uVar49)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e32) =
           CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e2a) =
           CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
           0xff00ff00ffffffff | 0x6000600060006;
      *(ulong *)(in_x0 + 0x4e42) =
           CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e3a) =
           CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar40 >> 0x20),(int)uVar41)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e52) =
           CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e4a) =
           CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e62) =
           CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e5a) =
           CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e72) =
           CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e6a) =
           CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
           0xff00ff00ffffffff | 0x5000500050005;
      *(ulong *)(in_x0 + 0x4e82) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4e7a) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4e92) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4e8a) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4ea2) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4e9a) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4eb2) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x4000400040004;
      *(ulong *)(in_x0 + 0x4eaa) =
           CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar13)) &
           0xff00ff00ffffffff | 0x4000400040004;
      uVar28 = *(ulong *)(in_x0 + 0x4eba) & 0xffffffffffffff00;
      uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eba) >> 0x10),(short)uVar28)) &
               0xffffffffff00ffff;
      uVar30 = *(ulong *)(in_x0 + 0x4ec2) & 0xffffffffffffff00;
      uVar31 = CONCAT44((int)(uVar30 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4ec2) >> 0x10),(short)uVar30)) &
               0xffffffffff00ffff;
      uVar24 = *(ulong *)(in_x0 + 0x4eca) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eca) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x4ed2) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4ed2) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x4eda) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eda) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x4ee2) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4ee2) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x4eea) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4eea) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x4ef2) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4ef2) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar13 = *(ulong *)(in_x0 + 0x4efa) & 0xffffffffffffff00;
      uVar9 = CONCAT44((int)(uVar13 >> 0x20),
                       CONCAT22((short)(*(ulong *)(in_x0 + 0x4efa) >> 0x10),(short)uVar13)) &
              0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x4f02) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f02) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x4ec2) =
           CONCAT26((short)(uVar31 >> 0x30),CONCAT24((short)(uVar30 >> 0x20),(int)uVar31)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4eba) =
           CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4ed2) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4eca) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4ee2) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4eda) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4ef2) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4eea) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x3000300030003;
      *(ulong *)(in_x0 + 0x4f02) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4efa) =
           CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar9)) &
           0xff00ff00ffffffff | 0x2000200020002;
      uVar36 = *(ulong *)(in_x0 + 0x4f0a) & 0xffffffffffffff00;
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f0a) >> 0x10),(short)uVar36)) &
               0xffffffffff00ffff;
      uVar38 = *(ulong *)(in_x0 + 0x4f12) & 0xffffffffffffff00;
      uVar39 = CONCAT44((int)(uVar38 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f12) >> 0x10),(short)uVar38)) &
               0xffffffffff00ffff;
      uVar32 = *(ulong *)(in_x0 + 0x4f1a) & 0xffffffffffffff00;
      uVar33 = CONCAT44((int)(uVar32 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f1a) >> 0x10),(short)uVar32)) &
               0xffffffffff00ffff;
      uVar34 = *(ulong *)(in_x0 + 0x4f22) & 0xffffffffffffff00;
      uVar35 = CONCAT44((int)(uVar34 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f22) >> 0x10),(short)uVar34)) &
               0xffffffffff00ffff;
      uVar28 = *(ulong *)(in_x0 + 0x4f2a) & 0xffffffffffffff00;
      uVar29 = CONCAT44((int)(uVar28 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f2a) >> 0x10),(short)uVar28)) &
               0xffffffffff00ffff;
      uVar31 = *(ulong *)(in_x0 + 0x4f32) & 0xffffffffffffff00;
      uVar30 = CONCAT44((int)(uVar31 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f32) >> 0x10),(short)uVar31)) &
               0xffffffffff00ffff;
      uVar24 = *(ulong *)(in_x0 + 0x4f3a) & 0xffffffffffffff00;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f3a) >> 0x10),(short)uVar24)) &
               0xffffffffff00ffff;
      uVar26 = *(ulong *)(in_x0 + 0x4f42) & 0xffffffffffffff00;
      uVar27 = CONCAT44((int)(uVar26 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f42) >> 0x10),(short)uVar26)) &
               0xffffffffff00ffff;
      uVar20 = *(ulong *)(in_x0 + 0x4f4a) & 0xffffffffffffff00;
      uVar21 = CONCAT44((int)(uVar20 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f4a) >> 0x10),(short)uVar20)) &
               0xffffffffff00ffff;
      uVar22 = *(ulong *)(in_x0 + 0x4f52) & 0xffffffffffffff00;
      uVar23 = CONCAT44((int)(uVar22 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f52) >> 0x10),(short)uVar22)) &
               0xffffffffff00ffff;
      uVar16 = *(ulong *)(in_x0 + 0x4f5a) & 0xffffffffffffff00;
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f5a) >> 0x10),(short)uVar16)) &
               0xffffffffff00ffff;
      uVar18 = *(ulong *)(in_x0 + 0x4f62) & 0xffffffffffffff00;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f62) >> 0x10),(short)uVar18)) &
               0xffffffffff00ffff;
      uVar13 = *(ulong *)(in_x0 + 0x4f6a) & 0xffffffffffffff00;
      uVar9 = CONCAT44((int)(uVar13 >> 0x20),
                       CONCAT22((short)(*(ulong *)(in_x0 + 0x4f6a) >> 0x10),(short)uVar13)) &
              0xffffffffff00ffff;
      uVar14 = *(ulong *)(in_x0 + 0x4f72) & 0xffffffffffffff00;
      uVar15 = CONCAT44((int)(uVar14 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f72) >> 0x10),(short)uVar14)) &
               0xffffffffff00ffff;
      uVar52 = *(ulong *)(in_x0 + 0x4f7a) & 0xffffffffffffff00;
      uVar53 = CONCAT44((int)(uVar52 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f7a) >> 0x10),(short)uVar52)) &
               0xffffffffff00ffff;
      uVar54 = *(ulong *)(in_x0 + 0x4f82) & 0xffffffffffffff00;
      uVar55 = CONCAT44((int)(uVar54 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f82) >> 0x10),(short)uVar54)) &
               0xffffffffff00ffff;
      uVar49 = *(ulong *)(in_x0 + 0x4f8a) & 0xffffffffffffff00;
      uVar48 = CONCAT44((int)(uVar49 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f8a) >> 0x10),(short)uVar49)) &
               0xffffffffff00ffff;
      uVar50 = *(ulong *)(in_x0 + 0x4f92) & 0xffffffffffffff00;
      uVar51 = CONCAT44((int)(uVar50 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f92) >> 0x10),(short)uVar50)) &
               0xffffffffff00ffff;
      uVar44 = *(ulong *)(in_x0 + 0x4f9a) & 0xffffffffffffff00;
      uVar45 = CONCAT44((int)(uVar44 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4f9a) >> 0x10),(short)uVar44)) &
               0xffffffffff00ffff;
      uVar46 = *(ulong *)(in_x0 + 0x4fa2) & 0xffffffffffffff00;
      uVar47 = CONCAT44((int)(uVar46 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4fa2) >> 0x10),(short)uVar46)) &
               0xffffffffff00ffff;
      uVar41 = *(ulong *)(in_x0 + 0x4faa) & 0xffffffffffffff00;
      uVar40 = CONCAT44((int)(uVar41 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4faa) >> 0x10),(short)uVar41)) &
               0xffffffffff00ffff;
      uVar42 = *(ulong *)(in_x0 + 0x4fb2) & 0xffffffffffffff00;
      uVar43 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22((short)(*(ulong *)(in_x0 + 0x4fb2) >> 0x10),(short)uVar42)) &
               0xffffffffff00ffff;
      *(ulong *)(in_x0 + 0x4f12) =
           CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f0a) =
           CONCAT26((short)(uVar37 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar37)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f22) =
           CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar34 >> 0x20),(int)uVar35)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f1a) =
           CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f32) =
           CONCAT26((short)(uVar30 >> 0x30),CONCAT24((short)(uVar31 >> 0x20),(int)uVar30)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f2a) =
           CONCAT26((short)(uVar29 >> 0x30),CONCAT24((short)(uVar28 >> 0x20),(int)uVar29)) &
           0xff00ff00ffffffff | 0x2000200020002;
      *(ulong *)(in_x0 + 0x4f42) =
           CONCAT26((short)(uVar27 >> 0x30),CONCAT24((short)(uVar26 >> 0x20),(int)uVar27)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f3a) =
           CONCAT26((short)(uVar25 >> 0x30),CONCAT24((short)(uVar24 >> 0x20),(int)uVar25)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f52) =
           CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar22 >> 0x20),(int)uVar23)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f4a) =
           CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar20 >> 0x20),(int)uVar21)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f62) =
           CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f5a) =
           CONCAT26((short)(uVar17 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar17)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f72) =
           CONCAT26((short)(uVar15 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar15)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f6a) =
           CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar9)) &
           0xff00ff00ffffffff | 0x1000100010001;
      *(ulong *)(in_x0 + 0x4f82) =
           CONCAT26((short)(uVar55 >> 0x30),CONCAT24((short)(uVar54 >> 0x20),(int)uVar55)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4f7a) =
           CONCAT26((short)(uVar53 >> 0x30),CONCAT24((short)(uVar52 >> 0x20),(int)uVar53)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4f92) =
           CONCAT26((short)(uVar51 >> 0x30),CONCAT24((short)(uVar50 >> 0x20),(int)uVar51)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4f8a) =
           CONCAT26((short)(uVar48 >> 0x30),CONCAT24((short)(uVar49 >> 0x20),(int)uVar48)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4fa2) =
           CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar46 >> 0x20),(int)uVar47)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4f9a) =
           CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar44 >> 0x20),(int)uVar45)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4fb2) =
           CONCAT26((short)(uVar43 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar43)) &
           0xff00ff00ffffffff;
      *(ulong *)(in_x0 + 0x4faa) =
           CONCAT26((short)(uVar40 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar40)) &
           0xff00ff00ffffffff;
      __s = memset(__s,0,0x100);
      *(undefined4 *)(in_x0 + 0x55ba) = 0x80a0c0e0;
      *(undefined2 *)(in_x0 + 0x55be) = 0x4060;
      *(undefined *)(in_x0 + 0x55c0) = 0x20;
      uVar12 = *(short *)(lVar10 + 0x4dba) + 1;
      lVar7 = in_x0 + (ulong)(byte)*(short *)(lVar10 + 0x4dba);
      bVar11 = *(byte *)(lVar7 + 0x55ba);
      *(byte *)(lVar7 + 0x55ba) = bVar11 + 1;
    } while (0xa1 < (uVar12 & 0xff));
  }
  lVar7 = in_x0 + (ulong)bVar11 * 2;
  *(undefined2 *)(lVar10 + 0x4dba) = *(undefined2 *)(lVar7 + 0x4dba);
  *(ushort *)(lVar7 + 0x4dba) = uVar12;
  return;
}


