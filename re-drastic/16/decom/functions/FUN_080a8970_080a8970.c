/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8970
 * Address  : 080a8970
 * Program  : drastic16
 */


int FUN_080a8970(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x10ead) == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined8 *)(param_1 + 0x43a2) = uVar3;
    iVar1 = param_1[0x43a6];
    if (iVar1 == 2) {
      local_c = FUN_080a8f44(param_1);
    }
    else if (iVar1 == 3) {
      local_c = FUN_080abd68(param_1);
    }
    else if (iVar1 == 1) {
      local_c = FUN_080ae5d8(param_1);
    }
    if (local_c != 0) {
      iVar1 = param_1[0x43a5];
      iVar2 = param_1[0x43a3];
      if ((int)(iVar2 - (iVar1 + (uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4]))) < 0 ==
          (SBORROW4(iVar2,iVar1) !=
          SBORROW4(iVar2 - iVar1,(uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4])))) {
        FUN_080a8ea8(param_1);
        local_c = 0;
      }
    }
  }
  else {
    local_c = 0;
  }
  return local_c;
}


