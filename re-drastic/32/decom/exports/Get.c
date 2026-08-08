/*
 * Ghidra decompilation
 *
 * Function : Get
 * Address  : 080e37b0
 * Program  : drastic
 */


/* DWARF original prototype: void Get(SecPassword * this, wchar * Psw, size_t MaxSize) */

void __thiscall SecPassword::Get(SecPassword *this,wchar *Psw,size_t MaxSize)

{
  uint uVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  __pid_t _Var11;
  uint Key;
  uint uVar12;
  size_t sVar13;
  uint uVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  
  if (this->PasswordSet == false) {
    *Psw = 0;
    return;
  }
  uVar1 = MaxSize * 4;
  sVar13 = MaxSize;
  if (0x7f < MaxSize) {
    sVar13 = 0x80;
  }
  memcpy(Psw,this,sVar13 << 2);
  _Var11 = getpid();
  if (uVar1 != 0) {
    cVar10 = (char)_Var11;
    uVar14 = -((uint)Psw & 7) & 0xf;
    bVar9 = cVar10 + 0x4b;
    if (uVar1 <= uVar14) {
      uVar14 = uVar1;
    }
    uVar17 = uVar1;
    if ((uVar1 < 0x11) || (uVar17 = uVar14, uVar14 != 0)) {
      *(byte *)Psw = *(byte *)Psw ^ bVar9;
      uVar14 = uVar17;
      if ((((uVar17 != 1) &&
           (((*(byte *)((int)Psw + 1) = cVar10 + 0x4cU ^ *(byte *)((int)Psw + 1), uVar17 != 2 &&
             (*(byte *)((int)Psw + 2) = cVar10 + 0x4dU ^ *(byte *)((int)Psw + 2), uVar17 != 3)) &&
            (*(byte *)((int)Psw + 3) = cVar10 + 0x4eU ^ *(byte *)((int)Psw + 3), uVar17 != 4)))) &&
          (((*(byte *)(Psw + 1) = cVar10 + 0x4fU ^ *(byte *)(Psw + 1), uVar17 != 5 &&
            (*(byte *)((int)Psw + 5) = cVar10 + 0x50U ^ *(byte *)((int)Psw + 5), uVar17 != 6)) &&
           (*(byte *)((int)Psw + 6) = cVar10 + 0x51U ^ *(byte *)((int)Psw + 6), uVar17 != 7)))) &&
         ((*(byte *)((int)Psw + 7) = cVar10 + 0x52U ^ *(byte *)((int)Psw + 7), uVar17 != 8 &&
          (*(byte *)(Psw + 2) = cVar10 + 0x53U ^ *(byte *)(Psw + 2), uVar17 != 9)))) {
        *(byte *)((int)Psw + 9) = cVar10 + 0x54U ^ *(byte *)((int)Psw + 9);
        if (uVar17 == 10) {
          uVar14 = 10;
        }
        else {
          *(byte *)((int)Psw + 10) = cVar10 + 0x55U ^ *(byte *)((int)Psw + 10);
          if ((((uVar17 != 0xb) &&
               (*(byte *)((int)Psw + 0xb) = cVar10 + 0x56U ^ *(byte *)((int)Psw + 0xb),
               uVar17 != 0xc)) &&
              (*(byte *)(Psw + 3) = cVar10 + 0x57U ^ *(byte *)(Psw + 3), uVar17 != 0xd)) &&
             ((*(byte *)((int)Psw + 0xd) = cVar10 + 0x58U ^ *(byte *)((int)Psw + 0xd), uVar17 != 0xe
              && (*(byte *)((int)Psw + 0xe) = cVar10 + 0x59U ^ *(byte *)((int)Psw + 0xe),
                 uVar17 != 0xf)))) {
            *(byte *)((int)Psw + 0xf) = cVar10 + 0x5aU ^ *(byte *)((int)Psw + 0xf);
            uVar14 = 0x10;
          }
        }
      }
      if (uVar1 == uVar17) goto LAB_080e3bf4;
    }
    uVar12 = ((uVar1 - uVar17) - 0x10 >> 4) + 1;
    iVar2 = uVar12 * 0x10;
    if (0xe < (uVar1 - 1) - uVar17) {
      auVar23._4_4_ = uVar14;
      auVar23._0_4_ = uVar14;
      auVar23._8_8_ = 0;
      pauVar15 = (undefined (*) [16])((int)Psw + uVar17);
      auVar24._8_8_ = 0x300000002;
      auVar24._0_8_ = 0x100000000;
      auVar3 = SIMDExpandImmediate(0,0,0x10);
      uVar8 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
      auVar7._4_4_ = uVar8;
      auVar7._0_4_ = uVar8;
      auVar7._8_8_ = 0;
      auVar4 = SIMDExpandImmediate(0,0,4);
      auVar5 = SIMDExpandImmediate(0,0,8);
      uVar18 = 0;
      auVar6 = SIMDExpandImmediate(0,0,0xc);
      auVar23 = VectorAdd(auVar23 & auVar23 << 0x40,auVar24,4);
      pauVar16 = pauVar15;
      do {
        auVar22 = VectorAdd(auVar23,auVar4,4);
        auVar25 = VectorAdd(auVar23,auVar6,4);
        uVar18 = uVar18 + 1;
        auVar19 = VectorAdd(auVar23,auVar5,4);
        auVar24 = *pauVar15;
        pauVar15 = pauVar15 + 1;
        uVar20 = VectorCopyNarrow(auVar23,4);
        uVar21 = VectorCopyNarrow(auVar22,4);
        auVar23 = VectorAdd(auVar23,auVar3,4);
        auVar22._0_8_ = VectorCopyNarrow(auVar19,4);
        auVar22._8_8_ = VectorCopyNarrow(auVar25,4);
        auVar19._8_8_ = uVar21;
        auVar19._0_8_ = uVar20;
        auVar25._0_8_ = VectorCopyNarrow(auVar19,2);
        auVar25._8_8_ = VectorCopyNarrow(auVar22,2);
        auVar19 = VectorAdd(auVar25,auVar7 & auVar7 << 0x40,1);
        *(longlong *)*pauVar16 = SUB168(auVar19 ^ auVar24,0);
        *(longlong *)(*pauVar16 + 8) = SUB168(auVar19 ^ auVar24,8);
        pauVar16 = pauVar16 + 1;
      } while (uVar18 < uVar12);
      uVar14 = uVar14 + iVar2;
      if (uVar1 - uVar17 == iVar2) goto LAB_080e3bf4;
    }
    uVar17 = uVar14 + 1;
    *(byte *)((int)Psw + uVar14) = bVar9 + (char)uVar14 ^ *(byte *)((int)Psw + uVar14);
    if (uVar17 < uVar1) {
      uVar12 = uVar14 + 2;
      *(byte *)((int)Psw + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
      if (uVar12 < uVar1) {
        uVar17 = uVar14 + 3;
        *(byte *)((int)Psw + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
        if (uVar17 < uVar1) {
          uVar12 = uVar14 + 4;
          *(byte *)((int)Psw + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
          if (uVar12 < uVar1) {
            uVar17 = uVar14 + 5;
            *(byte *)((int)Psw + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
            if (uVar17 < uVar1) {
              uVar12 = uVar14 + 6;
              *(byte *)((int)Psw + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
              if (uVar12 < uVar1) {
                uVar17 = uVar14 + 7;
                *(byte *)((int)Psw + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
                if (uVar17 < uVar1) {
                  uVar12 = uVar14 + 8;
                  *(byte *)((int)Psw + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17)
                  ;
                  if (uVar12 < uVar1) {
                    uVar17 = uVar14 + 9;
                    *(byte *)((int)Psw + uVar12) =
                         bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
                    if (uVar17 < uVar1) {
                      uVar12 = uVar14 + 10;
                      *(byte *)((int)Psw + uVar17) =
                           bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
                      if (uVar12 < uVar1) {
                        uVar17 = uVar14 + 0xb;
                        *(byte *)((int)Psw + uVar12) =
                             bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
                        if (uVar17 < uVar1) {
                          uVar12 = uVar14 + 0xc;
                          *(byte *)((int)Psw + uVar17) =
                               bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
                          if (uVar12 < uVar1) {
                            uVar17 = uVar14 + 0xd;
                            *(byte *)((int)Psw + uVar12) =
                                 bVar9 + (char)uVar12 ^ *(byte *)((int)Psw + uVar12);
                            if (uVar17 < uVar1) {
                              uVar14 = uVar14 + 0xe;
                              *(byte *)((int)Psw + uVar17) =
                                   bVar9 + (char)uVar17 ^ *(byte *)((int)Psw + uVar17);
                              if (uVar14 < uVar1) {
                                *(byte *)((int)Psw + uVar14) =
                                     bVar9 + (char)uVar14 ^ *(byte *)((int)Psw + uVar14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_080e3bf4:
  Psw[MaxSize - 1] = 0;
  return;
}


