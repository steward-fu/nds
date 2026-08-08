/*
 * Ghidra decompilation
 *
 * Function : InitMT
 * Address  : 080ee784
 * Program  : drastic
 */


/* DWARF original prototype: void InitMT(Unpack * this) */

void __thiscall Unpack::InitMT(Unpack *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte *__s;
  undefined4 *puVar5;
  int iVar6;
  UnpackThreadData *__s_00;
  uint uVar7;
  uint MaxItems;
  
  puVar5 = (undefined4 *)this->ReadBufMT;
  if (puVar5 == (undefined4 *)0x0) {
    __s = (byte *)operator_new__(0x400400);
    this->ReadBufMT = __s;
    memset(__s,0,0x400400);
  }
  if (this->UnpThreadData == (UnpackThreadData *)0x0) {
    uVar7 = this->MaxUserThreads;
    uVar1 = uVar7 * 2;
    iVar6 = uVar1 - 1;
    if (uVar1 < 0x1b401) {
      uVar2 = uVar7 * 0x95c8 + 8;
    }
    else {
      uVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)operator_new__(uVar2);
    *puVar3 = 0x4ae4;
    if (iVar6 != -1) {
      puVar5 = puVar3 + 0x1280;
    }
    __s_00 = (UnpackThreadData *)(puVar3 + 2);
    puVar3[1] = uVar1;
    if (iVar6 != -1) {
      puVar5 = puVar5 + 0x3b;
      do {
        BitInput::BitInput((BitInput *)(puVar5 + -0x12b8),false);
        iVar6 = iVar6 + -1;
        puVar5[-4] = 0;
        puVar5 = puVar5 + 0x12b9;
      } while (iVar6 != -1);
    }
    this->UnpThreadData = __s_00;
    memset(__s_00,0,uVar7 * 0x95c8);
    if (uVar1 != 0) {
      iVar6 = 0;
      uVar2 = 0;
      while( true ) {
        if (*(int *)((int)&__s_00->Decoded + iVar6) == 0) {
          *(undefined4 *)((int)&__s_00->DecodedAllocated + iVar6) = 0x4100;
          pvVar4 = malloc(0x30c00);
          *(void **)((int)&__s_00->Decoded + iVar6) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            ErrorHandler::MemoryError(&ErrHandler);
          }
        }
        uVar2 = uVar2 + 1;
        iVar6 = iVar6 + 0x4ae4;
        if (uVar1 == uVar2) break;
        __s_00 = this->UnpThreadData;
      }
    }
  }
  return;
}


