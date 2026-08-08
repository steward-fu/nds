/*
 * Ghidra decompilation
 *
 * Function : FUN_080c8974
 * Address  : 080c8974
 * Program  : drastic16
 */


void FUN_080c8974(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_14;
  
  uVar3 = FUN_080e2c58(param_1 + 4);
  if (*(uint *)(param_1 + 0x5760) < 0x7600) {
    if (*(uint *)(param_1 + 0x5760) < 0x5e00) {
      if (*(uint *)(param_1 + 0x5760) < 0x3600) {
        if (*(uint *)(param_1 + 0x5760) < 0xe00) {
          local_14 = FUN_080c9578(param_1,uVar3,4,&DAT_08101e44,&DAT_08101e68);
        }
        else {
          local_14 = FUN_080c9578(param_1,uVar3,5,&DAT_08101e9c,&DAT_08101ebc);
        }
      }
      else {
        local_14 = FUN_080c9578(param_1,uVar3,5,&DAT_08101ef0,&DAT_08101f10);
      }
    }
    else {
      local_14 = FUN_080c9578(param_1,uVar3,6,&DAT_08101f44,&DAT_08101f60);
    }
  }
  else {
    local_14 = FUN_080c9578(param_1,uVar3,8,&DAT_08101f94,&DAT_08101fac);
  }
  local_14 = local_14 & 0xff;
  if (*(int *)(param_1 + 0x577c) == 0) {
    iVar5 = *(int *)(param_1 + 0x5778);
    *(int *)(param_1 + 0x5778) = iVar5 + 1;
    if ((iVar5 < 0x10) || (*(int *)(param_1 + 0x5784) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x577c) = 1;
    }
  }
  else {
    if ((local_14 == 0) && (0xfff < uVar3)) {
      local_14 = 0x100;
    }
    local_14 = local_14 - 1;
    if (local_14 == 0xffffffff) {
      uVar3 = FUN_080e2c58(param_1 + 4);
      FUN_080e2c30(param_1 + 4,1);
      if ((uVar3 & 0x8000) != 0) {
        *(undefined4 *)(param_1 + 0x577c) = 0;
        *(undefined4 *)(param_1 + 0x5778) = *(undefined4 *)(param_1 + 0x577c);
        return;
      }
      if ((uVar3 & 0x4000) == 0) {
        uVar6 = 3;
      }
      else {
        uVar6 = 4;
      }
      FUN_080e2c30(param_1 + 4,1);
      uVar4 = FUN_080e2c58(param_1 + 4);
      iVar5 = FUN_080c9578(param_1,uVar4,5,&DAT_08101ef0,&DAT_08101f10);
      uVar3 = FUN_080e2c58(param_1 + 4);
      FUN_080e2c30(param_1 + 4,5);
      FUN_080c9484(param_1,iVar5 << 5 | uVar3 >> 0xb,uVar6);
      return;
    }
  }
  *(uint *)(param_1 + 0x5760) = *(int *)(param_1 + 0x5760) + local_14;
  *(uint *)(param_1 + 0x5760) = *(int *)(param_1 + 0x5760) - (*(uint *)(param_1 + 0x5760) >> 8);
  *(int *)(param_1 + 0x5788) = *(int *)(param_1 + 0x5788) + 0x10;
  if (0xff < *(uint *)(param_1 + 0x5788)) {
    *(undefined4 *)(param_1 + 0x5788) = 0x90;
    *(uint *)(param_1 + 0x578c) = *(uint *)(param_1 + 0x578c) >> 1;
  }
  iVar5 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar5 + 1;
  *(char *)(*(int *)(param_1 + 0x4b34) + iVar5) =
       (char)((ushort)*(undefined2 *)(param_1 + (local_14 + 0x262c) * 2 + 2) >> 8);
  iVar5 = *(int *)(param_1 + 0x4c40);
  *(int *)(param_1 + 0x4c40) = iVar5 + -1;
  *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(iVar5 == 0);
  while( true ) {
    uVar7 = (uint)*(ushort *)(param_1 + (local_14 + 0x262c) * 2 + 2);
    uVar3 = uVar7 + 1;
    uVar7 = uVar7 & 0xff;
    bVar1 = *(byte *)(param_1 + uVar7 + 0x545a);
    *(byte *)(param_1 + uVar7 + 0x545a) = bVar1 + 1;
    if ((uVar3 & 0xff) < 0xa2) break;
    FUN_080c9388(param_1,param_1 + 0x4c5a,param_1 + 0x545a);
  }
  *(undefined2 *)(param_1 + (local_14 + 0x262c) * 2 + 2) =
       *(undefined2 *)(param_1 + (bVar1 + 0x262c) * 2 + 2);
  *(short *)(param_1 + (bVar1 + 0x262c) * 2 + 2) = (short)uVar3;
  return;
}


