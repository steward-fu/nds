/*
 * Ghidra decompilation
 *
 * Function : cleandata
 * Address  : 080e3318
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable d:byte *[r0:4] conflicts with parameter, skipped. */

void cleandata(void *data,size_t size)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (size != 0) {
    puVar2 = (undefined *)data;
    do {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      puVar2 = puVar1;
    } while (puVar1 != (undefined *)((int)data + size));
  }
  return;
}


