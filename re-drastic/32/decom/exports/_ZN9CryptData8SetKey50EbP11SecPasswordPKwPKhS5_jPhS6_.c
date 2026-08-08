/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey50EbP11SecPasswordPKwPKhS5_jPhS6_
 * Address  : 080df7cc
 * Program  : drastic
 */


/* DWARF original prototype: void SetKey50(CryptData * this, bool Encrypt, SecPassword * Password,
   wchar * PwdW, byte * Salt, byte * InitV, uint Lg2Cnt, byte * HashKey, byte * PswCheck) */

void __thiscall
CryptData::SetKey50(CryptData *this,bool Encrypt,SecPassword *Password,wchar *PwdW,byte *Salt,
                   byte *InitV,uint Lg2Cnt,byte *HashKey,byte *PswCheck)

{
  if (Lg2Cnt < 0x19) {
    SetKey50(this,Encrypt,Password,PwdW,Salt,InitV,Lg2Cnt,HashKey,PswCheck);
    return;
  }
  return;
}


