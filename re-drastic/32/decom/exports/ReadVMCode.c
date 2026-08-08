/*
 * Ghidra decompilation
 *
 * Function : ReadVMCode
 * Address  : 080fcab0
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadVMCode(Unpack * this) */

bool __thiscall Unpack::ReadVMCode(Unpack *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  int ReadCode;
  byte *pbVar7;
  int iVar8;
  size_t sVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  size_t Items;
  int Length;
  uint FirstByte;
  uint FirstByte_00;
  size_t __n;
  Array<unsigned_char> VMCode;
  
  iVar4 = __stack_chk_guard;
  pbVar6 = (this->Inp).InBuf;
  iVar8 = (this->Inp).InAddr;
  iVar10 = (this->Inp).InBit;
  pbVar7 = pbVar6 + iVar8;
  bVar1 = *pbVar7;
  uVar11 = iVar10 + 8;
  bVar2 = pbVar7[2];
  iVar8 = iVar8 + (uVar11 >> 3);
  uVar11 = uVar11 & 7;
  bVar3 = pbVar7[1];
  (this->Inp).InAddr = iVar8;
  (this->Inp).InBit = uVar11;
  FirstByte_00 = ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >> (8U - iVar10 & 0xff))
                 << 0x10) >> 0x18;
  Items = (FirstByte_00 & 7) + 1;
  if (Items == 7) {
    bVar1 = pbVar6[iVar8];
    bVar2 = pbVar6[iVar8 + 1];
    bVar3 = (pbVar6 + iVar8)[2];
    (this->Inp).InAddr = iVar8 + 1;
    Items = (((((uint)bVar3 | (uint)bVar1 << 0x10 | (uint)bVar2 << 8) >> (8 - uVar11 & 0xff)) <<
             0x10) >> 0x18) + 7;
LAB_080fcb30:
    VMCode.Buffer = (uchar *)0x0;
    VMCode.BufSize = 0;
    VMCode.AllocSize = 0;
    VMCode.MaxSize = 0;
    Array<unsigned_char>::Add(&VMCode,Items);
  }
  else {
    if (Items != 8) goto LAB_080fcb30;
    bVar1 = pbVar6[iVar8];
    bVar2 = pbVar6[iVar8 + 2];
    bVar3 = pbVar6[iVar8 + 1];
    (this->Inp).InAddr = iVar8 + 2;
    VMCode.Buffer = (uchar *)0x0;
    VMCode.BufSize = 0;
    VMCode.AllocSize = 0;
    VMCode.MaxSize = 0;
    (this->Inp).InBit = uVar11;
    Items = ((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >> (8 - uVar11 & 0xff) & 0xffff;
    Array<unsigned_char>::Add(&VMCode,Items);
    if (Items == 0) goto LAB_080fccb0;
  }
  sVar12 = 0;
  iVar8 = (this->Inp).InAddr;
  do {
    sVar9 = this->ReadTop;
    if ((int)(sVar9 - 1) <= iVar8) {
      __n = sVar9 - iVar8;
      if ((int)__n < 0) {
LAB_080fcc48:
        if ((int)sVar12 < (int)(Items - 1)) {
          bVar5 = false;
          goto LAB_080fccc8;
        }
      }
      else {
        if (0x4000 < iVar8) {
          if (__n != 0) {
            pbVar6 = (this->Inp).InBuf;
            memmove(pbVar6,pbVar6 + iVar8,__n);
          }
          (this->Inp).InAddr = 0;
          this->ReadTop = __n;
          sVar9 = __n;
        }
        iVar8 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar9,0x8000 - sVar9);
        if (iVar8 < 1) {
          this->ReadBorder = this->ReadTop + -0x1e;
          if (iVar8 == -1) goto LAB_080fcc48;
        }
        else {
          iVar8 = iVar8 + this->ReadTop;
          this->ReadTop = iVar8;
          this->ReadBorder = iVar8 + -0x1e;
        }
      }
      iVar8 = (this->Inp).InAddr;
    }
    pbVar7 = (this->Inp).InBuf + iVar8;
    VMCode.Buffer[sVar12] =
         (uchar)((((uint)pbVar7[2] | (uint)*pbVar7 << 0x10 | (uint)pbVar7[1] << 8) >>
                 (8U - (this->Inp).InBit & 0xff)) >> 8);
    sVar12 = sVar12 + 1;
    uVar11 = (this->Inp).InBit + 8;
    iVar8 = (this->Inp).InAddr + (uVar11 >> 3);
    (this->Inp).InAddr = iVar8;
    (this->Inp).InBit = uVar11 & 7;
  } while (sVar12 != Items);
LAB_080fccb0:
  bVar5 = AddVMCode(this,FirstByte_00,VMCode.Buffer,Items);
LAB_080fccc8:
  if (VMCode.Buffer != (uchar *)0x0) {
    free(VMCode.Buffer);
  }
  if (iVar4 == __stack_chk_guard) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


