/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive17ConvertAttributesEv
 * Address  : 001bc200
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ConvertAttributes() */

void Archive::ConvertAttributes(void)

{
  uint uVar1;
  uint uVar2;
  long in_x0;
  
  if (ConvertAttributes()::mask == 0xffffffff) {
    ConvertAttributes()::mask = umask(0x12);
    umask(ConvertAttributes()::mask);
  }
  if (*(int *)(in_x0 + 0xa874) != 0) {
    if (*(int *)(in_x0 + 0xa874) != 1) {
      uVar2 = (ConvertAttributes()::mask ^ 0xffffffff) & 0x41ff;
      if (*(char *)(in_x0 + 0xa861) == '\0') {
        uVar2 = (ConvertAttributes()::mask ^ 0xffffffff) & 0x81b6;
      }
      *(uint *)(in_x0 + 0x878c) = uVar2;
    }
    return;
  }
  uVar2 = ~ConvertAttributes()::mask;
  if ((*(uint *)(in_x0 + 0x878c) >> 4 & 1) != 0) {
    *(uint *)(in_x0 + 0x878c) = uVar2 & 0x1ff;
    return;
  }
  uVar1 = uVar2 & 0x124;
  if ((*(uint *)(in_x0 + 0x878c) & 1) == 0) {
    uVar1 = uVar2 & 0x1b6;
  }
  *(uint *)(in_x0 + 0x878c) = uVar1;
  return;
}


