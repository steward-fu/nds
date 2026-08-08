/*
 * Ghidra decompilation
 *
 * Function : ExecuteStandardFilter
 * Address  : 0810b304
 * Program  : drastic
 */


/* DWARF original prototype: void ExecuteStandardFilter(RarVM * this, VM_StandardFilters FilterType)
    */

void __thiscall RarVM::ExecuteStandardFilter(RarVM *this,VM_StandardFilters FilterType)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  byte CurByte;
  uint uVar6;
  int32 Addr;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint Predicted;
  int pc;
  byte *pbVar10;
  byte *SrcData_1;
  int iVar11;
  byte CmdMask;
  byte G;
  byte bVar12;
  byte *pbVar13;
  int32 *piVar14;
  int I_1;
  int I_2;
  byte *pbVar15;
  byte *B;
  int DataSize_2;
  int pb;
  int Channels_1;
  byte CmpByte2;
  uint uVar16;
  int Channels;
  byte *SrcData;
  byte *pbVar17;
  uint MinDif;
  uint uVar18;
  int DataSize_1;
  int DestPos;
  int DataSize_3;
  int Border;
  int iVar19;
  uint uVar20;
  uint UpperByte;
  int32 *piVar21;
  uint uVar22;
  uint UpperLeftByte;
  uint uVar23;
  int iVar24;
  int iVar25;
  int CurChannel;
  uint uVar26;
  int iVar27;
  int UpperPos;
  int iVar28;
  int32 Offset;
  int DataSize;
  int32 *piVar29;
  int pa;
  int DataSize_4;
  int D3;
  int iVar30;
  int PosR;
  uint local_84;
  uint local_80;
  uint local_7c;
  byte *local_78;
  int local_6c;
  int local_68;
  int local_64;
  byte *local_5c;
  uint local_50;
  uint Dif [7];
  
  iVar5 = __stack_chk_guard;
  switch(FilterType) {
  case VMSF_E8:
  case VMSF_E8E9:
    uVar18 = this->R[4] - 4;
    if (uVar18 < 0x3bffc) {
      if (FilterType == VMSF_E8E9) {
        bVar12 = 0xe9;
      }
      else {
        bVar12 = 0xe8;
      }
      uVar16 = this->R[6];
      iVar30 = 0;
      piVar14 = (int32 *)this->Mem;
      while (piVar29 = piVar14, iVar27 = iVar30, iVar27 < (int)uVar18) {
        piVar14 = (int32 *)((int)piVar29 + 1);
        iVar30 = iVar27 + 1;
        if (bVar12 == *(byte *)piVar29 || *(byte *)piVar29 == 0xe8) {
          piVar21 = (int32 *)this->Mem;
          iVar30 = iVar27 + 1 + uVar16;
          if ((piVar14 < piVar21) || (piVar21 + 0x10000 <= piVar14)) {
            Addr = *(int32 *)((int)piVar29 + 1);
          }
          else {
            Addr = *piVar14;
          }
          if (Addr < 0) {
            if (-1 < iVar30 + Addr) {
              iVar30 = Addr + 0x1000000;
              if ((piVar14 < piVar21) || (piVar21 + 0x10000 <= piVar14)) {
                *(int *)((int)piVar29 + 1) = iVar30;
              }
              else {
                *(byte *)piVar14 = (byte)iVar30;
                *(byte *)((int)piVar29 + 2) = (byte)((uint)iVar30 >> 8);
                *(byte *)((int)piVar29 + 3) = (byte)((uint)iVar30 >> 0x10);
                *(byte *)(piVar29 + 1) = (byte)((uint)iVar30 >> 0x18);
              }
            }
          }
          else if (Addr < 0x1000000) {
            iVar30 = Addr - iVar30;
            if ((piVar14 < piVar21) || (piVar21 + 0x10000 <= piVar14)) {
              *(int *)((int)piVar29 + 1) = iVar30;
            }
            else {
              *(byte *)piVar14 = (byte)iVar30;
              *(byte *)((int)piVar29 + 2) = (byte)((uint)iVar30 >> 8);
              *(byte *)((int)piVar29 + 3) = (byte)((uint)iVar30 >> 0x10);
              *(byte *)(piVar29 + 1) = (byte)((uint)iVar30 >> 0x18);
            }
          }
          iVar30 = iVar27 + 5;
          piVar14 = (int32 *)((int)piVar29 + 5);
        }
      }
    }
    break;
  case VMSF_ITANIUM:
    uVar18 = this->R[4] - 0x15;
    if ((uVar18 < 0x3bfeb) && (uVar20 = this->R[6] >> 4, this->R[4] != 0x15)) {
      iVar30 = 0;
      piVar7 = (int *)(this->Mem + 0xf);
      do {
        uVar8 = *(byte *)((int)piVar7 + -0xf) & 0x1f;
        if ((-1 < (int)(uVar8 - 0x10)) &&
           (bVar2 = *(byte *)((int)&IsStandardFilter::StdList[4].Type + uVar8), bVar2 != 0)) {
          if (((bVar2 & 1) != 0) && ((uint)(*(int *)((int)piVar7 + -10) << 0x1a) >> 0x1c == 5)) {
            iVar27 = (((uint)(*(int *)((int)piVar7 + -0xd) << 10) >> 0xc) - uVar20 & 0xfffff) << 2;
            *(byte *)((int)piVar7 + -0xd) = *(byte *)((int)piVar7 + -0xd) & 3 | (byte)iVar27;
            *(byte *)(piVar7 + -3) = (byte)((uint)iVar27 >> 8);
            *(byte *)((int)piVar7 + -0xb) =
                 *(byte *)((int)piVar7 + -0xb) & 0xc0 | (byte)((uint)iVar27 >> 0x10);
          }
          if (((bVar2 & 2) != 0) && ((uint)(*(int *)((int)piVar7 + -5) << 0x19) >> 0x1c == 5)) {
            iVar27 = (((uint)(piVar7[-2] << 9) >> 0xc) - uVar20 & 0xfffff) << 3;
            *(byte *)(piVar7 + -2) = *(byte *)(piVar7 + -2) & 7 | (byte)iVar27;
            *(byte *)((int)piVar7 + -7) = (byte)((uint)iVar27 >> 8);
            *(byte *)((int)piVar7 + -6) =
                 *(byte *)((int)piVar7 + -6) & 0x80 | (byte)((uint)iVar27 >> 0x10);
          }
          if (((bVar2 & 4) != 0) && ((uint)(*piVar7 << 0x18) >> 0x1c == 5)) {
            iVar27 = (((uint)(*(int *)((int)piVar7 + -3) << 8) >> 0xc) - uVar20 & 0xfffff) << 4;
            *(byte *)((int)piVar7 + -3) = *(byte *)((int)piVar7 + -3) & 0xf | (byte)iVar27;
            *(byte *)((int)piVar7 + -2) = (byte)((uint)iVar27 >> 8);
            *(byte *)((int)piVar7 + -1) = (byte)((uint)iVar27 >> 0x10);
          }
        }
        iVar30 = iVar30 + 0x10;
        uVar20 = uVar20 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar30 < (int)uVar18);
    }
    break;
  case VMSF_RGB:
    pbVar10 = this->Mem;
    uVar16 = this->R[0];
    uVar20 = this->R[1];
    uVar8 = this->R[4];
    uVar18 = uVar20 >> 0x1f;
    if (0x1dfff < uVar8) {
      uVar18 = 1;
    }
    pbVar10[0x3c020] = (byte)uVar8;
    pbVar10[0x3c021] = (byte)(uVar8 >> 8);
    pbVar10[0x3c022] = (byte)(uVar8 >> 0x10);
    pbVar10[0x3c023] = (byte)(uVar8 >> 0x18);
    if (uVar18 == 0) {
      iVar30 = 3 - uVar16;
      CurChannel = 0;
      pbVar15 = pbVar10;
      do {
        if (CurChannel < (int)uVar8) {
          uVar18 = 0;
          iVar27 = CurChannel;
          pbVar17 = pbVar15;
          UpperPos = iVar30;
          do {
            uVar23 = uVar18;
            if (2 < UpperPos) {
              uVar6 = (uint)pbVar10[UpperPos + uVar8];
              uVar22 = (uint)pbVar10[iVar27 + (uVar8 - uVar16)];
              iVar9 = (uVar6 + uVar18) - uVar22;
              pa = iVar9 - uVar18;
              pb = iVar9 - uVar6;
              pc = iVar9 - uVar22;
              if (pa < 0) {
                pa = -pa;
              }
              if (pb < 0) {
                pb = -pb;
              }
              if (pc < 0) {
                pc = -pc;
              }
              iVar9 = pb;
              if (pa <= pb) {
                iVar9 = pc;
              }
              if ((iVar9 < pa) && (uVar23 = uVar22, pb <= pc)) {
                uVar23 = uVar6;
              }
            }
            pbVar15 = pbVar17 + 1;
            UpperPos = UpperPos + 3;
            uVar18 = uVar23 - *pbVar17 & 0xff;
            pbVar10[iVar27 + uVar8] = (byte)(uVar23 - *pbVar17);
            iVar27 = iVar27 + 3;
            pbVar17 = pbVar15;
          } while (iVar27 < (int)uVar8);
        }
        CurChannel = CurChannel + 1;
        iVar30 = iVar30 + 1;
      } while (CurChannel != 3);
      if ((int)uVar20 < (int)(uVar8 - 2)) {
        pbVar10 = pbVar10 + uVar20 + uVar8;
        do {
          uVar20 = uVar20 + 3;
          *pbVar10 = pbVar10[1] + *pbVar10;
          pbVar10[2] = pbVar10[1] + pbVar10[2];
          pbVar10 = pbVar10 + 3;
        } while ((int)uVar20 < (int)(uVar8 - 2));
      }
    }
    break;
  case VMSF_AUDIO:
    pbVar10 = this->Mem;
    uVar16 = this->R[0];
    uVar18 = this->R[4];
    pbVar10[0x3c020] = (byte)uVar18;
    pbVar10[0x3c021] = (byte)(uVar18 >> 8);
    pbVar10[0x3c022] = (byte)(uVar18 >> 0x10);
    pbVar10[0x3c023] = (byte)(uVar18 >> 0x18);
    if ((uVar18 < 0x1e000) && (0 < (int)uVar16)) {
      local_50 = 0;
      local_5c = pbVar10;
      do {
        pbVar15 = local_5c;
        if ((int)local_50 < (int)uVar18) {
          uVar8 = 0;
          uVar23 = 0;
          uVar6 = 0;
          uVar20 = 0;
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = local_5c;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          iVar27 = 0;
          iVar9 = 0;
          iVar24 = 0;
          iVar30 = 0;
          uVar26 = local_50;
          do {
            uVar26 = uVar26 + uVar16;
            pbVar15 = local_78 + 1;
            bVar2 = *local_78;
            iVar28 = iVar24 - iVar9;
            iVar9 = (char)bVar2 * 8;
            iVar25 = iVar9 - iVar24;
            iVar19 = iVar24 + iVar9;
            if (iVar25 < 0) {
              iVar25 = -iVar25;
            }
            iVar11 = ((uint)((local_68 * iVar28 + local_6c * iVar24 + local_64 * iVar30 + iVar27 * 8
                             ) * 0x200000) >> 0x18) - (uint)bVar2;
            if (iVar19 < 0) {
              iVar19 = -iVar19;
            }
            uVar6 = iVar25 + uVar6;
            uVar23 = uVar23 + iVar19;
            iVar25 = iVar9 - iVar28;
            if (iVar25 < 0) {
              iVar25 = -iVar25;
            }
            local_80 = local_80 + iVar25;
            iVar19 = iVar9 - iVar30;
            iVar30 = iVar9 + iVar30;
            bVar3 = (byte)iVar11;
            iVar25 = iVar28 + iVar9;
            cVar4 = (char)iVar27;
            if (iVar25 < 0) {
              iVar25 = -iVar25;
            }
            pbVar10[uVar26 + (uVar18 - uVar16)] = bVar3;
            if (iVar19 < 0) {
              iVar19 = -iVar19;
            }
            if (iVar30 < 0) {
              iVar30 = -iVar30;
            }
            if (iVar9 < 0) {
              iVar9 = (char)bVar2 * -8;
            }
            uVar8 = uVar8 + iVar30;
            local_7c = local_7c + iVar25;
            uVar20 = iVar9 + uVar20;
            local_84 = local_84 + iVar19;
            if (((int)local_78 - (int)local_5c & 0x1fU) == 0) {
              bVar1 = uVar6 < uVar20;
              if (bVar1) {
                uVar20 = uVar6;
              }
              if (uVar23 < uVar20) {
                if (local_80 < uVar23) {
LAB_0810b854:
                  if (local_7c < local_80) {
LAB_0810b864:
                    if (local_7c <= local_84) {
                      if (local_7c <= uVar8) {
                        if (local_68 < 0x10) {
                          local_68 = local_68 + 1;
                        }
                        goto LAB_0810b8b4;
                      }
                      goto LAB_0810b8a0;
                    }
                  }
                  else if (local_80 <= local_84) {
                    if (uVar8 < local_80) goto LAB_0810b8a0;
                    if (local_68 + 0x10 < 0 == SCARRY4(local_68,0x10)) {
                      local_68 = local_68 + -1;
                    }
                    goto LAB_0810b8b4;
                  }
LAB_0810b894:
                  if (local_84 <= uVar8) {
                    if (local_64 + 0x10 < 0 == SCARRY4(local_64,0x10)) {
                      local_64 = local_64 + -1;
                    }
                    goto LAB_0810b8b4;
                  }
                }
                else {
                  if (local_7c < uVar23) goto LAB_0810b864;
                  if (local_84 < uVar23) goto LAB_0810b894;
                  if (uVar23 <= uVar8) {
                    if (local_6c < 0x10) {
                      local_6c = local_6c + 1;
                    }
                    goto LAB_0810b8b4;
                  }
                }
LAB_0810b8a0:
                if (local_64 < 0x10) {
                  local_64 = local_64 + 1;
                }
              }
              else {
                if (local_80 < uVar20) goto LAB_0810b854;
                if (local_7c < uVar20) goto LAB_0810b864;
                if (local_84 < uVar20) goto LAB_0810b894;
                if (uVar8 < uVar20) goto LAB_0810b8a0;
                if ((bVar1) && (local_6c + 0x10 < 0 == SCARRY4(local_6c,0x10))) {
                  local_6c = local_6c + -1;
                }
              }
LAB_0810b8b4:
              uVar6 = 0;
              local_84 = 0;
              local_80 = 0;
              local_7c = 0;
              uVar8 = uVar6;
              uVar20 = uVar6;
              uVar23 = uVar6;
            }
            iVar27 = iVar11;
            iVar9 = iVar24;
            iVar24 = (int)(char)(bVar3 - cVar4);
            iVar30 = iVar28;
            local_78 = pbVar15;
          } while ((int)uVar26 < (int)uVar18);
        }
        local_5c = pbVar15;
        local_50 = local_50 + 1;
      } while (uVar16 != local_50);
    }
    break;
  case VMSF_DELTA:
    pbVar13 = this->Mem;
    uVar18 = this->R[4];
    uVar16 = this->R[0];
    pbVar13[0x3c020] = (byte)uVar18;
    pbVar13[0x3c021] = (byte)(uVar18 >> 8);
    pbVar13[0x3c022] = (byte)(uVar18 >> 0x10);
    pbVar13[0x3c023] = (byte)(uVar18 >> 0x18);
    if ((uVar18 < 0x1e000) && (0 < (int)uVar16)) {
      iVar30 = uVar18 * 2;
      uVar20 = uVar18 + uVar16;
      iVar27 = 0;
      do {
        if ((int)uVar18 < iVar30) {
          bVar12 = '\0';
          uVar8 = uVar18;
          iVar9 = iVar27;
          do {
            iVar27 = iVar9 + 1;
            bVar12 = bVar12 - this->Mem[iVar9];
            this->Mem[uVar8] = bVar12;
            uVar8 = uVar8 + uVar16;
            iVar9 = iVar27;
          } while ((int)uVar8 < iVar30);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar20);
    }
  }
  if (iVar5 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


