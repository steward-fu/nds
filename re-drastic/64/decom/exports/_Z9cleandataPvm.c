/*
 * Ghidra decompilation
 *
 * Function : _Z9cleandataPvm
 * Address  : 001c4180
 * Program  : drastic64
 */


/* cleandata(void*, unsigned long) */

void cleandata(void *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined *)param_1;
    do {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      puVar2 = puVar1;
    } while (puVar1 != (undefined *)((long)param_1 + param_2));
  }
  return;
}


