/*
 * Ghidra decompilation
 *
 * Function : luaS_hash
 * Address  : 0811e024
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable h:uint[r2:4] conflicts with parameter, skipped. */

uint luaS_hash(char *str,size_t l,uint seed)

{
  byte *pbVar1;
  size_t l1;
  char *pcVar2;
  uint uVar3;
  size_t step;
  uint uVar4;
  
  uVar3 = seed ^ l;
  uVar4 = (l >> 5) + 1;
  if (uVar4 <= l) {
    pcVar2 = str + l;
    do {
      pbVar1 = (byte *)(pcVar2 + -1);
      pcVar2 = pcVar2 + -uVar4;
      uVar3 = uVar3 ^ (uVar3 >> 2) + uVar3 * 0x20 + (uint)*pbVar1;
    } while (uVar4 <= (uint)((int)pcVar2 - (int)str));
    return uVar3;
  }
  return uVar3;
}


