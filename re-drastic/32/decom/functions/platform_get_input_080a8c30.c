/*
 * Ghidra decompilation
 *
 * Function : platform_get_input
 * Address  : 080a8c30
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

void platform_get_input(input_struct *input)

{
  u8 uVar1;
  u32 uVar2;
  u32 uVar3;
  int iVar4;
  u32 mod_state;
  u32 code_up;
  uint uVar5;
  u32 new_active;
  u32 code_left;
  s32 value;
  uint uVar6;
  u32 new_status;
  u32 new_status_1;
  u32 new_status_2;
  u32 new_status_3;
  uint uVar7;
  u32 button_status;
  system_struct *psVar8;
  u64 *code_map;
  uint uVar9;
  u32 code_plus;
  u32 joy_index;
  uint uVar10;
  u32 code_minus;
  system_struct *psVar11;
  u32 code_down;
  uint uVar12;
  u32 code_right;
  SDL_Event event;
  int local_2c;
  
  psVar8 = input->system;
  uVar7 = input->button_status;
  local_2c = __stack_chk_guard;
LAB_080a8c98:
  do {
    iVar4 = SDL_PollEvent(&event);
    uVar1 = need_cursor_move;
joined_r0x080a8ca4:
    need_cursor_move = uVar1;
    if (iVar4 == 0) {
      sdl_screen_cursor_touch = (char)((uVar7 << 0xe) >> 0x1f);
      input->touch_status = sdl_screen_cursor_touch;
      if (uVar1 == '\0') {
        uVar5 = pending_touch_y + 1;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        uVar6 = pending_touch_x + 1;
        if (pending_touch_x + 1 != 0) {
          uVar6 = 1;
        }
      }
      else {
        pending_touch_x = (uint)sdl_screen_cursor_x + SDL_input.stick_cursor_x;
        if (SDL_input.stick_cursor_x < 1) {
          if (0xff < pending_touch_x) {
            pending_touch_x = 0;
          }
        }
        else if (0xfe < pending_touch_x) {
          pending_touch_x = 0xff;
        }
        if (SDL_input.stick_cursor_y < 1) {
          uVar5 = 1;
          pending_touch_y = (uint)sdl_screen_cursor_y + SDL_input.stick_cursor_y;
          uVar6 = 1;
          if (0xbf < pending_touch_y) {
            pending_touch_y = 0;
          }
        }
        else {
          uVar5 = 1;
          pending_touch_y = (uint)sdl_screen_cursor_y + SDL_input.stick_cursor_y;
          uVar6 = uVar5;
          if (0xbe < pending_touch_y) {
            pending_touch_y = 0xbf;
          }
        }
      }
      uVar3 = pending_touch_x;
      uVar2 = pending_touch_y;
      uVar9 = (uint)sdl_screen_cursor_y;
      if (sdl_screen_cursor_x == pending_touch_x) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 & 1;
      }
      input->button_status = uVar7;
      if (uVar6 != 0) {
        input->touch_x = uVar3;
        sdl_screen_cursor_x = (u16)uVar3;
      }
      if (uVar9 == uVar2) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 & 1;
      }
      if (uVar5 != 0) {
        sdl_screen_cursor_y = (u16)uVar2;
        input->touch_y = uVar2;
      }
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (event.type == 0x401) {
      uVar7 = uVar7 | 0x20000;
      psVar11 = input->system;
LAB_080a8edc:
      convert_touch_coordinates
                (event.window.data2,event.wheel.direction,&pending_touch_x,&pending_touch_y,
                 (psVar11->config).mirror_touch);
      goto LAB_080a8c98;
    }
    if (event.type < 0x402) {
      if (event.type == 0x300) {
        if (event.window.data2 != 0x1b) {
          uVar5 = SDL_GetModState();
          uVar6 = *(uint *)((psVar8->config).controls_code_to_config_map +
                           ((uint)event.window.data2 >> 0x16 & 0x300 | event.window.data2 & 0xffU));
          uVar7 = uVar7 | uVar6;
          if (((uVar7 & 0x8000000) != 0) && ((uVar5 & 3) != 0)) {
            uVar7 = uVar7 & 0xf7ffffff | 0x10000000;
          }
          if ((uVar7 & 0x100000) != 0) {
            if ((uVar5 & 1) != 0) {
              uVar7 = uVar7 | 0x8000000;
            }
            if ((uVar5 & 2) != 0) {
              uVar7 = uVar7 | 0x10000000;
            }
          }
          if (((uVar7 & 0x40000) != 0) && ((uVar5 & 3) != 0)) {
            uVar7 = uVar7 & 0xfffbffff | 0x2000000;
          }
          goto joined_r0x080a90d8;
        }
      }
      else {
        if (0x300 < event.type) {
          if (event.type == 0x301) {
            uVar6 = *(uint *)((psVar8->config).controls_code_to_config_map +
                             ((uint)event.window.data2 >> 0x16 & 0x300 | event.window.data2 & 0xffU)
                             );
            goto joined_r0x080a8fa8;
          }
          if (event.type == 0x400) {
            psVar11 = input->system;
            goto LAB_080a8edc;
          }
          goto LAB_080a8c98;
        }
        if (event.type != 0x100) goto LAB_080a8c98;
      }
      uVar7 = uVar7 | 0x4000000;
      goto LAB_080a8c98;
    }
    if (event.type != 0x602) {
      if (0x602 < event.type) {
        if (event.type == 0x603) {
          uVar6 = *(uint *)((psVar8->config).controls_code_to_config_map +
                           (event.window.event | 0x400 | (event.window.windowID & 3) << 8));
          uVar7 = uVar7 | uVar6;
joined_r0x080a90d8:
          if ((uVar6 & 0x4000) != 0) {
            SDL_input.stick_cursor_y = 2;
          }
          if ((uVar6 & 0x10000) != 0) {
            SDL_input.stick_cursor_x = 2;
          }
          if ((uVar6 & 0x2000) != 0) {
            SDL_input.stick_cursor_y = -2;
          }
          if ((uVar6 & 0x8000) != 0) {
            SDL_input.stick_cursor_x = -2;
          }
          goto joined_r0x080a9058;
        }
        if (event.type == 0x604) {
          uVar6 = *(uint *)((psVar8->config).controls_code_to_config_map +
                           (event.window.event | 0x400 | (event.window.windowID & 3) << 8));
joined_r0x080a8fa8:
          uVar7 = uVar7 & ~uVar6;
          if ((uVar6 & 0x4000) != 0) {
            SDL_input.stick_cursor_y = 0;
          }
          if ((uVar6 & 0x10000) != 0) {
            SDL_input.stick_cursor_x = 0;
          }
          if ((uVar6 & 0x2000) != 0) {
            SDL_input.stick_cursor_y = 0;
          }
          if ((uVar6 & 0x8000) != 0) {
            SDL_input.stick_cursor_x = 0;
          }
          if ((uVar6 & 0x1e000) != 0) {
            need_cursor_move = '\0';
          }
        }
        goto LAB_080a8c98;
      }
      if (event.type == 0x402) {
        uVar7 = uVar7 & 0xfffdffff;
        goto LAB_080a8c98;
      }
      if (event.type != 0x600) goto LAB_080a8c98;
      iVar4 = (int)event.jaxis.value;
      uVar10 = (uint)event.window.event | (event.window.windowID & 3) << 8;
      uVar6 = (uint)event.window.event << 1;
      uVar5 = SDL_input.axes_active[event.window.windowID] & ~(3 << (uVar6 & 0xff));
      uVar9 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar10 | 0x480));
      uVar10 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar10 | 0x4c0));
      if (iVar4 < 0x2711) {
        if (iVar4 < -10000) {
          uVar12 = 1 << (uVar6 & 0xff);
          uVar6 = 2 << (uVar6 & 0xff);
          uVar5 = uVar5 | uVar6;
        }
        else {
          uVar12 = 1 << (uVar6 & 0xff);
          uVar6 = 2 << (uVar6 & 0xff);
        }
      }
      else {
        uVar12 = 1 << (uVar6 & 0xff);
        uVar6 = 2 << (uVar6 & 0xff);
        uVar5 = uVar5 | uVar12;
      }
      SDL_input.axes_active[event.window.windowID] = uVar5;
      uVar7 = uVar7 & ~(uVar9 | uVar10);
      if ((uVar5 & uVar12) != 0) {
        uVar7 = uVar7 | uVar9;
      }
      if ((uVar5 & uVar6) != 0) {
        uVar7 = uVar7 | uVar10;
      }
      if ((uVar9 & 0x4000) != 0) {
        SDL_input.stick_cursor_y = iVar4 / 10000;
      }
      if ((uVar9 & 0x10000) != 0) {
        SDL_input.stick_cursor_x = iVar4 / 10000;
      }
      if ((uVar10 & 0x2000) != 0) {
        SDL_input.stick_cursor_y = iVar4 / 10000;
      }
      if ((uVar10 & 0x8000) != 0) {
        SDL_input.stick_cursor_x = iVar4 / 10000;
      }
      if ((SDL_input.stick_cursor_x != 0) || (SDL_input.stick_cursor_y != 0)) goto LAB_080a905c;
      need_cursor_move = '\0';
      iVar4 = SDL_PollEvent(&event);
      uVar1 = need_cursor_move;
      goto joined_r0x080a8ca4;
    }
    uVar6 = (event.window.windowID & 3) << 8;
    uVar5 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar6 | 0x441));
    uVar10 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar6 | 0x444));
    uVar9 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar6 | 0x448));
    uVar12 = *(uint *)((psVar8->config).controls_code_to_config_map + (uVar6 | 0x442));
    uVar6 = uVar5 | uVar10 | uVar9 | uVar12;
    uVar7 = uVar7 & ~uVar6;
    if ((uVar6 & 0x4000) != 0) {
      SDL_input.stick_cursor_y = 0;
    }
    if ((uVar6 & 0x10000) != 0) {
      SDL_input.stick_cursor_x = 0;
    }
    if ((uVar6 & 0x2000) != 0) {
      SDL_input.stick_cursor_y = 0;
    }
    if ((uVar6 & 0x8000) != 0) {
      SDL_input.stick_cursor_x = 0;
    }
    if ((uVar6 & 0x1e000) != 0) {
      need_cursor_move = '\0';
    }
    if ((event.window.padding1 & 1) != 0) {
      uVar7 = uVar7 | uVar5;
    }
    if ((event.window.padding1 & 4) != 0) {
      uVar7 = uVar7 | uVar10;
    }
    if ((event.window.padding1 & 8) != 0) {
      uVar7 = uVar7 | uVar9;
    }
    if ((event.window.padding1 & 2) != 0) {
      uVar7 = uVar7 | uVar12;
    }
    if ((uVar7 & 0x4000) != 0) {
      SDL_input.stick_cursor_y = 2;
    }
    if ((uVar7 & 0x10000) != 0) {
      SDL_input.stick_cursor_x = 2;
    }
    if ((uVar7 & 0x2000) != 0) {
      SDL_input.stick_cursor_y = -2;
    }
    uVar6 = uVar7;
    if ((uVar7 & 0x8000) != 0) {
      SDL_input.stick_cursor_x = -2;
    }
joined_r0x080a9058:
    if ((uVar6 & 0x1e000) == 0) goto LAB_080a8c98;
LAB_080a905c:
    need_cursor_move = '\x01';
  } while( true );
}


