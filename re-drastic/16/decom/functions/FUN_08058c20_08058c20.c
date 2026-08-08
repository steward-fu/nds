/*
 * Ghidra decompilation
 *
 * Function : FUN_08058c20
 * Address  : 08058c20
 * Program  : drastic16
 */


int FUN_08058c20(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (param_3 - *(int *)(param_1 + 0x40be8)) * 0x400;
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  return (int)*(short *)(param_1 +
                        (*(uint *)(param_1 + 0x40bf4) * ((int)uVar1 >> 0x1f) +
                        (int)((ulonglong)*(uint *)(param_1 + 0x40bf4) * (ulonglong)uVar1 >> 0x20)) *
                        4 + 0x20000);
}


