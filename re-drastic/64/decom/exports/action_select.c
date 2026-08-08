/*
 * Ghidra decompilation
 *
 * Function : action_select
 * Address  : 0017a3c0
 * Program  : drastic64
 */


int action_select(undefined8 param_1,long param_2,int *param_3)

{
  if (*param_3 != 4) {
    return *param_3;
  }
  clear_gui_actions();
  (**(code **)(param_2 + 0x30))(param_1);
  return 0xb;
}


