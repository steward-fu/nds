/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4f4c
 * Address  : 080c4f4c
 * Program  : drastic16
 */


ushort * FUN_080c4f4c(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ushort uVar4;
  undefined2 uVar5;
  bool bVar6;
  char cVar7;
  ushort *puVar8;
  uint uVar9;
  ushort **ppuVar10;
  ushort **ppuVar11;
  undefined4 local_38;
  byte bStack_2f;
  ushort **local_18;
  ushort **local_14;
  int local_10;
  int local_c;
  
  uVar4 = *param_1;
  local_c = *param_1 - 1;
  puVar8 = param_1;
  for (local_18 = *(ushort ***)(param_2 + 0x650); *(ushort ***)(param_1 + 2) != local_18;
      local_18 = (ushort **)((int)local_18 + -6)) {
    puVar8 = (ushort *)FUN_080d5428(local_18,(int)local_18 + -6);
  }
  *(char *)(*(int *)(param_1 + 2) + 1) = *(char *)(*(int *)(param_1 + 2) + 1) + '\x04';
  param_1[1] = param_1[1] + 4;
  local_10 = (uint)param_1[1] - (uint)*(byte *)((int)local_18 + 1);
  uVar9 = (uint)(*(int *)(param_2 + 0x65c) != 0);
  *(char *)((int)local_18 + 1) = (char)((int)(*(byte *)((int)local_18 + 1) + uVar9) >> 1);
  param_1[1] = (ushort)*(byte *)((int)local_18 + 1);
  ppuVar10 = local_18;
  do {
    local_18 = ppuVar10;
    ppuVar10 = (ushort **)((int)local_18 + 6);
    local_10 = local_10 - (uint)*(byte *)((int)local_18 + 7);
    *(char *)((int)local_18 + 7) = (char)((int)(*(byte *)((int)local_18 + 7) + uVar9) >> 1);
    param_1[1] = param_1[1] + (ushort)*(byte *)((int)local_18 + 7);
    if (*(byte *)((int)local_18 + 1) < *(byte *)((int)local_18 + 7)) {
      puVar8 = *ppuVar10;
      uVar5 = *(undefined2 *)((int)local_18 + 10);
      ppuVar11 = ppuVar10;
      do {
        local_14 = ppuVar11;
        *local_14 = *(ushort **)((int)local_14 + -6);
        *(undefined2 *)(local_14 + 1) = *(undefined2 *)((int)local_14 + -2);
        ppuVar11 = (ushort **)((int)local_14 + -6);
        if ((ppuVar11 == *(ushort ***)(param_1 + 2)) ||
           (bStack_2f = (byte)((uint)puVar8 >> 8), bStack_2f <= *(byte *)((int)local_14 + -0xb))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      } while (bVar6);
      *ppuVar11 = puVar8;
      *(undefined2 *)((int)local_14 + -2) = uVar5;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  pcVar3 = (char *)((int)local_18 + 7);
  local_c = 0;
  local_18 = ppuVar10;
  if (*pcVar3 == '\0') {
    do {
      local_c = local_c + 1;
      pcVar3 = (char *)((int)local_18 + -5);
      local_18 = (ushort **)((int)local_18 + -6);
    } while (*pcVar3 == '\0');
    local_10 = local_10 + local_c;
    *param_1 = *param_1 - (short)local_c;
    if (*param_1 == 1) {
      local_38 = **(ushort ***)(param_1 + 2);
      uVar5 = *(undefined2 *)(*(ushort ***)(param_1 + 2) + 1);
      do {
        cVar7 = local_38._1_1_ - (char)((int)(uint)local_38._1_1_ >> 1);
        local_10 = local_10 >> 1;
      } while (1 < local_10);
      FUN_080d32f4(param_2 + 0x4a8c,*(undefined4 *)(param_1 + 2),(int)(uVar4 + 1) >> 1);
      *(ushort **)(param_2 + 0x650) = param_1 + 1;
      ppuVar10 = *(ushort ***)(param_2 + 0x650);
      *ppuVar10 = local_38;
      *(undefined2 *)(ppuVar10 + 1) = uVar5;
      return local_38;
    }
  }
  param_1[1] = param_1[1] + ((short)local_10 - (short)(local_10 >> 1));
  iVar1 = (int)(uVar4 + 1) >> 1;
  iVar2 = (int)(*param_1 + 1) >> 1;
  if (iVar1 != iVar2) {
    puVar8 = (ushort *)FUN_080d31fc(param_2 + 0x4a8c,*(undefined4 *)(param_1 + 2),iVar1,iVar2);
    *(ushort **)(param_1 + 2) = puVar8;
  }
  *(undefined4 *)(param_2 + 0x650) = *(undefined4 *)(param_1 + 2);
  return puVar8;
}


