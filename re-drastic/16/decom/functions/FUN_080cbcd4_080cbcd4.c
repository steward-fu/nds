/*
 * Ghidra decompilation
 *
 * Function : FUN_080cbcd4
 * Address  : 080cbcd4
 * Program  : drastic16
 */


undefined4 FUN_080cbcd4(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined auStack_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_1c = FUN_080d518c(param_1);
  if (local_1c == 0xffffffff) {
    return 0;
  }
  local_14 = (local_1c & 7) + 1;
  if (local_14 == 7) {
    local_20 = FUN_080d518c(param_1);
    if (local_20 == -1) {
      return 0;
    }
    local_14 = local_20 + 7;
  }
  else if (local_14 == 8) {
    local_24 = FUN_080d518c(param_1);
    if (local_24 == -1) {
      return 0;
    }
    local_28 = FUN_080d518c(param_1);
    if (local_28 == -1) {
      return 0;
    }
    local_14 = local_24 * 0x100 + local_28;
  }
  FUN_080a6110(auStack_3c,local_14);
  local_18 = 0;
  do {
    if (local_14 <= local_18) {
      uVar2 = FUN_080a609c(auStack_3c,0);
      uVar2 = FUN_080cbea8(param_1,local_1c,uVar2,local_14);
LAB_080cbe74:
      FUN_080a60d0(auStack_3c);
      return uVar2;
    }
    local_2c = FUN_080d518c(param_1);
    if (local_2c == -1) {
      uVar2 = 0;
      goto LAB_080cbe74;
    }
    puVar1 = (undefined *)FUN_080a609c(auStack_3c,local_18);
    *puVar1 = (char)local_2c;
    local_18 = local_18 + 1;
  } while( true );
}


