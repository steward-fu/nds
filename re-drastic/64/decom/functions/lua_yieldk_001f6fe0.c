/*
 * Ghidra decompilation
 *
 * Function : lua_yieldk
 * Address  : 001f6fe0
 * Program  : drastic64
 */


undefined8 lua_yieldk(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  
  if (*(short *)(param_1 + 0xc4) == 0) {
    *(undefined *)(param_1 + 10) = 1;
    plVar1 = *(long **)(param_1 + 0x20);
    plVar1[7] = *plVar1 - *(long *)(param_1 + 0x38);
    if ((*(byte *)((long)plVar1 + 0x42) >> 1 & 1) != 0) {
      return 0;
    }
    plVar1[4] = param_4;
    if (param_4 != 0) {
      plVar1[6] = param_3;
    }
    *plVar1 = *(long *)(param_1 + 0x10) + (long)param_2 * -0x10 + -0x10;
                    /* WARNING: Subroutine does not return */
    luaD_throw(param_1,1);
  }
  if (*(long *)(*(long *)(param_1 + 0x18) + 0xe0) != param_1) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(param_1,"attempt to yield across a C-call boundary");
  }
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"attempt to yield from outside a coroutine");
}


