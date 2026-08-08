/*
 * Ghidra decompilation
 *
 * Function : initialize_geometry
 * Address  : 00163610
 * Program  : drastic64
 */


void initialize_geometry(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x9a30) = param_2;
  *(undefined8 *)(param_1 + 0x9a38) = param_3;
  *(long *)(param_1 + 0x9a58) = param_1 + 0x9764;
  *(long *)(param_1 + 0x9a60) = param_1 + 0x97a4;
  *(undefined *)(param_1 + 0x99b3) = 0;
  return;
}


