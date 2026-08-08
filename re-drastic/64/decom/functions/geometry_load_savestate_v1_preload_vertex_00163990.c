/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_preload_vertex
 * Address  : 00163990
 * Program  : drastic64
 */


void geometry_load_savestate_v1_preload_vertex(long param_1,ulong param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1 + 0x650 + (param_2 & 0x3fffffff) * 0x10;
  *(undefined4 *)(param_1 + 0x650 + (ulong)(uint)((int)param_2 << 2) * 4) = *param_3;
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(lVar1 + 4) = param_3[1];
  *(undefined4 *)(lVar1 + 8) = param_3[2];
  *(undefined4 *)(lVar1 + 0xc) = param_3[3];
  uVar2 = param_3[5];
  *(short *)(param_1 + param_2 * 2 + 0x1354) = (short)uVar2;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x14dc) = uVar2;
  *(undefined *)(param_1 + param_2 + 0x1290) = *(undefined *)((long)param_3 + 0x1f);
  return;
}


