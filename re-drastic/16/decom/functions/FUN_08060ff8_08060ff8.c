/*
 * Ghidra decompilation
 *
 * Function : FUN_08060ff8
 * Address  : 08060ff8
 * Program  : drastic16
 */


undefined4 FUN_08060ff8(char *param_1)

{
  char *__s1;
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint local_a0 [2];
  int local_98;
  int local_94;
  int local_8c;
  undefined4 local_78;
  int local_6c;
  uint local_68;
  int iStack_64;
  int iStack_60;
  
  __s1 = strrchr(param_1,0x2e);
  if (__s1 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcasecmp(__s1,".nds");
  if (iVar1 == 0) {
    __stream = fopen(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      return 0;
    }
    fseek(__stream,0,2);
    local_a0[0] = ftell(__stream);
    fseek(__stream,0,0);
    if (local_a0[0] < 0x80) {
      fclose(__stream);
      return 0;
    }
    sVar2 = fread(&local_98,1,0x80,__stream);
    if (sVar2 != 0x80) {
      fclose(__stream);
      return 0;
    }
    fclose(__stream);
  }
  else {
    iVar1 = strcasecmp(__s1,".zip");
    if (iVar1 == 0) {
      iVar1 = FUN_08095e94(param_1,&DAT_080e8920,local_a0,&local_98,0x80,0);
    }
    else {
      iVar1 = strcasecmp(__s1,".7z");
      if (iVar1 == 0) {
        iVar1 = FUN_08095488(param_1,&DAT_080e8920,local_a0,&local_98,0x80,0);
      }
      else {
        iVar1 = strcasecmp(__s1,".rar");
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = FUN_08096ddc(param_1,&DAT_080e8920,local_a0,&local_98,0x80,0);
      }
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  if (local_8c == 0x23232323) {
    return 1;
  }
  if ((local_6c - 1U < 0x3bfe00) && (0x7fff < local_68)) {
    uVar3 = iStack_64 + 0xfe000000;
    bVar5 = 0x3bfdff < uVar3;
    bVar4 = uVar3 == 0x3bfe00;
    if (0x3bfe00 < uVar3) {
      bVar5 = 0xfdff < iStack_64 + 0xfc808000U;
      bVar4 = iStack_64 + 0xfc808000U == 0xfe00;
    }
    if (!bVar5 || bVar4) {
      uVar3 = iStack_60 + 0xfe000000;
      bVar5 = 0x3bfdff < uVar3;
      bVar4 = uVar3 == 0x3bfe00;
      if (0x3bfe00 < uVar3) {
        bVar5 = 0xfdff < iStack_60 + 0xfc808000U;
        bVar4 = iStack_60 + 0xfc808000U == 0xfe00;
      }
      if ((!bVar5 || bVar4) &&
         (iVar1 = FUN_08060d5c(param_1,local_a0,&local_98,0x10,local_78), iVar1 == 0)) {
        if (local_94 != -0x18002101 || local_98 != -0x18002101) {
          return 2;
        }
        return 3;
      }
    }
  }
  return 0;
}


