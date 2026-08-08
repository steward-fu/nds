/*
 * Ghidra decompilation
 *
 * Function : luaS_remove
 * Address  : 00200150
 * Program  : drastic64
 */


void luaS_remove(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = *(int *)(lVar5 + 0x3c) - 1U & *(uint *)(param_2 + 0xc);
  puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)(int)uVar1 * 8);
  lVar2 = *(long *)(*(long *)(lVar5 + 0x30) + (long)(int)uVar1 * 8);
  if (lVar2 != param_2) {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x18);
    } while (lVar2 != param_2);
    puVar4 = (undefined8 *)(lVar3 + 0x18);
  }
  *puVar4 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + -1;
  return;
}


