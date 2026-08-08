/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5674
 * Address  : 080b5674
 * Program  : drastic16
 */


void FUN_080b5674(undefined4 param_1,wchar_t *param_2,size_t param_3,char param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_1c;
  
  iVar2 = FUN_080a510c(param_1);
  if (iVar2 == 0) {
    if (param_4 == '\0') {
      uVar1 = 0xde00;
    }
    else {
      uVar1 = 0xddbc;
    }
    wcscpy(param_2,(wchar_t *)(uVar1 | 0x80e0000));
  }
  else {
    FUN_080b537c(param_1,&local_34);
    if (param_5 == '\0') {
      if (param_4 == '\0') {
        swprintf(param_2,param_3,L"%02u-%02u-%02u %02u:%02u",local_2c,local_30,local_34 % 100,
                 local_28,local_24);
      }
      else {
        swprintf(param_2,param_3,L"%02u-%02u-%u %02u:%02u",local_2c,local_30,local_34,local_28,
                 local_24);
      }
    }
    else {
      swprintf(param_2,param_3,L"%u-%02u-%02u %02u:%02u,%03u",local_34,local_30,local_2c,local_28,
               local_24,local_1c / 10000);
    }
  }
  return;
}


