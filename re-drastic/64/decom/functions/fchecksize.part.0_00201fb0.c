/*
 * Ghidra decompilation
 *
 * Function : fchecksize.part.0
 * Address  : 00201fb0
 * Program  : drastic64
 */


void fchecksize_part_0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = luaO_pushfstring(*param_1,"%s size mismatch in",param_2);
                    /* WARNING: Subroutine does not return */
  error_isra_0(param_1,param_1[3],uVar1);
}


