/*
 * Ghidra decompilation
 *
 * Function : FUN_080a25a4
 * Address  : 080a25a4
 * Program  : drastic16
 */


wchar_t * FUN_080a25a4(wchar_t *param_1,wchar_t *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  wchar_t awStack_18f40 [2048];
  undefined auStack_16f40 [8200];
  wchar_t awStack_14f38 [2060];
  undefined auStack_12f08 [69281];
  char local_2067;
  wchar_t *local_1c;
  wchar_t local_18;
  wchar_t *local_14;
  
  if (param_2 != param_1) {
    wcscpy(param_2,param_1);
  }
  if (param_3 == '\0') {
    FUN_080a10c0(param_2,&DAT_080ed31c);
    local_14 = (wchar_t *)FUN_080a11bc(param_2);
  }
  else {
    local_18 = L'1';
    for (local_1c = (wchar_t *)FUN_080a17b8(param_2); local_14 = param_2, param_2 < local_1c;
        local_1c = local_1c + -1) {
      iVar3 = FUN_080a0128(*local_1c);
      if (iVar3 == 0) {
        if (local_18 == L'0') {
          local_14 = local_1c + 1;
          break;
        }
      }
      else {
        *local_1c = local_18;
        local_18 = L'0';
      }
    }
  }
  cVar2 = FUN_080a5704(param_2);
  if (cVar2 != '\x01') {
    wcscpy(awStack_18f40,param_2);
    FUN_080a10c0(awStack_18f40,&DAT_080ed380);
    FUN_080c3a24(auStack_16f40);
    FUN_080c3abc(auStack_16f40,awStack_18f40);
    FUN_080a3b4c(awStack_14f38);
    do {
      iVar3 = FUN_080c3af8(auStack_16f40,awStack_14f38,0);
      if (iVar3 == 0) break;
      FUN_080a7108(auStack_12f08,0);
      iVar3 = FUN_080a3dec(auStack_12f08,awStack_14f38,0);
      if (((iVar3 == 0) || (iVar3 = FUN_080a79e8(auStack_12f08,1), iVar3 == 0)) ||
         (local_2067 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        wcscpy(param_2,awStack_14f38);
      }
      FUN_080a7560(auStack_12f08);
    } while (!bVar1);
    FUN_080c3a74(auStack_16f40);
  }
  return local_14;
}


