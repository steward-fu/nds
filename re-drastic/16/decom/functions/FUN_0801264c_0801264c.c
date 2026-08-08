/*
 * Ghidra decompilation
 *
 * Function : FUN_0801264c
 * Address  : 0801264c
 * Program  : drastic16
 */


void FUN_0801264c(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0xfc81e) & 2) == 0) {
    return;
  }
  memcpy((void *)(param_1 + 0x10030),(void *)(param_2 + 0xc0),0x9e);
  return;
}


