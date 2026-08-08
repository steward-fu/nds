/*
 * Ghidra decompilation
 *
 * Function : _start
 * Address  : 08006298
 * Program  : drastic
 */


void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000004,0x813a9f9,0x813aa35,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}


