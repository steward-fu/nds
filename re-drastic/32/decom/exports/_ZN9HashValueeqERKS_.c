/*
 * Ghidra decompilation
 *
 * Function : _ZN9HashValueeqERKS_
 * Address  : 080e9264
 * Program  : drastic
 */


/* DWARF original prototype: bool operator==(HashValue * this, HashValue * cmp) */

bool __thiscall HashValue::operator==(HashValue *this,HashValue *cmp)

{
  int iVar1;
  HASH_TYPE HVar2;
  HASH_TYPE HVar3;
  
  HVar2 = this->Type;
  if ((HVar2 == HASH_NONE) || (HVar3 = cmp->Type, HVar3 == HASH_NONE)) {
    return true;
  }
  if (HVar2 == HASH_RAR14) {
    if (HVar3 == HASH_RAR14) goto LAB_080e92f0;
  }
  else {
    if (HVar2 != HASH_CRC32) {
      if (HVar3 != HASH_BLAKE2 || HVar2 != HASH_BLAKE2) {
        return false;
      }
      iVar1 = memcmp(&this->field_1,&cmp->field_1,0x20);
      return iVar1 == 0;
    }
    if (HVar3 == HASH_CRC32) {
LAB_080e92f0:
      return (this->field_1).CRC32 == (cmp->field_1).CRC32;
    }
  }
  return false;
}


