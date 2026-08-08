/*
 * Ghidra decompilation
 *
 * Function : platform_get_config_input
 * Address  : 0018b520
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void platform_get_config_input(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long local_50;
  long local_48;
  uint local_40 [2];
  uint local_38;
  byte local_34;
  byte local_33;
  short local_30;
  uint local_2c;
  long local_8;
  
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  iVar6 = 2;
  lVar7 = 0;
  local_50 = 0;
  get_ticks_us(&local_48,0);
  while( true ) {
    get_ticks_us(&local_50);
    while (iVar1 = SDL_PollEvent(local_40), iVar1 != 0) {
      if (local_40[0] == 0x602) {
        uVar4 = (local_38 & 3) << 8 | (uint)local_33 | 0x440;
        goto LAB_0018b630;
      }
      if (local_40[0] < 0x603) {
        if (local_40[0] == 0x300) {
          uVar4 = ((int)local_2c >> 0x1e & 3U) << 8 | local_2c & 0xff;
          goto LAB_0018b630;
        }
        if ((local_40[0] == 0x600) && (-1 < (char)local_34)) {
          uVar2 = (uint)local_30;
          if (local_38 != uVar3) {
            uVar4 = 0xffffffff;
            uVar5 = 0;
          }
          iVar1 = 2;
          if (local_30 < 0) {
            uVar2 = -(int)local_30;
            iVar1 = 3;
          }
          uVar3 = local_38;
          if (((10000 < (int)uVar2 && uVar5 <= uVar2) && ((int)uVar2 < 0x2711 || uVar2 != uVar5)) &&
             (uVar5 = uVar2, uVar4 != local_34 || iVar6 != iVar1)) {
            lVar7 = local_50;
            uVar4 = (uint)local_34;
            iVar6 = iVar1;
          }
        }
      }
      else if (local_40[0] == 0x603) {
        uVar4 = (local_38 & 3) << 8 | (uint)local_34 | 0x400;
        goto LAB_0018b630;
      }
    }
    if ((uVar4 != 0xffffffff) && (500000 < (ulong)(local_50 - lVar7))) break;
    if (10000000 < (ulong)(local_50 - local_48)) {
      uVar4 = 0xffff;
LAB_0018b630:
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4,local_8 - ___stack_chk_guard,0);
      }
      return;
    }
    delay_us(10000);
  }
  uVar4 = (uVar3 & 3) << 8 | 0x400 | uVar4 | iVar6 << 6;
  goto LAB_0018b630;
}


