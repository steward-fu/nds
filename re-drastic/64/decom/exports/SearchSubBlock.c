/*
 * Ghidra decompilation
 *
 * Function : SearchSubBlock
 * Address  : 001bde70
 * Program  : drastic64
 */


/* Archive::SearchSubBlock(wchar_t const*) */

long __thiscall Archive::SearchSubBlock(Archive *this,wchar_t *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0x11221] == (Archive)0x0) {
    do {
      uVar2 = (**(code **)(*(long *)this + 0x20))(this);
      *(undefined8 *)(this + 0x111f8) = uVar2;
      iVar1 = *(int *)(this + 0x11208);
      if (iVar1 == 2) {
        lVar3 = ReadHeader15();
      }
      else if (iVar1 == 3) {
        lVar3 = ReadHeader50();
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        lVar3 = ReadHeader14();
      }
      if (lVar3 == 0) {
        return 0;
      }
      if (*(long *)(this + 0x11200) <= *(long *)(this + 0x111f8)) {
        this[0x11220] = (Archive)0x1;
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
        return 0;
      }
      if (*(int *)(this + 0x7624) == 5) {
        return 0;
      }
      if ((*(int *)(this + 0x7624) == 3) &&
         (iVar1 = wcscmp((wchar_t *)(this + 0xcae8),param_1), iVar1 == 0)) {
        return lVar3;
      }
      SeekToNext();
    } while (this[0x11221] == (Archive)0x0);
  }
  return 0;
}


