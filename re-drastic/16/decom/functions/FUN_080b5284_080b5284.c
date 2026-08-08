/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5284
 * Address  : 080b5284
 * Program  : drastic16
 */


int * FUN_080b5284(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)param_2 * 10000000);
  *param_1 = uVar1 + 0xd53e8000;
  param_1[1] = ((int)param_2 >> 0x1f) * 10000000 + (int)((ulonglong)param_2 * 10000000 >> 0x20) +
               0x19db1de + (uint)(0x2ac17fff < uVar1);
  return param_1;
}


