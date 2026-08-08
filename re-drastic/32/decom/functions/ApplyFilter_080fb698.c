/*
 * Ghidra decompilation
 *
 * Function : ApplyFilter
 * Address  : 080fb698
 * Program  : drastic
 */


/* DWARF original prototype: byte * ApplyFilter(Unpack * this, byte * Data, uint DataSize,
   UnpackFilter * Flt)
   Local variable Addr:uint[r1:4] conflicts with parameter, skipped. */

byte * __thiscall Unpack::ApplyFilter(Unpack *this,byte *Data,uint DataSize,UnpackFilter *Flt)

{
  byte bVar1;
  int iVar2;
  uint FileOffset;
  byte CurByte;
  uint uVar3;
  int UpperPos;
  byte G;
  byte *SrcData;
  int iVar4;
  byte *pbVar5;
  int D3;
  uint uVar6;
  uint uVar7;
  byte CmdMask;
  int *piVar8;
  uint MinDif;
  uint Predicted;
  int pc;
  uchar *puVar9;
  byte bVar13;
  byte CmpByte2;
  uchar uVar10;
  uint uVar11;
  uint Channels_1;
  uint I;
  byte *pbVar12;
  uint Border;
  uint Offset;
  uint Channels;
  int iVar14;
  uint PosR;
  uint I_2;
  uint FileOffset_1;
  uint FileOffset_2;
  uint uVar15;
  uint Width;
  int iVar16;
  int iVar17;
  uint CurChannel;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint UpperByte;
  uint uVar21;
  uint UpperLeftByte;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  int pa;
  uint DestPos;
  int iVar25;
  int iVar26;
  int pb;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  byte *local_80;
  byte *SrcData_2;
  byte *local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_54;
  byte *local_4c;
  uint Dif [7];
  
  iVar2 = __stack_chk_guard;
  local_4c = Data;
  switch(Flt->Type) {
  case '\0':
    uVar3 = (uint)Flt->Channels;
    if ((this->FilterDstMemory).AllocSize < DataSize) {
      Array<unsigned_char>::Add(&this->FilterDstMemory,DataSize - (this->FilterDstMemory).BufSize);
    }
    else {
      (this->FilterDstMemory).BufSize = DataSize;
    }
    local_4c = (this->FilterDstMemory).Buffer;
    if (uVar3 != 0) {
      DestPos = 0;
      iVar4 = 0;
      do {
        if (DestPos < DataSize) {
          uVar10 = '\0';
          pbVar5 = Data + iVar4;
          uVar15 = DestPos;
          do {
            iVar4 = iVar4 + 1;
            uVar10 = uVar10 - *pbVar5;
            local_4c[uVar15] = uVar10;
            uVar15 = uVar15 + uVar3;
            pbVar5 = pbVar5 + 1;
          } while (uVar15 < DataSize);
        }
        DestPos = DestPos + 1;
      } while (uVar3 != DestPos);
    }
    break;
  case '\x01':
  case '\x02':
    if (Flt->Type == '\x02') {
      bVar13 = 0xe9;
    }
    else {
      bVar13 = 0xe8;
    }
    iVar25 = *(int *)&this->WrittenFileSize;
    iVar4 = 0;
    pbVar5 = Data;
    while (pbVar22 = pbVar5, iVar14 = iVar4, iVar14 < (int)(DataSize - 4)) {
      iVar4 = iVar14 + 1;
      pbVar5 = pbVar22 + 1;
      if (bVar13 == *pbVar22 || *pbVar22 == 0xe8) {
        iVar4 = *(int *)(pbVar22 + 1);
        uVar3 = iVar25 + iVar14 + 1 & 0xffffff;
        if (iVar4 < 0) {
          if (-1 < (int)(uVar3 + iVar4)) {
            iVar4 = iVar4 + 0x1000000;
            pbVar22[1] = (byte)iVar4;
            pbVar22[2] = (byte)((uint)iVar4 >> 8);
            pbVar22[3] = (byte)((uint)iVar4 >> 0x10);
            pbVar22[4] = (byte)((uint)iVar4 >> 0x18);
          }
        }
        else if (iVar4 + -0x1000000 < 0) {
          iVar4 = iVar4 - uVar3;
          pbVar22[1] = (byte)iVar4;
          pbVar22[2] = (byte)((uint)iVar4 >> 8);
          pbVar22[3] = (byte)((uint)iVar4 >> 0x10);
          pbVar22[4] = (byte)((uint)iVar4 >> 0x18);
        }
        iVar4 = iVar14 + 5;
        pbVar5 = pbVar22 + 5;
      }
    }
    break;
  case '\x03':
    iVar4 = *(int *)&this->WrittenFileSize;
    if (0 < (int)(DataSize - 3)) {
      iVar25 = 0;
      pbVar12 = Data;
      do {
        if (pbVar12[3] == 0xeb) {
          iVar14 = ((uint)*pbVar12 - ((uint)(iVar4 + iVar25) >> 2)) +
                   ((uint)pbVar12[1] + (uint)pbVar12[2] * 0x100) * 0x100;
          *pbVar12 = (byte)iVar14;
          pbVar12[1] = (byte)((uint)iVar14 >> 8);
          pbVar12[2] = (byte)((uint)iVar14 >> 0x10);
        }
        iVar25 = iVar25 + 4;
        pbVar12 = pbVar12 + 4;
      } while (iVar25 < (int)(DataSize - 3));
    }
    break;
  case '\x04':
    uVar3 = (uint)Flt->Channels;
    if ((this->FilterDstMemory).AllocSize < DataSize) {
      Array<unsigned_char>::Add(&this->FilterDstMemory,DataSize - (this->FilterDstMemory).BufSize);
    }
    else {
      (this->FilterDstMemory).BufSize = DataSize;
    }
    local_4c = (this->FilterDstMemory).Buffer;
    if (uVar3 != 0) {
      local_54 = 0;
      local_70 = Data;
      do {
        pbVar12 = local_70;
        if (local_54 < DataSize) {
          uVar20 = 0;
          uVar21 = 0;
          uVar18 = 0;
          local_90 = 0;
          local_8c = 0;
          uVar11 = 0;
          local_88 = 0;
          local_84 = 0;
          local_80 = local_70;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          iVar4 = 0;
          iVar25 = 0;
          iVar14 = 0;
          uVar19 = local_54;
          do {
            iVar16 = iVar25;
            uVar19 = uVar3 + uVar19;
            iVar14 = iVar16 - iVar14;
            pbVar12 = local_80 + 1;
            bVar1 = *local_80;
            iVar25 = (char)bVar1 * 8;
            iVar23 = iVar25 - iVar16;
            if (iVar23 < 0) {
              iVar23 = -iVar23;
            }
            iVar17 = iVar16 + iVar25;
            uVar24 = iVar23 + local_84;
            if (iVar17 < 0) {
              iVar17 = -iVar17;
            }
            uVar21 = uVar21 + iVar17;
            iVar23 = iVar25 - iVar14;
            iVar26 = ((uint)((local_68 * iVar14 +
                             local_6c * iVar16 + local_64 * iVar4 + local_88 * 8) * 0x200000) >>
                     0x18) - (uint)bVar1;
            iVar17 = iVar14 + iVar25;
            if (iVar23 < 0) {
              iVar23 = -iVar23;
            }
            uVar18 = uVar18 + iVar23;
            uVar10 = (uchar)iVar26;
            iVar23 = iVar25 - iVar4;
            if (iVar17 < 0) {
              iVar17 = -iVar17;
            }
            iVar4 = iVar25 + iVar4;
            local_4c[uVar19 - uVar3] = uVar10;
            if (iVar23 < 0) {
              iVar23 = -iVar23;
            }
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            if (iVar25 < 0) {
              iVar25 = (char)bVar1 * -8;
            }
            local_8c = local_8c + iVar17;
            uVar11 = iVar25 + uVar11;
            uVar6 = (int)local_80 - (int)local_70 & 0x1f;
            local_90 = local_90 + iVar23;
            local_84 = uVar6;
            if (uVar6 != 0) {
              local_84 = uVar24;
            }
            uVar20 = uVar20 + iVar4;
            if (uVar6 == 0) {
              uVar6 = local_84;
              if (uVar24 < uVar11) {
                uVar6 = 1;
                uVar11 = uVar24;
              }
              if (uVar21 < uVar11) {
                if (uVar18 < uVar21) {
LAB_080fbb00:
                  if (local_8c < uVar18) {
LAB_080fbb0c:
                    if (local_8c <= local_90) {
                      if (local_8c <= uVar20) {
                        if (local_68 < 0x10) {
                          local_68 = local_68 + 1;
                        }
                        goto LAB_080fbc6c;
                      }
                      goto LAB_080fbc58;
                    }
                  }
                  else if (uVar18 <= local_90) {
                    if (uVar20 < uVar18) goto LAB_080fbc58;
                    if (local_68 + 0x10 < 0 == SCARRY4(local_68,0x10)) {
                      local_68 = local_68 + -1;
                    }
                    goto LAB_080fbc6c;
                  }
LAB_080fbc4c:
                  if (local_90 <= uVar20) {
                    if (local_64 + 0x10 < 0 == SCARRY4(local_64,0x10)) {
                      local_64 = local_64 + -1;
                    }
                    goto LAB_080fbc6c;
                  }
                }
                else {
                  if (local_8c < uVar21) goto LAB_080fbb0c;
                  if (local_90 < uVar21) goto LAB_080fbc4c;
                  if (uVar21 <= uVar20) {
                    if (local_6c < 0x10) {
                      local_6c = local_6c + 1;
                    }
                    goto LAB_080fbc6c;
                  }
                }
LAB_080fbc58:
                if (local_64 < 0x10) {
                  local_64 = local_64 + 1;
                }
              }
              else {
                if (uVar18 < uVar11) goto LAB_080fbb00;
                if (local_8c < uVar11) goto LAB_080fbb0c;
                if (local_90 < uVar11) goto LAB_080fbc4c;
                if (uVar20 < uVar11) goto LAB_080fbc58;
                if ((uVar6 == 1) && (local_6c + 0x10 < 0 == SCARRY4(local_6c,0x10))) {
                  local_6c = local_6c + -1;
                }
              }
LAB_080fbc6c:
              uVar11 = 0;
              local_90 = 0;
              local_8c = 0;
              uVar20 = uVar11;
              uVar21 = uVar11;
              uVar18 = uVar11;
            }
            iVar4 = iVar14;
            iVar25 = (int)(char)(uVar10 - (char)local_88);
            iVar14 = iVar16;
            local_88 = iVar26;
            local_80 = pbVar12;
          } while (uVar19 < DataSize);
        }
        local_70 = pbVar12;
        local_54 = local_54 + 1;
      } while (uVar3 != local_54);
    }
    break;
  case '\x05':
    uVar3 = (uint)Flt->PosR;
    uVar15 = Flt->Width;
    if ((this->FilterDstMemory).AllocSize < DataSize) {
      Array<unsigned_char>::Add(&this->FilterDstMemory,DataSize - (this->FilterDstMemory).BufSize);
    }
    else {
      (this->FilterDstMemory).BufSize = DataSize;
    }
    local_4c = (this->FilterDstMemory).Buffer;
    CurChannel = 0;
    do {
      if (CurChannel < DataSize) {
        UpperPos = CurChannel - uVar15;
        uVar11 = 0;
        uVar7 = CurChannel;
        pbVar12 = Data;
        do {
          uVar19 = uVar11;
          if (2 < UpperPos) {
            uVar20 = (uint)local_4c[UpperPos];
            uVar21 = (uint)(local_4c + UpperPos)[-3];
            iVar4 = (uVar20 + uVar11) - uVar21;
            pa = iVar4 - uVar11;
            pb = iVar4 - uVar20;
            pc = iVar4 - uVar21;
            if (pa < 0) {
              pa = -pa;
            }
            if (pb < 0) {
              pb = -pb;
            }
            if (pc < 0) {
              pc = -pc;
            }
            iVar4 = pb;
            if (pa <= pb) {
              iVar4 = pc;
            }
            if ((iVar4 < pa) && (uVar19 = uVar21, pb <= pc)) {
              uVar19 = uVar20;
            }
          }
          Data = pbVar12 + 1;
          UpperPos = UpperPos + 3;
          uVar11 = uVar19 - *pbVar12 & 0xff;
          local_4c[uVar7] = (uchar)(uVar19 - *pbVar12);
          uVar7 = uVar7 + 3;
          pbVar12 = Data;
        } while (uVar7 < DataSize);
      }
      CurChannel = CurChannel + 1;
    } while (CurChannel != 3);
    if (uVar3 < DataSize - 2) {
      puVar9 = local_4c + uVar3;
      do {
        uVar3 = uVar3 + 3;
        *puVar9 = puVar9[1] + *puVar9;
        puVar9[2] = puVar9[1] + puVar9[2];
        puVar9 = puVar9 + 3;
      } while (uVar3 < DataSize - 2);
    }
    break;
  case '\x06':
    uVar3 = *(uint *)&this->WrittenFileSize >> 4;
    if (0 < (int)(DataSize - 0x15)) {
      piVar8 = (int *)(Data + 0xf);
      iVar4 = 0;
      do {
        uVar11 = *(byte *)((int)piVar8 + -0xf) & 0x1f;
        if ((-1 < (int)(uVar11 - 0x10)) && (bVar1 = ""[uVar11 + 0x20], bVar1 != 0)) {
          if (((bVar1 & 1) != 0) && ((uint)(*(int *)((int)piVar8 + -10) << 0x1a) >> 0x1c == 5)) {
            iVar25 = (((uint)(*(int *)((int)piVar8 + -0xd) << 10) >> 0xc) - uVar3 & 0xfffff) << 2;
            *(byte *)((int)piVar8 + -0xd) = *(byte *)((int)piVar8 + -0xd) & 3 | (byte)iVar25;
            *(byte *)(piVar8 + -3) = (byte)((uint)iVar25 >> 8);
            *(byte *)((int)piVar8 + -0xb) =
                 *(byte *)((int)piVar8 + -0xb) & 0xc0 | (byte)((uint)iVar25 >> 0x10);
          }
          if (((bVar1 & 2) != 0) && ((uint)(*(int *)((int)piVar8 + -5) << 0x19) >> 0x1c == 5)) {
            iVar25 = (((uint)(piVar8[-2] << 9) >> 0xc) - uVar3 & 0xfffff) << 3;
            *(byte *)(piVar8 + -2) = *(byte *)(piVar8 + -2) & 7 | (byte)iVar25;
            *(byte *)((int)piVar8 + -7) = (byte)((uint)iVar25 >> 8);
            *(byte *)((int)piVar8 + -6) =
                 *(byte *)((int)piVar8 + -6) & 0x80 | (byte)((uint)iVar25 >> 0x10);
          }
          if (((bVar1 & 4) != 0) && ((uint)(*piVar8 << 0x18) >> 0x1c == 5)) {
            iVar25 = (((uint)(*(int *)((int)piVar8 + -3) << 8) >> 0xc) - uVar3 & 0xfffff) << 4;
            *(byte *)((int)piVar8 + -3) = *(byte *)((int)piVar8 + -3) & 0xf | (byte)iVar25;
            *(byte *)((int)piVar8 + -2) = (byte)((uint)iVar25 >> 8);
            *(byte *)((int)piVar8 + -1) = (byte)((uint)iVar25 >> 0x10);
          }
        }
        iVar4 = iVar4 + 0x10;
        uVar3 = uVar3 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar4 < (int)(DataSize - 0x15));
    }
    break;
  default:
    local_4c = (uchar *)0x0;
  }
  if (iVar2 == __stack_chk_guard) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


