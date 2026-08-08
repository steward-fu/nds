/*
 * Ghidra decompilation
 *
 * Function : Prepare
 * Address  : 0810ab50
 * Program  : drastic
 */


/* DWARF original prototype: void Prepare(RarVM * this, byte * Code, uint CodeSize,
   VM_PreparedProgram * Prg) */

void __thiscall RarVM::Prepare(RarVM *this,byte *Code,uint CodeSize,VM_PreparedProgram *Prg)

{
  undefined auVar1 [16];
  undefined auVar2 [32];
  undefined auVar3 [32];
  undefined auVar4 [32];
  byte *pbVar5;
  VM_PreparedCommand *pVVar6;
  VM_PreparedCommand *NewBuffer_1;
  int iVar7;
  uint CodeCRC;
  VM_PreparedCommand *NewBuffer;
  uint uVar8;
  undefined (*pauVar9) [16];
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  size_t Suggested_1;
  size_t NewSize_1;
  size_t Suggested;
  size_t NewSize;
  VM_StandardFilters VVar16;
  uint uVar17;
  uint uVar18;
  undefined auVar19 [16];
  
  bVar15 = 0;
  uVar11 = CodeSize;
  if (0x7fff < CodeSize) {
    uVar11 = 0x8000;
  }
  (this->super_BitInput).InAddr = 0;
  (this->super_BitInput).InBit = 0;
  memcpy((this->super_BitInput).InBuf,Code,uVar11);
  if (1 < CodeSize) {
    uVar18 = CodeSize - 1;
    uVar8 = -((uint)(Code + 1) & 7) & 0xf;
    if (uVar18 <= uVar8) {
      uVar8 = uVar18;
    }
    uVar13 = uVar18;
    if ((uVar18 < 0x16) || (uVar13 = uVar8, uVar8 != 0)) {
      iVar14 = uVar13 + 1;
      iVar12 = 1;
      bVar15 = 0;
      pbVar5 = Code;
      do {
        pbVar5 = pbVar5 + 1;
        iVar12 = iVar12 + 1;
        bVar15 = bVar15 ^ *pbVar5;
      } while (iVar14 != iVar12);
      uVar8 = uVar13;
      if (uVar18 == uVar13) goto LAB_0810ad98;
    }
    else {
      iVar14 = 1;
      bVar15 = 0;
    }
    uVar13 = ((uVar18 - uVar8) - 0x10 >> 4) + 1;
    iVar12 = uVar13 * 0x10;
    if (0xe < (CodeSize - 2) - uVar8) {
      auVar19 = ZEXT816(0);
      pauVar9 = (undefined (*) [16])(Code + uVar8 + 1);
      uVar17 = 0;
      do {
        auVar1 = *pauVar9;
        uVar17 = uVar17 + 1;
        pauVar9 = pauVar9 + 1;
        auVar19 = auVar19 ^ auVar1;
      } while (uVar17 < uVar13);
      auVar1 = ZEXT816(0);
      iVar14 = iVar14 + iVar12;
      auVar2._16_16_ = auVar1;
      auVar2._0_16_ = auVar19;
      auVar19 = auVar2._8_16_ ^ auVar19;
      auVar3._16_16_ = auVar1;
      auVar3._0_16_ = auVar19;
      auVar19 = auVar3._4_16_ ^ auVar19;
      auVar4._16_16_ = auVar1;
      auVar4._0_16_ = auVar19;
      auVar19 = auVar4._2_16_ ^ auVar19;
      bVar15 = bVar15 ^ auVar19[1] ^ auVar19[0];
      if (iVar12 - (uVar18 - uVar8) == 0) goto LAB_0810ad98;
    }
    bVar15 = bVar15 ^ Code[iVar14];
    if (iVar14 + 1U < CodeSize) {
      bVar15 = bVar15 ^ Code[iVar14 + 1U];
      if (iVar14 + 2U < CodeSize) {
        bVar15 = bVar15 ^ Code[iVar14 + 2U];
        if (iVar14 + 3U < CodeSize) {
          bVar15 = bVar15 ^ Code[iVar14 + 3U];
          if (iVar14 + 4U < CodeSize) {
            bVar15 = bVar15 ^ Code[iVar14 + 4U];
            if (iVar14 + 5U < CodeSize) {
              bVar15 = bVar15 ^ Code[iVar14 + 5U];
              if (iVar14 + 6U < CodeSize) {
                bVar15 = bVar15 ^ Code[iVar14 + 6U];
                if (iVar14 + 7U < CodeSize) {
                  bVar15 = bVar15 ^ Code[iVar14 + 7U];
                  if (iVar14 + 8U < CodeSize) {
                    bVar15 = bVar15 ^ Code[iVar14 + 8U];
                    if (iVar14 + 9U < CodeSize) {
                      bVar15 = bVar15 ^ Code[iVar14 + 9U];
                      if (iVar14 + 10U < CodeSize) {
                        bVar15 = bVar15 ^ Code[iVar14 + 10U];
                        if (iVar14 + 0xbU < CodeSize) {
                          bVar15 = bVar15 ^ Code[iVar14 + 0xbU];
                          if (iVar14 + 0xcU < CodeSize) {
                            bVar15 = bVar15 ^ Code[iVar14 + 0xcU];
                            if (iVar14 + 0xdU < CodeSize) {
                              bVar15 = bVar15 ^ Code[iVar14 + 0xdU];
                              if (iVar14 + 0xeU < CodeSize) {
                                bVar15 = bVar15 ^ Code[iVar14 + 0xeU];
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
LAB_0810ad98:
  iVar12 = 0;
  BitInput::faddbits(&this->super_BitInput,8);
  Prg->CmdCount = 0;
  if (*Code != bVar15) goto LAB_0810adb8;
  uVar11 = CRC32(0xffffffff,Code,CodeSize);
  if (uVar11 == 0x52a89778) {
    if (CodeSize != 0x35) goto LAB_0810af00;
  }
  else {
    if (uVar11 == 0xc3281a81) {
      if (CodeSize == 0x39) {
        iVar12 = 1;
        goto LAB_0810af4c;
      }
LAB_0810af10:
      if (uVar11 != 0xf1f9f882) goto LAB_0810af20;
      if (CodeSize == 0x1d) {
        iVar12 = 3;
        goto LAB_0810af4c;
      }
    }
    else {
LAB_0810af00:
      if (uVar11 != 0xc89676c0) goto LAB_0810af10;
      if (CodeSize == 0x78) {
        iVar12 = 2;
        goto LAB_0810af4c;
      }
LAB_0810af20:
      if (uVar11 == 0xe3d3a237) {
        if (CodeSize != 0x95) goto LAB_0810adb8;
        iVar12 = 4;
        goto LAB_0810af4c;
      }
    }
    if ((uVar11 != 0x437a18fe) || (CodeSize != 0xd8)) goto LAB_0810adb8;
    iVar12 = 5;
  }
LAB_0810af4c:
  VVar16 = IsStandardFilter::StdList[iVar12].Type;
  if (VVar16 != VMSF_NONE) {
    uVar8 = (Prg->Cmd).AllocSize;
    uVar18 = (Prg->Cmd).BufSize + 1;
    (Prg->Cmd).BufSize = uVar18;
    if (uVar8 < uVar18) {
      uVar13 = (Prg->Cmd).MaxSize;
      if ((uVar13 == 0 || uVar13 <= uVar18) && (uVar13 != 0 && uVar18 != uVar13)) {
        ErrorHandler::GeneralErrMsg
                  (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError(&ErrHandler);
        uVar18 = (Prg->Cmd).BufSize;
        uVar8 = (Prg->Cmd).AllocSize;
      }
      NewSize = uVar8 + 0x20 + (uVar8 >> 2);
      if (NewSize < uVar18) {
        NewSize = uVar18;
      }
      pVVar6 = (VM_PreparedCommand *)realloc((Prg->Cmd).Buffer,NewSize * 0x28);
      if (pVVar6 == (VM_PreparedCommand *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
      (Prg->Cmd).Buffer = pVVar6;
      (Prg->Cmd).AllocSize = NewSize;
    }
    else {
      pVVar6 = (Prg->Cmd).Buffer;
    }
    iVar12 = Prg->CmdCount;
    Prg->CmdCount = iVar12 + 1;
    pVVar6[iVar12].OpCode = VM_STANDARD;
    puVar10 = &pVVar6[iVar12].Op1.Data;
    *puVar10 = VVar16;
    pVVar6[iVar12].Op1.Type = VM_OPNONE;
    pVVar6[iVar12].Op1.Addr = puVar10;
    pVVar6[iVar12].Op2.Type = VM_OPNONE;
    pVVar6[iVar12].Op2.Addr = &pVVar6[iVar12].Op2.Data;
    return;
  }
LAB_0810adb8:
  uVar8 = (Prg->Cmd).AllocSize;
  uVar18 = (Prg->Cmd).BufSize + 1;
  (Prg->Cmd).BufSize = uVar18;
  if (uVar8 < uVar18) {
    uVar13 = (Prg->Cmd).MaxSize;
    if ((uVar13 == 0 || uVar13 <= uVar18) && (uVar13 != 0 && uVar18 != uVar13)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar18 = (Prg->Cmd).BufSize;
      uVar8 = (Prg->Cmd).AllocSize;
    }
    NewSize_1 = uVar8 + 0x20 + (uVar8 >> 2);
    if (NewSize_1 < uVar18) {
      NewSize_1 = uVar18;
    }
    pVVar6 = (VM_PreparedCommand *)realloc((Prg->Cmd).Buffer,NewSize_1 * 0x28);
    if (pVVar6 == (VM_PreparedCommand *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    (Prg->Cmd).Buffer = pVVar6;
    (Prg->Cmd).AllocSize = NewSize_1;
  }
  else {
    pVVar6 = (Prg->Cmd).Buffer;
  }
  iVar12 = Prg->CmdCount;
  iVar14 = iVar12 + 1;
  Prg->CmdCount = iVar14;
  pVVar6[iVar12].OpCode = VM_RET;
  pVVar6[iVar12].Op1.Type = VM_OPNONE;
  pVVar6[iVar12].Op1.Addr = &pVVar6[iVar12].Op1.Data;
  pVVar6[iVar12].Op2.Type = VM_OPNONE;
  pVVar6[iVar12].Op2.Addr = &pVVar6[iVar12].Op2.Data;
  if (0 < iVar14) {
    iVar7 = 0;
    iVar12 = 0;
    do {
      pVVar6 = (Prg->Cmd).Buffer;
      iVar7 = iVar7 + 1;
      if (*(int *)((int)&(pVVar6->Op1).Addr + iVar12) == 0) {
        *(int *)((int)&(pVVar6->Op1).Addr + iVar12) = (int)&(pVVar6->Op1).Data + iVar12;
      }
      if (*(int *)((int)&(pVVar6->Op2).Addr + iVar12) == 0) {
        *(int *)((int)&(pVVar6->Op2).Addr + iVar12) = (int)&(pVVar6->Op2).Data + iVar12;
      }
      iVar12 = iVar12 + 0x28;
    } while (iVar14 != iVar7);
  }
  return;
}


