/*
 * Ghidra decompilation
 *
 * Function : luaG_errormsg
 * Address  : 001f57e0
 * Program  : drastic64
 */


void luaG_errormsg(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0xb0));
    *puVar2 = puVar2[-2];
    puVar2[1] = puVar2[-1];
    uVar3 = puVar1[1];
    puVar2[-2] = *puVar1;
    puVar2[-1] = uVar3;
    *(undefined8 **)(param_1 + 0x10) = puVar2 + 2;
    luaD_call(param_1,puVar2 + -2,1,0);
  }
                    /* WARNING: Subroutine does not return */
  luaD_throw(param_1,2);
}


