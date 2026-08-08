/*
 * Ghidra decompilation
 *
 * Function : InitFilters
 * Address  : 001dfc00
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::InitFilters() */

void Unpack::InitFilters(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x80) != (void *)0x0) {
    free(*(void **)(in_x0 + 0x80));
    *(undefined8 *)(in_x0 + 0x80) = 0;
  }
  *(undefined8 *)(in_x0 + 0x88) = 0;
  *(undefined8 *)(in_x0 + 0x90) = 0;
  return;
}


