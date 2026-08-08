/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_block
 * Address  : 00195e20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * cpu_translate_block(long param_1,long param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  long lVar8;
  bool bVar9;
  code *pcVar10;
  uint **ppuVar11;
  byte *pbVar12;
  uint *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  undefined auStack_490 [1024];
  long local_90;
  uint *local_88;
  long lStack_80;
  uint local_70;
  long local_68;
  long lStack_60;
  int *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  char local_18;
  byte local_17;
  long local_8;
  byte *pbVar13;
  
  local_8 = ___stack_chk_guard;
  uVar3 = *(byte *)(param_1 + 0x29) | 1;
  if (param_4 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x29);
  }
  iVar5 = *(int *)(param_2 + 0x210c);
  lVar16 = *(long *)(param_2 + 0x2088);
  if (param_3 < 0x2000000 && iVar5 == 1) {
    bVar9 = true;
    piVar17 = *(int **)(nds_system + lVar16 + 0xf24010);
    lVar15 = *(long *)(nds_system + lVar16 + 0xf24018);
  }
  else if (param_3 >> 0x18 == 2) {
    bVar9 = false;
    piVar17 = *(int **)(nds_system + lVar16 + 0xf24000);
    lVar15 = *(long *)(nds_system + lVar16 + 0xf24008);
  }
  else {
    bVar9 = false;
    piVar17 = *(int **)(nds_system + lVar16 + 0xf24020);
    lVar15 = *(long *)(nds_system + lVar16 + 0xf24028);
  }
  local_30 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = piVar17 + 1;
  local_4c = 0;
  local_18 = (char)iVar5;
  local_17 = (byte)param_4;
  if ((*(char *)(param_1 + 0x2a) == '\0') && (local_4c = 2, iVar5 != 1)) {
    local_4c = 4;
  }
  uVar7 = *(ushort *)(param_1 + 0x20);
  if (uVar7 == 0) {
    lStack_80 = lVar15 + -0x18;
    local_70 = 0;
  }
  else {
    local_70 = 0;
    pbVar13 = (byte *)(*(long *)(param_1 + 8) + 0x1a);
    do {
      pbVar12 = pbVar13 + 0x20;
      local_70 = local_70 + (*pbVar13 >> 2 & 1);
      pbVar13 = pbVar12;
    } while ((byte *)(*(long *)(param_1 + 8) + 0x3a + (ulong)(uVar7 - 1) * 0x20) != pbVar12);
    lStack_80 = lVar15 + -0x18 + (ulong)local_70 * -4;
  }
  piVar4 = (int *)((long)piVar17 + 7);
  if (-1 < (long)piVar1) {
    piVar4 = piVar1;
  }
  piVar17[1] = (-(int)((long)piVar4 >> 2) & 0x3fffU) << 5 | 0x36f8000c;
  local_88 = (uint *)(piVar17 + 3);
  if (local_18 == '\x01') {
    pcVar10 = recompiler_cpu_next_action_arm9_to_arm7;
  }
  else {
    pcVar10 = recompiler_cpu_next_action_arm7_to_event_update;
  }
  lVar8 = (long)pcVar10 - (long)(piVar17 + 2);
  lVar18 = lVar8 + 3;
  if (-1 < lVar8) {
    lVar18 = lVar8;
  }
  piVar17[2] = (uint)lVar18 >> 2 & 0x3ffffff | 0x94000000;
  piVar17[1] = ((uint)((long)local_88 - (long)piVar1 >> 2) & 0x3fff) << 5 | 0x36f8000c;
  uVar19 = param_3;
  local_90 = lVar16;
  local_68 = lStack_80;
  lStack_60 = lStack_80;
  local_58 = piVar1;
  local_50 = param_3;
  local_40 = param_1;
  local_28 = param_2;
  if (uVar7 != 0) {
    lVar18 = 0;
    do {
      local_38 = *(long *)(param_1 + 8) + lVar18 * 0x20;
      uVar2 = local_4c + (uint)*(byte *)(local_38 + 0x1b) * 2;
      if (*(int *)(param_2 + 0x210c) == 1) {
        uVar2 = local_4c + *(int *)(nds_system + *(long *)(local_28 + 0x2258) + 0x362e988) +
                (uint)*(byte *)(local_38 + 0x1b);
      }
      *(uint **)(local_38 + 8) = local_88;
      *(ushort *)(local_38 + 0x16) =
           *(ushort *)(local_38 + 0x14) |
           *(ushort *)(local_38 + 0x16) | *(ushort *)(local_38 + 0x12);
      local_4c = uVar2;
      if ((short)*(ushort *)(local_38 + 0x14) < 0) {
        puVar14 = local_88 + 1;
        if (0x1000 < uVar2) {
          puVar14 = local_88 + 2;
          *local_88 = (uVar2 >> 0xc) << 10 | 0x5140018c;
          local_88 = local_88 + 1;
        }
        *local_88 = (uVar2 & 0xfff) << 10 | 0x5100018c;
        local_4c = 0;
        local_88 = puVar14;
      }
      uVar2 = uVar19 + 2;
      uVar19 = uVar19 + 4;
      if (param_4 != 0) {
        uVar19 = uVar2;
      }
      local_48 = uVar19;
      cpu_translate_instruction(auStack_490);
      lVar18 = lVar18 + 1;
    } while ((uint)lVar18 < (uint)*(ushort *)(param_1 + 0x20));
  }
  bVar6 = *(byte *)(param_1 + 0x2a);
  if (bVar6 == 3) {
    puVar14 = local_88 + 1;
    if (0x1000 < local_4c) {
      puVar14 = local_88 + 2;
      *local_88 = (local_4c >> 0xc) << 10 | 0x5140018c;
      local_88 = local_88 + 1;
    }
    *local_88 = (local_4c & 0xfff) << 10 | 0x5100018c;
    local_4c = 0;
    local_88 = puVar14;
    cpu_translate_direct_link(auStack_490);
  }
  else {
    if (bVar6 < 4) {
      if (1 < (byte)(bVar6 - 1)) goto LAB_0019613c;
      cpu_translate_set_imm32_isra_0(&local_88,0,local_17 | uVar19);
      pcVar10 = block_indirect_branch;
    }
    else {
      if (bVar6 != 4) goto LAB_0019613c;
      cpu_translate_set_imm32_isra_0(&local_88,0,uVar19);
      pcVar10 = block_itcm_branch_arm;
    }
    lVar8 = (long)pcVar10 - (long)local_88;
    lVar18 = lVar8 + 3;
    if (-1 < lVar8) {
      lVar18 = lVar8;
    }
    *local_88 = (uint)lVar18 >> 2 & 0x3ffffff | 0x14000000;
    local_88 = local_88 + 1;
  }
LAB_0019613c:
  iVar5 = (int)lVar16;
  *piVar17 = (int)(lVar15 + -0x18) - iVar5;
  *(undefined4 *)(lVar15 + -0x18) = 0;
  *(uint *)(lVar15 + -0x14) = param_4 | param_3;
  *(int *)(lVar15 + -0x10) = (int)piVar1 - iVar5;
  *(undefined2 *)(lVar15 + -0xc) = *(undefined2 *)(param_1 + 0x26);
  *(ushort *)(lVar15 + -10) = (ushort)*(byte *)(param_1 + 0x28);
  uVar7 = *(ushort *)(param_1 + 0x22);
  *(short *)(lVar15 + -6) = (short)local_88 - (short)piVar1;
  *(ushort *)(lVar15 + -8) = uVar7 & 0xfff | (ushort)(uVar3 << 0xc);
  *(int *)(lVar15 + -4) = (int)local_68 - iVar5;
  if (bVar9) {
    *(long *)(nds_system + lVar16 + 0xf24018) = lStack_80;
    *(uint **)(nds_system + lVar16 + 0xf24010) = local_88;
  }
  else if (param_3 >> 0x18 == 2) {
    *(uint **)(nds_system + lVar16 + 0xf24000) = local_88;
    *(long *)(nds_system + lVar16 + 0xf24008) = lStack_80;
  }
  else {
    *(uint **)(nds_system + lVar16 + 0xf24020) = local_88;
    *(long *)(nds_system + lVar16 + 0xf24028) = lStack_80;
  }
  uVar7 = *(ushort *)(param_1 + 0x24);
  if (uVar7 != 0) {
    lVar16 = *(long *)(param_1 + 0x10);
    ppuVar11 = (uint **)(lVar16 + 8);
    do {
      if (*(ushort *)((long)ppuVar11 + 0x1e) != 0) {
        puVar14 = *ppuVar11;
        *puVar14 = (uint)((int)*(undefined8 *)
                                (*(long *)(param_1 + 8) +
                                 (ulong)*(ushort *)((long)ppuVar11 + 0x1e) * 0x20 + 8) -
                         (int)puVar14) >> 2 & 0x3ffffff | *puVar14 & 0xfc000000;
      }
      ppuVar11 = ppuVar11 + 5;
    } while (ppuVar11 != (uint **)(lVar16 + 0x30 + (ulong)(uVar7 - 1) * 0x28));
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


