/*
 * Ghidra decompilation
 *
 * Function : FUN_08060f08
 * Address  : 08060f08
 * Program  : drastic16
 */


undefined4 FUN_08060f08(char *param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  undefined auStack_18 [12];
  
  __s1 = strrchr(param_1,0x2e);
  if (__s1 == (char *)0x0) {
LAB_08060ff0:
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 != 0) {
      iVar1 = strcasecmp(__s1,".zip");
      if (iVar1 == 0) {
        iVar1 = FUN_08095e94(param_1,&DAT_080e8920,auStack_18,0,0,0);
      }
      else {
        iVar1 = strcasecmp(__s1,".7z");
        if (iVar1 == 0) {
          iVar1 = FUN_08095488(param_1,&DAT_080e8920,auStack_18,0,0,0);
        }
        else {
          iVar1 = strcasecmp(__s1,".rar");
          if (iVar1 != 0) goto LAB_08060ff0;
          iVar1 = FUN_08096ddc(param_1,&DAT_080e8920,auStack_18,0,0,0);
        }
      }
      if (iVar1 != 0) goto LAB_08060ff0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


