/*
 * Ghidra decompilation
 *
 * Function : lua_xmove
 * Address  : 001f0b50
 * Program  : drastic64
 */


void lua_xmove(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != param_2) &&
     (*(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)param_3 * -0x10, 0 < param_3)) {
    lVar4 = *(long *)(param_2 + 0x10);
    lVar3 = lVar4 + 0x10;
    do {
      *(long *)(param_2 + 0x10) = lVar3;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 + (-0x10 - lVar4));
      lVar1 = lVar3 + 0x10;
      uVar5 = puVar2[1];
      *(undefined8 *)(lVar3 + -0x10) = *puVar2;
      *(undefined8 *)(lVar3 + -8) = uVar5;
      lVar3 = lVar1;
    } while (lVar1 != lVar4 + (ulong)(param_3 - 1) * 0x10 + 0x20);
  }
  return;
}


