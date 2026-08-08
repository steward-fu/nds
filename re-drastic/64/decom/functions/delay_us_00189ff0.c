/*
 * Ghidra decompilation
 *
 * Function : delay_us
 * Address  : 00189ff0
 * Program  : drastic64
 */


void delay_us(ulong param_1)

{
  SDL_Delay((param_1 & 0xffffffff) / 1000);
  return;
}


