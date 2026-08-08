/*
 * Ghidra decompilation
 *
 * Function : delay_us
 * Address  : 080a7dc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void delay_us(u32 delay)

{
  SDL_Delay(delay / 1000);
  return;
}


