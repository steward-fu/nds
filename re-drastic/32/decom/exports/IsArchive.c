/*
 * Ghidra decompilation
 *
 * Function : IsArchive
 * Address  : 080d8780
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d8a9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: bool IsArchive(Archive * this, bool EnableBroken)
   Local variable ReadSize:int[r0:4] conflicts with parameter, skipped. */

bool __thiscall Archive::IsArchive(Archive *this,bool EnableBroken)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char *Data;
  char *NewBuffer;
  size_t sVar6;
  QuickOpen *pQVar7;
  int iVar8;
  _func_int_varargs *p_Var9;
  int Method;
  char *pcVar10;
  int Method_00;
  int Method_01;
  int Method_02;
  int Method_03;
  int Method_04;
  int Method_05;
  undefined4 extraout_r1;
  QuickOpen *pQVar11;
  RARFORMAT Type;
  _func_int_varargs **pp_Var12;
  byte bVar13;
  undefined *puVar14;
  RARFORMAT RVar15;
  byte *Data_00;
  MarkHeader *Data_01;
  char *pcVar16;
  longlong lVar17;
  int64 iVar18;
  int64 iVar19;
  ulonglong uVar20;
  uint in_stack_ffffff84;
  long CurPos;
  QuickOpen *local_6c;
  size_t Result_1;
  size_t Result_2;
  size_t Result;
  undefined4 uStack_54;
  int local_4c;
  Archive *pAVar5;
  
  p_Var9 = (this->super_File)._vptr_File[3];
  local_4c = __stack_chk_guard;
  this->Encrypted = false;
  this->BrokenHeader = false;
  (this->QOpen).Loaded = false;
  if (p_Var9 == Seek) {
    bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0x80d7ac8);
    pAVar5 = (Archive *)(uint)bVar3;
    if (pAVar5 != (Archive *)0x0) goto LAB_080d8804;
    File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method);
    cVar4 = File::IsDevice(&this->super_File);
  }
  else {
    (*p_Var9)(this,p_Var9,0,0,0);
    pAVar5 = this;
LAB_080d8804:
    cVar4 = File::IsDevice(&this->super_File);
  }
  if (!(bool)cVar4) {
    Data_01 = &this->MarkHead;
    p_Var9 = (this->super_File)._vptr_File[2];
    if (p_Var9 == Read) {
      bVar3 = QuickOpen::Read(&this->QOpen,Data_01,7,&Result);
      sVar6 = Result;
      if (!bVar3) {
        sVar6 = File::Read(&this->super_File,Data_01,7);
      }
    }
    else {
      sVar6 = (*p_Var9)(pAVar5,Data_01,7);
    }
    if (sVar6 == 7) {
      this->SFXSize = 0;
      if ((this->MarkHead).Mark[0] == 'R') {
        bVar2 = (this->MarkHead).Mark[1];
        pQVar7 = (QuickOpen *)0x7;
        if (bVar2 == 'E') {
          if (((this->MarkHead).Mark[2] != '~') || ((this->MarkHead).Mark[3] != '^'))
          goto LAB_080d88d0;
          pp_Var12 = (this->super_File)._vptr_File;
          this->Format = RARFMT14;
          p_Var9 = pp_Var12[3];
          if (p_Var9 == Seek) {
            bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0x80d7ac8);
            pQVar7 = (QuickOpen *)(uint)bVar3;
            if (pQVar7 == (QuickOpen *)0x0) {
              File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_02);
            }
          }
          else {
            (*p_Var9)(7,p_Var9,0,0,0);
          }
        }
        else {
          if ((((bVar2 != 'a') || ((this->MarkHead).Mark[2] != 'r')) ||
              ((this->MarkHead).Mark[3] != '!')) ||
             (((this->MarkHead).Mark[4] != '\x1a' || ((this->MarkHead).Mark[5] != '\a'))))
          goto LAB_080d88d0;
          bVar2 = (this->MarkHead).Mark[6];
          if (bVar2 == '\0') {
            RVar15 = RARFMT15;
          }
          else if (bVar2 == '\x01') {
            RVar15 = RARFMT50;
          }
          else {
            if (bVar2 != '\x02') goto LAB_080d88d0;
            RVar15 = RARFMT_FUTURE;
          }
          this->Format = RVar15;
        }
      }
      else {
LAB_080d88d0:
        Data = (char *)realloc((void *)0x0,0x100000);
        if (Data == (char *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        p_Var9 = (this->super_File)._vptr_File[4];
        if (p_Var9 == Tell) {
          bVar3 = QuickOpen::Tell(&this->QOpen,(int64 *)&Result);
          if (bVar3) {
            local_6c = (QuickOpen *)Result;
            pQVar7 = &this->QOpen;
          }
          else {
            iVar18 = File::Tell(&this->super_File);
            local_6c = (QuickOpen *)iVar18;
            pQVar7 = local_6c;
          }
        }
        else {
          local_6c = (QuickOpen *)(*p_Var9)();
          pQVar7 = local_6c;
        }
        p_Var9 = (this->super_File)._vptr_File[2];
        if (p_Var9 == Read) {
          bVar3 = QuickOpen::Read(&this->QOpen,Data,0xffff0,&Result_1);
          pQVar7 = (QuickOpen *)Result_1;
          if (!bVar3) {
            pQVar7 = (QuickOpen *)File::Read(&this->super_File,Data,0xffff0);
          }
        }
        else {
          pQVar7 = (QuickOpen *)(*p_Var9)(pQVar7,Data,0xffff0);
        }
        if (0 < (int)pQVar7) {
          pcVar16 = Data + (0x1c - (int)local_6c);
          puVar14 = (undefined *)0x0;
          pcVar10 = Data;
          pQVar11 = pQVar7;
          do {
            if ((*pcVar10 == 'R') && ((QuickOpen *)0x3 < pQVar11)) {
              cVar1 = pcVar10[1];
              if (cVar1 == 'E') {
                if (((pcVar10[2] == '~') && (pcVar10[3] == '^')) &&
                   ((this->Format = RARFMT14,
                    (int)puVar14 < 1 || ((int)pQVar7 < 0x20 || 0x1b < (int)local_6c) ||
                    ((((*pcVar16 == 'R' && (pcVar16[1] == 'S')) && (pcVar16[2] == 'F')) &&
                     (pcVar16[3] == 'X')))))) goto LAB_080d8a18;
              }
              else if (((((QuickOpen *)0x6 < pQVar11) && (cVar1 == 'a')) &&
                       ((pcVar10[2] == 'r' && ((pcVar10[3] == '!' && (pcVar10[4] == '\x1a')))))) &&
                      (pcVar10[5] == '\a')) {
                cVar1 = pcVar10[6];
                if (cVar1 == '\0') {
                  Type = RARFMT15;
                }
                else if (cVar1 == '\x01') {
                  Type = RARFMT50;
                }
                else {
                  if (cVar1 != '\x02') goto LAB_080d898c;
                  Type = RARFMT_FUTURE;
                }
                this->Format = Type;
LAB_080d8a18:
                p_Var9 = (this->super_File)._vptr_File[3];
                this->SFXSize = (size_t)(puVar14 + (int)&local_6c->Arc);
                if (p_Var9 == Seek) {
                  bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,
                                          0x80d7ac8);
                  pQVar7 = (QuickOpen *)(uint)bVar3;
                  if (pQVar7 == (QuickOpen *)0x0) {
                    File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_00);
                  }
                }
                else {
                  (*p_Var9)(pQVar7,p_Var9,puVar14 + (int)&local_6c->Arc,0,0);
                }
                if (this->Format + ~RARFMT14 < 2) {
                  p_Var9 = (this->super_File)._vptr_File[2];
                  if (p_Var9 == Read) {
                    pQVar7 = &this->QOpen;
                    bVar3 = QuickOpen::Read(pQVar7,Data_01,7,&Result_2);
                    if (!bVar3) {
                      File::Read(&this->super_File,Data_01,7);
                    }
                  }
                  else {
                    (*p_Var9)(pQVar7,Data_01,7);
                  }
                }
                break;
              }
            }
LAB_080d898c:
            puVar14 = puVar14 + 1;
            pQVar11 = (QuickOpen *)((int)(pQVar11 + -1) + 0x1077);
            pcVar10 = pcVar10 + 1;
          } while (pQVar7 != (QuickOpen *)puVar14);
        }
        if (this->SFXSize == 0) {
          if (Data != (char *)0x0) {
            free(Data);
          }
          goto LAB_080d8818;
        }
        if (Data != (char *)0x0) {
          free(Data);
        }
      }
      if (this->Format != RARFMT_FUTURE) {
        if (this->Format == RARFMT50) {
          Data_00 = (this->MarkHead).Mark + 7;
          p_Var9 = (this->super_File)._vptr_File[2];
          if (p_Var9 == Read) {
            bVar3 = QuickOpen::Read(&this->QOpen,Data_00,1,&Result);
            if (!bVar3) {
              File::Read(&this->super_File,Data_00,1);
            }
          }
          else {
            (*p_Var9)(pQVar7,Data_00,1);
          }
          if ((this->MarkHead).Mark[7] != '\0') goto LAB_080d8814;
          (this->MarkHead).HeadSize = 8;
        }
        else {
          (this->MarkHead).HeadSize = 7;
        }
        if (this->Cmd->Callback == (UNRARCALLBACK_conflict)0x0) {
          this->SilentOpen = true;
        }
        while ((sVar6 = ReadHeader(this), sVar6 != 0 && (this->CurHeaderType != HEAD_MAIN))) {
          if (this->CurHeaderType == HEAD_CRYPT) {
            bVar13 = this->SilentOpen & 1;
          }
          else {
            bVar13 = 0;
          }
          if (bVar13 != 0) break;
          p_Var9 = (this->super_File)._vptr_File[3];
          if (p_Var9 == Seek) {
            bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0x80d7ac8);
            if (!bVar3) {
              File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_01);
            }
          }
          else {
            (*p_Var9)(sVar6,p_Var9,(int)this->NextBlockPos,
                      (int)((ulonglong)this->NextBlockPos >> 0x20));
          }
        }
        if (this->FailedHeaderDecryption <= EnableBroken) {
          p_Var9 = (this->super_File)._vptr_File[3];
          if (p_Var9 == Seek) {
            bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0);
            if (!bVar3) {
              File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_03);
            }
          }
          else {
            (*p_Var9)(sVar6,p_Var9,(int)this->NextBlockPos,
                      (int)((ulonglong)this->NextBlockPos >> 0x20),0);
          }
          if (this->BrokenHeader <= EnableBroken) {
            this->MainComment = (this->MainHead).CommentInHeader;
            if ((this->SilentOpen == false) || (this->Encrypted == false)) {
              p_Var9 = (this->super_File)._vptr_File[4];
              if (p_Var9 == Tell) {
                bVar3 = QuickOpen::Tell(&this->QOpen,(int64 *)&Result);
                if (bVar3) {
                  lVar17 = CONCAT44(uStack_54,Result);
                }
                else {
                  uVar20 = File::Tell(&this->super_File);
                  lVar17 = (uVar20 & 0xffffffff00000000) + (uVar20 & 0xffffffff);
                }
              }
              else {
                iVar8 = (*p_Var9)();
                lVar17 = CONCAT44(extraout_r1,iVar8);
              }
              iVar18 = this->NextBlockPos;
              iVar19 = this->CurBlockPos;
              while (sVar6 = ReadHeader(this), sVar6 != 0) {
                if (this->CurHeaderType != HEAD_SERVICE) {
                  if (this->CurHeaderType == HEAD_FILE) {
                    bVar13 = this->Volume & 1;
                  }
                  else {
                    bVar13 = false;
                  }
                  if ((bool)bVar13 != false) {
                    bVar13 = (this->FileHead).SplitBefore ^ 1;
                  }
                  this->FirstVolume = (bool)bVar13;
                  break;
                }
                bVar13 = this->Volume;
                bVar3 = (bool)bVar13 != false;
                if (bVar3) {
                  bVar13 = (this->SubHead).SplitBefore;
                }
                p_Var9 = (this->super_File)._vptr_File[3];
                if (bVar3) {
                  bVar13 = bVar13 ^ 1;
                }
                this->FirstVolume = (bool)bVar13;
                if (p_Var9 == Seek) {
                  bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0);
                  if (!bVar3) {
                    File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_04);
                  }
                }
                else {
                  (*p_Var9)(sVar6,p_Var9,(int)this->NextBlockPos,
                            (int)((ulonglong)this->NextBlockPos >> 0x20),0);
                }
              }
              p_Var9 = (this->super_File)._vptr_File[3];
              this->CurBlockPos = iVar19;
              this->NextBlockPos = iVar18;
              if (p_Var9 == Seek) {
                bVar3 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffff84 << 0x20,0);
                if (!bVar3) {
                  File::Seek(&this->super_File,(ulonglong)in_stack_ffffff84 << 0x20,Method_05);
                }
              }
              else {
                (*p_Var9)(sVar6,p_Var9,(int)lVar17,(int)((ulonglong)lVar17 >> 0x20),0);
              }
            }
            cVar4 = this->Volume;
            if (((bool)cVar4 == false) || (this->FirstVolume != false)) {
              cVar4 = '\x01';
              wcscpy((wchar_t *)this->FirstVolumeName,(wchar_t *)(this->super_File).FileName);
            }
            goto LAB_080d8818;
          }
        }
      }
    }
  }
LAB_080d8814:
  cVar4 = '\0';
LAB_080d8818:
  if (local_4c == __stack_chk_guard) {
    return (bool)cVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


