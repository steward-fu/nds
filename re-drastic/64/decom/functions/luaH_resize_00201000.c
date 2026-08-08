/*
 * Ghidra decompilation
 *
 * Function : luaH_resize
 * Address  : 00201000
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaH_resize(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined auVar19 [16];
  undefined4 *puVar8;
  
  lVar4 = ___stack_chk_guard;
  puVar10 = (undefined4 *)0x0;
  uVar1 = *(uint *)(param_2 + 0xc);
  bVar2 = *(byte *)(param_2 + 0xb);
  uVar18 = (ulong)param_3;
  puVar15 = *(undefined1 **)(param_2 + 0x18);
  if (uVar1 < param_3) {
    auVar19 = luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x10),(ulong)uVar1 << 4,uVar18 << 4);
    puVar10 = auVar19._8_8_;
    lVar9 = auVar19._0_8_;
    uVar5 = *(uint *)(param_2 + 0xc);
    *(long *)(param_2 + 0x10) = lVar9;
    if (uVar5 < param_3) {
      puVar10 = (undefined4 *)
                (lVar9 + ((ulong)((param_3 - 1) - uVar5) + (ulong)uVar5) * 0x10 + 0x18);
      puVar7 = (undefined4 *)(lVar9 + (ulong)uVar5 * 0x10 + 8);
      do {
        puVar8 = puVar7 + 4;
        *puVar7 = 0;
        puVar7 = puVar8;
      } while (puVar10 != puVar8);
    }
    *(uint *)(param_2 + 0xc) = param_3;
  }
  if (param_4 == 0) {
    puVar11 = &dummynode_;
    uVar13 = 0;
    *(undefined1 **)(param_2 + 0x18) = &dummynode_;
  }
  else {
    uVar5 = luaO_ceillog2(param_4,puVar10);
    if (0x1e < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"table overflow");
    }
    lVar14 = (ulong)(uint)(1 << (ulong)(uVar5 & 0x1f)) * 0x20;
    iVar3 = 1 << (ulong)(uVar5 & 0x1f);
    lVar9 = luaM_realloc_(param_1,0,0,lVar14);
    *(long *)(param_2 + 0x18) = lVar9;
    uVar13 = (undefined)uVar5;
    if (0 < iVar3) {
      puVar10 = (undefined4 *)(lVar9 + 8);
      do {
        *(undefined8 *)(puVar10 + 4) = 0;
        puVar7 = puVar10 + 8;
        *puVar10 = 0;
        puVar10 = puVar7;
      } while ((undefined4 *)(lVar9 + (ulong)(iVar3 - 1) * 0x20 + 0x28) != puVar7);
    }
    puVar11 = (undefined1 *)(lVar9 + lVar14);
  }
  *(undefined *)(param_2 + 0xb) = uVar13;
  *(undefined1 **)(param_2 + 0x20) = puVar11;
  if (param_3 < uVar1) {
    lVar9 = uVar18 << 4;
    *(uint *)(param_2 + 0xc) = param_3;
    lVar14 = *(long *)(param_2 + 0x10);
    do {
      while( true ) {
        puVar16 = (undefined8 *)(lVar14 + lVar9);
        uVar17 = (uint)uVar18;
        uVar5 = uVar17 + 1;
        uVar18 = (ulong)uVar5;
        if (*(int *)(puVar16 + 1) == 0) break;
        if (uVar17 < *(uint *)(param_2 + 0xc)) {
          puVar6 = (undefined8 *)(lVar14 + (long)(int)uVar5 * 0x10 + -0x10);
LAB_002011e0:
          if (puVar6 == &luaO_nilobject_) goto LAB_00201304;
        }
        else {
          puVar6 = *(undefined8 **)(param_2 + 0x18);
          uVar17 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & uVar5;
          do {
            puVar6 = (undefined8 *)
                     ((long)puVar6 +
                     (-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5));
            if ((*(int *)(puVar6 + 3) == 0x13) && (uVar5 == *(uint *)(puVar6 + 2)))
            goto LAB_002011e0;
            uVar17 = *(uint *)((long)puVar6 + 0x1c);
          } while (uVar17 != 0);
LAB_00201304:
          puVar6 = (undefined8 *)luaH_newkey(param_1,param_2);
          lVar14 = *(long *)(param_2 + 0x10);
        }
        uVar12 = puVar16[1];
        *puVar6 = *puVar16;
        puVar6[1] = uVar12;
        lVar9 = lVar9 + 0x10;
        if (uVar1 == uVar5) goto LAB_002011fc;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar1 != uVar5);
LAB_002011fc:
    uVar12 = luaM_realloc_(param_1,lVar14,(ulong)uVar1 << 4);
    *(undefined8 *)(param_2 + 0x10) = uVar12;
  }
  uVar1 = 1 << (ulong)(bVar2 & 0x1f);
  if (0 < (int)uVar1) {
    uVar18 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    puVar16 = (undefined8 *)(puVar15 + (uVar18 - 0x20));
    do {
      while (*(int *)(puVar16 + 1) != 0) {
        puVar6 = (undefined8 *)luaH_get(param_2,puVar16 + 2);
        if (puVar6 == &luaO_nilobject_) {
          puVar6 = (undefined8 *)luaH_newkey(param_1,param_2,puVar16 + 2);
        }
        uVar12 = puVar16[1];
        *puVar6 = *puVar16;
        puVar6[1] = uVar12;
        puVar16 = puVar16 + -4;
        if (puVar16 == (undefined8 *)(puVar15 + uVar18 + (ulong)(uVar1 - 1) * -0x20 + -0x40))
        goto LAB_002010f8;
      }
      puVar16 = puVar16 + -4;
    } while (puVar16 != (undefined8 *)(puVar15 + uVar18 + (ulong)(uVar1 - 1) * -0x20 + -0x40));
  }
LAB_002010f8:
  if (puVar15 != &dummynode_) {
    luaM_realloc_(param_1,puVar15,-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5,0
                 );
  }
  if (lVar4 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 - ___stack_chk_guard,0);
}


