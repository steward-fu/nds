/*
 * Ghidra decompilation
 *
 * Function : FUN_080c3af8
 * Address  : 080c3af8
 * Program  : drastic16
 */


undefined4 FUN_080c3af8(wchar_t *param_1,wchar_t *param_2,undefined param_3)

{
  char cVar1;
  undefined uVar2;
  DIR *pDVar3;
  int *piVar4;
  undefined4 *puVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  wchar_t awStack_4018 [2048];
  wchar_t awStack_2018 [2048];
  wchar_t *local_18;
  dirent64 *local_14;
  
  *(undefined *)(param_2 + 0x80b) = 0;
  if (*param_1 != L'\0') {
    if (*(char *)(param_1 + 0x800) != '\0') {
      FUN_080a0620(awStack_2018,param_1,0x800);
      FUN_080a157c(awStack_2018);
      if (awStack_2018[0] == L'\0') {
        wcscpy(awStack_2018,L".");
      }
      FUN_080afbc8(awStack_2018,awStack_4018,0x800);
      pDVar3 = opendir((char *)awStack_4018);
      param_1[0x801] = (wchar_t)pDVar3;
      if (param_1[0x801] == L'\0') {
        piVar4 = __errno_location();
        iVar9 = *piVar4;
        bVar10 = iVar9 == 2;
        if (bVar10) {
          iVar9 = 0;
        }
        uVar2 = (undefined)iVar9;
        if (!bVar10) {
          uVar2 = 1;
        }
        *(undefined *)(param_2 + 0x80b) = uVar2;
        return 0;
      }
    }
    while (local_14 = readdir64((DIR *)param_1[0x801]), local_14 != (dirent64 *)0x0) {
      iVar9 = strcmp(local_14->d_name,".");
      if ((iVar9 != 0) && (iVar9 = strcmp(local_14->d_name,".."), iVar9 != 0)) {
        cVar1 = FUN_080afc9c(local_14->d_name,awStack_4018,0x800);
        if (cVar1 != '\x01') {
          FUN_080a85d8(0,&DAT_080ee448,awStack_4018);
        }
        iVar9 = FUN_080e0618(param_1,awStack_4018,0);
        if (iVar9 != 0) {
          wcscpy(awStack_2018,param_1);
          puVar5 = (undefined4 *)FUN_080a0c2c(awStack_2018);
          *puVar5 = 0;
          sVar6 = wcslen(awStack_2018);
          sVar7 = wcslen(awStack_4018);
          if (0x7fe < sVar6 + sVar7) {
            return 0;
          }
          wcscat(awStack_2018,awStack_4018);
          cVar1 = FUN_080c40a4(awStack_2018,param_2,param_3);
          if (cVar1 == '\x01') {
            wcscpy(param_2,awStack_2018);
            param_2[0x80a] = L'\0';
            uVar2 = FUN_080a5890(param_2[0x802]);
            *(undefined *)(param_2 + 0x803) = uVar2;
            uVar2 = FUN_080a5924(param_2[0x802]);
            *(undefined *)((int)param_2 + 0x200d) = uVar2;
            *(undefined *)(param_1 + 0x800) = 0;
            local_18 = (wchar_t *)FUN_080a0c2c(param_2);
            iVar9 = wcscmp(local_18,L".");
            if ((iVar9 != 0) && (iVar9 = wcscmp(local_18,L".."), iVar9 != 0)) {
              return 1;
            }
            uVar8 = FUN_080c3af8(param_1,param_2,0);
            return uVar8;
          }
          FUN_080b70ec(&DAT_081cd0a0,0,awStack_2018);
        }
      }
    }
  }
  return 0;
}


