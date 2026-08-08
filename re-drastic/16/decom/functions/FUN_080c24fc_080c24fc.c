/*
 * Ghidra decompilation
 *
 * Function : FUN_080c24fc
 * Address  : 080c24fc
 * Program  : drastic16
 */


undefined FUN_080c24fc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined auStack_201c [8195];
  char local_19;
  int local_18;
  undefined local_11;
  
  local_11 = 1;
  local_18 = *(int *)(param_2 + 0x125c8);
  if (local_18 == 0x50) {
    FUN_080c2b2c(param_4,1);
  }
  if (((local_18 == 0x45) || (local_18 == 0x58)) && (*(char *)(param_2 + 0xc4c9) != '\x01')) {
    cVar1 = FUN_080dff48(param_2,param_4,param_1 + 0x64ec,0x800,*(undefined4 *)(param_2 + 0xc234),
                         &local_19,*(undefined4 *)(param_3 + 0xa480),
                         *(undefined4 *)(param_3 + 0xa484),param_3 + 0xa460,1);
    if ((cVar1 != '\x01') && (local_11 = 0, local_19 != '\x01')) {
      FUN_080b713c(&DAT_081cd0a0,param_3 + 0x18,param_1 + 0x64ec);
      FUN_080b7220(&DAT_081cd0a0,9);
      *(undefined4 *)(param_2 + 0x125a8) = 0x10;
      cVar1 = FUN_080a1c78(param_1 + 0x64ec);
      if (cVar1 != '\x01') {
        FUN_080a85d8(param_3 + 0x18,&DAT_080ee230);
        FUN_080a0620(auStack_201c,param_1 + 0x64ec,0x800);
        FUN_080a1d7c(param_1 + 0x64ec,1);
        FUN_080a52ac(param_1 + 0x64ec,1);
        iVar2 = FUN_080dff48(param_2,param_4,param_1 + 0x64ec,0x800,
                             *(undefined4 *)(param_2 + 0xc234),&local_19,
                             *(undefined4 *)(param_3 + 0xa480),*(undefined4 *)(param_3 + 0xa484),
                             param_3 + 0xa460,1);
        if (iVar2 == 0) {
          FUN_080b713c(&DAT_081cd0a0,param_3 + 0x18,param_1 + 0x64ec);
        }
        else {
          FUN_080a85d8(param_3 + 0x18,&DAT_080ee230,auStack_201c,param_1 + 0x64ec);
          local_11 = 1;
        }
      }
    }
  }
  return local_11;
}


