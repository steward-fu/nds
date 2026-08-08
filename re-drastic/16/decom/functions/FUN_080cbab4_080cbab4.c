/*
 * Ghidra decompilation
 *
 * Function : FUN_080cbab4
 * Address  : 080cbab4
 * Program  : drastic16
 */


undefined4 FUN_080cbab4(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined extraout_var;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined auStack_2c [16];
  uint local_1c;
  int local_18;
  int local_14;
  
  local_1c = FUN_080d229c(param_1 + 4);
  local_1c = local_1c >> 8;
  FUN_080d2234(param_1 + 4,8);
  local_14 = (local_1c & 7) + 1;
  if (local_14 == 7) {
    uVar3 = FUN_080d229c(param_1 + 4);
    local_14 = (uVar3 >> 8) + 7;
    FUN_080d2234(param_1 + 4,8);
  }
  else if (local_14 == 8) {
    local_14 = FUN_080d229c(param_1 + 4);
    FUN_080d2234(param_1 + 4,0x10);
  }
  FUN_080a6110(auStack_2c,local_14);
  local_18 = 0;
  do {
    if (local_14 <= local_18) {
      uVar5 = FUN_080a609c(auStack_2c,0);
      uVar5 = FUN_080cbea8(param_1,local_1c,uVar5,local_14);
LAB_080cbca0:
      FUN_080a60d0(auStack_2c);
      return uVar5;
    }
    if (((*(int *)(param_1 + 4) < *(int *)(param_1 + 0x78) + -1) ||
        (cVar2 = FUN_080cca98(param_1), cVar2 == '\x01')) || (local_14 + -1 <= local_18)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
      goto LAB_080cbca0;
    }
    puVar4 = (undefined *)FUN_080a609c(auStack_2c,local_18);
    FUN_080d229c(param_1 + 4);
    *puVar4 = extraout_var;
    FUN_080d2234(param_1 + 4,8);
    local_18 = local_18 + 1;
  } while( true );
}


