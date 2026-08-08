/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4Get1Ev
 * Address  : 001c2060
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::Get1() */

undefined RawRead::Get1(void)

{
  long *in_x0;
  ulong uVar1;
  
  uVar1 = in_x0[6];
  if (uVar1 < (ulong)in_x0[5]) {
    in_x0[6] = uVar1 + 1;
    return *(undefined *)(*in_x0 + uVar1);
  }
  return 0;
}


