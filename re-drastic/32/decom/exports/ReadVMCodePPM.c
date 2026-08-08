/*
 * Ghidra decompilation
 *
 * Function : ReadVMCodePPM
 * Address  : 080fc7b8
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadVMCodePPM(Unpack * this)
   Local variable B2:int[r0:4] conflicts with parameter, skipped.
   Local variable B1_1:int[r0:4] conflicts with parameter, skipped.
   Local variable Ch_4:int[r0:4] conflicts with parameter, skipped. */

bool __thiscall Unpack::ReadVMCodePPM(Unpack *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint FirstByte_00;
  int Ch;
  uint FirstByte;
  uchar *NewBuffer;
  int iVar3;
  int Ch_5;
  byte *pbVar4;
  int Ch_3;
  int Ch_2;
  int Ch_1;
  size_t __size;
  int k;
  int m;
  ModelPPM *this_00;
  byte *pbVar5;
  int B1;
  uint CodeSize;
  int Length;
  int iVar6;
  int Step;
  byte *local_2c;
  
  this_00 = &this->PPM;
  FirstByte_00 = ModelPPM::DecodeChar(this_00);
  if (FirstByte_00 == 0xffffffff) {
LAB_080fca34:
    ModelPPM::CleanUp(this_00);
    bVar2 = false;
    this->UnpBlockType = 0;
  }
  else {
    CodeSize = (FirstByte_00 & 7) + 1;
    if (CodeSize == 7) {
      iVar3 = ModelPPM::DecodeChar(this_00);
      if (iVar3 == -1) goto LAB_080fca34;
      CodeSize = iVar3 + 7;
    }
    else if (CodeSize == 8) {
      iVar3 = ModelPPM::DecodeChar(this_00);
      if ((iVar3 == -1) || (iVar6 = ModelPPM::DecodeChar(this_00), iVar6 == -1)) goto LAB_080fca34;
      CodeSize = iVar6 + iVar3 * 0x100;
    }
    if (CodeSize == 0) {
      local_2c = (byte *)0x0;
    }
    else {
      __size = CodeSize;
      if (CodeSize < 0x20) {
        __size = 0x20;
      }
      local_2c = (byte *)realloc((void *)0x0,__size);
      if (local_2c == (byte *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
      if (0 < (int)CodeSize) {
        pbVar4 = local_2c;
LAB_080fc854:
        iVar3 = ModelPPM::DecodeChar(this_00);
        if (iVar3 != -1) goto LAB_080fc848;
        if ((this->PPM).SubAlloc.SubAllocatorSize == 0) {
LAB_080fc874:
          pbVar4 = (byte *)malloc(0x100014);
          (this->PPM).SubAlloc.HeapStart = pbVar4;
          if (pbVar4 == (byte *)0x0) {
            ErrorHandler::MemoryError(&ErrHandler);
          }
          else {
            (this->PPM).SubAlloc.SubAllocatorSize = 0x100000;
            (this->PPM).SubAlloc.HeapEnd = pbVar4 + 0x100008;
          }
        }
        else {
          pbVar4 = (this->PPM).SubAlloc.HeapStart;
          (this->PPM).SubAlloc.SubAllocatorSize = 0;
          free(pbVar4);
          iVar3 = (this->PPM).SubAlloc.SubAllocatorSize;
          if (iVar3 != 0x100000) {
            if (iVar3 != 0) {
              pbVar4 = (this->PPM).SubAlloc.HeapStart;
              (this->PPM).SubAlloc.SubAllocatorSize = 0;
              free(pbVar4);
            }
            goto LAB_080fc874;
          }
        }
        (this->PPM).EscCount = '\x01';
        (this->PPM).MaxOrder = 2;
        ModelPPM::RestartModelRare(this_00);
        uVar1 = SIMDExpandImmediate(0,0xe,4);
        (this->PPM).NS2BSIndx[0] = '\0';
        (this->PPM).NS2BSIndx[1] = '\x02';
        *(undefined8 *)((this->PPM).NS2BSIndx + 2) = uVar1;
        *(undefined8 *)((this->PPM).NS2BSIndx + 3) = uVar1;
        memset((this->PPM).NS2BSIndx + 0xb,6,0xf5);
        iVar6 = 1;
        (this->PPM).NS2Indx[0] = '\0';
        iVar3 = 1;
        pbVar4 = (this->PPM).NS2Indx + 2;
        (this->PPM).NS2Indx[1] = '\x01';
        m = 3;
        (this->PPM).NS2Indx[2] = '\x02';
        do {
          iVar3 = iVar3 + -1;
          pbVar4 = pbVar4 + 1;
          *pbVar4 = (byte)m;
          if (iVar3 == 0) {
            m = m + 1;
            iVar3 = iVar6 + 1;
            iVar6 = iVar6 + 1;
          }
        } while (pbVar4 != (this->PPM).NS2Indx + 0xff);
        *(undefined8 *)(this->PPM).HB2Flag = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 8) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x10) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x18) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x20) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x28) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x30) = 0;
        *(undefined8 *)((this->PPM).HB2Flag + 0x38) = 0;
        memset((this->PPM).HB2Flag + 0x40,8,0xc0);
        bVar2 = false;
        (this->PPM).DummySEE2Cont.Shift = '\a';
        this->UnpBlockType = 0;
        goto LAB_080fc994;
      }
    }
LAB_080fc9cc:
    bVar2 = AddVMCode(this,FirstByte_00,local_2c,CodeSize);
LAB_080fc994:
    if (local_2c != (byte *)0x0) {
      free(local_2c);
    }
  }
  return bVar2;
LAB_080fc848:
  pbVar5 = pbVar4 + 1;
  *pbVar4 = (byte)iVar3;
  pbVar4 = pbVar5;
  if (local_2c + CodeSize == pbVar5) goto LAB_080fc9cc;
  goto LAB_080fc854;
}


