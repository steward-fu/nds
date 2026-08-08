/*
 * Ghidra decompilation
 *
 * Function : InitFilters30
 * Address  : 080f14cc
 * Program  : drastic
 */


/* DWARF original prototype: void InitFilters30(Unpack * this) */

void __thiscall Unpack::InitFilters30(Unpack *this)

{
  int *__ptr;
  UnpackFilter30 **ppUVar1;
  uchar *puVar2;
  VM_PreparedCommand *pVVar3;
  uint uVar4;
  UnpackFilter30 *pUVar5;
  uint uVar6;
  
  __ptr = (this->OldFilterLengths).Buffer;
  if (__ptr != (int *)0x0) {
    free(__ptr);
    (this->OldFilterLengths).Buffer = (int *)0x0;
  }
  uVar6 = 0;
  ppUVar1 = (this->Filters30).Buffer;
  uVar4 = (this->Filters30).BufSize;
  (this->OldFilterLengths).BufSize = 0;
  (this->OldFilterLengths).AllocSize = 0;
  this->LastFilter = 0;
  if (uVar4 != 0) {
    do {
      pUVar5 = ppUVar1[uVar6];
      uVar6 = uVar6 + 1;
      if (pUVar5 != (UnpackFilter30 *)0x0) {
        puVar2 = (pUVar5->Prg).StaticData.Buffer;
        if (puVar2 != (uchar *)0x0) {
          free(puVar2);
        }
        puVar2 = (pUVar5->Prg).GlobalData.Buffer;
        if (puVar2 != (uchar *)0x0) {
          free(puVar2);
        }
        pVVar3 = (pUVar5->Prg).Cmd.Buffer;
        if (pVVar3 != (VM_PreparedCommand *)0x0) {
          free(pVVar3);
        }
        operator_delete(pUVar5);
        ppUVar1 = (this->Filters30).Buffer;
        uVar4 = (this->Filters30).BufSize;
      }
    } while (uVar6 < uVar4);
  }
  if (ppUVar1 != (UnpackFilter30 **)0x0) {
    free(ppUVar1);
    (this->Filters30).Buffer = (UnpackFilter30 **)0x0;
  }
  uVar6 = 0;
  ppUVar1 = (this->PrgStack).Buffer;
  uVar4 = (this->PrgStack).BufSize;
  (this->Filters30).BufSize = 0;
  (this->Filters30).AllocSize = 0;
  if (uVar4 != 0) {
    do {
      pUVar5 = ppUVar1[uVar6];
      uVar6 = uVar6 + 1;
      if (pUVar5 != (UnpackFilter30 *)0x0) {
        puVar2 = (pUVar5->Prg).StaticData.Buffer;
        if (puVar2 != (uchar *)0x0) {
          free(puVar2);
        }
        puVar2 = (pUVar5->Prg).GlobalData.Buffer;
        if (puVar2 != (uchar *)0x0) {
          free(puVar2);
        }
        pVVar3 = (pUVar5->Prg).Cmd.Buffer;
        if (pVVar3 != (VM_PreparedCommand *)0x0) {
          free(pVVar3);
        }
        operator_delete(pUVar5);
        ppUVar1 = (this->PrgStack).Buffer;
        uVar4 = (this->PrgStack).BufSize;
      }
    } while (uVar6 < uVar4);
  }
  if (ppUVar1 != (UnpackFilter30 **)0x0) {
    free(ppUVar1);
    (this->PrgStack).Buffer = (UnpackFilter30 **)0x0;
  }
  (this->PrgStack).BufSize = 0;
  (this->PrgStack).AllocSize = 0;
  return;
}


