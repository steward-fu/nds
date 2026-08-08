/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4f00
 * Address  : 080b4f00
 * Program  : drastic16
 */


byte * FUN_080b4f00(byte *param_1,int param_2,byte *param_3,uint param_4,int param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 1;
  bVar1 = *param_3;
  pbVar4 = param_1;
  while ((local_c < param_4 && (local_10 < param_6))) {
    if (*(int *)(param_1 + 8) == 0) {
      param_1[4] = param_3[local_c];
      *(undefined4 *)(param_1 + 8) = 8;
      local_c = local_c + 1;
    }
    switch((int)(uint)param_1[4] >> 6) {
    case 0:
      *(uint *)(param_5 + local_10 * 4) = (uint)param_3[local_c];
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      break;
    case 1:
      *(uint *)(param_5 + local_10 * 4) = (uint)param_3[local_c] + (uint)bVar1 * 0x100;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      break;
    case 2:
      *(uint *)(param_5 + local_10 * 4) =
           (uint)param_3[local_c] + (uint)param_3[local_c + 1] * 0x100;
      pbVar4 = param_3;
      local_10 = local_10 + 1;
      local_c = local_c + 2;
      break;
    case 3:
      uVar5 = local_c + 1;
      bVar2 = param_3[local_c];
      if ((bVar2 & 0x80) == 0) {
        local_14 = bVar2 + 2;
        for (; (local_c = uVar5, 0 < local_14 && (local_10 < param_6)); local_10 = local_10 + 1) {
          *(uint *)(param_5 + local_10 * 4) = (uint)*(byte *)(param_2 + local_10);
          local_14 = local_14 + -1;
        }
      }
      else {
        local_c = local_c + 2;
        bVar3 = param_3[uVar5];
        local_14 = (bVar2 & 0x7f) + 2;
        for (; (0 < local_14 && (local_10 < param_6)); local_10 = local_10 + 1) {
          *(uint *)(param_5 + local_10 * 4) =
               ((uint)*(byte *)(param_2 + local_10) + (uint)bVar3 & 0xff) + (uint)bVar1 * 0x100;
          local_14 = local_14 + -1;
        }
      }
    }
    param_1[4] = param_1[4] << 2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -2;
  }
  if (local_10 < param_6) {
    iVar6 = local_10 << 2;
  }
  else {
    iVar6 = (param_6 + 0x3fffffff) * 4;
  }
  *(undefined4 *)(param_5 + iVar6) = 0;
  return pbVar4;
}


