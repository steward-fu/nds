/*
 * Ghidra decompilation
 *
 * Function : FUN_080ad5e4
 * Address  : 080ad5e4
 * Program  : drastic16
 */


void FUN_080ad5e4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined local_288 [128];
  int local_208 [128];
  
  cVar1 = FUN_080af900(*(int *)(param_1 + 0x72f4) + 0xa024);
  if (cVar1 != '\x01') {
    if (*(int *)(*(int *)(param_1 + 0x72f4) + 0x125b0) != 0) {
      local_208[0] = 0;
      iVar2 = (**(code **)(*(int *)(param_1 + 0x72f4) + 0x125b0))
                        (4,*(undefined4 *)(*(int *)(param_1 + 0x72f4) + 0x125ac),local_208,0x80);
      if (iVar2 == -1) {
        local_208[0] = 0;
      }
      if (local_208[0] == 0) {
        local_288[0] = 0;
        iVar2 = (**(code **)(*(int *)(param_1 + 0x72f4) + 0x125b0))
                          (2,*(undefined4 *)(*(int *)(param_1 + 0x72f4) + 0x125ac),local_288,0x80);
        if (iVar2 == -1) {
          local_288[0] = 0;
        }
        FUN_080a3a8c(local_288,0,local_208,0x80);
        FUN_080b7588(local_288,0x80);
      }
      FUN_080b76e8(*(int *)(param_1 + 0x72f4) + 0xa024,local_208);
      FUN_080b7588(local_208,0x200);
    }
    cVar1 = FUN_080af900(*(int *)(param_1 + 0x72f4) + 0xa024);
    if (cVar1 != '\x01') {
      FUN_080a42dc(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x72f4) + 0x125a8) = 0x16;
      FUN_080b71f4(&DAT_081cd0a0,0xff);
    }
  }
  return;
}


