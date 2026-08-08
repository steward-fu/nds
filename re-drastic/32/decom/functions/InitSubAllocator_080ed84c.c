/*
 * Ghidra decompilation
 *
 * Function : InitSubAllocator
 * Address  : 080ed84c
 * Program  : drastic
 */


/* DWARF original prototype: void InitSubAllocator(SubAllocator * this) */

void __thiscall SubAllocator::InitSubAllocator(SubAllocator *this)

{
  int iVar1;
  uint uVar2;
  uint Size1;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint Size2;
  byte *pbVar6;
  
  memset(this->FreeList,0,0x98);
  iVar1 = this->SubAllocatorSize;
  pbVar6 = this->HeapStart;
  iVar4 = 0;
  this->Indx2Units[0] = '\x01';
  iVar3 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  this->pText = pbVar6;
  this->Indx2Units[1] = '\x02';
  uVar2 = (uint)(iVar3 >> 3) / 0xc;
  this->Indx2Units[2] = '\x03';
  uVar5 = uVar2 * 0x54;
  this->Indx2Units[3] = '\x04';
  uVar2 = iVar1 + uVar2 * -0x54;
  this->Indx2Units[4] = '\x06';
  this->FakeUnitsStart = pbVar6 + uVar2;
  this->Indx2Units[5] = '\b';
  this->Indx2Units[6] = '\n';
  pbVar6 = pbVar6 + (uVar2 / 0xc + 1) * 0xc;
  this->Indx2Units[7] = '\f';
  this->Indx2Units[8] = '\x0f';
  this->Indx2Units[9] = '\x12';
  this->Indx2Units[10] = '\x15';
  this->Indx2Units[0xb] = '\x18';
  this->LoUnit = pbVar6;
  this->HiUnit = pbVar6 + (uVar5 / 0xc) * 4 +
                          ((uint)((ulonglong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffff8);
  this->UnitsStart = pbVar6;
  iVar3 = 0;
  *(undefined8 *)(this->Indx2Units + 0xc) = 0x3834302c2824201c;
  *(undefined8 *)(this->Indx2Units + 0x14) = 0x5854504c4844403c;
  this->Indx2Units[0x1c] = '\\';
  this->Indx2Units[0x1d] = '`';
  this->Indx2Units[0x1e] = 'd';
  this->Indx2Units[0x1f] = 'h';
  this->Indx2Units[0x20] = 'l';
  pbVar6 = this->Indx2Units + 0x25;
  this->Indx2Units[0x21] = 'p';
  this->Indx2Units[0x22] = 't';
  this->Indx2Units[0x23] = 'x';
  this->Indx2Units[0x24] = '|';
  this->Indx2Units[0x25] = 0x80;
  this->GlueCount = '\0';
  do {
    if ((int)(uint)this->Indx2Units[iVar3] <= iVar4) {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
    pbVar6 = pbVar6 + 1;
    *pbVar6 = (byte)iVar3;
  } while (iVar4 != 0x80);
  return;
}


