/*
 * Ghidra decompilation
 *
 * Function : FUN_080c6dc0
 * Address  : 080c6dc0
 * Program  : drastic16
 */


undefined4 FUN_080c6dc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined local_34 [4];
  int local_30;
  int local_2c;
  undefined local_28;
  int local_24;
  undefined local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  int *local_c;
  
  local_c = *(int **)(param_2 + 0x4ad4);
  local_18 = (int *)(*(int *)(param_2 + 0x4ad4) + *(int *)(param_2 + 0x4ad8) * 0xc);
  do {
    if (local_18 <= local_c) {
      return 1;
    }
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
    if (((*(int *)(param_1 + 0x4b30) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)) <
         0x1004) && (*(int *)(param_1 + 0x4b30) != *(int *)(param_1 + 0x70))) {
      FUN_080cece4(param_1);
      iVar2 = *(int *)(param_1 + 0x4c54);
      iVar1 = *(int *)(param_1 + 0x4c44);
      bVar4 = *(uint *)(param_1 + 0x4c40) < *(uint *)(param_1 + 0x4c50);
      if ((int)(iVar1 - (iVar2 + (uint)bVar4)) < 0 !=
          (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)bVar4))) {
        return 0;
      }
    }
    if (*local_c == 0) {
      for (local_10 = 0; local_10 <= *(ushort *)(local_c + 1); local_10 = local_10 + 1) {
        uVar3 = *(uint *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = uVar3 + 1;
        *(undefined *)(*(int *)(param_1 + 0x4b34) + (uVar3 & *(uint *)(param_1 + 0xe6f8))) =
             *(undefined *)((int)local_c + local_10 + 8);
      }
    }
    else if (*local_c == 1) {
      FUN_080d4b84(param_1,local_c[2]);
      *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(local_c + 1);
      FUN_080d4be0(param_1,*(undefined2 *)(local_c + 1),local_c[2]);
    }
    else if (*local_c == 3) {
      local_1c = *(undefined4 *)(param_1 + (local_c[2] + 0x14) * 4 + 4);
      for (local_14 = local_c[2]; local_14 != 0; local_14 = local_14 + -1) {
        *(undefined4 *)(param_1 + (local_14 + 0x14) * 4 + 4) =
             *(undefined4 *)(param_1 + (local_14 + 0x13) * 4 + 4);
      }
      *(undefined4 *)(param_1 + 0x54) = local_1c;
      *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(local_c + 1);
      FUN_080d4be0(param_1,*(undefined2 *)(local_c + 1),local_1c);
    }
    else if (*local_c == 2) {
      if (*(int *)(param_1 + 0x68) != 0) {
        FUN_080d4be0(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x54));
      }
    }
    else if (*local_c == 4) {
      local_34[0] = (undefined)*(undefined2 *)(local_c + 1);
      local_30 = local_c[2];
      local_28 = (undefined)*(undefined2 *)(local_c + 4);
      local_2c = local_c[5];
      local_20 = (undefined)*(undefined2 *)(local_c + 7);
      local_24 = local_c[8];
      local_c = local_c + 6;
      FUN_080cea1c(param_1,local_34);
    }
    local_c = local_c + 3;
  } while( true );
}


