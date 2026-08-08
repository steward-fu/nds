/*
 * Ghidra decompilation
 *
 * Function : FUN_080c8330
 * Address  : 080c8330
 * Program  : drastic16
 */


void FUN_080c8330(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  *(undefined4 *)(param_1 + 0x5778) = 0;
  *(int *)(param_1 + 0x578c) = *(int *)(param_1 + 0x578c) + 0x10;
  if (0xff < *(uint *)(param_1 + 0x578c)) {
    *(undefined4 *)(param_1 + 0x578c) = 0x90;
    *(uint *)(param_1 + 0x5788) = *(uint *)(param_1 + 0x5788) >> 1;
  }
  uVar4 = *(uint *)(param_1 + 0x576c);
  uVar2 = FUN_080e2c58(param_1 + 4);
  if (*(uint *)(param_1 + 0x576c) < 0x7a) {
    if (*(uint *)(param_1 + 0x576c) < 0x40) {
      if (uVar2 < 0x100) {
        FUN_080e2c30(param_1 + 4,0x10);
        local_14 = uVar2;
      }
      else {
        for (local_14 = 0; (uVar2 << (local_14 & 0xff) & 0x8000) == 0; local_14 = local_14 + 1) {
        }
        FUN_080e2c30(param_1 + 4,local_14 + 1);
      }
    }
    else {
      local_14 = FUN_080c9578(param_1,uVar2,2,&DAT_08101d88,&DAT_08101db4);
    }
  }
  else {
    local_14 = FUN_080c9578(param_1,uVar2,3,&DAT_08101de8,&DAT_08101e10);
  }
  *(uint *)(param_1 + 0x576c) = *(int *)(param_1 + 0x576c) + local_14;
  *(uint *)(param_1 + 0x576c) = *(int *)(param_1 + 0x576c) - (*(uint *)(param_1 + 0x576c) >> 5);
  uVar3 = FUN_080e2c58(param_1 + 4);
  if (*(uint *)(param_1 + 0x5764) < 0x2900) {
    if (*(uint *)(param_1 + 0x5764) < 0x700) {
      local_18 = FUN_080c9578(param_1,uVar3,4,&DAT_08101e44,&DAT_08101e68);
    }
    else {
      local_18 = FUN_080c9578(param_1,uVar3,5,&DAT_08101e9c,&DAT_08101ebc);
    }
  }
  else {
    local_18 = FUN_080c9578(param_1,uVar3,5,&DAT_08101ef0,&DAT_08101f10);
  }
  *(uint *)(param_1 + 0x5764) = *(int *)(param_1 + 0x5764) + local_18;
  *(uint *)(param_1 + 0x5764) = *(int *)(param_1 + 0x5764) - (*(uint *)(param_1 + 0x5764) >> 8);
  while( true ) {
    uVar5 = (uint)*(ushort *)(param_1 + ((local_18 & 0xff) + 0x282c) * 2 + 2);
    uVar2 = uVar5 + 1;
    uVar5 = uVar5 & 0xff;
    bVar1 = *(byte *)(param_1 + uVar5 + 0x555a);
    *(byte *)(param_1 + uVar5 + 0x555a) = bVar1 + 1;
    if ((uVar2 & 0xff) != 0) break;
    FUN_080c9388(param_1,param_1 + 0x505a,param_1 + 0x555a);
  }
  *(undefined2 *)(param_1 + (local_18 + 0x282c) * 2 + 2) =
       *(undefined2 *)(param_1 + (bVar1 + 0x282c) * 2 + 2);
  *(short *)(param_1 + (bVar1 + 0x282c) * 2 + 2) = (short)uVar2;
  uVar5 = FUN_080e2c58(param_1 + 4);
  uVar2 = (uVar2 & 0xff00 | uVar5 >> 8) >> 1;
  FUN_080e2c30(param_1 + 4,7);
  uVar5 = *(uint *)(param_1 + 0x5770);
  if ((local_14 != 1) && (local_14 != 4)) {
    if ((local_14 == 0) && (uVar2 <= *(uint *)(param_1 + 0x5790))) {
      *(int *)(param_1 + 0x5770) = *(int *)(param_1 + 0x5770) + 1;
      *(uint *)(param_1 + 0x5770) = *(int *)(param_1 + 0x5770) - (*(uint *)(param_1 + 0x5770) >> 8);
    }
    else if (*(int *)(param_1 + 0x5770) != 0) {
      *(int *)(param_1 + 0x5770) = *(int *)(param_1 + 0x5770) + -1;
    }
  }
  iVar6 = local_14 + 3;
  if (*(uint *)(param_1 + 0x5790) <= uVar2) {
    iVar6 = local_14 + 4;
  }
  local_14 = iVar6;
  if (uVar2 < 0x101) {
    local_14 = local_14 + 8;
  }
  if ((uVar5 < 0xb1) && ((*(uint *)(param_1 + 0x5760) < 0x2a00 || (0x3f < uVar4)))) {
    *(undefined4 *)(param_1 + 0x5790) = 0x2001;
  }
  else {
    *(undefined4 *)(param_1 + 0x5790) = 0x7f00;
  }
  iVar6 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 100) = iVar6 + 1;
  *(uint *)(param_1 + (iVar6 + 0x14) * 4 + 4) = uVar2;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 3;
  *(uint *)(param_1 + 0x68) = local_14;
  *(uint *)(param_1 + 0x6c) = uVar2;
  FUN_080c9484(param_1,uVar2,local_14);
  return;
}


