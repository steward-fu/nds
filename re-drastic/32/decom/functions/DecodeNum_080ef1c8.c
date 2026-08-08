/*
 * Ghidra decompilation
 *
 * Function : DecodeNum
 * Address  : 080ef1c8
 * Program  : drastic
 */


/* DWARF original prototype: uint DecodeNum(Unpack * this, uint Num, uint StartPos, uint * DecTab,
   uint * PosTab) */

uint __thiscall Unpack::DecodeNum(Unpack *this,uint Num,uint StartPos,uint *DecTab,uint *PosTab)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = Num & 0xfff0;
  if (uVar5 < *DecTab) {
    BitInput::faddbits(&this->Inp,StartPos);
    uVar3 = 0;
  }
  else {
    puVar2 = DecTab;
    iVar1 = 0;
    do {
      iVar4 = iVar1;
      puVar2 = puVar2 + 1;
      StartPos = StartPos + 1;
      iVar1 = iVar4 + 1;
    } while (*puVar2 <= uVar5);
    BitInput::faddbits(&this->Inp,StartPos);
    uVar3 = DecTab[iVar4];
  }
  return PosTab[StartPos] + (uVar5 - uVar3 >> (0x10 - StartPos & 0xff));
}


