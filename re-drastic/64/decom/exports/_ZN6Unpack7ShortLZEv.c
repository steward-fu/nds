/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack7ShortLZEv
 * Address  : 001cd320
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ShortLZ() */

void Unpack::ShortLZ(void)

{
  BitInput *this;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  long in_x0;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  this = (BitInput *)(in_x0 + 8);
  *(undefined4 *)(in_x0 + 0x58d8) = 0;
  uVar7 = BitInput::fgetbits();
  uVar13 = uVar7 & 0xffffffff;
  if (*(int *)(in_x0 + 0x58e0) == 2) {
    BitInput::faddbits(this,1);
    if (0x7fff < (uint)uVar7) {
      uVar5 = *(uint *)(in_x0 + 0xb4);
      uVar8 = *(uint *)(in_x0 + 0xb8);
      iVar10 = uVar5 - 1;
      *(ulong *)(in_x0 + 0x4da0) = *(long *)(in_x0 + 0x4da0) - (ulong)uVar5;
      if (uVar5 == 0) {
        return;
      }
      uVar7 = *(ulong *)(in_x0 + 0xc0);
      uVar13 = *(ulong *)(in_x0 + 0xe980);
      do {
        iVar10 = iVar10 + -1;
        *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar7) =
             *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar7 - uVar8 & uVar13));
        uVar13 = *(ulong *)(in_x0 + 0xe980);
        uVar7 = *(long *)(in_x0 + 0xc0) + 1U & uVar13;
        *(ulong *)(in_x0 + 0xc0) = uVar7;
      } while (iVar10 != -1);
      return;
    }
    uVar13 = (ulong)((uint)uVar7 * 2);
    *(undefined4 *)(in_x0 + 0x58e0) = 0;
  }
  uVar5 = (uint)(uVar13 >> 8);
  if (*(uint *)(in_x0 + 0x58c8) < 0x25) {
    uVar8 = uVar5 & 0xffff80;
    if ((uVar13 >> 8 & 0xffff80) == 0) {
      BitInput::faddbits(this,1);
    }
    else {
      uVar6 = *(int *)(in_x0 + 0x58d4) + 3;
      if (((uVar5 ^ 0xa0) & (0xff >> (uVar6 & 0x1f) ^ 0xffffffffU)) == 0) {
        uVar8 = 1;
        BitInput::faddbits(this,uVar6);
      }
      else if ((uVar5 & 0xfffff0) == 0xd0) {
        uVar8 = 2;
        BitInput::faddbits(this,4);
      }
      else if (((uVar5 ^ 0xe0) & 0xfffff0) == 0) {
        uVar8 = 3;
        BitInput::faddbits(this,4);
      }
      else if (((uVar5 ^ 0xf0) & 0xfffff8) == 0) {
        uVar8 = 4;
        BitInput::faddbits(this,5);
      }
      else if (((uVar5 ^ 0xf8) & 0xfffffc) == 0) {
        uVar8 = 5;
        BitInput::faddbits(this,6);
      }
      else if (((uVar5 ^ 0xfc) & 0xfffffe) == 0) {
        uVar8 = 6;
        BitInput::faddbits(this,7);
      }
      else if (uVar5 == 0xfe) {
        uVar8 = 7;
        BitInput::faddbits(this,8);
      }
      else {
        if (uVar5 != 0xff) {
LAB_001cd3e4:
          if (((uVar5 ^ 0xc0) & 0xfffff0) == 0) {
            BitInput::faddbits(this,4);
            *(int *)(in_x0 + 0x58e0) = *(int *)(in_x0 + 0x58e0) + 1;
            uVar5 = *(uint *)(in_x0 + 0xb4);
            uVar8 = *(uint *)(in_x0 + 0xb8);
            iVar10 = uVar5 - 1;
            *(ulong *)(in_x0 + 0x4da0) = *(long *)(in_x0 + 0x4da0) - (ulong)uVar5;
            if (uVar5 == 0) {
              return;
            }
            uVar7 = *(ulong *)(in_x0 + 0xc0);
            uVar13 = *(ulong *)(in_x0 + 0xe980);
            do {
              iVar10 = iVar10 + -1;
              *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar7) =
                   *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar7 - uVar8 & uVar13));
              uVar13 = *(ulong *)(in_x0 + 0xe980);
              uVar7 = *(long *)(in_x0 + 0xc0) + 1U & uVar13;
              *(ulong *)(in_x0 + 0xc0) = uVar7;
            } while (iVar10 != -1);
            return;
          }
          if (((uVar5 ^ 0x80) & 0xfffff0) == 0) {
            iVar10 = 10;
            BitInput::faddbits(this,4);
          }
          else if ((uVar5 & 0xfffff8) == 0x90) {
            iVar10 = 0xb;
            BitInput::faddbits(this,5);
          }
          else if ((uVar5 & 0xfffffc) == 0x98) {
            iVar10 = 0xc;
            BitInput::faddbits(this,6);
          }
          else {
            if ((uVar5 & 0xfffffc) != 0x9c) {
              BitInput::faddbits(this,4);
              *(undefined4 *)(in_x0 + 0x58e0) = 0;
              uVar5 = BitInput::fgetbits();
              uVar5 = uVar5 & 0xfff0;
              if (uVar5 < DecL2) {
                BitInput::faddbits(this,3);
                lVar9 = 0xc;
                uVar8 = 0xd;
              }
              else {
                uVar7 = 3;
                lVar9 = 4;
                do {
                  lVar11 = lVar9;
                  uVar8 = (int)uVar7 + 1;
                  uVar7 = (ulong)uVar8;
                  lVar9 = lVar11 + 4;
                } while (*(uint *)((long)&DecL2 + lVar11) <= uVar5);
                BitInput::faddbits(this,uVar8);
                lVar9 = uVar7 << 2;
                uVar5 = uVar5 - *(int *)((long)&DAT_00267e58 + lVar11 + 4);
                uVar8 = 0x10 - uVar8;
              }
              uVar5 = (uVar5 >> (ulong)(uVar8 & 0x1f)) + 5 + *(int *)(PosL2 + lVar9);
              uVar7 = BitInput::fgetbits();
              uVar8 = (uint)(uVar7 >> 1) & 0x7fffffff | 0x8000;
              BitInput::faddbits(this,0xf);
              *(uint *)(in_x0 + 0xb4) = uVar5;
              *(uint *)(in_x0 + 0xb8) = uVar8;
              iVar10 = uVar5 - 1;
              *(ulong *)(in_x0 + 0x4da0) = *(long *)(in_x0 + 0x4da0) - (ulong)uVar5;
              if (uVar5 == 0) {
                return;
              }
              uVar7 = *(ulong *)(in_x0 + 0xc0);
              uVar13 = *(ulong *)(in_x0 + 0xe980);
              do {
                iVar10 = iVar10 + -1;
                *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar7) =
                     *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar7 - uVar8 & uVar13));
                uVar13 = *(ulong *)(in_x0 + 0xe980);
                uVar7 = *(long *)(in_x0 + 0xc0) + 1U & uVar13;
                *(ulong *)(in_x0 + 0xc0) = uVar7;
              } while (iVar10 != -1);
              return;
            }
            iVar10 = 0xd;
            BitInput::faddbits(this,6);
          }
          *(undefined4 *)(in_x0 + 0x58e0) = 0;
          uVar8 = *(uint *)(in_x0 + (((ulong)(uint)((*(int *)(in_x0 + 0xb0) + 9) - iVar10) & 3) +
                                    0x28) * 4);
          uVar5 = BitInput::fgetbits();
          uVar5 = uVar5 & 0xfff0;
          if (uVar5 < DecL1) {
            BitInput::faddbits(this,2);
            lVar9 = 8;
            uVar6 = 0xe;
          }
          else {
            uVar7 = 2;
            lVar9 = 4;
            do {
              lVar11 = lVar9;
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulong)uVar6;
              lVar9 = lVar11 + 4;
            } while (*(uint *)((long)&DecL1 + lVar11) <= uVar5);
            BitInput::faddbits(this,uVar6);
            lVar9 = uVar7 << 2;
            uVar5 = uVar5 - *(int *)(lVar11 + 0x267ecc);
            uVar6 = 0x10 - uVar6;
          }
          iVar1 = (uVar5 >> (ulong)(uVar6 & 0x1f)) + *(int *)(PosL1 + lVar9);
          if (iVar1 != 0xff || iVar10 != 10) {
            uVar5 = iVar1 + 3;
            if (uVar8 < 0x101) {
              uVar5 = iVar1 + 2;
            }
            if (uVar8 < *(uint *)(in_x0 + 0x58f0)) {
              uVar6 = uVar5;
              uVar5 = uVar5 - 1;
            }
            else {
              uVar6 = uVar5 + 1;
            }
            uVar2 = *(uint *)(in_x0 + 0xb0);
            lVar9 = *(long *)(in_x0 + 0x4da0);
            *(uint *)(in_x0 + (ulong)uVar2 * 4 + 0xa0) = uVar8;
            *(uint *)(in_x0 + 0xb0) = uVar2 + 1 & 3;
            *(uint *)(in_x0 + 0xb4) = uVar6;
            *(uint *)(in_x0 + 0xb8) = uVar8;
            *(ulong *)(in_x0 + 0x4da0) = lVar9 - (ulong)uVar6;
            if (uVar6 == 0) {
              return;
            }
            uVar7 = *(ulong *)(in_x0 + 0xc0);
            uVar13 = *(ulong *)(in_x0 + 0xe980);
            do {
              uVar5 = uVar5 - 1;
              *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar7) =
                   *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar7 - uVar8 & uVar13));
              uVar13 = *(ulong *)(in_x0 + 0xe980);
              uVar7 = *(long *)(in_x0 + 0xc0) + 1U & uVar13;
              *(ulong *)(in_x0 + 0xc0) = uVar7;
            } while (uVar5 != 0xffffffff);
            return;
          }
          *(uint *)(in_x0 + 0x58d4) = *(uint *)(in_x0 + 0x58d4) ^ 1;
          return;
        }
        uVar8 = 8;
        BitInput::faddbits(this,8);
      }
    }
  }
  else {
    uVar8 = uVar5 & 0xffffc0;
    if ((uVar13 >> 8 & 0xffffc0) == 0) {
      BitInput::faddbits(this,2);
    }
    else if (((uVar5 ^ 0x40) & 0xffffe0) == 0) {
      uVar8 = 1;
      BitInput::faddbits(this,3);
    }
    else if (((uVar5 ^ 0x60) & 0xffffe0) == 0) {
      uVar8 = 2;
      BitInput::faddbits(this,3);
    }
    else {
      uVar6 = *(int *)(in_x0 + 0x58d4) + 3;
      if (((uVar5 ^ 0xa0) & (0xff >> (uVar6 & 0x1f) ^ 0xffffffffU)) == 0) {
        uVar8 = 3;
        BitInput::faddbits(this,uVar6);
      }
      else if ((uVar5 & 0xfffff0) == 0xd0) {
        uVar8 = 4;
        BitInput::faddbits(this,4);
      }
      else if (((uVar5 ^ 0xe0) & 0xfffff0) == 0) {
        uVar8 = 5;
        BitInput::faddbits(this,4);
      }
      else if (((uVar5 ^ 0xf0) & 0xfffff8) == 0) {
        uVar8 = 6;
        BitInput::faddbits(this,5);
      }
      else if (((uVar5 ^ 0xf8) & 0xfffffc) == 0) {
        uVar8 = 7;
        BitInput::faddbits(this,6);
      }
      else {
        if (((uVar5 ^ 0xfc) & 0xfffffc) != 0) goto LAB_001cd3e4;
        uVar8 = 8;
        BitInput::faddbits(this,6);
      }
    }
  }
  uVar5 = uVar8 + *(int *)(in_x0 + 0x58c8);
  *(undefined4 *)(in_x0 + 0x58e0) = 0;
  *(uint *)(in_x0 + 0x58c8) = uVar5 - (uVar5 >> 4);
  uVar5 = BitInput::fgetbits();
  uVar5 = uVar5 & 0xfff0;
  if (uVar5 < DecHf2) {
    BitInput::faddbits(this,5);
    lVar9 = 0x14;
    uVar6 = 0xb;
  }
  else {
    uVar7 = 5;
    lVar9 = 4;
    do {
      lVar11 = lVar9;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar6;
      lVar9 = lVar11 + 4;
    } while (*(uint *)((long)&DecHf2 + lVar11) <= uVar5);
    BitInput::faddbits(this,uVar6);
    lVar9 = uVar7 << 2;
    uVar6 = 0x10 - uVar6;
    uVar5 = uVar5 - *(int *)(lVar11 + 0x267f3c);
  }
  uVar5 = (uVar5 >> (ulong)(uVar6 & 0x1f)) + *(int *)(PosHf2 + lVar9);
  lVar9 = in_x0 + (ulong)(byte)uVar5 * 2;
  uVar3 = *(ushort *)(lVar9 + 0x4fba);
  if ((uVar5 & 0xff) != 0) {
    uVar4 = *(undefined2 *)(lVar9 + 0x4fb8);
    *(ushort *)(lVar9 + 0x4fb8) = uVar3;
    *(undefined2 *)(lVar9 + 0x4fba) = uVar4;
  }
  uVar6 = *(uint *)(in_x0 + 0xb0);
  lVar11 = *(long *)(in_x0 + 0xc0);
  uVar13 = *(ulong *)(in_x0 + 0xe980);
  uVar5 = uVar3 + 1;
  uVar7 = (ulong)uVar5;
  lVar9 = *(long *)(in_x0 + 0x4da0);
  lVar12 = *(long *)(in_x0 + 0x4b90);
  *(uint *)(in_x0 + (ulong)uVar6 * 4 + 0xa0) = uVar5;
  *(uint *)(in_x0 + 0xb0) = uVar6 + 1 & 3;
  *(uint *)(in_x0 + 0xb4) = uVar8 + 2;
  *(uint *)(in_x0 + 0xb8) = uVar5;
  *(ulong *)(in_x0 + 0x4da0) = lVar9 - (ulong)(uVar8 + 2);
  *(undefined *)(lVar12 + lVar11) = *(undefined *)(lVar12 + (lVar11 - uVar7 & uVar13));
  uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
  *(ulong *)(in_x0 + 0xc0) = uVar13;
  *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
       *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
  uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
  *(ulong *)(in_x0 + 0xc0) = uVar13;
  if (uVar8 != 0) {
    *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
         *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
    uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
    *(ulong *)(in_x0 + 0xc0) = uVar13;
    if (uVar8 != 1) {
      *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
           *(undefined *)(*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)))
      ;
      uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
      *(ulong *)(in_x0 + 0xc0) = uVar13;
      if (uVar8 != 2) {
        *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
             *(undefined *)
              (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
        uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
        *(ulong *)(in_x0 + 0xc0) = uVar13;
        if (uVar8 != 3) {
          *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
               *(undefined *)
                (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
          uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
          *(ulong *)(in_x0 + 0xc0) = uVar13;
          if (uVar8 != 4) {
            *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
                 *(undefined *)
                  (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
            uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
            *(ulong *)(in_x0 + 0xc0) = uVar13;
            if (uVar8 != 5) {
              *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
                   *(undefined *)
                    (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
              uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
              *(ulong *)(in_x0 + 0xc0) = uVar13;
              if (uVar8 != 6) {
                *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
                     *(undefined *)
                      (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
                uVar13 = *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
                *(ulong *)(in_x0 + 0xc0) = uVar13;
                if (uVar8 != 7) {
                  *(undefined *)(*(long *)(in_x0 + 0x4b90) + uVar13) =
                       *(undefined *)
                        (*(long *)(in_x0 + 0x4b90) + (uVar13 - uVar7 & *(ulong *)(in_x0 + 0xe980)));
                  *(ulong *)(in_x0 + 0xc0) =
                       *(long *)(in_x0 + 0xc0) + 1U & *(ulong *)(in_x0 + 0xe980);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


