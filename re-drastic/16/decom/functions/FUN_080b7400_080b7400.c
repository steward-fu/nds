/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7400
 * Address  : 080b7400
 * Program  : drastic16
 */


void FUN_080b7400(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 == 0xff) && (*(char *)(param_1 + 8) != '\x01')) {
    return;
  }
  FUN_080b7220(param_1,param_2);
  piVar1 = (int *)__cxa_allocate_exception(4);
  *piVar1 = param_2;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,&RAR_EXIT::typeinfo,0);
}


