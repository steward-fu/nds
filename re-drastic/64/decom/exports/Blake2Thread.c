/*
 * Ghidra decompilation
 *
 * Function : Blake2Thread
 * Address  : 001efa90
 * Program  : drastic64
 */


/* Blake2Thread(void*) */

void Blake2Thread(void *param_1)

{
  uchar *puVar1;
  ulong uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  uVar2 = *(ulong *)((long)param_1 + 0x10);
  puVar3 = *(uchar **)((long)param_1 + 8);
  if (0x1ff < uVar2) {
    puVar4 = puVar3;
    do {
                    /* WARNING: Load size is inaccurate */
      puVar1 = puVar4 + 0x200;
      blake2s_update(*param_1,puVar4,0x40);
      puVar4 = puVar1;
    } while (puVar3 + (uVar2 - 0x200 & 0xfffffffffffffe00) + 0x200 != puVar1);
  }
  return;
}


