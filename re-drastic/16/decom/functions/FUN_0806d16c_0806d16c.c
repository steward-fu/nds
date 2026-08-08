/*
 * Ghidra decompilation
 *
 * Function : FUN_0806d16c
 * Address  : 0806d16c
 * Program  : drastic16
 */


undefined4 FUN_0806d16c(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  int local_38;
  uint *local_34;
  int local_30;
  uint local_2c;
  ushort local_22;
  short local_20;
  byte local_1b;
  
  iVar8 = *(int *)(param_1 + 0x2084);
  local_38 = iVar8 + 0x1420018;
  local_1b = 0;
  local_2c = param_2;
  if (*(char *)(param_1 + 0x2104) == '\x01') {
    local_1b = 8;
    if (param_2 < 0xffff0000) {
      iVar4 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
      goto joined_r0x0806d358;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
joined_r0x0806d358:
    if ((0x1ffffff < param_2) &&
       (iVar4 = (**(code **)(iVar4 + 0x24))(*(undefined4 *)(param_1 + 0x802384),iVar4,param_2),
       iVar4 == 0)) {
      uVar3 = 0;
      goto LAB_0806d290;
    }
  }
  FUN_0806b4e0(&local_38,param_1,param_3);
  FUN_0806991c(param_1 + 0x2084,&local_38,param_3);
  if ((local_20 != 0) && ((*(uint *)(local_30 + 0xc) & 0xfffffffe) == local_2c)) {
    uVar10 = 0;
    uVar7 = 0;
    uVar5 = *(ushort *)(local_30 + 0x18) + 1;
    puVar9 = local_34;
    do {
      uVar7 = uVar7 + 1;
      puVar1 = puVar9 + 4;
      puVar9 = puVar9 + 7;
      uVar10 = uVar10 | *(ushort *)puVar1;
    } while (uVar7 < uVar5);
    uVar7 = 0;
    uVar6 = ~uVar10 & 0x7fff;
    puVar9 = local_34;
    do {
      if ((*(byte *)((int)puVar9 + 0x16) & 4) != 0) goto LAB_0806d21c;
      uVar2 = *(ushort *)((int)puVar9 + 0xe);
      if (uVar2 == (uVar2 & uVar6)) {
        if (0xdfffffff < *puVar9) {
          uVar6 = uVar6 | *(ushort *)(puVar9 + 4);
        }
      }
      else if ((uVar2 & uVar10) != 0) goto LAB_0806d21c;
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 7;
    } while (uVar7 < uVar5);
    local_1b = local_1b | 4;
  }
LAB_0806d21c:
  FUN_08069a54(param_1,param_2,(uint)local_22 << 1);
  iVar4 = *(int *)(iVar8 + 0x14a001c);
  *(uint *)(iVar8 + 0x142001c + (iVar4 + 0x18000) * 4) = param_2 | param_3;
  *(int *)(iVar8 + 0x14a001c) = iVar4 + 1;
  FUN_0806cf4c(param_1,&local_38,param_3);
  *(int *)(iVar8 + 0x14a001c) = *(int *)(iVar8 + 0x14a001c) + -1;
  FUN_08069828(&local_38);
  uVar3 = FUN_0808892c(&local_38,param_1,param_2,param_3);
LAB_0806d290:
  free(local_34);
  return uVar3;
}


