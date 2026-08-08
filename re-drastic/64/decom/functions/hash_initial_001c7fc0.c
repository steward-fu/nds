/*
 * Ghidra decompilation
 *
 * Function : hash_initial
 * Address  : 001c7fc0
 * Program  : drastic64
 */


/* hash_initial(hash_context*) */

void hash_initial(hash_context *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0xc3d2e1f0;
  *(undefined8 *)(param_1 + 8) = 0x1032547698badcfe;
  *(undefined8 *)param_1 = 0xefcdab8967452301;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


