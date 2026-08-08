/*
 * Ghidra decompilation
 *
 * Function : luaH_getn
 * Address  : 002014f0
 * Program  : drastic64
 */


uint luaH_getn(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x10) + (ulong)(uVar1 - 1) * 0x10 + 8) == 0)) {
    uVar7 = 0;
    while( true ) {
      uVar11 = uVar1;
      uVar9 = uVar11 + uVar7 >> 1;
      if (uVar11 - uVar7 < 2) break;
      uVar1 = uVar9;
      if (*(int *)(*(long *)(param_1 + 0x10) + (ulong)(uVar9 - 1) * 0x10 + 8) != 0) {
        uVar1 = uVar11;
        uVar7 = uVar9;
      }
    }
    return uVar7;
  }
  puVar10 = *(undefined1 **)(param_1 + 0x18);
  if (puVar10 == &dummynode_) {
    return uVar1;
  }
  uVar7 = uVar1 + 1;
  uVar9 = uVar1;
  do {
    uVar11 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & uVar7;
    for (puVar5 = (undefined8 *)
                  (puVar10 + (-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5));
        (*(int *)(puVar5 + 3) != 0x13 || (puVar6 = puVar5, uVar7 != *(uint *)(puVar5 + 2)));
        puVar5 = (undefined8 *)
                 ((long)puVar5 +
                 (-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5))) {
      uVar11 = *(uint *)((long)puVar5 + 0x1c);
      puVar6 = &luaO_nilobject_;
      if (uVar11 == 0) break;
    }
    iVar2 = *(int *)(puVar6 + 1);
    uVar11 = uVar9;
    while( true ) {
      uVar9 = uVar7;
      if (iVar2 == 0) {
        uVar7 = uVar9 - uVar11;
        goto joined_r0x002015e4;
      }
      if (0x3fffffff < uVar9) {
        uVar7 = 0;
        uVar9 = 1;
        if (uVar1 != 0) goto LAB_00201734;
        goto LAB_002016d0;
      }
      uVar7 = uVar9 * 2;
      if (uVar1 <= uVar7 - 1) break;
      iVar2 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)uVar7 * 0x10 + -8);
      uVar11 = uVar9;
    }
  } while( true );
joined_r0x002015e4:
  if (uVar7 < 2) {
    return uVar11;
  }
  uVar7 = uVar9 + uVar11 >> 1;
  uVar8 = uVar7;
  if (uVar7 - 1 < uVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + (ulong)uVar7 * 0x10 + -8) != 0) {
      uVar8 = uVar9;
      uVar11 = uVar7;
    }
  }
  else {
    puVar4 = puVar10 + (ulong)((1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & uVar7) * 0x20;
    while( true ) {
      if ((*(int *)(puVar4 + 0x18) == 0x13) && (uVar7 == *(uint *)(puVar4 + 0x10))) {
        if (*(int *)(puVar4 + 8) != 0) {
          uVar8 = uVar9;
          uVar11 = uVar7;
        }
        goto LAB_00201650;
      }
      uVar3 = *(uint *)(puVar4 + 0x1c);
      if (uVar3 == 0) break;
      puVar4 = puVar4 + (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5);
    }
    if (DAT_00229c08 != 0) {
      uVar8 = uVar9;
      uVar11 = uVar7;
    }
  }
LAB_00201650:
  uVar7 = uVar8 - uVar11;
  uVar9 = uVar8;
  goto joined_r0x002015e4;
LAB_002016d0:
  uVar11 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & uVar9;
  for (puVar5 = (undefined8 *)
                (puVar10 + (-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5));
      (uVar11 = uVar7, *(int *)(puVar5 + 3) != 0x13 ||
      (puVar6 = puVar5, uVar9 != *(uint *)(puVar5 + 2)));
      puVar5 = (undefined8 *)
               ((long)puVar5 + (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5)))
  {
    uVar8 = *(uint *)((long)puVar5 + 0x1c);
    puVar6 = &luaO_nilobject_;
    if (uVar8 == 0) break;
  }
  while( true ) {
    uVar7 = uVar11 + 1;
    if (*(int *)(puVar6 + 1) == 0) {
      return uVar11;
    }
    uVar9 = uVar9 + 1;
    if (uVar1 <= uVar7) break;
LAB_00201734:
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar9 * 0x10 + -0x10);
    uVar11 = uVar7;
  }
  goto LAB_002016d0;
}


