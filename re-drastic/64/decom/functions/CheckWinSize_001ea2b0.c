/*
 * Ghidra decompilation
 *
 * Function : CheckWinSize
 * Address  : 001ea2b0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::CheckWinSize() */

undefined8 CommandData::CheckWinSize(void)

{
  long in_x0;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x10);
  if (((((((lVar1 != 0x10000) && (lVar1 != 0x20000)) && (lVar1 != 0x40000)) &&
        ((lVar1 != 0x80000 && (lVar1 != 0x100000)))) &&
       ((lVar1 != 0x200000 && ((lVar1 != 0x400000 && (lVar1 != 0x800000)))))) &&
      (lVar1 != 0x1000000)) &&
     ((((lVar1 != 0x2000000 && (lVar1 != 0x4000000)) && (lVar1 != 0x8000000)) &&
      (((lVar1 != 0x10000000 && (lVar1 != 0x20000000)) &&
       ((lVar1 != 0x40000000 && ((lVar1 != 0x80000000 && (lVar1 != 0x100000000)))))))))) {
    *(undefined8 *)(in_x0 + 0x10) = 0x400000;
    return 0;
  }
  return 1;
}


