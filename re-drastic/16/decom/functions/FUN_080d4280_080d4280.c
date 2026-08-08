/*
 * Ghidra decompilation
 *
 * Function : FUN_080d4280
 * Address  : 080d4280
 * Program  : drastic16
 */


undefined4 FUN_080d4280(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_14;
  int local_10;
  byte *local_c;
  
  *(uint *)(param_2 + 0x4a84) = (uint)param_1[1];
  local_c = *(byte **)(param_1 + 2);
  iVar2 = FUN_080d28ec(param_2 + 0x4a70);
  if (iVar2 < *(int *)(param_2 + 0x4a84)) {
    local_14 = (uint)local_c[1];
    if (iVar2 < (int)local_14) {
      *(uint *)(param_2 + 0x4a80) = local_14;
      uVar1 = *(int *)(param_2 + 0x4a80) * 2;
      uVar5 = *(uint *)(param_2 + 0x4a84);
      uVar6 = uVar5;
      if (uVar1 <= uVar5) {
        uVar6 = 0;
      }
      uVar3 = (undefined)uVar6;
      if (uVar5 < uVar1) {
        uVar3 = 1;
      }
      *(undefined *)(param_2 + 0xa6d) = uVar3;
      *(uint *)(param_2 + 0x664) = *(int *)(param_2 + 0x664) + (uint)*(byte *)(param_2 + 0xa6d);
      *(byte **)(param_2 + 0x650) = local_c;
      *(char *)(*(int *)(param_2 + 0x650) + 1) = (char)(local_14 + 4);
      param_1[1] = param_1[1] + 4;
      if (0x7c < local_14 + 4) {
        FUN_080c4f4c(param_1,param_2);
      }
      *(undefined4 *)(param_2 + 0x4a7c) = 0;
      uVar4 = 1;
    }
    else if (*(int *)(param_2 + 0x650) == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined *)(param_2 + 0xa6d) = 0;
      local_10 = *param_1 - 1;
      do {
        pbVar7 = local_c + 6;
        local_14 = local_14 + local_c[7];
        if (iVar2 < (int)local_14) {
          *(uint *)(param_2 + 0x4a80) = local_14;
          *(uint *)(param_2 + 0x4a7c) = *(int *)(param_2 + 0x4a80) - (uint)local_c[7];
          FUN_080d41bc(param_1,param_2,pbVar7);
          return 1;
        }
        local_10 = local_10 + -1;
        local_c = pbVar7;
      } while (local_10 != 0);
      *(undefined *)(param_2 + 0xa6e) =
           *(undefined *)(param_2 + (uint)**(byte **)(param_2 + 0x650) + 0x96c);
      *(uint *)(param_2 + 0x4a7c) = local_14;
      *(undefined *)(param_2 + (uint)*pbVar7 + 0x66c) = *(undefined *)(param_2 + 0xa6c);
      *(uint *)(param_2 + 0x654) = (uint)*param_1;
      local_10 = *(int *)(param_2 + 0x654) + -1;
      *(undefined4 *)(param_2 + 0x650) = 0;
      do {
        local_c = local_c + -6;
        *(undefined *)(param_2 + (uint)*local_c + 0x66c) = *(undefined *)(param_2 + 0xa6c);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      *(undefined4 *)(param_2 + 0x4a80) = *(undefined4 *)(param_2 + 0x4a84);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


