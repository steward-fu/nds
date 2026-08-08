/*
 * Ghidra decompilation
 *
 * Function : luaD_growstack
 * Address  : 001f6080
 * Program  : drastic64
 */


void luaD_growstack(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (1000000 < *(int *)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
    luaD_throw(param_1,6);
  }
  iVar2 = *(int *)(param_1 + 0xb8) * 2;
  if (1000000 < iVar2) {
    iVar2 = 1000000;
  }
  iVar1 = param_2 + (int)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38) >> 4) + 5;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar1 < 0xf4241) {
    luaD_reallocstack();
    return;
  }
  luaD_reallocstack(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"stack overflow");
}


