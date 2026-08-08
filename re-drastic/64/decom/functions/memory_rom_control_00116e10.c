/*
 * Ghidra decompilation
 *
 * Function : memory_rom_control
 * Address  : 00116e10
 * Program  : drastic64
 */


uint memory_rom_control(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xfba68);
  uVar1 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
  if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
      ((ulong)*(uint *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) -
      (long)*(int *)(nds_system + lVar2 + 0x10cdfe0)) {
    uVar1 = *(uint *)(param_1 + 0x1b214);
  }
  return uVar1;
}


