/*
 * Ghidra decompilation
 *
 * Function : GetAutoRenamedName
 * Address  : 001ed8b0
 * Program  : drastic64
 */


/* GetAutoRenamedName(wchar_t*, unsigned long) */

undefined8 GetAutoRenamedName(wchar_t *param_1,ulong param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = wcslen(param_1);
  if (0x7f6 < sVar1) {
    return 0;
  }
  uVar2 = GetAutoRenamedName(param_1,param_2);
  return uVar2;
}


