/*
 * Ghidra decompilation
 *
 * Function : gba_backup_load
 * Address  : 0016e810
 * Program  : drastic64
 */


undefined gba_backup_load(long param_1,uint param_2)

{
  undefined uVar1;
  
  if (*(char *)(param_1 + 0x440) == '\x01') {
    return *(undefined *)
            (*(long *)(param_1 + 0x428) + (ulong)(*(int *)(param_1 + 0x434) - 1U & param_2));
  }
  if (*(char *)(param_1 + 0x440) != '\x03') {
    return 0xff;
  }
  if (*(char *)(param_1 + 0x441) == '\x02') {
    if (param_2 == 0) {
      uVar1 = 0x32;
      if (*(int *)(param_1 + 0x434) != 0x10000) {
        uVar1 = 0xc2;
      }
      return uVar1;
    }
    uVar1 = 0xff;
    if (param_2 == 1) {
      uVar1 = 0x1b;
      if (*(int *)(param_1 + 0x434) != 0x10000) {
        uVar1 = 9;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = *(undefined *)
             (*(long *)(param_1 + 0x428) + (ulong)(*(int *)(param_1 + 0x438) + (param_2 & 0xffff)));
  }
  return uVar1;
}


