/*
 * Ghidra decompilation
 *
 * Function : spu_capture_control
 * Address  : 0016d5e0
 * Program  : drastic64
 */


void spu_capture_control(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = param_1 + (ulong)param_2 * 0x20;
  *(char *)(lVar1 + 0x40cc4) = (char)param_3;
  if ((param_3 >> 7 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x40ce8);
    uVar2 = (param_2 + 0x22) * 8;
    *(ulong *)(lVar1 + 0x40cb8) =
         **(long **)(param_1 + 0x40cf8) + ((ulong)*(uint *)(lVar3 + (ulong)uVar2) & 0x3fffff);
    *(uint *)(lVar1 + 0x40cc0) = (uint)*(ushort *)(lVar3 + (ulong)(uVar2 + 4)) * 2;
    *(undefined8 *)(param_1 + ((ulong)param_2 + 0x2065) * 0x20 + 8) = 0;
  }
  return;
}


