/*
 * Ghidra decompilation
 *
 * Function : FUN_080affb8
 * Address  : 080affb8
 * Program  : drastic16
 */


void FUN_080affb8(int param_1,int param_2,uint param_3,undefined *param_4)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  int local_18;
  
  *param_4 = 0;
  bVar1 = false;
  local_18 = 0;
  local_1c = 0;
  while( true ) {
    if (param_3 <= local_1c) {
      return;
    }
    if (*(char *)(param_1 + local_18) == '\0') break;
    mbtowc((wchar_t *)0x0,(char *)0x0,0);
    sVar2 = __ctype_get_mb_cur_max();
    iVar3 = mbtowc((wchar_t *)(param_2 + local_1c * 4),(char *)(param_1 + local_18),sVar2);
    if (iVar3 == -1) {
      if (-1 < *(char *)(param_1 + local_18)) {
        return;
      }
      if (!bVar1) {
        uVar4 = local_1c + 1;
        *(undefined4 *)(param_2 + local_1c * 4) = 0xfffe;
        bVar1 = true;
        local_1c = uVar4;
        if (param_3 <= uVar4) {
          return;
        }
      }
      *(uint *)(param_2 + local_1c * 4) = *(byte *)(param_1 + local_18) + 0xe000;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    }
    else {
      mblen((char *)0x0,0);
      sVar2 = __ctype_get_mb_cur_max();
      iVar3 = mblen((char *)(param_1 + local_18),sVar2);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      local_18 = local_18 + iVar3;
      local_1c = local_1c + 1;
    }
  }
  *(undefined4 *)(param_2 + local_1c * 4) = 0;
  *param_4 = 1;
  return;
}


