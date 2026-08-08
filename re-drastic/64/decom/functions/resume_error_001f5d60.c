/*
 * Ghidra decompilation
 *
 * Function : resume_error
 * Address  : 001f5d60
 * Program  : drastic64
 */


void resume_error(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  *(long **)(param_1 + 0x10) = param_3;
  lVar1 = luaS_new();
  lVar2 = *(long *)(param_1 + 0x10);
  *param_3 = lVar1;
  *(uint *)(param_3 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
                    /* WARNING: Subroutine does not return */
  luaD_throw(param_1,0xffffffff);
}


