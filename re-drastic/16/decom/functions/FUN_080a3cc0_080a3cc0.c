/*
 * Ghidra decompilation
 *
 * Function : FUN_080a3cc0
 * Address  : 080a3cc0
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x080a3d34) */

undefined4 * FUN_080a3cc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_080ed640;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 4) != '\x01')) {
    if (*(char *)((int)param_1 + 0x12) == '\0') {
      FUN_080a42dc(param_1);
    }
    else {
      FUN_080a43cc(param_1);
    }
  }
  return param_1;
}


