/*
 * Ghidra decompilation
 *
 * Function : FUN_0013c62c
 * Address  : 0013c62c
 * Program  : drastic64
 */


void FUN_0013c62c(void *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  
  uVar2 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  iVar1 = (int)param_3;
  if (-1 < iVar1) {
    __n = (size_t)((0x100 - iVar1) * 4);
    memcpy(param_1,(void *)((long)param_2 + uVar2),__n);
    memset((void *)((long)param_1 + __n),0,(long)(iVar1 << 2));
    return;
  }
  memcpy((void *)((long)param_1 - uVar2),param_2,(long)((iVar1 + 0x100) * 4));
  memset(param_1,0,(long)(iVar1 * -4));
  return;
}


