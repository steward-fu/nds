/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack10ReadTablesER8BitInputR17UnpackBlockHeaderR17UnpackBlockTables.part.15
 * Address  : 080f1af8
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadTables(Unpack * this, BitInput * Inp, UnpackBlockHeader *
   Header, UnpackBlockTables * Tables) */

bool __thiscall
Unpack::ReadTables(Unpack *this,BitInput *Inp,UnpackBlockHeader *Header,UnpackBlockTables *Tables)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint LastPos;
  byte *pbVar6;
  uint BitField_1;
  uint Pos_1;
  uint LastPos_1;
  uint Code;
  int extraout_r1;
  int extraout_r1_00;
  uint LastPos_2;
  uint LastPos_4;
  uint BitField;
  uint Pos;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint BitField_4;
  uint Pos_4;
  undefined2 uVar10;
  uint I;
  uint uVar11;
  int Number;
  uint I_1;
  uint uVar12;
  uint I_2;
  uint BitField_2;
  uint Pos_2;
  undefined *puVar13;
  uint I_3;
  uint BitField_3;
  uint Pos_3;
  uint I_4;
  uint BitField_5;
  uint Pos_5;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined2 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int N;
  int N_1;
  int iVar25;
  int iVar26;
  undefined *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint LastPos_3;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  bool bVar41;
  byte CurBitLength;
  uint LengthCount [16];
  uint CopyDecodePos [16];
  byte BitLength [20];
  byte Table [430];
  undefined *local_2c;
  undefined auStack_28 [4];
  
  local_2c = __stack_chk_guard;
  puVar27 = __stack_chk_guard;
  iVar25 = 0;
  do {
    while( true ) {
      uVar4 = BitInput::fgetbits(Inp);
      BitInput::faddbits(Inp,4);
      bVar40 = (uVar4 >> 0xc & 0xff) != 0xf;
      if (bVar40) {
        puVar27 = auStack_28 + iVar25;
      }
      bVar1 = (byte)(uVar4 >> 0xc);
      if (!bVar40) break;
      puVar27[-0x1c8] = bVar1;
LAB_080f1b3c:
      iVar25 = iVar25 + 1;
      if (0x13 < iVar25) goto LAB_080f1bb0;
    }
    uVar4 = BitInput::fgetbits(Inp);
    uVar19 = (uVar4 << 0xc) >> 0x18;
    BitInput::faddbits(Inp,4);
    if (uVar19 != 0) {
      if (iVar25 < 0x14) {
        pbVar8 = BitLength;
        pbVar9 = pbVar8 + iVar25 + -1;
        puVar13 = (undefined *)(uVar19 + 1);
        iVar14 = iVar25;
        do {
          iVar25 = iVar14 + 1;
          pbVar9 = pbVar9 + 1;
          *pbVar9 = '\0';
          if (iVar25 < 0x14) {
            pbVar8 = (byte *)0x1;
          }
          if (iVar25 != 0x13 && iVar14 + -0x12 < 0 == SBORROW4(iVar25,0x13)) {
            pbVar8 = (byte *)0x0;
          }
          puVar27 = puVar13 + -1;
          if ((int)puVar13 < 1) {
            pbVar8 = (byte *)0x0;
          }
          puVar13 = puVar27;
          iVar14 = iVar25;
        } while (pbVar8 != (byte *)0x0);
      }
      iVar25 = iVar25 + -1;
      goto LAB_080f1b3c;
    }
    puVar27 = auStack_28 + iVar25;
    iVar14 = iVar25 + 1;
    BitLength[iVar25] = bVar1;
    iVar25 = iVar14;
  } while (iVar14 < 0x14);
LAB_080f1bb0:
  pbVar6 = (byte *)((int)CopyDecodePos + 0x3f);
  LengthCount[0] = 0;
  LengthCount[1] = 0;
  LengthCount[2] = 0;
  LengthCount[3] = 0;
  Header[0x2fc].BlockSize = 0x14;
  LengthCount[4] = 0;
  LengthCount[5] = 0;
  LengthCount[6] = 0;
  LengthCount[7] = 0;
  LengthCount[8] = 0;
  LengthCount[9] = 0;
  LengthCount[10] = 0;
  LengthCount[11] = 0;
  LengthCount[12] = 0;
  LengthCount[13] = 0;
  LengthCount[14] = 0;
  LengthCount[15] = 0;
  pbVar5 = pbVar6;
  do {
    pbVar5 = pbVar5 + 1;
    LengthCount[*pbVar5 & 0xf] = LengthCount[*pbVar5 & 0xf] + 1;
  } while (BitLength + 0x13 != pbVar5);
  uVar4 = LengthCount[1];
  I = 0;
  LengthCount._0_8_ = (ulonglong)LengthCount[1] << 0x20;
  uVar3 = LengthCount._0_8_;
  iVar25 = LengthCount[2] + uVar4 * 2;
  Header[0x39c].BlockStart = 0;
  Header[0x39c].HeaderSize = 0;
  *(undefined8 *)&Header[0x39c].LastBlockInFile = 0;
  Header[0x39d].BlockBitSize = 0;
  Header[0x39d].BlockStart = 0;
  Header[0x39d].HeaderSize = 0;
  Header[0x39d].LastBlockInFile = false;
  Header[0x39d].TablePresent = false;
  *(undefined2 *)&Header[0x39d].field_0x12 = 0;
  iVar33 = LengthCount[3] + LengthCount[2] + uVar4;
  iVar36 = LengthCount[3] + iVar25 * 2;
  iVar29 = LengthCount[4] + iVar33;
  Header[0x39e].BlockSize = 0;
  Header[0x39e].BlockBitSize = 0;
  iVar14 = LengthCount[4] + iVar36 * 2;
  Header[0x2fc].BlockBitSize = 0;
  iVar37 = LengthCount[5] + iVar14 * 2;
  iVar31 = LengthCount[5] + iVar29;
  iVar26 = LengthCount[6] + iVar37 * 2;
  Header[0x2fc].HeaderSize = iVar25 * 0x4000;
  iVar34 = LengthCount[6] + iVar31;
  iVar35 = LengthCount[7] + iVar34;
  *(int *)&Header[0x2fc].LastBlockInFile = iVar36 * 0x2000;
  iVar36 = LengthCount[7] + iVar26 * 2;
  iVar25 = LengthCount[8] + iVar36 * 2;
  Header[0x2fd].HeaderSize = iVar36 * 0x200;
  Header[0x2fd].BlockSize = iVar14 * 0x1000;
  Header[0x301].BlockBitSize = LengthCount[8] + iVar35;
  Header[0x2fd].BlockBitSize = iVar37 * 0x800;
  Header[0x2fd].BlockStart = iVar26 * 0x400;
  LengthCount[1]._0_1_ = (undefined)uVar4;
  LengthCount[1]._1_1_ = SUB41(uVar4,1);
  LengthCount[1]._2_2_ = SUB42(uVar4,2);
  Header[0x2ff].LastBlockInFile = (bool)(undefined)LengthCount[1];
  Header[0x2ff].TablePresent = (bool)LengthCount[1]._1_1_;
  *(undefined2 *)&Header[0x2ff].field_0x12 = LengthCount[1]._2_2_;
  iVar26 = LengthCount[9] + iVar25 * 2;
  iVar14 = Header[0x301].BlockBitSize;
  Header[0x2fc].BlockStart = uVar4 << 0xf;
  Header[0x300].BlockStart = iVar29;
  Header[0x300].HeaderSize = iVar31;
  iVar14 = LengthCount[9] + iVar14;
  *(int *)&Header[0x2fd].LastBlockInFile = iVar25 * 0x100;
  Header[0x2fe].BlockSize = iVar26 * 0x80;
  iVar31 = LengthCount[10] + iVar26 * 2;
  iVar25 = LengthCount[10] + iVar14;
  Header[0x2ff].BlockStart = 0;
  Header[0x301].BlockStart = iVar14;
  Header[0x2ff].HeaderSize = 0;
  Header[0x301].HeaderSize = iVar25;
  Header[0x300].BlockSize = LengthCount[2] + uVar4;
  *(int *)&Header[0x300].LastBlockInFile = iVar34;
  Header[0x300].BlockBitSize = iVar33;
  Header[0x301].BlockSize = iVar35;
  iVar25 = LengthCount[11] + iVar25;
  iVar29 = LengthCount[11] + iVar31 * 2;
  iVar26 = LengthCount[12] + iVar29 * 2;
  iVar14 = LengthCount[12] + iVar25;
  Header[0x2fe].BlockBitSize = iVar31 * 0x40;
  *(int *)&Header[0x301].LastBlockInFile = iVar25;
  Header[0x302].BlockSize = iVar14;
  iVar25 = LengthCount[13] + iVar26 * 2;
  iVar14 = LengthCount[13] + iVar14;
  Header[0x2fe].BlockStart = iVar29 * 0x20;
  Header[0x302].BlockBitSize = iVar14;
  Header[0x2fe].HeaderSize = iVar26 * 0x10;
  iVar26 = LengthCount[14] + iVar25 * 2;
  *(int *)&Header[0x2fe].LastBlockInFile = iVar25 * 8;
  Header[0x2ff].BlockSize = iVar26 * 4;
  Header[0x2ff].BlockBitSize = (LengthCount[15] + iVar26 * 2) * 2;
  Header[0x302].BlockStart = iVar14 + LengthCount[14];
  CopyDecodePos[0] = Header[0x2ff].BlockStart;
  CopyDecodePos[1] = Header[0x2ff].HeaderSize;
  CopyDecodePos[5] = Header[0x300].BlockStart;
  CopyDecodePos[3] = Header[0x300].BlockSize;
  CopyDecodePos[2]._0_1_ = Header[0x2ff].LastBlockInFile;
  CopyDecodePos[2]._1_1_ = Header[0x2ff].TablePresent;
  CopyDecodePos[2]._2_2_ = *(undefined2 *)&Header[0x2ff].field_0x12;
  CopyDecodePos[6] = Header[0x300].HeaderSize;
  CopyDecodePos[4] = Header[0x300].BlockBitSize;
  CopyDecodePos[7]._0_1_ = Header[0x300].LastBlockInFile;
  CopyDecodePos[7]._1_1_ = Header[0x300].TablePresent;
  CopyDecodePos[7]._2_2_ = *(undefined2 *)&Header[0x300].field_0x12;
  CopyDecodePos[8] = Header[0x301].BlockSize;
  CopyDecodePos[9] = Header[0x301].BlockBitSize;
  CopyDecodePos[10] = Header[0x301].BlockStart;
  CopyDecodePos[11] = Header[0x301].HeaderSize;
  CopyDecodePos[12]._0_1_ = Header[0x301].LastBlockInFile;
  CopyDecodePos[12]._1_1_ = Header[0x301].TablePresent;
  CopyDecodePos[12]._2_2_ = *(undefined2 *)&Header[0x301].field_0x12;
  CopyDecodePos[13] = Header[0x302].BlockSize;
  CopyDecodePos[14] = Header[0x302].BlockBitSize;
  CopyDecodePos[15] = Header[0x302].BlockStart;
  do {
    pbVar6 = pbVar6 + 1;
    uVar19 = *pbVar6 & 0xf;
    if ((*pbVar6 & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar19];
      CopyDecodePos[uVar19] = uVar4 + 1;
      *(short *)((int)&Header[0x39c].BlockStart + uVar4 * 2) = (short)I;
    }
    I = I + 1;
  } while (I != 0x14);
  puVar21 = (undefined2 *)&Header[0x335].field_0x12;
  puVar27 = (undefined *)((int)&Header[0x302].HeaderSize + 3);
  Header[0x302].HeaderSize = 7;
  iVar25 = 0;
  uVar19 = 1;
  do {
    uVar7 = iVar25 * 0x200;
    if (uVar7 < (uint)(&Header[0x2fc].BlockBitSize)[uVar19] || 0xf < uVar19) {
      uVar11 = 0x10 - uVar19;
      uVar12 = uVar19 - 1;
      uVar20 = uVar19;
      uVar19 = uVar19 & 0xff;
    }
    else {
      uVar20 = uVar19 + 1;
      if (uVar7 < (uint)(&Header[0x2fc].BlockStart)[uVar19]) {
        uVar11 = 0x10 - uVar20;
        uVar12 = uVar19;
        uVar19 = uVar20 & 0xff;
      }
      else {
        uVar11 = 0;
        if (uVar20 == 0x10) {
LAB_080f213c:
          uVar12 = 0xf;
          uVar19 = uVar20;
        }
        else {
          uVar16 = uVar19 + 2;
          uVar12 = uVar20;
          if (uVar7 < (uint)(&Header[0x2fc].HeaderSize)[uVar19]) {
LAB_080f20d8:
            uVar20 = uVar16;
            uVar11 = 0x10 - uVar20;
            uVar19 = uVar20 & 0xff;
          }
          else {
            uVar20 = uVar16;
            if (uVar16 == 0x10) {
LAB_080f2128:
              uVar12 = 0xf;
              uVar19 = uVar20;
            }
            else {
              uVar12 = uVar19 + 3;
              uVar20 = uVar12;
              if (*(uint *)(&Header[0x2fc].LastBlockInFile + uVar19 * 4) <= uVar7) {
                if (uVar12 == 0x10) goto LAB_080f213c;
                uVar20 = uVar19 + 4;
                uVar16 = uVar20;
                if (uVar7 < (uint)(&Header[0x2fd].BlockSize)[uVar19]) goto LAB_080f20d8;
                if (uVar20 == 0x10) goto LAB_080f2128;
                uVar12 = uVar19 + 5;
                uVar20 = uVar12;
                if ((uint)(&Header[0x2fd].BlockBitSize)[uVar19] <= uVar7) {
                  if (uVar12 != 0x10) {
                    uVar20 = uVar19 + 6;
                    uVar16 = uVar20;
                    if (uVar7 < (uint)(&Header[0x2fd].BlockStart)[uVar19]) goto LAB_080f20d8;
                    if (uVar20 == 0x10) {
LAB_080f2114:
                      uVar11 = 0;
                      uVar12 = 0xf;
                      uVar19 = uVar20;
                      goto LAB_080f2020;
                    }
                    uVar12 = uVar19 + 7;
                    uVar20 = uVar12;
                    if (uVar7 < (uint)(&Header[0x2fd].HeaderSize)[uVar19]) goto LAB_080f20ec;
                    if (uVar12 != 0x10) {
                      uVar20 = uVar19 + 8;
                      uVar16 = uVar20;
                      if (uVar7 < *(uint *)(&Header[0x2fd].LastBlockInFile + uVar19 * 4))
                      goto LAB_080f20d8;
                      if (uVar20 == 0x10) goto LAB_080f2114;
                      uVar12 = uVar19 + 9;
                      uVar20 = uVar12;
                      if (uVar7 < (uint)(&Header[0x2fe].BlockSize)[uVar19]) goto LAB_080f20ec;
                      if (uVar12 != 0x10) {
                        uVar20 = uVar19 + 10;
                        uVar16 = uVar20;
                        if (uVar7 < (uint)(&Header[0x2fe].BlockBitSize)[uVar19]) goto LAB_080f20d8;
                        if (uVar20 == 0x10) goto LAB_080f2114;
                        uVar12 = uVar19 + 0xb;
                        uVar20 = uVar12;
                        if (uVar7 < (uint)(&Header[0x2fe].BlockStart)[uVar19]) goto LAB_080f20ec;
                        if (uVar12 != 0x10) {
                          uVar20 = uVar19 + 0xc;
                          uVar16 = uVar20;
                          if (uVar7 < (uint)(&Header[0x2fe].HeaderSize)[uVar19]) goto LAB_080f20d8;
                          if (uVar20 == 0x10) goto LAB_080f2114;
                          uVar12 = uVar19 + 0xd;
                          uVar20 = uVar12;
                          if (uVar7 < *(uint *)(&Header[0x2fe].LastBlockInFile + uVar19 * 4))
                          goto LAB_080f20ec;
                          if (uVar12 != 0x10) {
                            uVar20 = uVar19 + 0xe;
                            if (uVar7 < (uint)(&Header[0x2ff].BlockSize)[uVar19]) {
                              uVar11 = 0x10 - uVar20;
                              uVar19 = uVar20 & 0xff;
                            }
                            else {
                              uVar20 = 0x10;
                              uVar11 = 0;
                              uVar12 = 0xf;
                              uVar19 = 0x10;
                            }
                            goto LAB_080f2020;
                          }
                        }
                      }
                    }
                  }
                  uVar11 = 0;
                  uVar12 = 0xf;
                  uVar19 = uVar20;
                  goto LAB_080f2020;
                }
              }
LAB_080f20ec:
              uVar12 = uVar16;
              uVar11 = 0x10 - uVar20;
              uVar19 = uVar20 & 0xff;
            }
          }
        }
      }
    }
LAB_080f2020:
    puVar27 = puVar27 + 1;
    *puVar27 = (char)uVar19;
    uVar19 = (&Header[0x2ff].BlockStart)[uVar20] +
             (uVar7 - (&Header[0x2fc].BlockBitSize)[uVar12] >> (uVar11 & 0xff));
    if (uVar19 < 0x14) {
      uVar10 = *(undefined2 *)((int)&Header[0x39c].BlockStart + uVar19 * 2);
    }
    else {
      uVar10 = 0;
    }
    iVar25 = iVar25 + 1;
    puVar21 = puVar21 + 1;
    *puVar21 = uVar10;
    uVar19 = uVar20;
  } while (iVar25 != 0x80);
  iVar25 = 0;
  LengthCount._0_8_ = uVar3;
LAB_080f2184:
  do {
    do {
      if (Inp->ExternalBuffer == false) {
        iVar14 = Inp->InAddr;
        if (this->ReadTop + -4 <= iVar14) {
          bVar40 = UnpReadBuf(this);
          if (bVar40) goto LAB_080f2964;
          goto LAB_080f4138;
        }
      }
      else {
LAB_080f2964:
        iVar14 = Inp->InAddr;
      }
      uVar7 = Header[0x302].HeaderSize;
      iVar26 = Inp->InBit;
      pbVar5 = Inp->InBuf + iVar14;
      uVar19 = ((uint)pbVar5[2] | (uint)*pbVar5 << 0x10 | (uint)pbVar5[1] << 8) >>
               (8U - iVar26 & 0xff) & 0xfffe;
      if (uVar19 < (uint)(&Header[0x2fc].BlockBitSize)[uVar7]) {
        uVar19 = uVar19 >> (0x10 - uVar7 & 0xff);
        uVar7 = (uint)(&Header[0x302].LastBlockInFile)[uVar19] + iVar26;
        uVar2 = *(ushort *)((int)&Header[0x336].BlockSize + uVar19 * 2);
        Inp->InAddr = iVar14 + (uVar7 >> 3);
        Inp->InBit = uVar7 & 7;
      }
      else {
        uVar11 = uVar7 + 1;
        if (uVar11 < 0xf) {
          uVar12 = uVar7;
          uVar20 = uVar11;
          if (uVar19 < (uint)(&Header[0x2fc].BlockStart)[uVar7]) goto LAB_080f2a20;
          uVar12 = uVar7 + 2;
          uVar20 = uVar12;
          if (uVar12 != 0xf) {
            if (uVar19 < (uint)(&Header[0x2fc].HeaderSize)[uVar7]) {
LAB_080f2a28:
              uVar12 = uVar11;
              uVar7 = 0x10 - uVar20;
              goto LAB_080f2390;
            }
            uVar11 = uVar7 + 3;
            uVar20 = uVar11;
            if (uVar11 != 0xf) {
              if (uVar19 < *(uint *)(&Header[0x2fc].LastBlockInFile + uVar7 * 4)) goto LAB_080f2a20;
              uVar12 = uVar7 + 4;
              uVar20 = uVar12;
              if (uVar12 != 0xf) {
                if (uVar19 < (uint)(&Header[0x2fd].BlockSize)[uVar7]) goto LAB_080f2a28;
                uVar16 = uVar7 + 5;
                uVar20 = uVar16;
                if (uVar16 != 0xf) {
                  if (uVar19 < (uint)(&Header[0x2fd].BlockBitSize)[uVar7]) {
LAB_080f2a88:
                    uVar7 = 0x10 - uVar20;
                    goto LAB_080f2390;
                  }
                  uVar11 = uVar7 + 6;
                  uVar20 = uVar11;
                  if (uVar11 != 0xf) {
                    if (uVar19 < (uint)(&Header[0x2fd].BlockStart)[uVar7]) {
LAB_080f2a7c:
                      uVar12 = uVar16;
                      uVar7 = 0x10 - uVar20;
                      goto LAB_080f2390;
                    }
                    uVar12 = uVar7 + 7;
                    uVar20 = uVar12;
                    if (uVar12 != 0xf) {
                      if (uVar19 < (uint)(&Header[0x2fd].HeaderSize)[uVar7]) goto LAB_080f2a28;
                      uVar11 = uVar7 + 8;
                      uVar20 = uVar11;
                      if (uVar11 != 0xf) {
                        if (uVar19 < *(uint *)(&Header[0x2fd].LastBlockInFile + uVar7 * 4))
                        goto LAB_080f2a20;
                        uVar12 = uVar7 + 9;
                        uVar20 = uVar12;
                        if (uVar12 != 0xf) {
                          if (uVar19 < (uint)(&Header[0x2fe].BlockSize)[uVar7]) goto LAB_080f2a28;
                          uVar16 = uVar7 + 10;
                          uVar20 = uVar16;
                          if (uVar16 != 0xf) {
                            if (uVar19 < (uint)(&Header[0x2fe].BlockBitSize)[uVar7])
                            goto LAB_080f2a88;
                            uVar12 = uVar7 + 0xb;
                            uVar20 = uVar12;
                            if (uVar12 != 0xf) {
                              if (uVar19 < (uint)(&Header[0x2fe].BlockStart)[uVar7])
                              goto LAB_080f2a7c;
                              uVar11 = uVar7 + 0xc;
                              uVar20 = uVar11;
                              if (uVar11 != 0xf) {
                                if (uVar19 < (uint)(&Header[0x2fe].HeaderSize)[uVar7]) {
LAB_080f2a20:
                                  uVar7 = 0x10 - uVar20;
                                  goto LAB_080f2390;
                                }
                                uVar12 = uVar7 + 0xd;
                                uVar20 = uVar12;
                                if (uVar12 != 0xf) {
                                  if (uVar19 < *(uint *)(&Header[0x2fe].LastBlockInFile + uVar7 * 4)
                                     ) goto LAB_080f2a28;
                                  uVar20 = uVar7 + 0xe;
                                  if (uVar20 != 0xf) {
                                    if ((uint)(&Header[0x2ff].BlockSize)[uVar7] <= uVar19) {
                                      if (uVar7 == 0) goto LAB_080f2a6c;
                                      if (uVar19 < (uint)Header[0x2ff].BlockSize) {
                                        uVar7 = 2;
                                        uVar12 = 0xd;
                                        uVar20 = 0xe;
                                      }
                                      else {
                                        uVar7 = 1;
                                        uVar12 = 0xe;
                                        uVar20 = 0xf;
                                      }
                                      goto LAB_080f2390;
                                    }
                                    goto LAB_080f2a20;
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
          uVar7 = 1;
          uVar12 = 0xe;
        }
        else {
LAB_080f2a6c:
          uVar7 = 1;
          uVar12 = 0xe;
          uVar20 = 0xf;
        }
LAB_080f2390:
        Inp->InAddr = iVar14 + (iVar26 + uVar20 >> 3);
        Inp->InBit = iVar26 + uVar20 & 7;
        uVar19 = (&Header[0x2ff].BlockStart)[uVar20] +
                 (uVar19 - (&Header[0x2fc].BlockBitSize)[uVar12] >> (uVar7 & 0xff));
        if ((uint)Header[0x2fc].BlockSize <= uVar19) {
          uVar19 = 0;
        }
        uVar2 = *(ushort *)((int)&Header[0x39c].BlockStart + uVar19 * 2);
      }
      if (uVar2 < 0x10) {
        Table[iVar25] = (byte)uVar2;
        iVar25 = iVar25 + 1;
LAB_080f2178:
        if (0x1ad < iVar25) goto LAB_080f2474;
        goto LAB_080f2184;
      }
      if (0x11 < uVar2) {
        if (uVar2 == 0x12) {
          uVar4 = BitInput::fgetbits(Inp);
          iVar14 = (uVar4 >> 0xd) + 3;
          BitInput::faddbits(Inp,3);
          iVar26 = extraout_r1_00;
        }
        else {
          uVar4 = BitInput::fgetbits(Inp);
          iVar14 = (uVar4 >> 9) + 0xb;
          BitInput::faddbits(Inp,7);
          iVar26 = extraout_r1;
        }
        if (iVar25 < 0x1ae) {
          pbVar8 = BitLength + iVar25 + 0x13;
          iVar29 = iVar25;
          do {
            iVar14 = iVar14 + -1;
            iVar25 = iVar29 + 1;
            pbVar8 = pbVar8 + 1;
            *pbVar8 = '\0';
            if (iVar25 < 0x1ae) {
              iVar26 = 1;
            }
            if (iVar25 != 0x1ad && iVar29 + -0x1ac < 0 == SBORROW4(iVar25,0x1ad)) {
              iVar26 = 0;
            }
            if (iVar14 < 1) {
              iVar26 = 0;
            }
            iVar29 = iVar25;
          } while (iVar26 != 0);
        }
        goto LAB_080f2178;
      }
      if (uVar2 == 0x10) {
        uVar4 = BitInput::fgetbits(Inp);
        iVar14 = (uVar4 >> 0xd) + 3;
        BitInput::faddbits(Inp,3);
      }
      else {
        uVar4 = BitInput::fgetbits(Inp);
        iVar14 = (uVar4 >> 9) + 0xb;
        BitInput::faddbits(Inp,7);
      }
    } while (iVar25 == 0);
    if (0x1ad < iVar25) goto LAB_080f2178;
    bVar1 = BitLength[iVar25 + 0x13];
    pbVar8 = BitLength + iVar25 + 0x13;
    do {
      iVar14 = iVar14 + -1;
      iVar25 = iVar25 + 1;
      pbVar8 = pbVar8 + 1;
      *pbVar8 = bVar1;
    } while (iVar25 < 0x1ae && 0 < iVar14);
  } while (iVar25 < 0x1ae);
LAB_080f2474:
  if ((Inp->ExternalBuffer == false) && (this->ReadTop < Inp->InAddr)) {
LAB_080f4138:
    bVar40 = false;
  }
  else {
    pbVar6 = BitLength + 0x13;
    Header->BlockSize = 0x132;
    pbVar32 = Table + 0x131;
    LengthCount[0] = 0;
    LengthCount[1] = 0;
    LengthCount[2] = 0;
    LengthCount[3] = 0;
    LengthCount[4] = 0;
    LengthCount[5] = 0;
    LengthCount[6] = 0;
    LengthCount[7] = 0;
    LengthCount[8] = 0;
    LengthCount[9] = 0;
    LengthCount[10] = 0;
    LengthCount[11] = 0;
    LengthCount[12] = 0;
    LengthCount[13] = 0;
    LengthCount[14] = 0;
    LengthCount[15] = 0;
    pbVar5 = pbVar6;
    do {
      pbVar5 = pbVar5 + 1;
      LengthCount[*pbVar5 & 0xf] = LengthCount[*pbVar5 & 0xf] + 1;
    } while (pbVar32 != pbVar5);
    LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
    memset(&Header[0xa0].BlockStart,0,0x264);
    I_2 = 0;
    Header[3].BlockStart = 0;
    Header[3].HeaderSize = 0;
    iVar25 = LengthCount[2] + LengthCount[1] * 2;
    Header[3].LastBlockInFile = (bool)(undefined)LengthCount[1];
    Header[3].TablePresent = (bool)LengthCount[1]._1_1_;
    *(undefined2 *)&Header[3].field_0x12 = LengthCount[1]._2_2_;
    iVar26 = LengthCount[3] + iVar25 * 2;
    iVar14 = LengthCount[3] + LengthCount[2] + LengthCount[1];
    Header->BlockBitSize = 0;
    Header->BlockStart = LengthCount[1] << 0xf;
    iVar31 = LengthCount[4] + iVar26 * 2;
    iVar29 = LengthCount[4] + iVar14;
    Header->HeaderSize = iVar25 * 0x4000;
    Header[4].BlockBitSize = iVar14;
    iVar33 = LengthCount[5] + iVar31 * 2;
    iVar14 = LengthCount[5] + iVar29;
    iVar25 = LengthCount[6] + iVar33 * 2;
    *(int *)&Header->LastBlockInFile = iVar26 * 0x2000;
    Header[4].BlockStart = iVar29;
    iVar26 = LengthCount[7] + iVar25 * 2;
    Header[4].HeaderSize = iVar14;
    iVar14 = LengthCount[6] + iVar14;
    iVar29 = LengthCount[7] + iVar14;
    Header[4].BlockSize = LengthCount[2] + LengthCount[1];
    Header[1].BlockBitSize = iVar33 * 0x800;
    *(int *)&Header[4].LastBlockInFile = iVar14;
    iVar14 = LengthCount[8] + iVar26 * 2;
    Header[1].BlockSize = iVar31 * 0x1000;
    iVar31 = LengthCount[9] + iVar14 * 2;
    Header[1].BlockStart = iVar25 * 0x400;
    iVar25 = LengthCount[10] + iVar31 * 2;
    Header[5].BlockSize = iVar29;
    iVar29 = LengthCount[8] + iVar29;
    Header[1].HeaderSize = iVar26 * 0x200;
    iVar26 = LengthCount[9] + iVar29;
    *(int *)&Header[1].LastBlockInFile = iVar14 * 0x100;
    iVar14 = LengthCount[10] + iVar26;
    Header[2].BlockSize = iVar31 * 0x80;
    Header[5].BlockStart = iVar26;
    Header[5].BlockBitSize = iVar29;
    Header[2].BlockBitSize = iVar25 * 0x40;
    Header[5].HeaderSize = iVar14;
    iVar25 = LengthCount[11] + iVar25 * 2;
    iVar14 = LengthCount[11] + iVar14;
    iVar29 = LengthCount[12] + iVar14;
    iVar26 = LengthCount[12] + iVar25 * 2;
    *(int *)&Header[5].LastBlockInFile = iVar14;
    iVar14 = LengthCount[13] + iVar26 * 2;
    iVar31 = LengthCount[13] + iVar29;
    Header[2].BlockStart = iVar25 * 0x20;
    iVar25 = LengthCount[14] + iVar14 * 2;
    Header[2].HeaderSize = iVar26 * 0x10;
    Header[6].BlockBitSize = iVar31;
    *(int *)&Header[2].LastBlockInFile = iVar14 * 8;
    Header[6].BlockSize = iVar29;
    Header[3].BlockSize = iVar25 * 4;
    Header[3].BlockBitSize = (LengthCount[15] + iVar25 * 2) * 2;
    Header[6].BlockStart = iVar31 + LengthCount[14];
    CopyDecodePos[0] = Header[3].BlockStart;
    CopyDecodePos[1] = Header[3].HeaderSize;
    CopyDecodePos[2]._0_1_ = Header[3].LastBlockInFile;
    CopyDecodePos[2]._1_1_ = Header[3].TablePresent;
    CopyDecodePos[2]._2_2_ = *(undefined2 *)&Header[3].field_0x12;
    CopyDecodePos[3] = Header[4].BlockSize;
    CopyDecodePos[4] = Header[4].BlockBitSize;
    CopyDecodePos[5] = Header[4].BlockStart;
    CopyDecodePos[6] = Header[4].HeaderSize;
    CopyDecodePos[7]._0_1_ = Header[4].LastBlockInFile;
    CopyDecodePos[7]._1_1_ = Header[4].TablePresent;
    CopyDecodePos[7]._2_2_ = *(undefined2 *)&Header[4].field_0x12;
    CopyDecodePos[8] = Header[5].BlockSize;
    CopyDecodePos[9] = Header[5].BlockBitSize;
    CopyDecodePos[10] = Header[5].BlockStart;
    CopyDecodePos[11] = Header[5].HeaderSize;
    CopyDecodePos[12]._0_1_ = Header[5].LastBlockInFile;
    CopyDecodePos[12]._1_1_ = Header[5].TablePresent;
    CopyDecodePos[12]._2_2_ = *(undefined2 *)&Header[5].field_0x12;
    CopyDecodePos[13] = Header[6].BlockSize;
    CopyDecodePos[14] = Header[6].BlockBitSize;
    CopyDecodePos[15] = Header[6].BlockStart;
    do {
      pbVar6 = pbVar6 + 1;
      uVar19 = *pbVar6 & 0xf;
      if ((*pbVar6 & 0xf) != 0) {
        uVar4 = CopyDecodePos[uVar19];
        CopyDecodePos[uVar19] = uVar4 + 1;
        *(short *)((int)&Header[0xa0].BlockStart + uVar4 * 2) = (short)I_2;
      }
      I_2 = I_2 + 1;
    } while (I_2 != 0x132);
    puVar21 = (undefined2 *)&Header[0x39].field_0x12;
    puVar27 = (undefined *)((int)&Header[6].HeaderSize + 3);
    iVar25 = 0;
    Header[6].HeaderSize = 10;
    uVar19 = 1;
    do {
      uVar7 = iVar25 * 0x40;
      if (uVar7 < (uint)(&Header->BlockBitSize)[uVar19] || 0xf < uVar19) {
        uVar11 = 0x10 - uVar19;
        uVar12 = uVar19 - 1;
        uVar20 = uVar19;
        uVar19 = uVar19 & 0xff;
      }
      else {
        uVar20 = uVar19 + 1;
        if (uVar7 < (uint)(&Header->BlockStart)[uVar19]) {
          uVar11 = 0x10 - uVar20;
          uVar12 = uVar19;
          uVar19 = uVar20 & 0xff;
        }
        else {
          uVar11 = 0;
          if (uVar20 == 0x10) {
LAB_080f2ae4:
            uVar12 = 0xf;
            uVar19 = uVar20;
          }
          else {
            uVar16 = uVar19 + 2;
            uVar12 = uVar20;
            if (uVar7 < (uint)(&Header->HeaderSize)[uVar19]) {
LAB_080f2940:
              uVar20 = uVar16;
              uVar11 = 0x10 - uVar20;
              uVar19 = uVar20 & 0xff;
            }
            else {
              uVar20 = uVar16;
              if (uVar16 == 0x10) {
LAB_080f2ad0:
                uVar12 = 0xf;
                uVar19 = uVar20;
              }
              else {
                uVar12 = uVar19 + 3;
                uVar20 = uVar12;
                if (*(uint *)(&Header->LastBlockInFile + uVar19 * 4) <= uVar7) {
                  if (uVar12 == 0x10) goto LAB_080f2ae4;
                  uVar20 = uVar19 + 4;
                  uVar16 = uVar20;
                  if (uVar7 < (uint)(&Header[1].BlockSize)[uVar19]) goto LAB_080f2940;
                  if (uVar20 == 0x10) goto LAB_080f2ad0;
                  uVar12 = uVar19 + 5;
                  uVar20 = uVar12;
                  if ((uint)(&Header[1].BlockBitSize)[uVar19] <= uVar7) {
                    if (uVar12 != 0x10) {
                      uVar20 = uVar19 + 6;
                      uVar16 = uVar20;
                      if (uVar7 < (uint)(&Header[1].BlockStart)[uVar19]) goto LAB_080f2940;
                      if (uVar20 == 0x10) {
LAB_080f2abc:
                        uVar11 = 0;
                        uVar12 = 0xf;
                        uVar19 = uVar20;
                        goto LAB_080f2894;
                      }
                      uVar12 = uVar19 + 7;
                      uVar20 = uVar12;
                      if (uVar7 < (uint)(&Header[1].HeaderSize)[uVar19]) goto LAB_080f2a94;
                      if (uVar12 != 0x10) {
                        uVar20 = uVar19 + 8;
                        uVar16 = uVar20;
                        if (uVar7 < *(uint *)(&Header[1].LastBlockInFile + uVar19 * 4))
                        goto LAB_080f2940;
                        if (uVar20 == 0x10) goto LAB_080f2abc;
                        uVar12 = uVar19 + 9;
                        uVar20 = uVar12;
                        if (uVar7 < (uint)(&Header[2].BlockSize)[uVar19]) goto LAB_080f2a94;
                        if (uVar12 != 0x10) {
                          uVar20 = uVar19 + 10;
                          uVar16 = uVar20;
                          if (uVar7 < (uint)(&Header[2].BlockBitSize)[uVar19]) goto LAB_080f2940;
                          if (uVar20 == 0x10) goto LAB_080f2abc;
                          uVar12 = uVar19 + 0xb;
                          uVar20 = uVar12;
                          if (uVar7 < (uint)(&Header[2].BlockStart)[uVar19]) goto LAB_080f2a94;
                          if (uVar12 != 0x10) {
                            uVar20 = uVar19 + 0xc;
                            uVar16 = uVar20;
                            if (uVar7 < (uint)(&Header[2].HeaderSize)[uVar19]) goto LAB_080f2940;
                            if (uVar20 == 0x10) goto LAB_080f2abc;
                            uVar12 = uVar19 + 0xd;
                            uVar20 = uVar12;
                            if (uVar7 < *(uint *)(&Header[2].LastBlockInFile + uVar19 * 4))
                            goto LAB_080f2a94;
                            if (uVar12 != 0x10) {
                              uVar20 = uVar19 + 0xe;
                              if (uVar7 < (uint)(&Header[3].BlockSize)[uVar19]) {
                                uVar11 = 0x10 - uVar20;
                                uVar19 = uVar20 & 0xff;
                              }
                              else {
                                uVar20 = 0x10;
                                uVar11 = 0;
                                uVar12 = 0xf;
                                uVar19 = 0x10;
                              }
                              goto LAB_080f2894;
                            }
                          }
                        }
                      }
                    }
                    uVar11 = 0;
                    uVar12 = 0xf;
                    uVar19 = uVar20;
                    goto LAB_080f2894;
                  }
                }
LAB_080f2a94:
                uVar12 = uVar16;
                uVar11 = 0x10 - uVar20;
                uVar19 = uVar20 & 0xff;
              }
            }
          }
        }
      }
LAB_080f2894:
      puVar27 = puVar27 + 1;
      *puVar27 = (char)uVar19;
      iVar25 = iVar25 + 1;
      uVar19 = (&Header[3].BlockStart)[uVar20] +
               (uVar7 - (&Header->BlockBitSize)[uVar12] >> (uVar11 & 0xff));
      if (uVar19 < 0x132) {
        uVar10 = *(undefined2 *)((int)&Header[0xa0].BlockStart + uVar19 * 2);
      }
      else {
        uVar10 = 0;
      }
      puVar21 = puVar21 + 1;
      *puVar21 = uVar10;
      uVar19 = uVar20;
    } while (iVar25 != 0x400);
    Header[0xbf].BlockSize = 0x40;
    LengthCount[0] = 0;
    LengthCount[1] = 0;
    LengthCount[2] = 0;
    LengthCount[3] = 0;
    LengthCount[4] = 0;
    LengthCount[5] = 0;
    LengthCount[6] = 0;
    LengthCount[7] = 0;
    LengthCount[8] = 0;
    LengthCount[9] = 0;
    LengthCount[10] = 0;
    LengthCount[11] = 0;
    LengthCount[12] = 0;
    LengthCount[13] = 0;
    LengthCount[14] = 0;
    LengthCount[15] = 0;
    pbVar5 = pbVar32;
    do {
      pbVar5 = pbVar5 + 1;
      LengthCount[*pbVar5 & 0xf] = LengthCount[*pbVar5 & 0xf] + 1;
    } while (Table + 0x171 != pbVar5);
    LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
    memset(&Header[0x15f].BlockStart,0,0x80);
    I_3 = 0;
    Header[0xbf].BlockBitSize = 0;
    Header[0xc2].BlockStart = 0;
    Header[0xc2].HeaderSize = 0;
    iVar25 = LengthCount[2] + LengthCount[1] * 2;
    Header[0xc2].LastBlockInFile = (bool)(undefined)LengthCount[1];
    Header[0xc2].TablePresent = (bool)LengthCount[1]._1_1_;
    *(undefined2 *)&Header[0xc2].field_0x12 = LengthCount[1]._2_2_;
    iVar26 = LengthCount[3] + iVar25 * 2;
    iVar14 = LengthCount[3] + LengthCount[2] + LengthCount[1];
    Header[0xbf].BlockStart = LengthCount[1] << 0xf;
    iVar31 = LengthCount[4] + iVar26 * 2;
    iVar29 = LengthCount[4] + iVar14;
    Header[0xbf].HeaderSize = iVar25 * 0x4000;
    Header[0xc3].BlockBitSize = iVar14;
    iVar33 = LengthCount[5] + iVar31 * 2;
    iVar14 = LengthCount[5] + iVar29;
    iVar25 = LengthCount[6] + iVar33 * 2;
    *(int *)&Header[0xbf].LastBlockInFile = iVar26 * 0x2000;
    Header[0xc3].BlockStart = iVar29;
    iVar26 = LengthCount[7] + iVar25 * 2;
    Header[0xc3].HeaderSize = iVar14;
    iVar14 = LengthCount[6] + iVar14;
    iVar29 = LengthCount[7] + iVar14;
    Header[0xc3].BlockSize = LengthCount[2] + LengthCount[1];
    Header[0xc0].BlockBitSize = iVar33 * 0x800;
    *(int *)&Header[0xc3].LastBlockInFile = iVar14;
    iVar14 = LengthCount[8] + iVar26 * 2;
    Header[0xc0].BlockSize = iVar31 * 0x1000;
    iVar31 = LengthCount[9] + iVar14 * 2;
    Header[0xc0].BlockStart = iVar25 * 0x400;
    iVar25 = LengthCount[10] + iVar31 * 2;
    Header[0xc4].BlockSize = iVar29;
    iVar29 = LengthCount[8] + iVar29;
    Header[0xc0].HeaderSize = iVar26 * 0x200;
    iVar26 = LengthCount[9] + iVar29;
    *(int *)&Header[0xc0].LastBlockInFile = iVar14 * 0x100;
    iVar14 = LengthCount[10] + iVar26;
    Header[0xc1].BlockSize = iVar31 * 0x80;
    Header[0xc4].BlockStart = iVar26;
    Header[0xc4].BlockBitSize = iVar29;
    Header[0xc1].BlockBitSize = iVar25 * 0x40;
    Header[0xc4].HeaderSize = iVar14;
    iVar25 = LengthCount[11] + iVar25 * 2;
    iVar14 = LengthCount[11] + iVar14;
    iVar29 = LengthCount[12] + iVar14;
    iVar26 = LengthCount[12] + iVar25 * 2;
    *(int *)&Header[0xc4].LastBlockInFile = iVar14;
    iVar14 = LengthCount[13] + iVar26 * 2;
    iVar31 = LengthCount[13] + iVar29;
    Header[0xc1].BlockStart = iVar25 * 0x20;
    iVar25 = LengthCount[14] + iVar14 * 2;
    Header[0xc1].HeaderSize = iVar26 * 0x10;
    *(int *)&Header[0xc1].LastBlockInFile = iVar14 * 8;
    Header[0xc2].BlockSize = iVar25 * 4;
    Header[0xc2].BlockBitSize = (LengthCount[15] + iVar25 * 2) * 2;
    Header[0xc5].BlockSize = iVar29;
    Header[0xc5].BlockBitSize = iVar31;
    Header[0xc5].BlockStart = iVar31 + LengthCount[14];
    CopyDecodePos[0] = Header[0xc2].BlockStart;
    CopyDecodePos[1] = Header[0xc2].HeaderSize;
    CopyDecodePos[2]._0_1_ = Header[0xc2].LastBlockInFile;
    CopyDecodePos[2]._1_1_ = Header[0xc2].TablePresent;
    CopyDecodePos[2]._2_2_ = *(undefined2 *)&Header[0xc2].field_0x12;
    CopyDecodePos[3] = Header[0xc3].BlockSize;
    CopyDecodePos[4] = Header[0xc3].BlockBitSize;
    CopyDecodePos[5] = Header[0xc3].BlockStart;
    CopyDecodePos[6] = Header[0xc3].HeaderSize;
    CopyDecodePos[7]._0_1_ = Header[0xc3].LastBlockInFile;
    CopyDecodePos[7]._1_1_ = Header[0xc3].TablePresent;
    CopyDecodePos[7]._2_2_ = *(undefined2 *)&Header[0xc3].field_0x12;
    CopyDecodePos[8] = Header[0xc4].BlockSize;
    CopyDecodePos[9] = Header[0xc4].BlockBitSize;
    CopyDecodePos[10] = Header[0xc4].BlockStart;
    CopyDecodePos[11] = Header[0xc4].HeaderSize;
    CopyDecodePos[12]._0_1_ = Header[0xc4].LastBlockInFile;
    CopyDecodePos[12]._1_1_ = Header[0xc4].TablePresent;
    CopyDecodePos[12]._2_2_ = *(undefined2 *)&Header[0xc4].field_0x12;
    CopyDecodePos[13] = Header[0xc5].BlockSize;
    CopyDecodePos[14] = Header[0xc5].BlockBitSize;
    CopyDecodePos[15] = Header[0xc5].BlockStart;
    do {
      pbVar32 = pbVar32 + 1;
      uVar19 = *pbVar32 & 0xf;
      if ((*pbVar32 & 0xf) != 0) {
        uVar4 = CopyDecodePos[uVar19];
        CopyDecodePos[uVar19] = uVar4 + 1;
        *(short *)((int)&Header[0x15f].BlockStart + uVar4 * 2) = (short)I_3;
      }
      I_3 = I_3 + 1;
    } while (I_3 != 0x40);
    puVar21 = (undefined2 *)&Header[0xf8].field_0x12;
    puVar27 = (undefined *)((int)&Header[0xc5].HeaderSize + 3);
    Header[0xc5].HeaderSize = 7;
    iVar25 = 0;
    uVar19 = 1;
    do {
      uVar7 = iVar25 * 0x200;
      if (uVar7 < (uint)(&Header[0xbf].BlockBitSize)[uVar19] || 0xf < uVar19) {
        uVar11 = 0x10 - uVar19;
        uVar12 = uVar19 - 1;
        uVar20 = uVar19;
        uVar19 = uVar19 & 0xff;
      }
      else {
        uVar20 = uVar19 + 1;
        if (uVar7 < (uint)(&Header[0xbf].BlockStart)[uVar19]) {
          uVar11 = 0x10 - uVar20;
          uVar12 = uVar19;
          uVar19 = uVar20 & 0xff;
        }
        else {
          uVar11 = 0;
          if (uVar20 == 0x10) {
LAB_080f3054:
            uVar12 = 0xf;
            uVar19 = uVar20;
          }
          else {
            uVar16 = uVar19 + 2;
            uVar12 = uVar20;
            if (uVar7 < (uint)(&Header[0xbf].HeaderSize)[uVar19]) {
LAB_080f2ff0:
              uVar20 = uVar16;
              uVar11 = 0x10 - uVar20;
              uVar19 = uVar20 & 0xff;
            }
            else {
              uVar20 = uVar16;
              if (uVar16 == 0x10) {
LAB_080f3040:
                uVar12 = 0xf;
                uVar19 = uVar20;
              }
              else {
                uVar12 = uVar19 + 3;
                uVar20 = uVar12;
                if (*(uint *)(&Header[0xbf].LastBlockInFile + uVar19 * 4) <= uVar7) {
                  if (uVar12 == 0x10) goto LAB_080f3054;
                  uVar20 = uVar19 + 4;
                  uVar16 = uVar20;
                  if (uVar7 < (uint)(&Header[0xc0].BlockSize)[uVar19]) goto LAB_080f2ff0;
                  if (uVar20 == 0x10) goto LAB_080f3040;
                  uVar12 = uVar19 + 5;
                  uVar20 = uVar12;
                  if ((uint)(&Header[0xc0].BlockBitSize)[uVar19] <= uVar7) {
                    if (uVar12 != 0x10) {
                      uVar20 = uVar19 + 6;
                      uVar16 = uVar20;
                      if (uVar7 < (uint)(&Header[0xc0].BlockStart)[uVar19]) goto LAB_080f2ff0;
                      if (uVar20 == 0x10) {
LAB_080f302c:
                        uVar11 = 0;
                        uVar12 = 0xf;
                        uVar19 = uVar20;
                        goto LAB_080f2f44;
                      }
                      uVar12 = uVar19 + 7;
                      uVar20 = uVar12;
                      if (uVar7 < (uint)(&Header[0xc0].HeaderSize)[uVar19]) goto LAB_080f3004;
                      if (uVar12 != 0x10) {
                        uVar20 = uVar19 + 8;
                        uVar16 = uVar20;
                        if (uVar7 < *(uint *)(&Header[0xc0].LastBlockInFile + uVar19 * 4))
                        goto LAB_080f2ff0;
                        if (uVar20 == 0x10) goto LAB_080f302c;
                        uVar12 = uVar19 + 9;
                        uVar20 = uVar12;
                        if (uVar7 < (uint)(&Header[0xc1].BlockSize)[uVar19]) goto LAB_080f3004;
                        if (uVar12 != 0x10) {
                          uVar20 = uVar19 + 10;
                          uVar16 = uVar20;
                          if (uVar7 < (uint)(&Header[0xc1].BlockBitSize)[uVar19]) goto LAB_080f2ff0;
                          if (uVar20 == 0x10) goto LAB_080f302c;
                          uVar12 = uVar19 + 0xb;
                          uVar20 = uVar12;
                          if (uVar7 < (uint)(&Header[0xc1].BlockStart)[uVar19]) goto LAB_080f3004;
                          if (uVar12 != 0x10) {
                            uVar20 = uVar19 + 0xc;
                            uVar16 = uVar20;
                            if (uVar7 < (uint)(&Header[0xc1].HeaderSize)[uVar19]) goto LAB_080f2ff0;
                            if (uVar20 == 0x10) goto LAB_080f302c;
                            uVar12 = uVar19 + 0xd;
                            uVar20 = uVar12;
                            if (uVar7 < *(uint *)(&Header[0xc1].LastBlockInFile + uVar19 * 4))
                            goto LAB_080f3004;
                            if (uVar12 != 0x10) {
                              uVar20 = uVar19 + 0xe;
                              if (uVar7 < (uint)(&Header[0xc2].BlockSize)[uVar19]) {
                                uVar11 = 0x10 - uVar20;
                                uVar19 = uVar20 & 0xff;
                              }
                              else {
                                uVar20 = 0x10;
                                uVar11 = 0;
                                uVar12 = 0xf;
                                uVar19 = 0x10;
                              }
                              goto LAB_080f2f44;
                            }
                          }
                        }
                      }
                    }
                    uVar11 = 0;
                    uVar12 = 0xf;
                    uVar19 = uVar20;
                    goto LAB_080f2f44;
                  }
                }
LAB_080f3004:
                uVar12 = uVar16;
                uVar11 = 0x10 - uVar20;
                uVar19 = uVar20 & 0xff;
              }
            }
          }
        }
      }
LAB_080f2f44:
      puVar27 = puVar27 + 1;
      *puVar27 = (char)uVar19;
      iVar25 = iVar25 + 1;
      uVar19 = (&Header[0xc2].BlockStart)[uVar20] +
               (uVar7 - (&Header[0xbf].BlockBitSize)[uVar12] >> (uVar11 & 0xff));
      if (uVar19 < 0x40) {
        uVar10 = *(undefined2 *)((int)&Header[0x15f].BlockStart + uVar19 * 2);
      }
      else {
        uVar10 = 0;
      }
      puVar21 = puVar21 + 1;
      *puVar21 = uVar10;
      uVar19 = uVar20;
    } while (iVar25 != 0x80);
    uVar17 = Table[371] & 0xf;
    Header[0x17e].BlockSize = 0x10;
    uVar16 = Table[372] & 0xf;
    LengthCount[0] = 0;
    LengthCount[1] = 0;
    LengthCount[2] = 0;
    LengthCount[3] = 0;
    uVar38 = Table[373] & 0xf;
    uVar20 = Table[370] & 0xf;
    LengthCount[4] = 0;
    LengthCount[5] = 0;
    LengthCount[6] = 0;
    LengthCount[7] = 0;
    uVar22 = Table[374] & 0xf;
    LengthCount[8] = 0;
    LengthCount[9] = 0;
    LengthCount[10] = 0;
    LengthCount[11] = 0;
    LengthCount[12] = 0;
    LengthCount[13] = 0;
    LengthCount[14] = 0;
    LengthCount[15] = 0;
    uVar18 = Table[375] & 0xf;
    LengthCount[uVar20] = LengthCount[uVar20] + 1;
    uVar23 = Table[376] & 0xf;
    LengthCount[uVar17] = LengthCount[uVar17] + 1;
    uVar19 = Table[377] & 0xf;
    LengthCount[uVar16] = LengthCount[uVar16] + 1;
    LengthCount[uVar38] = LengthCount[uVar38] + 1;
    LengthCount[uVar22] = LengthCount[uVar22] + 1;
    LengthCount[uVar18] = LengthCount[uVar18] + 1;
    LengthCount[uVar23] = LengthCount[uVar23] + 1;
    LengthCount[uVar19] = LengthCount[uVar19] + 1;
    uVar30 = Table[378] & 0xf;
    uVar39 = Table[379] & 0xf;
    uVar15 = Table[381] & 0xf;
    uVar7 = Table[380] & 0xf;
    Header[0x21e].BlockStart = 0;
    Header[0x21e].HeaderSize = 0;
    *(undefined8 *)&Header[0x21e].LastBlockInFile = 0;
    Header[0x21f].BlockBitSize = 0;
    Header[0x21f].BlockStart = 0;
    Header[0x21f].HeaderSize = 0;
    Header[0x21f].LastBlockInFile = false;
    Header[0x21f].TablePresent = false;
    *(undefined2 *)&Header[0x21f].field_0x12 = 0;
    uVar4 = LengthCount[uVar30];
    uVar11 = Table[382] & 0xf;
    uVar24 = Table[383] & 0xf;
    Header[0x17e].BlockBitSize = 0;
    Header[0x181].BlockStart = 0;
    uVar28 = Table[385] & 0xf;
    LengthCount[uVar30] = uVar4 + 1;
    uVar4 = LengthCount[uVar39];
    Header[0x181].HeaderSize = 0;
    LengthCount[uVar39] = uVar4 + 1;
    uVar12 = Table[384] & 0xf;
    LengthCount[uVar7] = LengthCount[uVar7] + 1;
    LengthCount[uVar15] = LengthCount[uVar15] + 1;
    LengthCount[uVar11] = LengthCount[uVar11] + 1;
    LengthCount[uVar24] = LengthCount[uVar24] + 1;
    LengthCount[uVar12] = LengthCount[uVar12] + 1;
    LengthCount[uVar28] = LengthCount[uVar28] + 1;
    uVar4 = LengthCount[1];
    LengthCount._0_8_ = (ulonglong)LengthCount[1] << 0x20;
    Header[0x17e].BlockStart = uVar4 << 0xf;
    iVar26 = LengthCount[2] + uVar4 * 2;
    LengthCount[1]._0_1_ = (undefined)uVar4;
    LengthCount[1]._1_1_ = SUB41(uVar4,1);
    LengthCount[1]._2_2_ = SUB42(uVar4,2);
    Header[0x181].LastBlockInFile = (bool)(undefined)LengthCount[1];
    Header[0x181].TablePresent = (bool)LengthCount[1]._1_1_;
    *(undefined2 *)&Header[0x181].field_0x12 = LengthCount[1]._2_2_;
    iVar14 = uVar4 + LengthCount[2] + LengthCount[3];
    iVar25 = LengthCount[3] + iVar26 * 2;
    iVar33 = iVar14 + LengthCount[4];
    Header[0x182].BlockSize = uVar4 + LengthCount[2];
    iVar31 = LengthCount[4] + iVar25 * 2;
    iVar29 = LengthCount[5] + iVar31 * 2;
    Header[0x182].BlockStart = iVar33;
    iVar33 = iVar33 + LengthCount[5];
    Header[0x17e].HeaderSize = iVar26 * 0x4000;
    Header[0x182].BlockBitSize = iVar14;
    *(int *)&Header[0x17e].LastBlockInFile = iVar25 * 0x2000;
    Header[0x182].HeaderSize = iVar33;
    iVar26 = LengthCount[6] + iVar29 * 2;
    iVar33 = iVar33 + LengthCount[6];
    Header[0x17f].BlockSize = iVar31 * 0x1000;
    iVar14 = LengthCount[7] + iVar26 * 2;
    iVar31 = iVar33 + LengthCount[7];
    *(int *)&Header[0x182].LastBlockInFile = iVar33;
    Header[0x17f].BlockBitSize = iVar29 * 0x800;
    Header[0x183].BlockSize = iVar31;
    iVar25 = LengthCount[8] + iVar14 * 2;
    iVar31 = iVar31 + LengthCount[8];
    Header[0x17f].BlockStart = iVar26 * 0x400;
    iVar29 = LengthCount[9] + iVar25 * 2;
    Header[0x183].BlockBitSize = iVar31;
    iVar31 = iVar31 + LengthCount[9];
    Header[0x17f].HeaderSize = iVar14 * 0x200;
    Header[0x183].BlockStart = iVar31;
    iVar26 = LengthCount[10] + iVar29 * 2;
    iVar31 = iVar31 + LengthCount[10];
    *(int *)&Header[0x17f].LastBlockInFile = iVar25 * 0x100;
    iVar14 = LengthCount[11] + iVar26 * 2;
    iVar25 = iVar31 + LengthCount[11];
    Header[0x180].BlockSize = iVar29 * 0x80;
    Header[0x183].HeaderSize = iVar31;
    iVar29 = LengthCount[12] + iVar14 * 2;
    *(int *)&Header[0x183].LastBlockInFile = iVar25;
    iVar25 = iVar25 + LengthCount[12];
    Header[0x180].BlockBitSize = iVar26 * 0x40;
    Header[0x180].BlockStart = iVar14 * 0x20;
    Header[0x180].HeaderSize = iVar29 * 0x10;
    iVar26 = LengthCount[13] + iVar29 * 2;
    Header[0x184].BlockSize = iVar25;
    iVar25 = LengthCount[13] + iVar25;
    Header[0x184].BlockBitSize = iVar25;
    iVar14 = LengthCount[14] + iVar26 * 2;
    *(int *)&Header[0x180].LastBlockInFile = iVar26 * 8;
    Header[0x181].BlockSize = iVar14 * 4;
    Header[0x181].BlockBitSize = (LengthCount[15] + iVar14 * 2) * 2;
    Header[0x184].BlockStart = iVar25 + LengthCount[14];
    CopyDecodePos[0] = Header[0x181].BlockStart;
    CopyDecodePos[1] = Header[0x181].HeaderSize;
    CopyDecodePos[2]._0_1_ = Header[0x181].LastBlockInFile;
    CopyDecodePos[2]._1_1_ = Header[0x181].TablePresent;
    CopyDecodePos[2]._2_2_ = *(undefined2 *)&Header[0x181].field_0x12;
    CopyDecodePos[3] = Header[0x182].BlockSize;
    CopyDecodePos[4] = Header[0x182].BlockBitSize;
    CopyDecodePos[5] = Header[0x182].BlockStart;
    CopyDecodePos[6] = Header[0x182].HeaderSize;
    CopyDecodePos[7]._0_1_ = Header[0x182].LastBlockInFile;
    CopyDecodePos[7]._1_1_ = Header[0x182].TablePresent;
    CopyDecodePos[7]._2_2_ = *(undefined2 *)&Header[0x182].field_0x12;
    CopyDecodePos[8] = Header[0x183].BlockSize;
    CopyDecodePos[9] = Header[0x183].BlockBitSize;
    CopyDecodePos[10] = Header[0x183].BlockStart;
    CopyDecodePos[11] = Header[0x183].HeaderSize;
    CopyDecodePos[12]._0_1_ = Header[0x183].LastBlockInFile;
    CopyDecodePos[12]._1_1_ = Header[0x183].TablePresent;
    CopyDecodePos[12]._2_2_ = *(undefined2 *)&Header[0x183].field_0x12;
    CopyDecodePos[13] = Header[0x184].BlockSize;
    CopyDecodePos[14] = Header[0x184].BlockBitSize;
    CopyDecodePos[15] = Header[0x184].BlockStart;
    if ((Table[370] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar20];
      CopyDecodePos[uVar20] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 0;
    }
    if ((Table[371] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar17];
      CopyDecodePos[uVar17] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 1;
    }
    if ((Table[372] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar16];
      CopyDecodePos[uVar16] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 2;
    }
    if ((Table[373] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar38];
      CopyDecodePos[uVar38] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 3;
    }
    if ((Table[374] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar22];
      CopyDecodePos[uVar22] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 4;
    }
    if ((Table[375] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar18];
      CopyDecodePos[uVar18] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 5;
    }
    if ((Table[376] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar23];
      CopyDecodePos[uVar23] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 6;
    }
    if ((Table[377] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar19];
      CopyDecodePos[uVar19] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 7;
    }
    if ((Table[378] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar30];
      CopyDecodePos[uVar30] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 8;
    }
    if ((Table[379] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar39];
      CopyDecodePos[uVar39] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 9;
    }
    if ((Table[380] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar7];
      CopyDecodePos[uVar7] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 10;
    }
    if ((Table[381] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar15];
      CopyDecodePos[uVar15] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 0xb;
    }
    if ((Table[382] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar11];
      CopyDecodePos[uVar11] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 0xc;
    }
    if ((Table[383] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar24];
      CopyDecodePos[uVar24] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 0xd;
    }
    if ((Table[384] & 0xf) != 0) {
      uVar4 = CopyDecodePos[uVar12];
      CopyDecodePos[uVar12] = uVar4 + 1;
      *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar4 * 2) = 0xe;
    }
    if ((Table[385] & 0xf) != 0) {
      *(undefined2 *)((int)&Header[0x21e].BlockStart + CopyDecodePos[uVar28] * 2) = 0xf;
    }
    puVar21 = (undefined2 *)&Header[0x1b7].field_0x12;
    puVar27 = (undefined *)((int)&Header[0x184].HeaderSize + 3);
    Header[0x184].HeaderSize = 7;
    iVar25 = 0;
    uVar19 = 1;
    do {
      uVar7 = iVar25 * 0x200;
      if (uVar7 < (uint)(&Header[0x17e].BlockBitSize)[uVar19] || 0xf < uVar19) {
        uVar11 = 0x10 - uVar19;
        uVar12 = uVar19 - 1;
        uVar20 = uVar19;
        uVar19 = uVar19 & 0xff;
      }
      else {
        uVar20 = uVar19 + 1;
        if (uVar7 < (uint)(&Header[0x17e].BlockStart)[uVar19]) {
          uVar11 = 0x10 - uVar20;
          uVar12 = uVar19;
          uVar19 = uVar20 & 0xff;
        }
        else {
          uVar11 = 0;
          if (uVar20 == 0x10) {
LAB_080f3b78:
            uVar12 = 0xf;
            uVar19 = uVar20;
          }
          else {
            uVar16 = uVar19 + 2;
            uVar12 = uVar20;
            if (uVar7 < (uint)(&Header[0x17e].HeaderSize)[uVar19]) {
LAB_080f3b14:
              uVar20 = uVar16;
              uVar11 = 0x10 - uVar20;
              uVar19 = uVar20 & 0xff;
            }
            else {
              uVar20 = uVar16;
              if (uVar16 == 0x10) {
LAB_080f3b64:
                uVar12 = 0xf;
                uVar19 = uVar20;
              }
              else {
                uVar12 = uVar19 + 3;
                uVar20 = uVar12;
                if (*(uint *)(&Header[0x17e].LastBlockInFile + uVar19 * 4) <= uVar7) {
                  if (uVar12 == 0x10) goto LAB_080f3b78;
                  uVar20 = uVar19 + 4;
                  uVar16 = uVar20;
                  if (uVar7 < (uint)(&Header[0x17f].BlockSize)[uVar19]) goto LAB_080f3b14;
                  if (uVar20 == 0x10) goto LAB_080f3b64;
                  uVar12 = uVar19 + 5;
                  uVar20 = uVar12;
                  if ((uint)(&Header[0x17f].BlockBitSize)[uVar19] <= uVar7) {
                    if (uVar12 != 0x10) {
                      uVar20 = uVar19 + 6;
                      uVar16 = uVar20;
                      if (uVar7 < (uint)(&Header[0x17f].BlockStart)[uVar19]) goto LAB_080f3b14;
                      if (uVar20 == 0x10) {
LAB_080f3b50:
                        uVar11 = 0;
                        uVar12 = 0xf;
                        uVar19 = uVar20;
                        goto LAB_080f3a64;
                      }
                      uVar12 = uVar19 + 7;
                      uVar20 = uVar12;
                      if (uVar7 < (uint)(&Header[0x17f].HeaderSize)[uVar19]) goto LAB_080f3b28;
                      if (uVar12 != 0x10) {
                        uVar20 = uVar19 + 8;
                        uVar16 = uVar20;
                        if (uVar7 < *(uint *)(&Header[0x17f].LastBlockInFile + uVar19 * 4))
                        goto LAB_080f3b14;
                        if (uVar20 == 0x10) goto LAB_080f3b50;
                        uVar12 = uVar19 + 9;
                        uVar20 = uVar12;
                        if (uVar7 < (uint)(&Header[0x180].BlockSize)[uVar19]) goto LAB_080f3b28;
                        if (uVar12 != 0x10) {
                          uVar20 = uVar19 + 10;
                          uVar16 = uVar20;
                          if (uVar7 < (uint)(&Header[0x180].BlockBitSize)[uVar19])
                          goto LAB_080f3b14;
                          if (uVar20 == 0x10) goto LAB_080f3b50;
                          uVar12 = uVar19 + 0xb;
                          uVar20 = uVar12;
                          if (uVar7 < (uint)(&Header[0x180].BlockStart)[uVar19]) goto LAB_080f3b28;
                          if (uVar12 != 0x10) {
                            uVar20 = uVar19 + 0xc;
                            uVar16 = uVar20;
                            if (uVar7 < (uint)(&Header[0x180].HeaderSize)[uVar19])
                            goto LAB_080f3b14;
                            if (uVar20 == 0x10) goto LAB_080f3b50;
                            uVar12 = uVar19 + 0xd;
                            uVar20 = uVar12;
                            if (uVar7 < *(uint *)(&Header[0x180].LastBlockInFile + uVar19 * 4))
                            goto LAB_080f3b28;
                            if (uVar12 != 0x10) {
                              uVar20 = uVar19 + 0xe;
                              if (uVar7 < (uint)(&Header[0x181].BlockSize)[uVar19]) {
                                uVar11 = 0x10 - uVar20;
                                uVar19 = uVar20 & 0xff;
                              }
                              else {
                                uVar20 = 0x10;
                                uVar11 = 0;
                                uVar12 = 0xf;
                                uVar19 = 0x10;
                              }
                              goto LAB_080f3a64;
                            }
                          }
                        }
                      }
                    }
                    uVar11 = 0;
                    uVar12 = 0xf;
                    uVar19 = uVar20;
                    goto LAB_080f3a64;
                  }
                }
LAB_080f3b28:
                uVar12 = uVar16;
                uVar11 = 0x10 - uVar20;
                uVar19 = uVar20 & 0xff;
              }
            }
          }
        }
      }
LAB_080f3a64:
      puVar27 = puVar27 + 1;
      *puVar27 = (char)uVar19;
      iVar25 = iVar25 + 1;
      uVar19 = (&Header[0x181].BlockStart)[uVar20] +
               (uVar7 - (&Header[0x17e].BlockBitSize)[uVar12] >> (uVar11 & 0xff));
      if (uVar19 < 0x10) {
        uVar10 = *(undefined2 *)((int)&Header[0x21e].BlockStart + uVar19 * 2);
      }
      else {
        uVar10 = 0;
      }
      puVar21 = puVar21 + 1;
      *puVar21 = uVar10;
      uVar19 = uVar20;
    } while (iVar25 != 0x80);
    pbVar6 = Table + 0x181;
    Header[0x23d].BlockSize = 0x2c;
    LengthCount[0] = 0;
    LengthCount[1] = 0;
    LengthCount[2] = 0;
    LengthCount[3] = 0;
    LengthCount[4] = 0;
    LengthCount[5] = 0;
    LengthCount[6] = 0;
    LengthCount[7] = 0;
    LengthCount[8] = 0;
    LengthCount[9] = 0;
    LengthCount[10] = 0;
    LengthCount[11] = 0;
    LengthCount[12] = 0;
    LengthCount[13] = 0;
    LengthCount[14] = 0;
    LengthCount[15] = 0;
    pbVar5 = pbVar6;
    do {
      pbVar5 = pbVar5 + 1;
      LengthCount[*pbVar5 & 0xf] = LengthCount[*pbVar5 & 0xf] + 1;
    } while (Table + 0x1ad != pbVar5);
    LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
    memset(&Header[0x2dd].BlockStart,0,0x58);
    uVar3 = LengthCount._0_8_;
    I_4 = 0;
    Header[0x23d].BlockBitSize = 0;
    Header[0x240].BlockStart = 0;
    Header[0x240].HeaderSize = 0;
    iVar25 = LengthCount[2] + LengthCount[1] * 2;
    Header[0x240].LastBlockInFile = (bool)(undefined)LengthCount[1];
    Header[0x240].TablePresent = (bool)LengthCount[1]._1_1_;
    *(undefined2 *)&Header[0x240].field_0x12 = LengthCount[1]._2_2_;
    iVar26 = LengthCount[3] + iVar25 * 2;
    iVar14 = LengthCount[1] + LengthCount[2] + LengthCount[3];
    Header[0x23d].BlockStart = LengthCount[1] << 0xf;
    iVar29 = LengthCount[4] + iVar26 * 2;
    iVar31 = iVar14 + LengthCount[4];
    Header[0x23d].HeaderSize = iVar25 * 0x4000;
    Header[0x241].BlockBitSize = iVar14;
    iVar34 = LengthCount[5] + iVar29 * 2;
    iVar14 = iVar31 + LengthCount[5];
    iVar25 = LengthCount[6] + iVar34 * 2;
    *(int *)&Header[0x23d].LastBlockInFile = iVar26 * 0x2000;
    Header[0x241].HeaderSize = iVar14;
    iVar14 = iVar14 + LengthCount[6];
    Header[0x241].BlockStart = iVar31;
    iVar33 = LengthCount[7] + iVar25 * 2;
    iVar31 = iVar14 + LengthCount[7];
    *(int *)&Header[0x241].LastBlockInFile = iVar14;
    Header[0x241].BlockSize = LengthCount[1] + LengthCount[2];
    Header[0x242].BlockSize = iVar31;
    iVar31 = iVar31 + LengthCount[8];
    Header[0x23e].BlockSize = iVar29 * 0x1000;
    iVar14 = LengthCount[8] + iVar33 * 2;
    Header[0x23e].BlockBitSize = iVar34 * 0x800;
    Header[0x23e].BlockStart = iVar25 * 0x400;
    iVar26 = LengthCount[9] + iVar14 * 2;
    Header[0x23e].HeaderSize = iVar33 * 0x200;
    iVar25 = LengthCount[10] + iVar26 * 2;
    *(int *)&Header[0x23e].LastBlockInFile = iVar14 * 0x100;
    iVar14 = iVar31 + LengthCount[9];
    Header[0x242].BlockBitSize = iVar31;
    Header[0x242].BlockStart = iVar14;
    iVar14 = iVar14 + LengthCount[10];
    Header[0x23f].BlockSize = iVar26 * 0x80;
    Header[0x23f].BlockBitSize = iVar25 * 0x40;
    Header[0x242].HeaderSize = iVar14;
    iVar26 = LengthCount[11] + iVar25 * 2;
    iVar14 = iVar14 + LengthCount[11];
    iVar25 = iVar14 + LengthCount[12];
    iVar29 = LengthCount[12] + iVar26 * 2;
    *(int *)&Header[0x242].LastBlockInFile = iVar14;
    iVar14 = LengthCount[13] + iVar29 * 2;
    Header[0x23f].BlockStart = iVar26 * 0x20;
    iVar26 = LengthCount[14] + iVar14 * 2;
    Header[0x243].BlockSize = iVar25;
    iVar25 = LengthCount[13] + iVar25;
    Header[0x23f].HeaderSize = iVar29 * 0x10;
    Header[0x243].BlockBitSize = iVar25;
    *(int *)&Header[0x23f].LastBlockInFile = iVar14 * 8;
    Header[0x240].BlockSize = iVar26 * 4;
    Header[0x240].BlockBitSize = (LengthCount[15] + iVar26 * 2) * 2;
    Header[0x243].BlockStart = iVar25 + LengthCount[14];
    CopyDecodePos[0] = Header[0x240].BlockStart;
    CopyDecodePos[1] = Header[0x240].HeaderSize;
    CopyDecodePos[2]._0_1_ = Header[0x240].LastBlockInFile;
    CopyDecodePos[2]._1_1_ = Header[0x240].TablePresent;
    CopyDecodePos[2]._2_2_ = *(undefined2 *)&Header[0x240].field_0x12;
    CopyDecodePos[3] = Header[0x241].BlockSize;
    CopyDecodePos[4] = Header[0x241].BlockBitSize;
    CopyDecodePos[5] = Header[0x241].BlockStart;
    CopyDecodePos[6] = Header[0x241].HeaderSize;
    CopyDecodePos[7]._0_1_ = Header[0x241].LastBlockInFile;
    CopyDecodePos[7]._1_1_ = Header[0x241].TablePresent;
    CopyDecodePos[7]._2_2_ = *(undefined2 *)&Header[0x241].field_0x12;
    CopyDecodePos[8] = Header[0x242].BlockSize;
    CopyDecodePos[9] = Header[0x242].BlockBitSize;
    CopyDecodePos[10] = Header[0x242].BlockStart;
    CopyDecodePos[11] = Header[0x242].HeaderSize;
    CopyDecodePos[12]._0_1_ = Header[0x242].LastBlockInFile;
    CopyDecodePos[12]._1_1_ = Header[0x242].TablePresent;
    CopyDecodePos[12]._2_2_ = *(undefined2 *)&Header[0x242].field_0x12;
    CopyDecodePos[13] = Header[0x243].BlockSize;
    CopyDecodePos[14] = Header[0x243].BlockBitSize;
    CopyDecodePos[15] = Header[0x243].BlockStart;
    do {
      pbVar6 = pbVar6 + 1;
      uVar19 = *pbVar6 & 0xf;
      if ((*pbVar6 & 0xf) != 0) {
        uVar4 = CopyDecodePos[uVar19];
        CopyDecodePos[uVar19] = uVar4 + 1;
        *(short *)((int)&Header[0x2dd].BlockStart + uVar4 * 2) = (short)I_4;
      }
      I_4 = I_4 + 1;
    } while (I_4 != 0x2c);
    puVar21 = (undefined2 *)&Header[0x276].field_0x12;
    puVar27 = (undefined *)((int)&Header[0x243].HeaderSize + 3);
    Header[0x243].HeaderSize = 7;
    iVar25 = 0;
    uVar19 = 1;
    do {
      uVar7 = iVar25 * 0x200;
      bVar41 = 0xe < uVar19;
      bVar40 = uVar19 == 0xf;
      if (uVar19 < 0x10) {
        bVar41 = uVar7 <= (uint)(&Header[0x23d].BlockBitSize)[uVar19];
        bVar40 = (&Header[0x23d].BlockBitSize)[uVar19] == uVar7;
      }
      if (bVar41 && !bVar40) {
        uVar20 = 0x10 - uVar19;
        uVar11 = uVar19 - 1;
        uVar12 = uVar19;
        uVar19 = uVar19 & 0xff;
      }
      else {
        uVar20 = 0;
        uVar12 = uVar19 + 1;
        if (uVar7 < (uint)(&Header[0x23d].BlockStart)[uVar19]) {
          uVar20 = 0x10 - uVar12;
          uVar11 = uVar19;
          uVar19 = uVar12 & 0xff;
        }
        else if (uVar12 == 0x10) {
LAB_080f40c0:
          uVar11 = 0xf;
          uVar19 = uVar12;
        }
        else {
          uVar16 = uVar19 + 2;
          uVar11 = uVar12;
          if (uVar7 < (uint)(&Header[0x23d].HeaderSize)[uVar19]) {
LAB_080f405c:
            uVar12 = uVar16;
            uVar20 = 0x10 - uVar12;
            uVar19 = uVar12 & 0xff;
          }
          else {
            uVar12 = uVar16;
            if (uVar16 == 0x10) {
LAB_080f40ac:
              uVar11 = 0xf;
              uVar19 = uVar12;
            }
            else {
              uVar11 = uVar19 + 3;
              uVar12 = uVar11;
              if (*(uint *)(&Header[0x23d].LastBlockInFile + uVar19 * 4) <= uVar7) {
                if (uVar11 == 0x10) goto LAB_080f40c0;
                uVar12 = uVar19 + 4;
                uVar16 = uVar12;
                if (uVar7 < (uint)(&Header[0x23e].BlockSize)[uVar19]) goto LAB_080f405c;
                if (uVar12 == 0x10) goto LAB_080f40ac;
                uVar11 = uVar19 + 5;
                uVar12 = uVar11;
                if ((uint)(&Header[0x23e].BlockBitSize)[uVar19] <= uVar7) {
                  if (uVar11 != 0x10) {
                    uVar12 = uVar19 + 6;
                    uVar16 = uVar12;
                    if (uVar7 < (uint)(&Header[0x23e].BlockStart)[uVar19]) goto LAB_080f405c;
                    if (uVar12 == 0x10) {
LAB_080f4098:
                      uVar20 = 0;
                      uVar11 = 0xf;
                      uVar19 = uVar12;
                      goto LAB_080f3fb4;
                    }
                    uVar11 = uVar19 + 7;
                    uVar12 = uVar11;
                    if (uVar7 < (uint)(&Header[0x23e].HeaderSize)[uVar19]) goto LAB_080f4070;
                    if (uVar11 != 0x10) {
                      uVar12 = uVar19 + 8;
                      uVar16 = uVar12;
                      if (uVar7 < *(uint *)(&Header[0x23e].LastBlockInFile + uVar19 * 4))
                      goto LAB_080f405c;
                      if (uVar12 == 0x10) goto LAB_080f4098;
                      uVar11 = uVar19 + 9;
                      uVar12 = uVar11;
                      if (uVar7 < (uint)(&Header[0x23f].BlockSize)[uVar19]) goto LAB_080f4070;
                      if (uVar11 != 0x10) {
                        uVar12 = uVar19 + 10;
                        uVar16 = uVar12;
                        if (uVar7 < (uint)(&Header[0x23f].BlockBitSize)[uVar19]) goto LAB_080f405c;
                        if (uVar12 == 0x10) goto LAB_080f4098;
                        uVar11 = uVar19 + 0xb;
                        uVar12 = uVar11;
                        if (uVar7 < (uint)(&Header[0x23f].BlockStart)[uVar19]) goto LAB_080f4070;
                        if (uVar11 != 0x10) {
                          uVar12 = uVar19 + 0xc;
                          uVar16 = uVar12;
                          if (uVar7 < (uint)(&Header[0x23f].HeaderSize)[uVar19]) goto LAB_080f405c;
                          if (uVar12 == 0x10) goto LAB_080f4098;
                          uVar11 = uVar19 + 0xd;
                          uVar12 = uVar11;
                          if (uVar7 < *(uint *)(&Header[0x23f].LastBlockInFile + uVar19 * 4))
                          goto LAB_080f4070;
                          if (uVar11 != 0x10) {
                            uVar12 = uVar19 + 0xe;
                            if (uVar7 < (uint)(&Header[0x240].BlockSize)[uVar19]) {
                              uVar20 = 0x10 - uVar12;
                              uVar19 = uVar12 & 0xff;
                            }
                            else {
                              uVar12 = 0x10;
                              uVar20 = 0;
                              uVar11 = 0xf;
                              uVar19 = 0x10;
                            }
                            goto LAB_080f3fb4;
                          }
                        }
                      }
                    }
                  }
                  uVar20 = 0;
                  uVar11 = 0xf;
                  uVar19 = uVar12;
                  goto LAB_080f3fb4;
                }
              }
LAB_080f4070:
              uVar11 = uVar16;
              uVar20 = 0x10 - uVar12;
              uVar19 = uVar12 & 0xff;
            }
          }
        }
      }
LAB_080f3fb4:
      puVar27 = puVar27 + 1;
      *puVar27 = (char)uVar19;
      iVar25 = iVar25 + 1;
      uVar19 = (&Header[0x240].BlockStart)[uVar12] +
               (uVar7 - (&Header[0x23d].BlockBitSize)[uVar11] >> (uVar20 & 0xff));
      if (uVar19 < 0x2c) {
        uVar10 = *(undefined2 *)((int)&Header[0x2dd].BlockStart + uVar19 * 2);
      }
      else {
        uVar10 = 0;
      }
      puVar21 = puVar21 + 1;
      *puVar21 = uVar10;
      uVar19 = uVar12;
    } while (iVar25 != 0x80);
    bVar40 = true;
    LengthCount._0_8_ = uVar3;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar40;
}


