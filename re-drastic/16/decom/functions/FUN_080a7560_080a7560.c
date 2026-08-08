/*
 * Ghidra decompilation
 *
 * Function : FUN_080a7560
 * Address  : 080a7560
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x080a7630) */

undefined4 * FUN_080a7560(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_080ed890;
  if ((*(char *)(param_1 + 0x1cbc) != '\0') &&
     (pvVar1 = (void *)param_1[0x1cbd], pvVar1 != (void *)0x0)) {
    FUN_080b6c5c(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_080a8804(param_1 + 0x31dc);
  FUN_080a8804(param_1 + 0x210c);
  FUN_080dede0(param_1 + 0x1cc8);
  FUN_080a8640(param_1 + 0xc0a);
  FUN_080b3764(param_1 + 0x807);
  FUN_080a3cc0(param_1);
  return param_1;
}


