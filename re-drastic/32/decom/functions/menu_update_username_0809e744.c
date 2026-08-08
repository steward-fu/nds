/*
 * Ghidra decompilation
 *
 * Function : menu_update_username
 * Address  : 0809e744
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void menu_update_username(menu_state_struct *menu_state)

{
  config_struct *pcVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  pcVar1 = menu_state->config;
  if (pcVar1 < menu_state->bg_info_string &&
      menu_state->config_username < &(pcVar1->firmware).language) {
    (pcVar1->firmware).username[0] = (uint)(byte)menu_state->config_username[0];
    (pcVar1->firmware).username[1] = (uint)(byte)menu_state->config_username[1];
    (pcVar1->firmware).username[2] = (uint)(byte)menu_state->config_username[2];
    (pcVar1->firmware).username[3] = (uint)(byte)menu_state->config_username[3];
    (pcVar1->firmware).username[4] = (uint)(byte)menu_state->config_username[4];
    (pcVar1->firmware).username[5] = (uint)(byte)menu_state->config_username[5];
    (pcVar1->firmware).username[6] = (uint)(byte)menu_state->config_username[6];
    (pcVar1->firmware).username[7] = (uint)(byte)menu_state->config_username[7];
  }
  else {
    auVar2 = VectorCopyLong(*(undefined8 *)menu_state->config_username,1,1);
    auVar3 = VectorCopyLong(auVar2._0_8_,2,1);
    auVar2 = VectorCopyLong(auVar2._8_8_,2,1);
    *(longlong *)(pcVar1->firmware).username = auVar3._0_8_;
    *(longlong *)((pcVar1->firmware).username + 2) = auVar3._8_8_;
    *(longlong *)((pcVar1->firmware).username + 4) = auVar2._0_8_;
    *(longlong *)((pcVar1->firmware).username + 6) = auVar2._8_8_;
  }
  (pcVar1->firmware).username[8] = (uint)(byte)menu_state->config_username[8];
  (pcVar1->firmware).username[9] = (uint)(byte)menu_state->config_username[9];
  (pcVar1->firmware).username[10] = (uint)(byte)menu_state->config_username[10];
  return;
}


