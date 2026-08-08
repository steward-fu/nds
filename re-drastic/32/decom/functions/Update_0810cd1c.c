/*
 * Ghidra decompilation
 *
 * Function : Update
 * Address  : 0810cd1c
 * Program  : drastic
 */


/* DWARF original prototype: void Update(Blake2ThreadData * this) */

void __thiscall Blake2ThreadData::Update(Blake2ThreadData *this)

{
  byte *in;
  uint uVar1;
  size_t inlen__;
  byte *in__;
  
  in = this->in;
  for (uVar1 = this->inlen; 0x1ff < uVar1; uVar1 = uVar1 - 0x200) {
    blake2s_update(this->S,in,0x40);
    in = in + 0x200;
  }
  return;
}


