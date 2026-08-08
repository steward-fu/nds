/*
 * Ghidra decompilation
 *
 * Function : FUN_0808f000
 * Address  : 0808f000
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0808f000(int param_1)

{
  SIMDExpandImmediate(0,0xe,0x20);
  if ((*(ushort *)(param_1 + 0x80) & 0x40) != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  SIMDExpandImmediate(0,0xe,0x3f);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


