/*
 * Ghidra decompilation
 *
 * Function : update_cheat_listing
 * Address  : 00182210
 * Program  : drastic64
 */


undefined4 update_cheat_listing(char *param_1)

{
  int iVar1;
  FILE *__stream;
  ulong uVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x440);
  __stream = fopen(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"ERROR: Couldn\'t open cheat database file (%s) for update.\n",param_1);
  }
  else {
    iVar1 = fseek(__stream,(ulong)*(uint *)(lVar5 + 8),0);
    if (iVar1 == 0) {
      uVar2 = ftell(__stream);
      if (uVar2 == *(uint *)(lVar5 + 8)) {
        sVar3 = fwrite(*(void **)(param_1 + 0x448),(ulong)*(uint *)(lVar5 + 0xc),1,__stream);
        if (sVar3 == 1) {
          fclose(__stream);
          set_active_cheats(param_1);
          return 0;
        }
        puts("ERROR: Couldn\'t update cheat database file.");
        fclose(__stream);
        return 0xffffffff;
      }
      pcVar4 = "ERROR: Sek cheat database file (%s) went to wrong location.\n";
    }
    else {
      pcVar4 = "ERROR: Couldn\'t seek cheat database file (%s) for update.\n";
    }
    __printf_chk(1,pcVar4,param_1);
    fclose(__stream);
  }
  return 0xffffffff;
}


