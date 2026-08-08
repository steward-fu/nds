/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPassword3SetEPKw
 * Address  : 080e3c48
 * Program  : drastic
 */


/* DWARF original prototype: void Set(SecPassword * this, wchar * Psw) */

void __thiscall SecPassword::Set(SecPassword *this,wchar *Psw)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  size_t sVar9;
  __pid_t _Var10;
  uint Key;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined (*pauVar14) [16];
  int iVar15;
  undefined (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  
  if (*Psw == 0) {
    this->PasswordSet = false;
    memset(this,0,0x200);
    return;
  }
  this->PasswordSet = true;
  sVar9 = wcslen((wchar_t *)Psw);
  if (sVar9 + 1 < 0x80) {
    sVar9 = (sVar9 + 1) * 4;
  }
  else {
    sVar9 = 0x200;
  }
  memcpy(this,Psw,sVar9);
  _Var10 = getpid();
  cVar8 = (char)_Var10;
  uVar13 = -((uint)this & 7) & 0xf;
  bVar7 = cVar8 + 0x4b;
  uVar11 = uVar13;
  if (uVar13 == 0) {
    iVar12 = 0x200;
    uVar17 = 0x20;
    iVar18 = iVar12;
    iVar19 = iVar12;
  }
  else {
    *(byte *)this->Password = *(byte *)this->Password ^ bVar7;
    if (uVar13 == 1) {
      iVar18 = 0x1ff;
    }
    else {
      *(byte *)((int)this->Password + 1) = cVar8 + 0x4cU ^ *(byte *)((int)this->Password + 1);
      if (uVar13 == 2) {
        iVar18 = 0x1fe;
      }
      else {
        *(byte *)((int)this->Password + 2) = cVar8 + 0x4dU ^ *(byte *)((int)this->Password + 2);
        if (uVar13 == 3) {
          iVar18 = 0x1fd;
        }
        else {
          *(byte *)((int)this->Password + 3) = cVar8 + 0x4eU ^ *(byte *)((int)this->Password + 3);
          if (uVar13 == 4) {
            iVar18 = 0x1fc;
          }
          else {
            *(byte *)(this->Password + 1) = cVar8 + 0x4fU ^ *(byte *)(this->Password + 1);
            if (uVar13 == 5) {
              iVar18 = 0x1fb;
            }
            else {
              *(byte *)((int)this->Password + 5) =
                   cVar8 + 0x50U ^ *(byte *)((int)this->Password + 5);
              if (uVar13 == 6) {
                iVar18 = 0x1fa;
              }
              else {
                *(byte *)((int)this->Password + 6) =
                     cVar8 + 0x51U ^ *(byte *)((int)this->Password + 6);
                if (uVar13 == 7) {
                  iVar18 = 0x1f9;
                }
                else {
                  *(byte *)((int)this->Password + 7) =
                       cVar8 + 0x52U ^ *(byte *)((int)this->Password + 7);
                  if (uVar13 == 8) {
                    iVar18 = 0x1f8;
                  }
                  else {
                    *(byte *)(this->Password + 2) = cVar8 + 0x53U ^ *(byte *)(this->Password + 2);
                    if (uVar13 == 9) {
                      iVar18 = 0x1f7;
                      uVar11 = 9;
                    }
                    else {
                      *(byte *)((int)this->Password + 9) =
                           cVar8 + 0x54U ^ *(byte *)((int)this->Password + 9);
                      if (uVar13 == 10) {
                        iVar18 = 0x1f6;
                      }
                      else {
                        *(byte *)((int)this->Password + 10) =
                             cVar8 + 0x55U ^ *(byte *)((int)this->Password + 10);
                        if (uVar13 == 0xb) {
                          iVar18 = 0x1f5;
                        }
                        else {
                          *(byte *)((int)this->Password + 0xb) =
                               cVar8 + 0x56U ^ *(byte *)((int)this->Password + 0xb);
                          if (uVar13 == 0xc) {
                            iVar18 = 500;
                          }
                          else {
                            *(byte *)(this->Password + 3) =
                                 cVar8 + 0x57U ^ *(byte *)(this->Password + 3);
                            if (uVar13 == 0xd) {
                              iVar18 = 499;
                            }
                            else {
                              *(byte *)((int)this->Password + 0xd) =
                                   cVar8 + 0x58U ^ *(byte *)((int)this->Password + 0xd);
                              if (uVar13 == 0xe) {
                                iVar18 = 0x1f2;
                              }
                              else {
                                iVar18 = 0x1f1;
                                *(byte *)((int)this->Password + 0xe) =
                                     cVar8 + 0x59U ^ *(byte *)((int)this->Password + 0xe);
                                uVar11 = 0xf;
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
    iVar12 = 0x1f0;
    uVar17 = 0x1f;
    iVar19 = 0x200 - uVar13;
  }
  auVar24._4_4_ = uVar11;
  auVar24._0_4_ = uVar11;
  auVar24._8_8_ = 0;
  pauVar16 = (undefined (*) [16])((int)this->Password + uVar13);
  auVar25._8_8_ = 0x300000002;
  auVar25._0_8_ = 0x100000000;
  auVar1 = SIMDExpandImmediate(0,0,0x10);
  uVar6 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = uVar6;
  auVar5._8_8_ = 0;
  auVar2 = SIMDExpandImmediate(0,0,4);
  auVar3 = SIMDExpandImmediate(0,0,8);
  uVar13 = 0;
  auVar4 = SIMDExpandImmediate(0,0,0xc);
  auVar24 = VectorAdd(auVar24 & auVar24 << 0x40,auVar25,4);
  pauVar14 = pauVar16;
  do {
    auVar23 = VectorAdd(auVar24,auVar2,4);
    auVar26 = VectorAdd(auVar24,auVar4,4);
    uVar13 = uVar13 + 1;
    auVar20 = VectorAdd(auVar24,auVar3,4);
    auVar25 = *pauVar16;
    pauVar16 = pauVar16 + 1;
    uVar21 = VectorCopyNarrow(auVar24,4);
    uVar22 = VectorCopyNarrow(auVar23,4);
    auVar24 = VectorAdd(auVar24,auVar1,4);
    auVar23._0_8_ = VectorCopyNarrow(auVar20,4);
    auVar23._8_8_ = VectorCopyNarrow(auVar26,4);
    auVar20._8_8_ = uVar22;
    auVar20._0_8_ = uVar21;
    auVar26._0_8_ = VectorCopyNarrow(auVar20,2);
    auVar26._8_8_ = VectorCopyNarrow(auVar23,2);
    auVar20 = VectorAdd(auVar26,auVar5 & auVar5 << 0x40,1);
    *(longlong *)*pauVar14 = SUB168(auVar20 ^ auVar25,0);
    *(longlong *)(*pauVar14 + 8) = SUB168(auVar20 ^ auVar25,8);
    pauVar14 = pauVar14 + 1;
  } while (uVar13 < uVar17);
  iVar15 = uVar11 + iVar12;
  iVar18 = iVar18 - iVar12;
  if (iVar19 != iVar12) {
    iVar19 = iVar15 + 1;
    *(byte *)((int)this->Password + iVar15) =
         bVar7 + (char)iVar15 ^ *(byte *)((int)this->Password + iVar15);
    if (iVar18 != 1) {
      iVar12 = iVar15 + 2;
      *(byte *)((int)this->Password + iVar19) =
           bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
      if (iVar18 != 2) {
        iVar19 = iVar15 + 3;
        *(byte *)((int)this->Password + iVar12) =
             bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
        if (iVar18 != 3) {
          iVar12 = iVar15 + 4;
          *(byte *)((int)this->Password + iVar19) =
               bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
          if (iVar18 != 4) {
            iVar19 = iVar15 + 5;
            *(byte *)((int)this->Password + iVar12) =
                 bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
            if (iVar18 != 5) {
              iVar12 = iVar15 + 6;
              *(byte *)((int)this->Password + iVar19) =
                   bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
              if (iVar18 != 6) {
                iVar19 = iVar15 + 7;
                *(byte *)((int)this->Password + iVar12) =
                     bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
                if (iVar18 != 7) {
                  iVar12 = iVar15 + 8;
                  *(byte *)((int)this->Password + iVar19) =
                       bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
                  if (iVar18 != 8) {
                    iVar19 = iVar15 + 9;
                    *(byte *)((int)this->Password + iVar12) =
                         bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
                    if (iVar18 != 9) {
                      iVar12 = iVar15 + 10;
                      *(byte *)((int)this->Password + iVar19) =
                           bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
                      if (iVar18 != 10) {
                        iVar19 = iVar15 + 0xb;
                        *(byte *)((int)this->Password + iVar12) =
                             bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
                        if (iVar18 != 0xb) {
                          iVar12 = iVar15 + 0xc;
                          *(byte *)((int)this->Password + iVar19) =
                               bVar7 + (char)iVar19 ^ *(byte *)((int)this->Password + iVar19);
                          if (iVar18 != 0xc) {
                            iVar19 = iVar15 + 0xd;
                            *(byte *)((int)this->Password + iVar12) =
                                 bVar7 + (char)iVar12 ^ *(byte *)((int)this->Password + iVar12);
                            if (iVar18 != 0xd) {
                              iVar15 = iVar15 + 0xe;
                              *(byte *)((int)this->Password + iVar19) =
                                   *(byte *)((int)this->Password + iVar19) ^ bVar7 + (char)iVar19;
                              if (iVar18 != 0xe) {
                                *(byte *)((int)this->Password + iVar15) =
                                     bVar7 + (char)iVar15 ^ *(byte *)((int)this->Password + iVar15);
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


