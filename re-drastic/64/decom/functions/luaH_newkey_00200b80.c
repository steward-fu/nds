/*
 * Ghidra decompilation
 *
 * Function : luaH_newkey
 * Address  : 00200b80
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00200fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaH_newkey(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  int iVar23;
  float fVar24;
  int local_98;
  undefined4 local_90;
  long local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_3 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(param_1,"table index is nil",0,&__stack_chk_guard,0);
  }
  if ((((*(int *)(param_3 + 1) == 3) && (fVar24 = *(float *)param_3, fVar24 == (float)(int)fVar24))
      && (-2.147484e+09 <= fVar24)) && (fVar24 < 2.147484e+09)) {
    local_98 = (int)fVar24;
    param_3 = (long *)&local_98;
    local_90 = 0x13;
  }
  puVar5 = (undefined8 *)mainposition(param_2,param_3);
  puVar6 = puVar5;
  if (*(int *)(puVar5 + 1) == 0 && puVar5 != (undefined8 *)&dummynode_) {
LAB_00200e28:
    puVar6[2] = *param_3;
    uVar12 = *(uint *)(param_3 + 1);
    *(uint *)(puVar6 + 3) = uVar12;
  }
  else {
    puVar9 = *(undefined8 **)(param_2 + 0x18);
    puVar6 = *(undefined8 **)(param_2 + 0x20);
    do {
      puVar20 = puVar6;
      if (puVar20 <= puVar9) {
        uVar13 = *(uint *)(param_2 + 0xc);
        plVar22 = local_88;
        uVar12 = 1;
        uVar16 = 1;
        uVar19 = 0;
        local_88[0] = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        uStack_10 = 0;
        plVar17 = plVar22;
        goto LAB_00200c70;
      }
      iVar4 = *(int *)(puVar20 + -1);
      puVar6 = puVar20 + -4;
      *(undefined8 **)(param_2 + 0x20) = puVar6;
    } while (iVar4 != 0);
    puVar9 = (undefined8 *)mainposition(param_2,puVar5 + 2);
    if (puVar5 == puVar9) {
      uVar12 = *(uint *)((long)puVar5 + 0x1c);
      if (uVar12 != 0) {
        *(int *)((long)puVar20 + -4) =
             (int)((long)((long)puVar5 +
                         ((-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5) -
                         (long)puVar6)) >> 5);
      }
      *(int *)((long)puVar5 + 0x1c) = (int)((long)puVar6 - (long)puVar5 >> 5);
      goto LAB_00200e28;
    }
    do {
      puVar14 = puVar9;
      puVar9 = puVar14 + (long)*(int *)((long)puVar14 + 0x1c) * 4;
    } while (puVar14 + (long)*(int *)((long)puVar14 + 0x1c) * 4 != puVar5);
    *(int *)((long)puVar14 + 0x1c) = (int)((long)puVar6 - (long)puVar14 >> 5);
    uVar10 = puVar5[1];
    puVar20[-4] = *puVar5;
    puVar20[-3] = uVar10;
    uVar10 = puVar5[3];
    puVar20[-2] = puVar5[2];
    puVar20[-1] = uVar10;
    if (*(int *)((long)puVar5 + 0x1c) != 0) {
      *(int *)((long)puVar20 + -4) =
           *(int *)((long)puVar20 + -4) + (int)((long)puVar5 - (long)puVar6 >> 5);
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
    }
    lVar7 = *param_3;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = lVar7;
    uVar12 = *(uint *)(param_3 + 1);
    *(uint *)(puVar5 + 3) = uVar12;
    puVar6 = puVar5;
  }
  if ((((uVar12 >> 6 & 1) != 0) && ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*param_3 + 9) & 3) != 0)) {
    luaC_barrierback_(param_1,param_2);
  }
LAB_00200e40:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar6,local_8 - ___stack_chk_guard,0);
  }
  return;
LAB_00200c70:
  do {
    if (uVar13 < uVar16) {
      uVar8 = uVar13;
      if (uVar13 < uVar12) break;
LAB_00200c88:
      iVar4 = 0;
      do {
        uVar15 = uVar12 - 1;
        uVar12 = uVar12 + 1;
        if (*(int *)(*(long *)(param_2 + 0x10) + (ulong)uVar15 * 0x10 + 8) != 0) {
          iVar4 = iVar4 + 1;
        }
      } while (uVar12 <= uVar8);
      uVar19 = uVar19 + iVar4;
    }
    else {
      iVar4 = 0;
      uVar8 = uVar16;
      if (uVar12 <= uVar16) goto LAB_00200c88;
    }
    uVar16 = uVar16 * 2;
    plVar18 = (long *)((long)plVar17 + 4);
    *(int *)plVar17 = *(int *)plVar17 + iVar4;
    plVar17 = plVar18;
  } while (&local_8 != plVar18);
  iVar4 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
  uVar13 = iVar4 - 1;
  uVar12 = uVar19;
  if (iVar4 != 0) {
    iVar23 = 0;
    uVar21 = -(ulong)(uVar13 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar13 << 5;
    iVar11 = 0;
    while( true ) {
      if (*(int *)((long)puVar9 + uVar21 + 8) != 0) {
        if ((*(int *)((long)puVar9 + uVar21 + 0x18) == 0x13) &&
           (0 < *(int *)((long)puVar9 + uVar21 + 0x10))) {
          iVar3 = luaO_ceillog2();
          iVar11 = iVar11 + 1;
          *(int *)((long)plVar22 + (long)iVar3 * 4) = *(int *)((long)plVar22 + (long)iVar3 * 4) + 1;
        }
        iVar23 = iVar23 + 1;
      }
      if (uVar21 - 0x20 == ((long)iVar4 - (ulong)uVar13) * 0x20 + -0x40) break;
      uVar21 = uVar21 - 0x20;
      puVar9 = *(undefined8 **)(param_2 + 0x18);
    }
    uVar12 = uVar19 + iVar23;
    uVar19 = uVar19 + iVar11;
  }
  if ((*(int *)(param_3 + 1) == 0x13) && (0 < *(int *)param_3)) {
    iVar4 = luaO_ceillog2();
    uVar19 = uVar19 + 1;
    *(int *)((long)plVar22 + (long)iVar4 * 4) = *(int *)((long)plVar22 + (long)iVar4 * 4) + 1;
  }
  uVar16 = 0;
  uVar13 = 0;
  if (uVar19 != 0) {
    uVar15 = 0;
    uVar8 = 0;
    uVar2 = 1;
    do {
      if ((*(int *)plVar22 != 0) && (uVar8 = uVar8 + *(int *)plVar22, uVar15 < uVar8)) {
        uVar13 = uVar8;
        uVar16 = uVar2;
      }
      if (uVar8 == uVar19) break;
      plVar22 = (long *)((long)plVar22 + 4);
      uVar1 = uVar2 & 0x7fffffff;
      uVar15 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2;
    } while (uVar1 < uVar19);
  }
  luaH_resize(param_1,param_2,uVar16,(uVar12 + 1) - uVar13);
  puVar6 = (undefined8 *)luaH_get(param_2,param_3);
  if (puVar6 == &luaO_nilobject_) {
    puVar6 = (undefined8 *)luaH_newkey(param_1,param_2,param_3);
  }
  goto LAB_00200e40;
}


