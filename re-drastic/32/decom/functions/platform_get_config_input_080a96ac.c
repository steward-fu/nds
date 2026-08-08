/*
 * Ghidra decompilation
 *
 * Function : platform_get_config_input
 * Address  : 080a96ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 platform_get_config_input(void)

{
  int iVar1;
  u32 uVar2;
  u32 joy_index;
  uint uVar3;
  s32 axis_value;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_7c;
  u64 current_ts;
  u64 base_ts;
  SDL_Event event;
  int local_2c;
  
  uVar4 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar8 = 0;
  uVar6 = 0;
  iVar7 = 0;
  local_7c = 2;
  current_ts._0_4_ = 0;
  current_ts._4_4_ = 0;
  local_2c = __stack_chk_guard;
  get_ticks_us(&base_ts);
  while( true ) {
    get_ticks_us(&current_ts);
    uVar3 = uVar6;
    iVar1 = iVar7;
    iVar11 = local_7c;
    while (local_7c = iVar11, iVar7 = iVar1, uVar6 = uVar3, iVar1 = SDL_PollEvent(&event),
          iVar1 != 0) {
      uVar3 = uVar6;
      iVar1 = iVar7;
      iVar11 = local_7c;
      if (event.type == 0x600) {
        if ((event.window.event & 0x80) == 0) {
          uVar3 = (uint)event.jaxis.value;
          uVar5 = uVar4;
          uVar9 = uVar8;
          if (uVar10 != event.window.windowID) {
            uVar9 = 0;
            uVar5 = 0xffffffff;
          }
          if ((int)uVar3 < 0) {
            iVar11 = 3;
            uVar8 = -uVar3;
          }
          else {
            iVar11 = 2;
            uVar8 = uVar3;
          }
          uVar10 = event.window.windowID;
          if ((uVar8 <= uVar9 || (int)uVar8 < 0x2711) ||
             (uVar4 = (uint)event.window.event, uVar3 = (uint)current_ts, iVar1 = current_ts._4_4_,
             uVar9 = uVar8, local_7c == iVar11 && event.window.event == uVar5)) {
            uVar4 = uVar5;
            uVar3 = uVar6;
            iVar1 = iVar7;
            uVar8 = uVar9;
            iVar11 = local_7c;
          }
        }
      }
      else if (event.type < 0x601) {
        if (event.type == 0x300) {
          uVar2 = (uint)event.window.data2 >> 0x16 & 0x300 | event.window.data2 & 0xffU;
          goto LAB_080a9758;
        }
      }
      else {
        if (event.type == 0x602) {
          uVar2 = event.window.padding1 | 0x440 | (event.window.windowID & 3) << 8;
          goto LAB_080a9758;
        }
        if (event.type == 0x603) {
          uVar2 = event.window.event | 0x400 | (event.window.windowID & 3) << 8;
          goto LAB_080a9758;
        }
      }
    }
    if ((uVar4 != 0xffffffff) &&
       (bVar12 = current_ts._4_4_ != iVar7 + (uint)((uint)current_ts < uVar6),
       (bVar12 || 499999 < (uint)current_ts - uVar6) &&
       (bVar12 || (uint)current_ts - uVar6 != 500000))) break;
    bVar12 = current_ts._4_4_ != base_ts._4_4_ + (uint)((uint)current_ts < (uint)base_ts);
    if ((bVar12 || 9999999 < (uint)current_ts - (uint)base_ts) &&
        (bVar12 || (uint)current_ts - (uint)base_ts != 10000000)) {
      uVar2 = 0xffff;
LAB_080a9758:
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar2;
    }
    delay_us(10000);
  }
  uVar2 = local_7c << 6 | uVar4 | 0x400 | (uVar10 & 3) << 8;
  goto LAB_080a9758;
}


