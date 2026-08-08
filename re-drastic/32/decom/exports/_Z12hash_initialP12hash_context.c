/*
 * Ghidra decompilation
 *
 * Function : _Z12hash_initialP12hash_context
 * Address  : 080e83a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void hash_initial(hash_context *context)

{
  context->state[0] = 0x67452301;
  context->state[1] = 0xefcdab89;
  context->state[2] = 0x98badcfe;
  context->state[3] = 0x10325476;
  context->state[4] = 0xc3d2e1f0;
  context->count[0] = 0;
  context->count[1] = 0;
  return;
}


