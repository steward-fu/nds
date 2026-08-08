/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Skip
 * Address  : 080cbfd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookToRead_Skip(void *pp,size_t offset)

{
  CLookToRead *p;
  
  p = (CLookToRead *)0x0;
  *(size_t *)((int)pp + 0x14) = *(int *)((int)pp + 0x14) + offset;
  return (SRes)p;
}


