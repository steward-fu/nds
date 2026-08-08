/*
 * Ghidra decompilation
 *
 * Function : FUN_0806185c
 * Address  : 0806185c
 * Program  : drastic16
 */


void FUN_0806185c(int *param_1,int param_2)

{
  FUN_08076bb8("Configure Firmware User Settings",0xffff,0,*(int *)(param_2 + 8) + 0x10,0xf8);
  FUN_08076bb8("(Note: changes take effect only",0xbac2,0,*(int *)(param_2 + 8) + 0x10,0x180);
  FUN_08076bb8(" when a game is newly loaded)",0xbac2,0,*(int *)(param_2 + 8) + 0x10,0x188);
  FUN_08077524(0xffff,*(int *)(param_2 + 8) + 0x118,0x128,0x10,8);
  FUN_08077524(*(undefined2 *)(&DAT_080e8b80 + *(int *)(*param_1 + 0x81350) * 2),
               *(int *)(param_2 + 8) + 0x119,0x129,0xe,6);
  return;
}


