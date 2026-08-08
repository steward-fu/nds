/*
 * Ghidra decompilation
 *
 * Function : entry
 * Address  : 08004ae8
 * Program  : drastic16
 */


void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_08006540,param_2,&stack0x00000004,FUN_080e5474,&DAT_080e5470,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}


