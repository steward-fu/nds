/*
 * Ghidra decompilation
 *
 * Function : GetStringA
 * Address  : 001b4210
 * Program  : drastic64
 */


/* StringList::GetStringA(char*, unsigned long) */

undefined8 __thiscall StringList::GetStringA(StringList *this,char *param_1,ulong param_2)

{
  wchar_t *__s;
  wchar_t *__ptr;
  size_t sVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    __ptr = (wchar_t *)0x0;
    uVar3 = *(ulong *)(this + 0x20);
    if (*(ulong *)(this + 8) <= uVar3) {
      return 0;
    }
  }
  else {
    uVar3 = param_2;
    if (param_2 < 0x20) {
      uVar3 = 0x20;
    }
    __ptr = (wchar_t *)malloc(uVar3 << 2);
    if (__ptr == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
      uVar3 = *(ulong *)(this + 0x20);
      if (*(ulong *)(this + 8) <= uVar3) {
        return 0;
      }
    }
    else {
      uVar3 = *(ulong *)(this + 0x20);
      if (*(ulong *)(this + 8) <= uVar3) {
        uVar2 = 0;
        goto LAB_001b42a4;
      }
    }
  }
  __s = (wchar_t *)(*(long *)this + uVar3 * 4);
  sVar1 = wcslen(__s);
  *(ulong *)(this + 0x20) = uVar3 + sVar1 + 1;
                    /* try { // try from 001b4288 to 001b429b has its CatchHandler @ 001b4320 */
  wcsncpyz(__ptr,__s,param_2);
  WideToChar(__ptr,param_1,param_2);
  uVar2 = 1;
  if (__ptr == (wchar_t *)0x0) {
    return 1;
  }
LAB_001b42a4:
  free(__ptr);
  return uVar2;
}


