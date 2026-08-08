/*
 * Ghidra decompilation
 *
 * Function : texture_cache_expand_component
 * Address  : 08087fb0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 texture_cache_expand_component(u32 component)

{
  u32 uVar1;
  
  uVar1 = component * 2;
  if (uVar1 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


