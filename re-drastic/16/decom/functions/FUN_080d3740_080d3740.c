/*
 * Ghidra decompilation
 *
 * Function : FUN_080d3740
 * Address  : 080d3740
 * Program  : drastic16
 */


void FUN_080d3740(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  ushort uVar6;
  short sVar7;
  short *psVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char local_38;
  byte bStack_37;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined4 local_1c;
  ushort *local_18;
  short *local_14;
  
  uVar3 = **(undefined4 **)(param_1 + 0x650);
  local_38 = (char)uVar3;
  bStack_37 = (byte)((uint)uVar3 >> 8);
  uStack_36 = (undefined2)((uint)uVar3 >> 0x10);
  local_34 = *(undefined2 *)(*(undefined4 **)(param_1 + 0x650) + 1);
  local_14 = (short *)0x0;
  if ((bStack_37 < 0x1f) &&
     (local_18 = *(ushort **)(*(int *)(param_1 + 0x644) + 8), local_18 != (ushort *)0x0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if (*local_18 == 1) {
      local_14 = (short *)(local_18 + 1);
      *(char *)((int)local_18 + 3) =
           *(char *)((int)local_18 + 3) + (*(byte *)((int)local_18 + 3) < 0x20);
    }
    else {
      psVar8 = *(short **)(local_18 + 2);
      if (*(char *)psVar8 != local_38) {
        do {
          local_14 = psVar8;
          psVar8 = local_14 + 3;
        } while (*(char *)psVar8 != local_38);
        if (*(byte *)((int)local_14 + 1) <= *(byte *)((int)local_14 + 7)) {
          FUN_080d5428(psVar8,local_14);
          psVar8 = local_14;
        }
      }
      local_14 = psVar8;
      if (*(byte *)((int)local_14 + 1) < 0x73) {
        *(char *)((int)local_14 + 1) = *(char *)((int)local_14 + 1) + '\x02';
        local_18[1] = local_18[1] + 2;
      }
    }
  }
  if (*(int *)(param_1 + 0x65c) == 0) {
    iVar14 = *(int *)(param_1 + 0x650);
    uVar3 = FUN_080d33dc(param_1,1,local_14);
    *(undefined4 *)(iVar14 + 2) = uVar3;
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar14 + 2);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x64c);
    if (*(int *)(param_1 + 0x644) != 0) {
      return;
    }
    goto LAB_080d3ee0;
  }
  pcVar9 = *(char **)(param_1 + 0x4bdc);
  *(char **)(param_1 + 0x4bdc) = pcVar9 + 1;
  *pcVar9 = local_38;
  local_1c = *(undefined4 *)(param_1 + 0x4bdc);
  if (*(uint *)(param_1 + 0x4be8) <= *(uint *)(param_1 + 0x4bdc)) goto LAB_080d3ee0;
  if (CONCAT22(local_34,uStack_36) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x650) + 2) = local_1c;
    uStack_36 = (undefined2)*(undefined4 *)(param_1 + 0x644);
    local_34 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x644) >> 0x10);
    goto LAB_080d3a8c;
  }
  if (*(uint *)(param_1 + 0x4bdc) < CONCAT22(local_34,uStack_36)) {
LAB_080d39e0:
    bVar5 = false;
  }
  else {
    iVar14 = FUN_080d33dc(param_1,0,local_14);
    uStack_36 = (undefined2)iVar14;
    local_34 = (undefined2)((uint)iVar14 >> 0x10);
    if (iVar14 != 0) goto LAB_080d39e0;
    bVar5 = true;
  }
  if (!bVar5) {
    *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) + -1;
    if (*(int *)(param_1 + 0x65c) == 0) {
      local_1c = CONCAT22(local_34,uStack_36);
      *(uint *)(param_1 + 0x4bdc) =
           *(int *)(param_1 + 0x4bdc) -
           (uint)(*(int *)(param_1 + 0x64c) != *(int *)(param_1 + 0x644));
    }
LAB_080d3a8c:
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x644) + 2);
    uVar10 = (uint)**(ushort **)(param_1 + 0x644);
    local_18 = *(ushort **)(param_1 + 0x64c);
    do {
      if (*(ushort **)(param_1 + 0x644) == local_18) {
        *(uint *)(param_1 + 0x644) = CONCAT22(local_34,uStack_36);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(param_1 + 0x644);
        return;
      }
      uVar2 = *local_18;
      uVar11 = (uint)uVar2;
      if (uVar11 == 1) {
        puVar4 = (undefined4 *)FUN_080d2f90(param_1 + 0x4a8c,1);
        if (puVar4 == (undefined4 *)0x0) break;
        *puVar4 = *(undefined4 *)(local_18 + 1);
        *(ushort *)(puVar4 + 1) = local_18[3];
        *(undefined4 **)(local_18 + 2) = puVar4;
        if (*(byte *)((int)puVar4 + 1) < 0x1e) {
          *(char *)((int)puVar4 + 1) = *(char *)((int)puVar4 + 1) + *(char *)((int)puVar4 + 1);
        }
        else {
          *(undefined *)((int)puVar4 + 1) = 0x78;
        }
        local_18[1] = (ushort)*(byte *)((int)puVar4 + 1) + (short)*(undefined4 *)(param_1 + 0x658) +
                      (ushort)(3 < uVar10);
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_080d312c(param_1 + 0x4a8c,*(undefined4 *)(local_18 + 2),uVar2 >> 1);
          *(undefined4 *)(local_18 + 2) = uVar3;
          if (*(int *)(local_18 + 2) == 0) break;
        }
        uVar13 = uVar11 * 8;
        uVar12 = uVar13;
        if (uVar13 < local_18[1]) {
          uVar12 = 0;
        }
        uVar6 = (ushort)uVar12;
        if (local_18[1] <= uVar13) {
          uVar6 = 1;
        }
        local_18[1] = local_18[1] +
                      (ushort)(uVar11 << 1 < uVar10) +
                      ((ushort)(uVar11 * 4 <= uVar10) & uVar6 & 0xff) * 2;
      }
      uVar13 = (local_18[1] + 6) * (uint)bStack_37 * 2;
      uVar12 = (uint)local_18[1] + ((uVar1 - uVar10) - (uint)bStack_37) + 1;
      if (uVar12 * 6 < uVar13 || uVar12 * 6 - uVar13 == 0) {
        if (uVar13 < uVar12 * 9) {
          sVar7 = 4;
        }
        else {
          sVar7 = 5;
        }
        sVar7 = sVar7 + (ushort)(uVar12 * 0xc < uVar13 || uVar12 * 0xc - uVar13 == 0) +
                (ushort)(uVar12 * 0xf <= uVar13);
        local_18[1] = local_18[1] + sVar7;
      }
      else {
        if (uVar12 < uVar13) {
          sVar7 = 2;
        }
        else {
          sVar7 = 1;
        }
        sVar7 = sVar7 + (ushort)(uVar12 * 4 <= uVar13);
        local_18[1] = local_18[1] + 3;
      }
      pcVar9 = (char *)(*(int *)(local_18 + 2) + uVar11 * 6);
      *(undefined4 *)(pcVar9 + 2) = local_1c;
      *pcVar9 = local_38;
      pcVar9[1] = (char)sVar7;
      *local_18 = uVar2 + 1;
      local_18 = *(ushort **)(local_18 + 4);
    } while( true );
  }
LAB_080d3ee0:
  FUN_080c4a20(param_1);
  *(undefined *)(param_1 + 0xa6c) = 0;
  return;
}


