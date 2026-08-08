/*
 * Ghidra decompilation
 *
 * Function : print_misc_state
 * Address  : 00182990
 * Program  : drastic64
 */


void print_misc_state(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x2258);
  __printf_chk(1,
               "%lx instructions in. (%d remain)  Scanline %d, frame %lu, cycle %lu (state %d)\n\n",
               param_1[0x21] + 1,param_2,*(undefined2 *)((long)puVar1 + 0x14),*puVar1,puVar1[1],
               *(undefined4 *)(*param_1 + 0x2110));
  return;
}


