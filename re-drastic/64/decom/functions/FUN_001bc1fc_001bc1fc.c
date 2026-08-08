/*
 * Ghidra decompilation
 *
 * Function : FUN_001bc1fc
 * Address  : 001bc1fc
 * Program  : drastic64
 */


void FUN_001bc1fc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (Archive::ConvertAttributes()::mask == 0xffffffff) {
    Archive::ConvertAttributes()::mask = umask(0x12);
    umask(Archive::ConvertAttributes()::mask);
  }
  if (*(int *)(param_1 + 0xa874) != 0) {
    if (*(int *)(param_1 + 0xa874) != 1) {
      uVar2 = (Archive::ConvertAttributes()::mask ^ 0xffffffff) & 0x41ff;
      if (*(char *)(param_1 + 0xa861) == '\0') {
        uVar2 = (Archive::ConvertAttributes()::mask ^ 0xffffffff) & 0x81b6;
      }
      *(uint *)(param_1 + 0x878c) = uVar2;
    }
    return;
  }
  uVar2 = ~Archive::ConvertAttributes()::mask;
  if ((*(uint *)(param_1 + 0x878c) >> 4 & 1) != 0) {
    *(uint *)(param_1 + 0x878c) = uVar2 & 0x1ff;
    return;
  }
  uVar1 = uVar2 & 0x124;
  if ((*(uint *)(param_1 + 0x878c) & 1) == 0) {
    uVar1 = uVar2 & 0x1b6;
  }
  *(uint *)(param_1 + 0x878c) = uVar1;
  return;
}


