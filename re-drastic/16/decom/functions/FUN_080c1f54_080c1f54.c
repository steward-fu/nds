/*
 * Ghidra decompilation
 *
 * Function : FUN_080c1f54
 * Address  : 080c1f54
 * Program  : drastic16
 */


undefined4 FUN_080c1f54(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined local_288 [128];
  int local_208 [128];
  
  cVar1 = FUN_080af900(param_2 + 0xa024);
  if (cVar1 != '\x01') {
    if (*(int *)(param_2 + 0x125b0) != 0) {
      local_208[0] = 0;
      iVar2 = (**(code **)(param_2 + 0x125b0))(4,*(undefined4 *)(param_2 + 0x125ac),local_208,0x80);
      if (iVar2 == -1) {
        local_208[0] = 0;
      }
      if (local_208[0] == 0) {
        local_288[0] = 0;
        iVar2 = (**(code **)(param_2 + 0x125b0))
                          (2,*(undefined4 *)(param_2 + 0x125ac),local_288,0x80);
        if (iVar2 == -1) {
          local_288[0] = 0;
        }
        FUN_080a3a8c(local_288,0,local_208,0x80);
        FUN_080b7588(local_288,0x80);
      }
      FUN_080b76e8(param_2 + 0xa024,local_208);
      FUN_080b7588(local_208,0x200);
    }
    cVar1 = FUN_080af900(param_2 + 0xa024);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  memcpy((void *)(param_1 + 0x62e4),(void *)(param_2 + 0xa024),0x201);
  return 1;
}


