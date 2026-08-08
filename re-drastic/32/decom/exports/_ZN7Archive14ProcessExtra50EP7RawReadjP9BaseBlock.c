/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14ProcessExtra50EP7RawReadjP9BaseBlock
 * Address  : 080db16c
 * Program  : drastic
 */


/* DWARF original prototype: void ProcessExtra50(Archive * this, RawRead * Raw, size_t ExtraSize,
   BaseBlock * bb) */

void __thiscall Archive::ProcessExtra50(Archive *this,RawRead *Raw,size_t ExtraSize,BaseBlock *bb)

{
  uint uVar1;
  size_t ExtraStart;
  
  uVar1 = Raw->DataSize - ExtraSize;
  if (Raw->ReadPos <= uVar1) {
    Raw->ReadPos = uVar1;
    ProcessExtra50(this,Raw,(size_t)bb,bb);
    return;
  }
  return;
}


