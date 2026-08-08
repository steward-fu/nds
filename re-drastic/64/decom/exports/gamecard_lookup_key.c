/*
 * Ghidra decompilation
 *
 * Function : gamecard_lookup_key
 * Address  : 0016e090
 * Program  : drastic64
 */


int gamecard_lookup_key(long param_1,ulong param_2)

{
  return (*(int *)(param_1 + (ulong)(((uint)(param_2 >> 0x18) & 0xff) + 0x12) * 4) +
          *(int *)(param_1 + ((param_2 >> 0x10 & 0xff) + 0x112) * 4) ^
         *(uint *)(param_1 + ((param_2 >> 8 & 0xff) + 0x212) * 4)) +
         *(int *)(param_1 + (param_2 & 0xff) * 4 + 0xc48);
}


