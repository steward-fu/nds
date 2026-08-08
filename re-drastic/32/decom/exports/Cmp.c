/*
 * Ghidra decompilation
 *
 * Function : Cmp
 * Address  : 080e96b4
 * Program  : drastic
 */


/* DWARF original prototype: bool Cmp(DataHash * this, HashValue * CmpValue, byte * Key) */

bool __thiscall DataHash::Cmp(DataHash *this,HashValue *CmpValue,byte *Key)

{
  int iVar1;
  bool bVar2;
  HASH_TYPE HVar3;
  int iVar4;
  HashValue Final;
  
  iVar1 = __stack_chk_guard;
  Final.Type = this->HashType;
  if (Final.Type == HASH_RAR14) {
    Final.field_1.CRC32 = this->CurCRC32;
    if (Key != (byte *)0x0) goto LAB_080e9724;
LAB_080e973c:
    HVar3 = CmpValue->Type;
    if (HVar3 == HASH_NONE) {
LAB_080e9794:
      bVar2 = true;
      goto LAB_080e9798;
    }
    if (Final.Type != HASH_RAR14) {
      if (Final.Type != HASH_CRC32) {
        if (Final.Type == HASH_BLAKE2 && HVar3 == HASH_BLAKE2) {
          iVar4 = memcmp(&Final.field_1,&CmpValue->field_1,0x20);
          bVar2 = iVar4 == 0;
        }
        else {
          bVar2 = false;
        }
        goto LAB_080e9798;
      }
      goto LAB_080e97cc;
    }
    if (HVar3 == HASH_RAR14) goto LAB_080e97e4;
  }
  else {
    if (Final.Type != HASH_CRC32) {
      if (Final.Type == HASH_BLAKE2) {
        Result(this,&Final);
      }
      if (Key != (byte *)0x0) goto LAB_080e9724;
LAB_080e9730:
      if (Final.Type != HASH_NONE) goto LAB_080e973c;
      goto LAB_080e9794;
    }
    Final.field_1.CRC32 = ~this->CurCRC32;
    if (Key != (byte *)0x0) {
LAB_080e9724:
      ConvertHashToMAC(&Final,Key);
      goto LAB_080e9730;
    }
    HVar3 = CmpValue->Type;
    if (HVar3 == HASH_NONE) goto LAB_080e9794;
LAB_080e97cc:
    if (HVar3 == HASH_CRC32) {
LAB_080e97e4:
      bVar2 = Final.field_1.CRC32 == (CmpValue->field_1).CRC32;
      goto LAB_080e9798;
    }
  }
  bVar2 = false;
LAB_080e9798:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


