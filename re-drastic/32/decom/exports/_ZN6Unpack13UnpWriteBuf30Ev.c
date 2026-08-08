/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpWriteBuf30Ev
 * Address  : 080fb05c
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWriteBuf30(Unpack * this) */

void __thiscall Unpack::UnpWriteBuf30(Unpack *this)

{
  int64 *piVar1;
  uint uVar2;
  uchar *puVar3;
  VM_PreparedCommand *__ptr;
  uint uVar4;
  uint WrittenBorder;
  uint EndPtr;
  uint BlockStart;
  size_t sVar5;
  UnpackFilter30 **ppUVar6;
  uint uVar7;
  uint uVar8;
  uint BlockEnd;
  uint FilteredDataSize;
  UnpackFilter30 **ppUVar9;
  UnpackFilter30 *flt_1;
  UnpackFilter30 *flt;
  UnpackFilter30 *pUVar10;
  UnpackFilter30 *NextFilter;
  void *pvVar11;
  int iVar12;
  UnpackFilter30 **ppUVar13;
  UnpackFilter30 *pUVar14;
  uint FirstPartLength;
  RarVM *this_00;
  byte *Data;
  byte *FilteredData;
  size_t J;
  uint uVar15;
  uint WriteSize;
  size_t local_44;
  
  sVar5 = this->UnpPtr;
  local_44 = this->WrPtr;
  uVar8 = (this->PrgStack).BufSize;
  WrittenBorder = sVar5 - local_44;
  uVar15 = this->MaxWinMask & WrittenBorder;
  if (uVar8 != 0) {
    piVar1 = &this->WrittenFileSize;
    uVar4 = 0;
    do {
      while( true ) {
        pUVar10 = (this->PrgStack).Buffer[uVar4];
        if (pUVar10 == (UnpackFilter30 *)0x0) break;
        if (pUVar10->NextWindow == false) {
          EndPtr = pUVar10->BlockStart;
          uVar2 = this->MaxWinMask;
          BlockStart = EndPtr - local_44;
          if (uVar15 <= (BlockStart & uVar2)) break;
          uVar8 = pUVar10->BlockLength;
          if (EndPtr != local_44) {
            UnpWriteArea(this,local_44,EndPtr);
            uVar2 = this->MaxWinMask;
            uVar15 = this->UnpPtr - EndPtr & uVar2;
          }
          if (uVar15 < uVar8) {
            uVar8 = (this->PrgStack).BufSize;
            if (uVar4 < uVar8) {
              ppUVar9 = (this->PrgStack).Buffer;
              ppUVar6 = ppUVar9 + uVar4;
              do {
                ppUVar13 = ppUVar6 + 1;
                pUVar10 = *ppUVar6;
                if ((pUVar10 != (UnpackFilter30 *)0x0) && (pUVar10->NextWindow != false)) {
                  pUVar10->NextWindow = false;
                }
                ppUVar6 = ppUVar13;
              } while (ppUVar9 + uVar8 != ppUVar13);
            }
            this->WrPtr = EndPtr;
            return;
          }
          local_44 = EndPtr + uVar8 & uVar2;
          if (EndPtr < local_44 || local_44 == 0) {
            RarVM::SetMemory(&this->VM,0,this->Window + EndPtr,uVar8);
          }
          else {
            sVar5 = this->MaxWinSize - EndPtr;
            RarVM::SetMemory(&this->VM,0,this->Window + EndPtr,sVar5);
            RarVM::SetMemory(&this->VM,sVar5,this->Window,local_44);
          }
          this_00 = &this->VM;
          pUVar14 = (this->Filters30).Buffer[pUVar10->ParentFilter];
          uVar8 = (pUVar14->Prg).GlobalData.BufSize;
          if (0x40 < uVar8) {
            if ((pUVar10->Prg).GlobalData.AllocSize < uVar8) {
              Array<unsigned_char>::Add
                        (&(pUVar10->Prg).GlobalData,uVar8 - (pUVar10->Prg).GlobalData.BufSize);
            }
            else {
              (pUVar10->Prg).GlobalData.BufSize = uVar8;
            }
            memcpy((pUVar10->Prg).GlobalData.Buffer + 0x40,(pUVar14->Prg).GlobalData.Buffer + 0x40,
                   (pUVar14->Prg).GlobalData.BufSize - 0x40);
          }
          if ((pUVar10->Prg).GlobalData.BufSize == 0) {
LAB_080fb1f4:
            puVar3 = (pUVar14->Prg).GlobalData.Buffer;
            if (puVar3 != (uchar *)0x0) {
              free(puVar3);
              (pUVar14->Prg).GlobalData.Buffer = (uchar *)0x0;
            }
            (pUVar14->Prg).GlobalData.BufSize = 0;
            (pUVar14->Prg).GlobalData.AllocSize = 0;
          }
          else {
            puVar3 = (pUVar10->Prg).GlobalData.Buffer;
            uVar7 = *(uint *)piVar1;
            (pUVar10->Prg).InitR[6] = uVar7;
            RarVM::SetLowEndianValue(this_00,(uint *)(puVar3 + 0x24),uVar7);
            RarVM::SetLowEndianValue
                      (this_00,(uint *)((pUVar10->Prg).GlobalData.Buffer + 0x28),
                       *(uint *)((int)&this->WrittenFileSize + 4));
            RarVM::Execute(this_00,&pUVar10->Prg);
            sVar5 = (pUVar10->Prg).GlobalData.BufSize;
            if (sVar5 < 0x41) goto LAB_080fb1f4;
            uVar8 = (pUVar14->Prg).GlobalData.BufSize;
            if (uVar8 < sVar5) {
              if ((pUVar14->Prg).GlobalData.AllocSize < sVar5) {
                Array<unsigned_char>::Add(&(pUVar14->Prg).GlobalData,sVar5 - uVar8);
                sVar5 = (pUVar10->Prg).GlobalData.BufSize;
              }
              else {
                (pUVar14->Prg).GlobalData.BufSize = sVar5;
                sVar5 = (pUVar10->Prg).GlobalData.BufSize;
              }
            }
            memcpy((pUVar14->Prg).GlobalData.Buffer + 0x40,(pUVar10->Prg).GlobalData.Buffer + 0x40,
                   sVar5 - 0x40);
          }
          ppUVar6 = (this->PrgStack).Buffer;
          Data = (pUVar10->Prg).FilteredData;
          sVar5 = (pUVar10->Prg).FilteredDataSize;
          pUVar10 = ppUVar6[uVar4];
          if (pUVar10 != (UnpackFilter30 *)0x0) {
            puVar3 = (pUVar10->Prg).StaticData.Buffer;
            if (puVar3 != (uchar *)0x0) {
              free(puVar3);
            }
            puVar3 = (pUVar10->Prg).GlobalData.Buffer;
            if (puVar3 != (uchar *)0x0) {
              free(puVar3);
            }
            __ptr = (pUVar10->Prg).Cmd.Buffer;
            if (__ptr != (VM_PreparedCommand *)0x0) {
              free(__ptr);
            }
            operator_delete(pUVar10);
            ppUVar6 = (this->PrgStack).Buffer;
          }
          uVar8 = (this->PrgStack).BufSize;
          uVar2 = uVar4 + 1;
          ppUVar6[uVar4] = (UnpackFilter30 *)0x0;
          uVar7 = sVar5;
          if (uVar2 < uVar8) {
            iVar12 = uVar4 * 4 + 4;
            pUVar10 = (this->PrgStack).Buffer[uVar4 + 1];
            if ((((pUVar10 != (UnpackFilter30 *)0x0) && (EndPtr == pUVar10->BlockStart)) &&
                (sVar5 == pUVar10->BlockLength)) && (pUVar10->NextWindow == false)) {
              do {
                RarVM::SetMemory(this_00,0,Data,sVar5);
                pUVar14 = (this->Filters30).Buffer[pUVar10->ParentFilter];
                uVar8 = (pUVar14->Prg).GlobalData.BufSize;
                if (0x40 < uVar8) {
                  if ((pUVar10->Prg).GlobalData.AllocSize < uVar8) {
                    Array<unsigned_char>::Add
                              (&(pUVar10->Prg).GlobalData,uVar8 - (pUVar10->Prg).GlobalData.BufSize)
                    ;
                  }
                  else {
                    (pUVar10->Prg).GlobalData.BufSize = uVar8;
                  }
                  memcpy((pUVar10->Prg).GlobalData.Buffer + 0x40,
                         (pUVar14->Prg).GlobalData.Buffer + 0x40,
                         (pUVar14->Prg).GlobalData.BufSize - 0x40);
                }
                if ((pUVar10->Prg).GlobalData.BufSize == 0) {
LAB_080fb2ec:
                  puVar3 = (pUVar14->Prg).GlobalData.Buffer;
                  if (puVar3 != (uchar *)0x0) {
                    free(puVar3);
                    (pUVar14->Prg).GlobalData.Buffer = (uchar *)0x0;
                  }
                  (pUVar14->Prg).GlobalData.BufSize = 0;
                  (pUVar14->Prg).GlobalData.AllocSize = 0;
                }
                else {
                  puVar3 = (pUVar10->Prg).GlobalData.Buffer;
                  uVar7 = *(uint *)piVar1;
                  (pUVar10->Prg).InitR[6] = uVar7;
                  RarVM::SetLowEndianValue(this_00,(uint *)(puVar3 + 0x24),uVar7);
                  RarVM::SetLowEndianValue
                            (this_00,(uint *)((pUVar10->Prg).GlobalData.Buffer + 0x28),
                             *(uint *)((int)&this->WrittenFileSize + 4));
                  RarVM::Execute(this_00,&pUVar10->Prg);
                  sVar5 = (pUVar10->Prg).GlobalData.BufSize;
                  if (sVar5 < 0x41) goto LAB_080fb2ec;
                  uVar8 = (pUVar14->Prg).GlobalData.BufSize;
                  if (uVar8 < sVar5) {
                    if ((pUVar14->Prg).GlobalData.AllocSize < sVar5) {
                      Array<unsigned_char>::Add(&(pUVar14->Prg).GlobalData,sVar5 - uVar8);
                      sVar5 = (pUVar10->Prg).GlobalData.BufSize;
                    }
                    else {
                      (pUVar14->Prg).GlobalData.BufSize = sVar5;
                      sVar5 = (pUVar10->Prg).GlobalData.BufSize;
                    }
                  }
                  memcpy((pUVar14->Prg).GlobalData.Buffer + 0x40,
                         (pUVar10->Prg).GlobalData.Buffer + 0x40,sVar5 - 0x40);
                }
                ppUVar6 = (this->PrgStack).Buffer;
                Data = (pUVar10->Prg).FilteredData;
                uVar7 = (pUVar10->Prg).FilteredDataSize;
                pvVar11 = *(void **)((int)ppUVar6 + iVar12);
                if (pvVar11 != (void *)0x0) {
                  if (*(void **)((int)pvVar11 + 0x3c) != (void *)0x0) {
                    free(*(void **)((int)pvVar11 + 0x3c));
                  }
                  if (*(void **)((int)pvVar11 + 0x2c) != (void *)0x0) {
                    free(*(void **)((int)pvVar11 + 0x2c));
                  }
                  if (*(void **)((int)pvVar11 + 0x14) != (void *)0x0) {
                    free(*(void **)((int)pvVar11 + 0x14));
                  }
                  operator_delete(pvVar11);
                  ppUVar6 = (this->PrgStack).Buffer;
                }
                uVar8 = (this->PrgStack).BufSize;
                uVar2 = uVar2 + 1;
                *(undefined4 *)((int)ppUVar6 + iVar12) = 0;
                if (uVar8 <= uVar2) break;
                iVar12 = iVar12 + 4;
                pUVar10 = *(UnpackFilter30 **)((int)(this->PrgStack).Buffer + iVar12);
                if (((pUVar10 == (UnpackFilter30 *)0x0) || (EndPtr != pUVar10->BlockStart)) ||
                   ((sVar5 = pUVar10->BlockLength, sVar5 != uVar7 || (pUVar10->NextWindow != false))
                   )) break;
              } while( true );
            }
          }
          ComprDataIO::UnpWrite(this->UnpIO,Data,uVar7);
          sVar5 = this->UnpPtr;
          uVar4 = *(uint *)piVar1;
          iVar12 = *(int *)((int)&this->WrittenFileSize + 4);
          this->UnpSomeRead = true;
          uVar8 = (this->PrgStack).BufSize;
          uVar15 = this->MaxWinMask & sVar5 - local_44;
          *(uint *)piVar1 = uVar4 + uVar7;
          *(uint *)((int)&this->WrittenFileSize + 4) = iVar12 + (uint)CARRY4(uVar4,uVar7);
        }
        else {
          uVar2 = uVar4 + 1;
          pUVar10->NextWindow = false;
        }
        uVar4 = uVar2;
        if (uVar8 <= uVar2) goto LAB_080fb4a0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar8);
  }
LAB_080fb4a0:
  UnpWriteArea(this,local_44,sVar5);
  this->WrPtr = this->UnpPtr;
  return;
}


