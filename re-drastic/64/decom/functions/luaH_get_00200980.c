/*
 * Ghidra decompilation
 *
 * Function : luaH_get
 * Address  : 00200980
 * Program  : drastic64
 */


undefined8 * luaH_get(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = *(uint *)(param_2 + 1) & 0x3f;
  if (uVar4 == 4) {
    uVar4 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & *(uint *)(*param_2 + 0xc);
    puVar3 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5));
    while( true ) {
      if ((*(int *)(puVar3 + 3) == 0x44) && (*param_2 == puVar3[2])) {
        return puVar3;
      }
      uVar4 = *(uint *)((long)puVar3 + 0x1c);
      if (uVar4 == 0) break;
      puVar3 = (undefined8 *)
               ((long)puVar3 + (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5));
    }
    goto LAB_00200a70;
  }
  if (uVar4 < 5) {
    if (uVar4 == 0) goto LAB_00200a70;
    if ((((uVar4 == 3) && (fVar5 = *(float *)param_2, fVar5 == (float)(int)fVar5)) &&
        (-2.147484e+09 <= fVar5)) && (fVar5 < 2.147484e+09)) {
      uVar4 = (uint)fVar5;
      if (uVar4 - 1 < *(uint *)(param_1 + 0xc)) {
        return (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar4 * 0x10 + -0x10);
      }
      uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & uVar4;
      puVar3 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
      while( true ) {
        if ((*(int *)(puVar3 + 3) == 0x13) && (uVar4 == *(uint *)(puVar3 + 2))) {
          return puVar3;
        }
        uVar1 = *(uint *)((long)puVar3 + 0x1c);
        if (uVar1 == 0) break;
        puVar3 = (undefined8 *)
                 ((long)puVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5))
        ;
      }
      goto LAB_00200a70;
    }
  }
  else if (uVar4 == 0x13) {
    uVar4 = *(uint *)param_2;
    if (uVar4 - 1 < *(uint *)(param_1 + 0xc)) {
      return (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar4 * 0x10 + -0x10);
    }
    uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & uVar4;
    puVar3 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
    while( true ) {
      if ((*(int *)(puVar3 + 3) == 0x13) && (uVar4 == *(uint *)(puVar3 + 2))) {
        return puVar3;
      }
      uVar1 = *(uint *)((long)puVar3 + 0x1c);
      if (uVar1 == 0) break;
      puVar3 = (undefined8 *)
               ((long)puVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
    }
    goto LAB_00200a70;
  }
  puVar3 = (undefined8 *)mainposition(param_1,param_2);
  while( true ) {
    iVar2 = luaV_equalobj(0,puVar3 + 2,param_2);
    if (iVar2 != 0) {
      return puVar3;
    }
    uVar4 = *(uint *)((long)puVar3 + 0x1c);
    if (uVar4 == 0) break;
    puVar3 = (undefined8 *)
             ((long)puVar3 + (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5));
  }
LAB_00200a70:
  return &luaO_nilobject_;
}


