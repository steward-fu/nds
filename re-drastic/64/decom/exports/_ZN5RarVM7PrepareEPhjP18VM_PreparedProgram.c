/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM7PrepareEPhjP18VM_PreparedProgram
 * Address  : 001ede50
 * Program  : drastic64
 */


/* RarVM::Prepare(unsigned char*, unsigned int, VM_PreparedProgram*) */

void __thiscall RarVM::Prepare(RarVM *this,uchar *param_1,uint param_2,VM_PreparedProgram *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  byte bVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined (*pauVar10) [16];
  
  *(undefined8 *)this = 0;
  uVar1 = param_2;
  if (0x8000 < param_2) {
    uVar1 = 0x8000;
  }
  memcpy(*(void **)(this + 0x10),param_1,(ulong)uVar1);
  if (param_2 < 2) {
    BitInput::faddbits((BitInput *)this,8);
    *(undefined4 *)(param_3 + 0x28) = 0;
    if (*param_1 == '\0') goto LAB_001ee14c;
  }
  else {
    uVar1 = param_2 - 1;
    if (param_2 - 2 < 0xf) {
      uVar8 = 1;
      bVar16 = 0;
LAB_001edf08:
      bVar16 = param_1[uVar8] ^ bVar16;
      if (uVar8 + 1 < param_2) {
        bVar16 = bVar16 ^ param_1[uVar8 + 1];
        if (uVar8 + 2 < param_2) {
          bVar16 = param_1[uVar8 + 2] ^ bVar16;
          if (uVar8 + 3 < param_2) {
            bVar16 = param_1[uVar8 + 3] ^ bVar16;
            if (uVar8 + 4 < param_2) {
              bVar16 = param_1[uVar8 + 4] ^ bVar16;
              if (uVar8 + 5 < param_2) {
                bVar16 = param_1[uVar8 + 5] ^ bVar16;
                if (uVar8 + 6 < param_2) {
                  bVar16 = param_1[uVar8 + 6] ^ bVar16;
                  if (uVar8 + 7 < param_2) {
                    bVar16 = param_1[uVar8 + 7] ^ bVar16;
                    if (uVar8 + 8 < param_2) {
                      bVar16 = param_1[uVar8 + 8] ^ bVar16;
                      if (uVar8 + 9 < param_2) {
                        bVar16 = param_1[uVar8 + 9] ^ bVar16;
                        if (uVar8 + 10 < param_2) {
                          bVar16 = param_1[uVar8 + 10] ^ bVar16;
                          if (uVar8 + 0xb < param_2) {
                            bVar16 = param_1[uVar8 + 0xb] ^ bVar16;
                            if (uVar8 + 0xc < param_2) {
                              bVar16 = param_1[uVar8 + 0xc] ^ bVar16;
                              if (uVar8 + 0xd < param_2) {
                                bVar16 = param_1[uVar8 + 0xd] ^ bVar16;
                                if (uVar8 + 0xe < param_2) {
                                  bVar16 = param_1[uVar8 + 0xe] ^ bVar16;
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
    else {
      auVar18._0_12_ = ZEXT812(0);
      auVar18._12_4_ = 0;
      pauVar9 = (undefined (*) [16])(param_1 + 1);
      do {
        pauVar10 = pauVar9 + 1;
        auVar15 = *pauVar9;
        auVar14[0] = auVar18[0] ^ auVar15[0];
        auVar14[1] = auVar18[1] ^ auVar15[1];
        auVar14[2] = auVar18[2] ^ auVar15[2];
        auVar14[3] = auVar18[3] ^ auVar15[3];
        auVar14[4] = auVar18[4] ^ auVar15[4];
        auVar14[5] = auVar18[5] ^ auVar15[5];
        auVar14[6] = auVar18[6] ^ auVar15[6];
        auVar14[7] = auVar18[7] ^ auVar15[7];
        auVar14[8] = auVar18[8] ^ auVar15[8];
        auVar14[9] = auVar18[9] ^ auVar15[9];
        auVar14[10] = auVar18[10] ^ auVar15[10];
        auVar14[11] = auVar18[11] ^ auVar15[11];
        auVar14[12] = auVar18[12] ^ auVar15[12];
        auVar14[13] = auVar18[13] ^ auVar15[13];
        auVar14[14] = auVar18[14] ^ auVar15[14];
        auVar14[15] = auVar18[15] ^ auVar15[15];
        pauVar9 = pauVar10;
        auVar18 = auVar14;
      } while (pauVar10 != (undefined (*) [16])(param_1 + (ulong)((uVar1 >> 4) - 1) * 0x10 + 0x11));
      auVar17 = ZEXT816(0);
      uVar8 = (uVar1 & 0xfffffff0) + 1;
      auVar18 = NEON_ext(auVar14,auVar17,8,1);
      auVar19[0] = auVar18[0] ^ auVar14[0];
      auVar19[1] = auVar18[1] ^ auVar14[1];
      auVar19[2] = auVar18[2] ^ auVar14[2];
      auVar19[3] = auVar18[3] ^ auVar14[3];
      auVar19[4] = auVar18[4] ^ auVar14[4];
      auVar19[5] = auVar18[5] ^ auVar14[5];
      auVar19[6] = auVar18[6] ^ auVar14[6];
      auVar19[7] = auVar18[7] ^ auVar14[7];
      auVar19[8] = auVar18[8] ^ auVar14[8];
      auVar19[9] = auVar18[9] ^ auVar14[9];
      auVar19[10] = auVar18[10] ^ auVar14[10];
      auVar19[11] = auVar18[11] ^ auVar14[11];
      auVar19[12] = auVar18[12] ^ auVar14[12];
      auVar19[13] = auVar18[13] ^ auVar14[13];
      auVar19[14] = auVar18[14] ^ auVar14[14];
      auVar19[15] = auVar18[15] ^ auVar14[15];
      auVar18 = NEON_ext(auVar19,auVar17,4,1);
      auVar20[0] = auVar18[0] ^ auVar19[0];
      auVar20[1] = auVar18[1] ^ auVar19[1];
      auVar20[2] = auVar18[2] ^ auVar19[2];
      auVar20[3] = auVar18[3] ^ auVar19[3];
      auVar20[4] = auVar18[4] ^ auVar19[4];
      auVar20[5] = auVar18[5] ^ auVar19[5];
      auVar20[6] = auVar18[6] ^ auVar19[6];
      auVar20[7] = auVar18[7] ^ auVar19[7];
      auVar20[8] = auVar18[8] ^ auVar19[8];
      auVar20[9] = auVar18[9] ^ auVar19[9];
      auVar20[10] = auVar18[10] ^ auVar19[10];
      auVar20[11] = auVar18[11] ^ auVar19[11];
      auVar20[12] = auVar18[12] ^ auVar19[12];
      auVar20[13] = auVar18[13] ^ auVar19[13];
      auVar20[14] = auVar18[14] ^ auVar19[14];
      auVar20[15] = auVar18[15] ^ auVar19[15];
      auVar18 = NEON_ext(auVar20,auVar17,2,1);
      auVar15[0] = auVar18[0] ^ auVar20[0];
      auVar15[1] = auVar18[1] ^ auVar20[1];
      auVar15[2] = auVar18[2] ^ auVar20[2];
      auVar15[3] = auVar18[3] ^ auVar20[3];
      auVar15[4] = auVar18[4] ^ auVar20[4];
      auVar15[5] = auVar18[5] ^ auVar20[5];
      auVar15[6] = auVar18[6] ^ auVar20[6];
      auVar15[7] = auVar18[7] ^ auVar20[7];
      auVar15[8] = auVar18[8] ^ auVar20[8];
      auVar15[9] = auVar18[9] ^ auVar20[9];
      auVar15[10] = auVar18[10] ^ auVar20[10];
      auVar15[11] = auVar18[11] ^ auVar20[11];
      auVar15[12] = auVar18[12] ^ auVar20[12];
      auVar15[13] = auVar18[13] ^ auVar20[13];
      auVar15[14] = auVar18[14] ^ auVar20[14];
      auVar15[15] = auVar18[15] ^ auVar20[15];
      auVar18 = NEON_ext(auVar15,auVar17,1,1);
      bVar16 = auVar18[0] ^ auVar15[0];
      if ((uVar1 & 0xfffffff0) != uVar1) goto LAB_001edf08;
    }
    BitInput::faddbits((BitInput *)this,8);
    *(undefined4 *)(param_3 + 0x28) = 0;
    if (*param_1 == bVar16) {
LAB_001ee14c:
      iVar3 = CRC32(0xffffffff,param_1,(ulong)param_2);
      if (iVar3 == 0x52a89778) {
        if (param_2 != 0x35) goto LAB_001ee1c8;
        lVar7 = 0;
      }
      else {
        if (iVar3 == -0x3cd7e57f) {
          if (param_2 == 0x39) {
            lVar7 = 1;
            goto LAB_001ee25c;
          }
LAB_001ee188:
          if (iVar3 != -0xe06077e) goto LAB_001ee1e0;
          if (param_2 == 0x1d) {
            lVar7 = 3;
            goto LAB_001ee25c;
          }
        }
        else {
LAB_001ee1c8:
          if (iVar3 != -0x37698940) goto LAB_001ee188;
          if (param_2 == 0x78) {
            lVar7 = 2;
            goto LAB_001ee25c;
          }
LAB_001ee1e0:
          if (iVar3 == -0x1c2c5dc9) {
            if (param_2 != 0x95) goto LAB_001ee04c;
            lVar7 = 4;
            goto LAB_001ee25c;
          }
        }
        if ((iVar3 != 0x437a18fe) || (param_2 != 0xd8)) goto LAB_001ee04c;
        lVar7 = 5;
      }
LAB_001ee25c:
      lVar12 = *(long *)(param_3 + 8);
      uVar4 = *(ulong *)(param_3 + 0x10);
      iVar3 = (&DAT_00229568)[lVar7 * 3];
      uVar13 = lVar12 + 1;
      if (iVar3 != 0) {
        *(ulong *)(param_3 + 8) = uVar13;
        if (uVar4 < uVar13) {
          if (*(ulong *)(param_3 + 0x18) != 0 && *(ulong *)(param_3 + 0x18) < uVar13) {
            ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
            ErrorHandler::MemoryError();
            uVar13 = *(ulong *)(param_3 + 8);
            uVar4 = *(ulong *)(param_3 + 0x10);
          }
          uVar4 = uVar4 + 0x20 + (uVar4 >> 2);
          if (uVar4 < uVar13) {
            uVar4 = uVar13;
          }
          pvVar11 = realloc(*(void **)param_3,uVar4 * 0x38);
          if (pvVar11 == (void *)0x0) {
            ErrorHandler::MemoryError();
          }
          *(void **)param_3 = pvVar11;
          *(ulong *)(param_3 + 0x10) = uVar4;
        }
        else {
          pvVar11 = *(void **)param_3;
        }
        iVar2 = *(int *)(param_3 + 0x28);
        *(int *)(param_3 + 0x28) = iVar2 + 1;
        lVar7 = (long)iVar2 * 0x38;
        *(undefined4 *)((long)pvVar11 + lVar7) = 0x28;
        piVar6 = (int *)((long)pvVar11 + lVar7 + 0xc);
        *piVar6 = iVar3;
        *(undefined4 *)((long)pvVar11 + lVar7 + 8) = 3;
        *(int **)((long)pvVar11 + lVar7 + 0x18) = piVar6;
        *(undefined4 *)((long)pvVar11 + lVar7 + 0x20) = 3;
        *(long *)((long)pvVar11 + lVar7 + 0x30) = (long)pvVar11 + lVar7 + 0x24;
        return;
      }
      goto LAB_001ee050;
    }
  }
LAB_001ee04c:
  lVar12 = *(long *)(param_3 + 8);
  uVar4 = *(ulong *)(param_3 + 0x10);
LAB_001ee050:
  uVar13 = lVar12 + 1;
  *(ulong *)(param_3 + 8) = uVar13;
  if (uVar4 < uVar13) {
    uVar5 = *(ulong *)(param_3 + 0x18);
    if ((uVar5 != 0 && uVar5 <= uVar13) && (uVar5 == 0 || uVar13 != uVar5)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar13 = *(ulong *)(param_3 + 8);
      uVar4 = *(ulong *)(param_3 + 0x10);
    }
    uVar4 = uVar4 + 0x20 + (uVar4 >> 2);
    if (uVar4 < uVar13) {
      uVar4 = uVar13;
    }
    pvVar11 = realloc(*(void **)param_3,uVar4 * 0x38);
    if (pvVar11 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)param_3 = pvVar11;
    *(ulong *)(param_3 + 0x10) = uVar4;
  }
  else {
    pvVar11 = *(void **)param_3;
  }
  uVar1 = *(uint *)(param_3 + 0x28);
  *(uint *)(param_3 + 0x28) = uVar1 + 1;
  lVar7 = (long)(int)uVar1 * 0x38;
  *(undefined4 *)((long)pvVar11 + lVar7) = 0x16;
  *(undefined4 *)((long)pvVar11 + lVar7 + 8) = 3;
  *(long *)((long)pvVar11 + lVar7 + 0x18) = (long)pvVar11 + lVar7 + 0xc;
  *(undefined4 *)((long)pvVar11 + lVar7 + 0x20) = 3;
  *(long *)((long)pvVar11 + lVar7 + 0x30) = (long)pvVar11 + lVar7 + 0x24;
  if (0 < (int)(uVar1 + 1)) {
    lVar7 = (long)pvVar11 + 0x24;
    lVar12 = (long)pvVar11 + (ulong)uVar1 * 0x38 + 0x5c;
    do {
      while (*(long *)(lVar7 + -0xc) == 0) {
        *(long *)(lVar7 + -0xc) = lVar7 + -0x18;
        if (*(long *)(lVar7 + 0xc) != 0) goto LAB_001ee0c0;
LAB_001ee0e4:
        *(long *)(lVar7 + 0xc) = lVar7;
        lVar7 = lVar7 + 0x38;
        if (lVar12 == lVar7) {
          return;
        }
      }
      if (*(long *)(lVar7 + 0xc) == 0) goto LAB_001ee0e4;
LAB_001ee0c0:
      lVar7 = lVar7 + 0x38;
    } while (lVar12 != lVar7);
  }
  return;
}


