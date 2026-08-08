/*
 * Ghidra decompilation
 *
 * Function : render_scanline_shade
 * Address  : 080bf630
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_shade(int param_1)

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


