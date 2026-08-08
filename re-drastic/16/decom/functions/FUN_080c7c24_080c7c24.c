/*
 * Ghidra decompilation
 *
 * Function : FUN_080c7c24
 * Address  : 080c7c24
 * Program  : drastic16
 */


void FUN_080c7c24(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  uint local_c;
  
  *(undefined4 *)(param_1 + 0x5778) = 0;
  local_10 = FUN_080e2c58(param_1 + 4);
  if (*(int *)(param_1 + 0x5780) == 2) {
    FUN_080e2c30(param_1 + 4,1);
    if (0x7fff < local_10) {
      FUN_080c9484(param_1,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
      return;
    }
    local_10 = local_10 << 1;
    *(undefined4 *)(param_1 + 0x5780) = 0;
  }
  if (*(uint *)(param_1 + 0x5768) < 0x25) {
    local_c = 0;
    while( true ) {
      if (local_c == 1) {
        uVar3 = *(int *)(param_1 + 0x5774) + 3;
      }
      else {
        uVar3 = *(uint *)(&DAT_0810201c + local_c * 4);
      }
      if (((*(uint *)(&DAT_08101fe0 + local_c * 4) ^ local_10 >> 8) & ~(0xff >> (uVar3 & 0xff))) ==
          0) break;
      local_c = local_c + 1;
    }
    if (local_c == 1) {
      iVar4 = *(int *)(param_1 + 0x5774) + 3;
    }
    else {
      iVar4 = *(int *)(&DAT_0810201c + local_c * 4);
    }
    FUN_080e2c30(param_1 + 4,iVar4);
  }
  else {
    local_c = 0;
    while( true ) {
      if (local_c == 3) {
        uVar3 = *(int *)(param_1 + 0x5774) + 3;
      }
      else {
        uVar3 = *(uint *)(&DAT_08102098 + local_c * 4);
      }
      if (((*(uint *)(&DAT_0810205c + local_c * 4) ^ local_10 >> 8) & ~(0xff >> (uVar3 & 0xff))) ==
          0) break;
      local_c = local_c + 1;
    }
    if (local_c == 3) {
      iVar4 = *(int *)(param_1 + 0x5774) + 3;
    }
    else {
      iVar4 = *(int *)(&DAT_08102098 + local_c * 4);
    }
    FUN_080e2c30(param_1 + 4,iVar4);
  }
  if (local_c < 9) {
    *(undefined4 *)(param_1 + 0x5780) = 0;
    *(uint *)(param_1 + 0x5768) = *(int *)(param_1 + 0x5768) + local_c;
    *(uint *)(param_1 + 0x5768) = *(int *)(param_1 + 0x5768) - (*(uint *)(param_1 + 0x5768) >> 4);
    uVar2 = FUN_080e2c58(param_1 + 4);
    uVar3 = FUN_080c9578(param_1,uVar2,5,&DAT_08101ef0,&DAT_08101f10);
    uVar3 = uVar3 & 0xff;
    uVar1 = *(ushort *)(param_1 + (uVar3 + 0x272c) * 2 + 2);
    if (uVar3 != 0) {
      *(undefined2 *)(param_1 + (uVar3 + 0x272c) * 2 + 2) =
           *(undefined2 *)(param_1 + (uVar3 + 0x272b) * 2 + 2);
      *(ushort *)(param_1 + (uVar3 + 0x272b) * 2 + 2) = uVar1;
    }
    iVar5 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar5 + 1;
    iVar4 = uVar1 + 1;
    *(int *)(param_1 + (iVar5 + 0x14) * 4 + 4) = iVar4;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 3;
    *(uint *)(param_1 + 0x68) = local_c + 2;
    *(int *)(param_1 + 0x6c) = iVar4;
    FUN_080c9484(param_1,iVar4,local_c + 2);
  }
  else if (local_c == 9) {
    *(int *)(param_1 + 0x5780) = *(int *)(param_1 + 0x5780) + 1;
    FUN_080c9484(param_1,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  }
  else if (local_c == 0xe) {
    *(undefined4 *)(param_1 + 0x5780) = 0;
    uVar2 = FUN_080e2c58(param_1 + 4);
    iVar4 = FUN_080c9578(param_1,uVar2,3,&DAT_08101de8,&DAT_08101e10);
    uVar3 = FUN_080e2c58(param_1 + 4);
    uVar3 = uVar3 >> 1 | 0x8000;
    FUN_080e2c30(param_1 + 4,0xf);
    *(int *)(param_1 + 0x68) = iVar4 + 5;
    *(uint *)(param_1 + 0x6c) = uVar3;
    FUN_080c9484(param_1,uVar3,iVar4 + 5);
  }
  else {
    *(undefined4 *)(param_1 + 0x5780) = 0;
    uVar3 = *(uint *)(param_1 + (((*(int *)(param_1 + 100) - local_c) + 9 & 3) + 0x14) * 4 + 4);
    uVar2 = FUN_080e2c58(param_1 + 4);
    iVar4 = FUN_080c9578(param_1,uVar2,2,&DAT_08101d88,&DAT_08101db4);
    if ((iVar4 + 2 == 0x101) && (local_c == 10)) {
      *(uint *)(param_1 + 0x5774) = *(uint *)(param_1 + 0x5774) ^ 1;
    }
    else {
      local_c = iVar4 + 2;
      if (0x100 < uVar3) {
        local_c = iVar4 + 3;
      }
      if (*(uint *)(param_1 + 0x5790) <= uVar3) {
        local_c = local_c + 1;
      }
      iVar4 = *(int *)(param_1 + 100);
      *(int *)(param_1 + 100) = iVar4 + 1;
      *(uint *)(param_1 + (iVar4 + 0x14) * 4 + 4) = uVar3;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 3;
      *(uint *)(param_1 + 0x68) = local_c;
      *(uint *)(param_1 + 0x6c) = uVar3;
      FUN_080c9484(param_1,uVar3,local_c);
    }
  }
  return;
}


