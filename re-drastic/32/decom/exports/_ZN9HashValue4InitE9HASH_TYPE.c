/*
 * Ghidra decompilation
 *
 * Function : _ZN9HashValue4InitE9HASH_TYPE
 * Address  : 080e91f8
 * Program  : drastic
 */


/* DWARF original prototype: void Init(HashValue * this, HASH_TYPE Type) */

void __thiscall HashValue::Init(HashValue *this,HASH_TYPE Type)

{
  undefined4 uVar1;
  
  this->Type = Type;
  uVar1 = Init::lexical_block_0::EmptyHash._4_4_;
  if (Type + ~HASH_NONE < 2) {
    (this->field_1).CRC32 = 0;
  }
  else if (Type == HASH_BLAKE2) {
    (this->field_1).CRC32 = Init::lexical_block_0::EmptyHash._0_4_;
    *(undefined4 *)((int)&this->field_1 + 4) = uVar1;
    uVar1 = Init::lexical_block_0::EmptyHash._12_4_;
    *(undefined4 *)((int)&this->field_1 + 8) = Init::lexical_block_0::EmptyHash._8_4_;
    *(undefined4 *)((int)&this->field_1 + 0xc) = uVar1;
    uVar1 = Init::lexical_block_0::EmptyHash._20_4_;
    *(undefined4 *)((int)&this->field_1 + 0x10) = Init::lexical_block_0::EmptyHash._16_4_;
    *(undefined4 *)((int)&this->field_1 + 0x14) = uVar1;
    uVar1 = Init::lexical_block_0::EmptyHash._28_4_;
    *(undefined4 *)((int)&this->field_1 + 0x18) = Init::lexical_block_0::EmptyHash._24_4_;
    *(undefined4 *)((int)&this->field_1 + 0x1c) = uVar1;
    return;
  }
  return;
}


