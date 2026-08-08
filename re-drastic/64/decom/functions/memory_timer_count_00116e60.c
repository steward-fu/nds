/*
 * Ghidra decompilation
 *
 * Function : memory_timer_count
 * Address  : 00116e60
 * Program  : drastic64
 */


uint memory_timer_count(long *param_1)

{
  long lVar1;
  
  if ((*(ushort *)((long)param_1 + 0x1a) >> 7 & 1) == 0) {
    return (uint)*(ushort *)(param_1 + 3);
  }
  lVar1 = *(long *)(*param_1 + 0x2258);
  return ((uint)((*(int *)(lVar1 + 0x10) - (int)param_1[1]) +
                ((int)*(undefined8 *)(lVar1 + 8) - *(int *)(*param_1 + 0x2290))) >>
         (ulong)(*(byte *)((long)param_1 + 0x1c) & 0x1f)) + (uint)*(ushort *)(param_1 + 3) & 0xffff;
}


