/*
 * Ghidra decompilation
 *
 * Function : FUN_08061e00
 * Address  : 08061e00
 * Program  : drastic16
 */


int FUN_08061e00(undefined4 param_1,int param_2,int *param_3)

{
  if (*param_3 != 4) {
    return *param_3;
  }
  FUN_08079b48();
  (**(code **)(param_2 + 0x18))(param_1,param_2);
  return 0xb;
}


