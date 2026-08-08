/*
 * Ghidra decompilation
 *
 * Function : _start
 * Address  : 0010e7c4
 * Program  : drastic64
 */


void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}


