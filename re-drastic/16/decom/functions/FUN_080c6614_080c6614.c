/*
 * Ghidra decompilation
 *
 * Function : FUN_080c6614
 * Address  : 080c6614
 * Program  : drastic16
 */


int * FUN_080c6614(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined4 local_44;
  byte local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  piVar2 = param_1;
  if (*(char *)(param_2 + 0xb) != '\x01') {
    *(undefined *)(param_2 + 0xb) = 1;
    piVar2 = (int *)FUN_080d0760(param_1,param_2 + 1,param_2 + 6,param_2 + 0xc);
    if ((((uint)piVar2 ^ 1) & 0xff) != 0) {
      *(undefined *)(param_2 + 0x12b4) = 1;
      return piVar2;
    }
  }
  if (param_2[9] + param_2[6] < param_2[1]) {
    *(undefined *)(param_2 + 0x12b4) = 1;
    return piVar2;
  }
  param_2[0x12b6] = 0;
  local_18 = param_2[8] + param_2[6] + -1;
  local_1c = param_2[0x12b3] + -0x10;
  local_20 = local_1c;
  if (local_18 < local_1c) {
    local_20 = local_18;
  }
  do {
    if (local_20 <= param_2[1]) {
      if (local_18 < param_2[1]) {
        return piVar2;
      }
      if ((param_2[1] == local_18) && (param_2[7] <= param_2[2])) {
        return piVar2;
      }
      if (((local_1c <= param_2[1]) && (*(char *)((int)param_2 + 0x4ad2) != '\x01')) ||
         (param_2[0x12b3] <= param_2[1])) {
        *(undefined *)((int)param_2 + 0x4ad3) = 1;
        return piVar2;
      }
    }
    if (param_2[0x12b7] - 8U < (uint)param_2[0x12b6]) {
      param_2[0x12b7] = param_2[0x12b7] << 1;
      pvVar3 = realloc((void *)param_2[0x12b5],param_2[0x12b7] * 0xc);
      param_2[0x12b5] = (int)pvVar3;
      if (param_2[0x12b5] == 0) {
        FUN_080b6efc(&DAT_081cd0a0);
      }
    }
    iVar5 = param_2[0x12b6];
    param_2[0x12b6] = iVar5 + 1;
    local_24 = (undefined4 *)(param_2[0x12b5] + iVar5 * 0xc);
    local_28 = (int *)FUN_080d4ef0(param_1,param_2 + 1,param_2 + 0xc);
    piVar2 = local_28;
    if (local_28 < (int *)0x100) {
      if ((((uint)param_2[0x12b6] < 2) || (local_2c = local_24 + -3, *local_2c != 0)) ||
         (2 < *(ushort *)(local_24 + -2))) {
        *local_24 = 0;
        *(char *)(local_24 + 2) = (char)local_28;
        *(undefined2 *)(local_24 + 1) = 0;
      }
      else {
        *(short *)(local_24 + -2) = *(short *)(local_24 + -2) + 1;
        *(char *)((int)local_2c + *(ushort *)(local_24 + -2) + 8) = (char)local_28;
        param_2[0x12b6] = param_2[0x12b6] + -1;
        piVar2 = local_2c;
      }
    }
    else if (local_28 < (int *)0x106) {
      if (local_28 == (int *)0x100) {
        FUN_080ce88c(param_1,param_2 + 1,local_54);
        *local_24 = 4;
        *(ushort *)(local_24 + 1) = (ushort)local_54[0];
        local_24[2] = local_50;
        iVar5 = param_2[0x12b6];
        param_2[0x12b6] = iVar5 + 1;
        puVar6 = (undefined4 *)(param_2[0x12b5] + iVar5 * 0xc);
        *puVar6 = 4;
        *(ushort *)(puVar6 + 1) = (ushort)local_48;
        puVar6[2] = local_4c;
        iVar5 = param_2[0x12b6];
        param_2[0x12b6] = iVar5 + 1;
        local_24 = (undefined4 *)(param_2[0x12b5] + iVar5 * 0xc);
        *local_24 = 4;
        *(ushort *)(local_24 + 1) = (ushort)local_40;
        local_24[2] = local_44;
        piVar2 = param_2;
      }
      else if (local_28 == (int *)0x101) {
        *local_24 = 2;
      }
      else if (local_28 < (int *)0x106) {
        *local_24 = 3;
        local_24[2] = (int)local_28 + -0x102;
        local_38 = FUN_080d4ef0(param_1,param_2 + 1,param_2 + 0xb3d);
        piVar2 = (int *)FUN_080d50c8(param_1,param_2 + 1,local_38);
        *(short *)(local_24 + 1) = (short)piVar2;
        local_3c = piVar2;
      }
    }
    else {
      local_c = FUN_080d50c8(param_1,param_2 + 1,(int)local_28 + -0x106);
      local_14 = 1;
      piVar2 = (int *)FUN_080d4ef0(param_1,param_2 + 1,param_2 + 0x3c7);
      if (piVar2 < (int *)0x4) {
        local_10 = 0;
        piVar1 = piVar2;
      }
      else {
        local_10 = ((uint)piVar2 >> 1) - 1;
        piVar1 = (int *)(((uint)piVar2 & 1 | 2) << (local_10 & 0xff));
      }
      local_14 = local_14 + (int)piVar1;
      local_30 = piVar2;
      if (local_10 != 0) {
        if (local_10 < 4) {
          uVar4 = FUN_080d2350(param_2 + 1);
          local_14 = local_14 + (uVar4 >> (0x20 - local_10 & 0xff));
          piVar2 = (int *)FUN_080d2234(param_2 + 1,local_10);
        }
        else {
          if (4 < local_10) {
            uVar4 = FUN_080d2350(param_2 + 1);
            local_14 = local_14 + (uVar4 >> (0x24 - local_10 & 0xff)) * 0x10;
            FUN_080d2234(param_2 + 1,local_10 - 4);
          }
          piVar2 = (int *)FUN_080d4ef0(param_1,param_2 + 1,param_2 + 0x782);
          local_14 = local_14 + (int)piVar2;
          local_34 = piVar2;
        }
      }
      iVar5 = local_c;
      if (((0x100 < local_14) && (iVar5 = local_c + 1, 0x2000 < local_14)) &&
         (iVar5 = local_c + 2, 0x40000 < local_14)) {
        iVar5 = local_c + 3;
      }
      local_c = iVar5;
      *local_24 = 1;
      *(short *)(local_24 + 1) = (short)local_c;
      local_24[2] = local_14;
    }
  } while( true );
}


