/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPassword7ProcessEPKwjPwjb
 * Address  : 080e3338
 * Program  : drastic
 */


/* DWARF original prototype: void Process(SecPassword * this, wchar * Src, size_t SrcSize, wchar *
   Dst, size_t DstSize, bool Encode) */

void __thiscall
SecPassword::Process
          (SecPassword *this,wchar *Src,size_t SrcSize,wchar *Dst,size_t DstSize,bool Encode)

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
  uint uVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  uint uVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  
  uVar1 = DstSize * 4;
  if (DstSize <= SrcSize) {
    SrcSize = DstSize;
  }
  memcpy(Dst,Src,SrcSize << 2);
  _Var11 = getpid();
  if (uVar1 != 0) {
    cVar10 = (char)_Var11;
    uVar13 = -((uint)Dst & 7) & 0xf;
    bVar9 = cVar10 + 0x4b;
    if (uVar1 <= uVar13) {
      uVar13 = uVar1;
    }
    uVar17 = uVar1;
    if ((uVar1 < 0x11) || (uVar17 = uVar13, uVar13 != 0)) {
      *(byte *)Dst = *(byte *)Dst ^ bVar9;
      uVar13 = uVar17;
      if ((((uVar17 != 1) &&
           (((*(byte *)((int)Dst + 1) = cVar10 + 0x4cU ^ *(byte *)((int)Dst + 1), uVar17 != 2 &&
             (*(byte *)((int)Dst + 2) = cVar10 + 0x4dU ^ *(byte *)((int)Dst + 2), uVar17 != 3)) &&
            (*(byte *)((int)Dst + 3) = cVar10 + 0x4eU ^ *(byte *)((int)Dst + 3), uVar17 != 4)))) &&
          (((*(byte *)(Dst + 1) = cVar10 + 0x4fU ^ *(byte *)(Dst + 1), uVar17 != 5 &&
            (*(byte *)((int)Dst + 5) = cVar10 + 0x50U ^ *(byte *)((int)Dst + 5), uVar17 != 6)) &&
           (*(byte *)((int)Dst + 6) = cVar10 + 0x51U ^ *(byte *)((int)Dst + 6), uVar17 != 7)))) &&
         ((*(byte *)((int)Dst + 7) = cVar10 + 0x52U ^ *(byte *)((int)Dst + 7), uVar17 != 8 &&
          (*(byte *)(Dst + 2) = cVar10 + 0x53U ^ *(byte *)(Dst + 2), uVar17 != 9)))) {
        *(byte *)((int)Dst + 9) = cVar10 + 0x54U ^ *(byte *)((int)Dst + 9);
        if (uVar17 == 10) {
          uVar13 = 10;
        }
        else {
          *(byte *)((int)Dst + 10) = cVar10 + 0x55U ^ *(byte *)((int)Dst + 10);
          if ((((uVar17 != 0xb) &&
               (*(byte *)((int)Dst + 0xb) = cVar10 + 0x56U ^ *(byte *)((int)Dst + 0xb),
               uVar17 != 0xc)) &&
              (*(byte *)(Dst + 3) = cVar10 + 0x57U ^ *(byte *)(Dst + 3), uVar17 != 0xd)) &&
             ((*(byte *)((int)Dst + 0xd) = cVar10 + 0x58U ^ *(byte *)((int)Dst + 0xd), uVar17 != 0xe
              && (*(byte *)((int)Dst + 0xe) = cVar10 + 0x59U ^ *(byte *)((int)Dst + 0xe),
                 uVar17 != 0xf)))) {
            *(byte *)((int)Dst + 0xf) = cVar10 + 0x5aU ^ *(byte *)((int)Dst + 0xf);
            uVar13 = 0x10;
          }
        }
      }
      if (uVar1 == uVar17) {
        return;
      }
    }
    uVar12 = ((uVar1 - uVar17) - 0x10 >> 4) + 1;
    iVar2 = uVar12 * 0x10;
    if (0xe < (uVar1 - 1) - uVar17) {
      auVar22._4_4_ = uVar13;
      auVar22._0_4_ = uVar13;
      auVar22._8_8_ = 0;
      pauVar14 = (undefined (*) [16])((int)Dst + uVar17);
      auVar23._8_8_ = 0x300000002;
      auVar23._0_8_ = 0x100000000;
      auVar3 = SIMDExpandImmediate(0,0,0x10);
      uVar8 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
      auVar7._4_4_ = uVar8;
      auVar7._0_4_ = uVar8;
      auVar7._8_8_ = 0;
      auVar4 = SIMDExpandImmediate(0,0,4);
      auVar5 = SIMDExpandImmediate(0,0,8);
      uVar16 = 0;
      auVar6 = SIMDExpandImmediate(0,0,0xc);
      auVar22 = VectorAdd(auVar22 & auVar22 << 0x40,auVar23,4);
      pauVar15 = pauVar14;
      do {
        auVar21 = VectorAdd(auVar22,auVar4,4);
        auVar24 = VectorAdd(auVar22,auVar6,4);
        uVar16 = uVar16 + 1;
        auVar18 = VectorAdd(auVar22,auVar5,4);
        auVar23 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar19 = VectorCopyNarrow(auVar22,4);
        uVar20 = VectorCopyNarrow(auVar21,4);
        auVar22 = VectorAdd(auVar22,auVar3,4);
        auVar21._0_8_ = VectorCopyNarrow(auVar18,4);
        auVar21._8_8_ = VectorCopyNarrow(auVar24,4);
        auVar18._8_8_ = uVar20;
        auVar18._0_8_ = uVar19;
        auVar24._0_8_ = VectorCopyNarrow(auVar18,2);
        auVar24._8_8_ = VectorCopyNarrow(auVar21,2);
        auVar18 = VectorAdd(auVar24,auVar7 & auVar7 << 0x40,1);
        *(longlong *)*pauVar15 = SUB168(auVar18 ^ auVar23,0);
        *(longlong *)(*pauVar15 + 8) = SUB168(auVar18 ^ auVar23,8);
        pauVar15 = pauVar15 + 1;
      } while (uVar16 < uVar12);
      uVar13 = uVar13 + iVar2;
      if (uVar1 - uVar17 == iVar2) {
        return;
      }
    }
    uVar17 = uVar13 + 1;
    *(byte *)((int)Dst + uVar13) = bVar9 + (char)uVar13 ^ *(byte *)((int)Dst + uVar13);
    if (uVar17 < uVar1) {
      uVar12 = uVar13 + 2;
      *(byte *)((int)Dst + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
      if (uVar12 < uVar1) {
        uVar17 = uVar13 + 3;
        *(byte *)((int)Dst + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
        if (uVar17 < uVar1) {
          uVar12 = uVar13 + 4;
          *(byte *)((int)Dst + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
          if (uVar12 < uVar1) {
            uVar17 = uVar13 + 5;
            *(byte *)((int)Dst + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
            if (uVar17 < uVar1) {
              uVar12 = uVar13 + 6;
              *(byte *)((int)Dst + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
              if (uVar12 < uVar1) {
                uVar17 = uVar13 + 7;
                *(byte *)((int)Dst + uVar12) = bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
                if (uVar17 < uVar1) {
                  uVar12 = uVar13 + 8;
                  *(byte *)((int)Dst + uVar17) = bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17)
                  ;
                  if (uVar12 < uVar1) {
                    uVar17 = uVar13 + 9;
                    *(byte *)((int)Dst + uVar12) =
                         bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
                    if (uVar17 < uVar1) {
                      uVar12 = uVar13 + 10;
                      *(byte *)((int)Dst + uVar17) =
                           bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
                      if (uVar12 < uVar1) {
                        uVar17 = uVar13 + 0xb;
                        *(byte *)((int)Dst + uVar12) =
                             bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
                        if (uVar17 < uVar1) {
                          uVar12 = uVar13 + 0xc;
                          *(byte *)((int)Dst + uVar17) =
                               bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
                          if (uVar12 < uVar1) {
                            uVar17 = uVar13 + 0xd;
                            *(byte *)((int)Dst + uVar12) =
                                 bVar9 + (char)uVar12 ^ *(byte *)((int)Dst + uVar12);
                            if (uVar17 < uVar1) {
                              uVar13 = uVar13 + 0xe;
                              *(byte *)((int)Dst + uVar17) =
                                   bVar9 + (char)uVar17 ^ *(byte *)((int)Dst + uVar17);
                              if (uVar13 < uVar1) {
                                *(byte *)((int)Dst + uVar13) =
                                     bVar9 + (char)uVar13 ^ *(byte *)((int)Dst + uVar13);
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
  return;
}


