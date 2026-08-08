/*
 * Ghidra decompilation
 *
 * Function : set_screen_menu_off
 * Address  : 0018a4a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_screen_menu_off(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined auStack_20 [4];
  undefined8 local_1c;
  long local_8;
  
  uVar2 = DAT_040315a4;
  local_8 = ___stack_chk_guard;
  if (DAT_040315c4._4_4_ != -1) {
    DAT_040315ac._4_4_ = DAT_040315c4._4_4_;
    DAT_040315c4._4_4_ = -1;
  }
  iVar3 = DAT_040315ac._4_4_;
  if ((int)DAT_040315c4 != -1) {
    DAT_040315ac._0_4_ = (int)DAT_040315c4;
    DAT_040315c4._0_4_ = -1;
  }
  iVar1 = (int)DAT_040315ac;
  if ((int)DAT_040315ac == 0) {
    iVar1 = 1;
  }
  __printf_chk(1,"Initializing screen: scale %d orientation %d depth %d\n",(int)DAT_040315ac,
               DAT_040315ac._4_4_,DAT_040315a4);
  DAT_04031530 = 0;
  DAT_04031540 = 1;
  _DAT_04031558 = 0;
  DAT_04031568 = 1;
  if (iVar3 == 2) {
    uVar6 = 0xc0;
    iVar3 = 0x100;
    iVar4 = 0xc0;
    iVar5 = 0x100;
    DAT_04031568 = 0;
  }
  else if (iVar3 == 3) {
    uVar6 = 0xc0;
    iVar3 = 0x100;
    iVar4 = 0xc0;
    iVar5 = 0x100;
    DAT_04031540 = 0;
  }
  else if (iVar3 == 1) {
    uVar6 = 0xc0;
    iVar3 = 0x200;
    iVar4 = 0xc0;
    iVar5 = 0x200;
    _DAT_04031558 = 0x100;
  }
  else {
    uVar6 = 0x180;
    iVar3 = 0x100;
    iVar4 = 0x180;
    iVar5 = 0x100;
    _DAT_04031558 = 0xc000000000;
  }
  SDL_SetWindowSize(DAT_04031570,iVar5 * iVar1,iVar4 * iVar1);
  SDL_RenderSetLogicalSize(DAT_04031578,iVar3,uVar6);
  DAT_040315a8 = uVar2 >> 3;
  DAT_040315d4 = 0;
  _DAT_040315e4 = (int)((double)iVar3 * 0.04);
  DAT_040315a4 = uVar2;
  _DAT_040315b4 = iVar5;
  _DAT_040315b8 = iVar4;
  SDL_GetCurrentDisplayMode(0,auStack_20);
  _DAT_040315bc = local_1c;
  if ((int)DAT_040315ac == 0) {
    SDL_SetWindowFullscreen(DAT_04031570,1);
  }
  else {
    SDL_SetWindowFullscreen(DAT_04031570,0);
  }
  clear_screen();
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


