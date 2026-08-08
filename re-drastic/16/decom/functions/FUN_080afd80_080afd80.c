/*
 * Ghidra decompilation
 *
 * Function : FUN_080afd80
 * Address  : 080afd80
 * Program  : drastic16
 */


undefined4 FUN_080afd80(wchar_t *param_1,int param_2,int param_3,undefined *param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  uint local_18;
  int local_14;
  
  pwVar1 = wcschr(param_1,L'\xfffe');
  if (pwVar1 == (wchar_t *)0x0) {
    uVar4 = 0;
  }
  else {
    *param_4 = 1;
    local_14 = 0;
    local_18 = 0;
    while (sVar3 = __ctype_get_mb_cur_max(), local_18 < param_3 - sVar3) {
      if (param_1[local_14] == L'\0') {
        *(undefined *)(param_2 + local_18) = 0;
        break;
      }
      if (param_1[local_14] == L'\xfffe') {
        local_14 = local_14 + 1;
      }
      else if (((uint)param_1[local_14] < 0xe080) || (0xe0ff < (uint)param_1[local_14])) {
        wctomb((char *)0x0,L'\0');
        iVar2 = wctomb((char *)(param_2 + local_18),param_1[local_14]);
        if (iVar2 == -1) {
          *param_4 = 0;
        }
        local_14 = local_14 + 1;
        mblen((char *)0x0,0);
        sVar3 = __ctype_get_mb_cur_max();
        iVar2 = mblen((char *)(param_2 + local_18),sVar3);
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        local_18 = local_18 + iVar2;
      }
      else {
        *(char *)(param_2 + local_18) = (char)param_1[local_14];
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


