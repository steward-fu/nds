/*
 * Ghidra decompilation
 *
 * Function : unroll
 * Address  : 001f6940
 * Program  : drastic64
 */


void unroll(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((*(byte *)(lVar4 + 0x42) >> 4 & 1) != 0) {
      *(byte *)(lVar4 + 0x42) = *(byte *)(lVar4 + 0x42) & 0xef;
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar4 + 0x28);
    }
    if (*(short *)(lVar4 + 0x40) == -1) {
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
        *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
      }
    }
    iVar3 = (**(code **)(lVar4 + 0x20))(param_1,uVar1,*(undefined8 *)(lVar4 + 0x30));
    luaD_poscall(param_1,*(long *)(param_1 + 0x10) + (long)iVar3 * -0x10);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  do {
    if (lVar4 == param_1 + 0x60) {
      return;
    }
    while (bVar2 = *(byte *)(lVar4 + 0x42), (bVar2 >> 1 & 1) != 0) {
      luaV_finishOp();
      luaV_execute(param_1);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == param_1 + 0x60) {
        return;
      }
    }
    if ((bVar2 >> 4 & 1) != 0) {
      *(byte *)(lVar4 + 0x42) = bVar2 & 0xef;
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar4 + 0x28);
    }
    if (*(short *)(lVar4 + 0x40) == -1) {
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
        *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
      }
    }
    iVar3 = (**(code **)(lVar4 + 0x20))(param_1,1,*(undefined8 *)(lVar4 + 0x30));
    luaD_poscall(param_1,*(long *)(param_1 + 0x10) + (long)iVar3 * -0x10);
    lVar4 = *(long *)(param_1 + 0x20);
  } while( true );
}


