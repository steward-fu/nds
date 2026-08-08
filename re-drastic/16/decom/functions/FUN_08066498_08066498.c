/*
 * Ghidra decompilation
 *
 * Function : FUN_08066498
 * Address  : 08066498
 * Program  : drastic16
 */


void FUN_08066498(undefined4 *param_1)

{
  void *__s;
  void *__s_00;
  char *pcVar1;
  undefined4 uVar2;
  int local_24 [2];
  
  FUN_08077374(0);
  if (param_1[7] != 0) {
    if (param_1[8] == 0) {
      uVar2 = 200;
    }
    else {
      uVar2 = 0x24;
    }
    FUN_080776fc(param_1[7],uVar2,0x30,400,0x96);
  }
  if (param_1[8] == 0) {
    uVar2 = 0x204;
  }
  else {
    uVar2 = 0x160;
  }
  FUN_080771a0();
  FUN_08076bb8("Version r2.3.0.0p",0xffff,0,uVar2,0xd1);
  FUN_080771b4();
  if (param_1[8] != 0) {
    if ((*(int *)(param_1[2] + 0x1c) == 0) && (*(int *)(param_1[2] + 0x10) == 3)) {
      local_24[0] = FUN_08060484(*param_1,*(undefined4 *)(param_1[1] + 0x458));
      FUN_080771a0();
      if (local_24[0] == 0) {
        FUN_08076bb8("(No savestate)",0xffff,0,0x220,0xe9);
      }
      else {
        __s = malloc(0x18000);
        __s_00 = malloc(0x18000);
        pcVar1 = ctime(local_24);
        memset(__s,0,0x18000);
        memset(__s_00,0,0x18000);
        FUN_08060414(*param_1,*(undefined4 *)(param_1[1] + 0x458),__s,__s_00,1);
        FUN_080776fc(__s,0x1d8,0x30,0x100,0xc0);
        FUN_080776fc(__s_00,0x1d8,0xf0,0x100,0xc0);
        FUN_08076bb8(pcVar1,0xffff,0,0x1dc,0x19c);
        free(__s);
        free(__s_00);
      }
      FUN_080771b4();
    }
    else {
      FUN_080776fc(param_1[5],0x1d8,0x30,0x100,0xc0);
      FUN_080776fc(param_1[6],0x1d8,0xf0,0x100,0xc0);
    }
  }
  return;
}


