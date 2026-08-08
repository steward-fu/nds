/*
 * Ghidra decompilation
 *
 * Function : _Z11SecHideDataPvjb
 * Address  : 080e4488
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SecHideData(void *Data,size_t DataSize,bool Encode)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  byte bVar8;
  size_t sVar9;
  char cVar10;
  __pid_t _Var11;
  uint Key;
  uint uVar12;
  size_t sVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  uint uVar16;
  undefined auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  _Var11 = getpid();
  if (DataSize != 0) {
    cVar10 = (char)_Var11;
    sVar13 = -((uint)Data & 7) & 0xf;
    bVar8 = cVar10 + 0x4b;
    if (DataSize <= sVar13) {
      sVar13 = DataSize;
    }
    sVar9 = DataSize;
    if ((DataSize < 0x11) || (sVar9 = sVar13, sVar13 != 0)) {
                    /* WARNING: Load size is inaccurate */
      *(byte *)Data = *Data ^ bVar8;
      sVar13 = sVar9;
      if ((((sVar9 != 1) &&
           (((*(byte *)((int)Data + 1) = cVar10 + 0x4cU ^ *(byte *)((int)Data + 1), sVar9 != 2 &&
             (*(byte *)((int)Data + 2) = cVar10 + 0x4dU ^ *(byte *)((int)Data + 2), sVar9 != 3)) &&
            (*(byte *)((int)Data + 3) = cVar10 + 0x4eU ^ *(byte *)((int)Data + 3), sVar9 != 4)))) &&
          (((*(byte *)((int)Data + 4) = cVar10 + 0x4fU ^ *(byte *)((int)Data + 4), sVar9 != 5 &&
            (*(byte *)((int)Data + 5) = cVar10 + 0x50U ^ *(byte *)((int)Data + 5), sVar9 != 6)) &&
           (*(byte *)((int)Data + 6) = cVar10 + 0x51U ^ *(byte *)((int)Data + 6), sVar9 != 7)))) &&
         ((*(byte *)((int)Data + 7) = cVar10 + 0x52U ^ *(byte *)((int)Data + 7), sVar9 != 8 &&
          (*(byte *)((int)Data + 8) = cVar10 + 0x53U ^ *(byte *)((int)Data + 8), sVar9 != 9)))) {
        *(byte *)((int)Data + 9) = cVar10 + 0x54U ^ *(byte *)((int)Data + 9);
        if (sVar9 == 10) {
          sVar13 = 10;
        }
        else {
          *(byte *)((int)Data + 10) = cVar10 + 0x55U ^ *(byte *)((int)Data + 10);
          if ((((sVar9 != 0xb) &&
               (*(byte *)((int)Data + 0xb) = cVar10 + 0x56U ^ *(byte *)((int)Data + 0xb),
               sVar9 != 0xc)) &&
              (*(byte *)((int)Data + 0xc) = cVar10 + 0x57U ^ *(byte *)((int)Data + 0xc),
              sVar9 != 0xd)) &&
             ((*(byte *)((int)Data + 0xd) = cVar10 + 0x58U ^ *(byte *)((int)Data + 0xd),
              sVar9 != 0xe &&
              (*(byte *)((int)Data + 0xe) = cVar10 + 0x59U ^ *(byte *)((int)Data + 0xe),
              sVar9 != 0xf)))) {
            *(byte *)((int)Data + 0xf) = cVar10 + 0x5aU ^ *(byte *)((int)Data + 0xf);
            sVar13 = 0x10;
          }
        }
      }
      if (DataSize == sVar9) {
        return;
      }
    }
    uVar12 = ((DataSize - sVar9) - 0x10 >> 4) + 1;
    iVar1 = uVar12 * 0x10;
    if (0xe < (DataSize - 1) - sVar9) {
      auVar21._4_4_ = sVar13;
      auVar21._0_4_ = sVar13;
      auVar21._8_8_ = 0;
      pauVar14 = (undefined (*) [16])((int)Data + sVar9);
      auVar22._8_8_ = 0x300000002;
      auVar22._0_8_ = 0x100000000;
      auVar2 = SIMDExpandImmediate(0,0,0x10);
      uVar7 = CONCAT22(CONCAT11(bVar8,bVar8),CONCAT11(bVar8,bVar8));
      auVar6._4_4_ = uVar7;
      auVar6._0_4_ = uVar7;
      auVar6._8_8_ = 0;
      auVar3 = SIMDExpandImmediate(0,0,4);
      auVar4 = SIMDExpandImmediate(0,0,8);
      uVar16 = 0;
      auVar5 = SIMDExpandImmediate(0,0,0xc);
      auVar21 = VectorAdd(auVar21 & auVar21 << 0x40,auVar22,4);
      pauVar15 = pauVar14;
      do {
        auVar20 = VectorAdd(auVar21,auVar3,4);
        auVar23 = VectorAdd(auVar21,auVar5,4);
        uVar16 = uVar16 + 1;
        auVar17 = VectorAdd(auVar21,auVar4,4);
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar18 = VectorCopyNarrow(auVar21,4);
        uVar19 = VectorCopyNarrow(auVar20,4);
        auVar21 = VectorAdd(auVar21,auVar2,4);
        auVar20._0_8_ = VectorCopyNarrow(auVar17,4);
        auVar20._8_8_ = VectorCopyNarrow(auVar23,4);
        auVar17._8_8_ = uVar19;
        auVar17._0_8_ = uVar18;
        auVar23._0_8_ = VectorCopyNarrow(auVar17,2);
        auVar23._8_8_ = VectorCopyNarrow(auVar20,2);
        auVar17 = VectorAdd(auVar23,auVar6 & auVar6 << 0x40,1);
        *(longlong *)*pauVar15 = SUB168(auVar17 ^ auVar22,0);
        *(longlong *)(*pauVar15 + 8) = SUB168(auVar17 ^ auVar22,8);
        pauVar15 = pauVar15 + 1;
      } while (uVar16 < uVar12);
      sVar13 = sVar13 + iVar1;
      if (DataSize - sVar9 == iVar1) {
        return;
      }
    }
    uVar12 = sVar13 + 1;
    *(byte *)((int)Data + sVar13) = bVar8 + (char)sVar13 ^ *(byte *)((int)Data + sVar13);
    if (uVar12 < DataSize) {
      uVar16 = sVar13 + 2;
      *(byte *)((int)Data + uVar12) = bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
      if (uVar16 < DataSize) {
        uVar12 = sVar13 + 3;
        *(byte *)((int)Data + uVar16) = bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
        if (uVar12 < DataSize) {
          uVar16 = sVar13 + 4;
          *(byte *)((int)Data + uVar12) = bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
          if (uVar16 < DataSize) {
            uVar12 = sVar13 + 5;
            *(byte *)((int)Data + uVar16) = bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
            if (uVar12 < DataSize) {
              uVar16 = sVar13 + 6;
              *(byte *)((int)Data + uVar12) = bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
              if (uVar16 < DataSize) {
                uVar12 = sVar13 + 7;
                *(byte *)((int)Data + uVar16) = bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16)
                ;
                if (uVar12 < DataSize) {
                  uVar16 = sVar13 + 8;
                  *(byte *)((int)Data + uVar12) =
                       bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
                  if (uVar16 < DataSize) {
                    uVar12 = sVar13 + 9;
                    *(byte *)((int)Data + uVar16) =
                         bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
                    if (uVar12 < DataSize) {
                      uVar16 = sVar13 + 10;
                      *(byte *)((int)Data + uVar12) =
                           bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
                      if (uVar16 < DataSize) {
                        uVar12 = sVar13 + 0xb;
                        *(byte *)((int)Data + uVar16) =
                             bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
                        if (uVar12 < DataSize) {
                          uVar16 = sVar13 + 0xc;
                          *(byte *)((int)Data + uVar12) =
                               bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
                          if (uVar16 < DataSize) {
                            uVar12 = sVar13 + 0xd;
                            *(byte *)((int)Data + uVar16) =
                                 bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
                            if (uVar12 < DataSize) {
                              uVar16 = sVar13 + 0xe;
                              *(byte *)((int)Data + uVar12) =
                                   bVar8 + (char)uVar12 ^ *(byte *)((int)Data + uVar12);
                              if (uVar16 < DataSize) {
                                *(byte *)((int)Data + uVar16) =
                                     bVar8 + (char)uVar16 ^ *(byte *)((int)Data + uVar16);
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


