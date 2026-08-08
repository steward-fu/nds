/*
 * Ghidra decompilation
 *
 * Function : FUN_080a6ff4
 * Address  : 080a6ff4
 * Program  : drastic16
 */


void FUN_080a6ff4(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined auStack_28 [16];
  wchar_t *local_18;
  int local_14;
  
  if (*(char *)(*(int *)(param_1 + 0x72f4) + 0xc256) == '\0') {
    FUN_0809f120(auStack_28);
    iVar1 = FUN_080a62c4(param_1,auStack_28);
    if (iVar1 != 0) {
      local_14 = FUN_0809f0b8(auStack_28);
      pwVar2 = (wchar_t *)FUN_0809f21c(auStack_28,0);
      pwVar2 = wcschr(pwVar2,L'\x1a');
      local_18 = pwVar2;
      if (pwVar2 != (wchar_t *)0x0) {
        iVar1 = FUN_0809f21c(auStack_28,0);
        local_14 = (int)pwVar2 - iVar1 >> 2;
      }
      FUN_080a6080(&DAT_080ed7cc);
      uVar3 = FUN_0809f21c(auStack_28,0);
      FUN_080b6a60(uVar3,local_14);
    }
    FUN_0809f0e0(auStack_28);
  }
  return;
}


