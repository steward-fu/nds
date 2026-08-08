/*
 * Ghidra decompilation
 *
 * Function : FUN_080d04e8
 * Address  : 080d04e8
 * Program  : drastic16
 */


undefined4 FUN_080d04e8(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  byte extraout_var;
  byte extraout_var_00;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_10;
  int local_c;
  
  param_3[3] = 0;
  if (((*(char *)(param_2 + 2) == '\x01') || (*param_2 <= *(int *)(param_1 + 0x78) + -7)) ||
     (cVar1 = FUN_080ceb2c(param_1), cVar1 == '\x01')) {
    FUN_080e2c30(param_2,-param_2[1] & 7);
    FUN_080e2c58(param_2);
    FUN_080e2c30(param_2,8);
    uVar4 = (int)(uint)extraout_var >> 3 & 3;
    uVar5 = uVar4 + 1;
    if (uVar5 == 4) {
      uVar3 = 0;
    }
    else {
      param_3[3] = uVar4 + 3;
      param_3[1] = (extraout_var & 7) + 1;
      FUN_080e2c58(param_2);
      FUN_080e2c30(param_2,8);
      local_c = 0;
      for (local_10 = 0; local_10 < uVar5; local_10 = local_10 + 1) {
        uVar4 = FUN_080e2c58(param_2);
        local_c = local_c + ((uVar4 >> 8) << ((local_10 & 0x1f) << 3));
        FUN_080d2234(param_2,8);
      }
      *param_3 = local_c;
      if ((byte)((byte)local_c ^ extraout_var ^ (byte)((uint)local_c >> 8) ^
                 (byte)((uint)local_c >> 0x10) ^ 0x5a) == extraout_var_00) {
        param_3[2] = *param_2;
        iVar2 = param_3[2] + *param_3 + -1;
        if (*(int *)(param_1 + 0x7c) <= iVar2) {
          iVar2 = *(int *)(param_1 + 0x7c);
        }
        *(int *)(param_1 + 0x7c) = iVar2;
        *(bool *)(param_3 + 4) = (extraout_var & 0x40) != 0;
        *(byte *)((int)param_3 + 0x11) = extraout_var >> 7;
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


