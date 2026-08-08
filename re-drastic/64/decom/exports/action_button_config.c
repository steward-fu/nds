/*
 * Ghidra decompilation
 *
 * Function : action_button_config
 * Address  : 0017a400
 * Program  : drastic64
 */


uint action_button_config(long param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(char *)(param_2 + 0x48) != '\0') {
    uVar3 = platform_get_config_input();
    if (((uint)(uVar3 >> 10) & 0x3fffff) != 0x3f) {
      puVar1 = (undefined8 *)(param_2 + 0x38);
      if (*(int *)(param_1 + 0x164) == 1) {
        puVar1 = (undefined8 *)(param_2 + 0x40);
      }
      *(short *)*puVar1 = (short)uVar3;
    }
    *(undefined *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    clear_gui_actions();
    delay_us(100000);
    return 0xb;
  }
  uVar2 = *param_3;
  if (uVar2 != 4) {
    if (uVar2 < 5) {
      if (uVar2 - 2 < 2) {
        uVar2 = 0xb;
        *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) ^ 1;
      }
    }
    else if (uVar2 == 6) {
      puVar1 = (undefined8 *)(param_2 + 0x38);
      if (*(int *)(param_1 + 0x164) == 1) {
        puVar1 = (undefined8 *)(param_2 + 0x40);
      }
      *(undefined2 *)*puVar1 = 0xffff;
      return 0xb;
    }
    return uVar2;
  }
  *(undefined *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x168) = 1;
  return 0xb;
}


