/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f80c
 * Address  : 0809f80c
 * Program  : drastic16
 */


undefined4 FUN_0809f80c(int param_1,wchar_t **param_2)

{
  uint uVar1;
  wchar_t *__s;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar1 = FUN_0809f0b8(param_1);
  if (uVar4 < uVar1) {
    __s = (wchar_t *)FUN_0809f21c(param_1,*(undefined4 *)(param_1 + 0x10));
    iVar5 = *(int *)(param_1 + 0x10);
    sVar2 = wcslen(__s);
    *(size_t *)(param_1 + 0x10) = iVar5 + sVar2 + 1;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = __s;
    }
    uVar3 = 1;
  }
  else {
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = (wchar_t *)0x0;
    }
    uVar3 = 0;
  }
  return uVar3;
}


