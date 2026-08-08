/*
 * Ghidra decompilation
 *
 * Function : Clean
 * Address  : 001c4160
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecPassword::Clean() */

void SecPassword::Clean(void)

{
  undefined *in_x0;
  undefined *puVar1;
  undefined *puVar2;
  
  in_x0[0x200] = 0;
  puVar2 = in_x0;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != in_x0 + 0x200);
  return;
}


