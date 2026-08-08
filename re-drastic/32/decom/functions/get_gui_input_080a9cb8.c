/*
 * Ghidra decompilation
 *
 * Function : get_gui_input
 * Address  : 080a9cb8
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

u32 get_gui_input(input_struct *input,gui_input_struct *gui_input)

{
  int iVar1;
  u32 uVar2;
  u64 *puVar3;
  u32 uVar4;
  system_struct *psVar5;
  uint uVar6;
  u32 uVar7;
  u64 *puVar8;
  uint uVar9;
  u32 axis;
  uint uVar10;
  u32 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  u32 joy_index;
  u32 uVar15;
  u64 *code_map;
  u32 new_active;
  u32 new_active_1;
  bool bVar16;
  u32 old_active;
  u64 new_ticks;
  SDL_Event event;
  int local_2c;
  
  psVar5 = input->system;
  local_2c = __stack_chk_guard;
  delay_us(10000);
  uVar15 = 0xb;
LAB_080a9d24:
  do {
    iVar1 = SDL_PollEvent(&event);
    while( true ) {
      if (iVar1 == 0) {
        if (uVar15 == 0xb) {
          if (gui_actions[get_gui_input::cursor_repeat] != '\0') {
            get_ticks_us(&new_ticks);
            if (get_gui_input::button_repeat_state == BUTTON_HELD_INITIAL) {
              bVar16 = new_ticks._4_4_ !=
                       get_gui_input::button_repeat_timestamp._4_4_ +
                       (uint)((uint)new_ticks < (uint)get_gui_input::button_repeat_timestamp);
              if ((bVar16 || 249999 < (uint)new_ticks - (uint)get_gui_input::button_repeat_timestamp
                  ) && (bVar16 ||
                       (uint)new_ticks - (uint)get_gui_input::button_repeat_timestamp != 250000)) {
                get_gui_input::button_repeat_timestamp._0_4_ = (uint)new_ticks;
                get_gui_input::button_repeat_timestamp._4_4_ = new_ticks._4_4_;
                get_gui_input::button_repeat_state = BUTTON_HELD_REPEAT;
                uVar15 = get_gui_input::cursor_repeat;
              }
            }
            else if (get_gui_input::button_repeat_state == BUTTON_HELD_REPEAT) {
              bVar16 = new_ticks._4_4_ !=
                       get_gui_input::button_repeat_timestamp._4_4_ +
                       (uint)((uint)new_ticks < (uint)get_gui_input::button_repeat_timestamp);
              if ((bVar16 || 49999 < (uint)new_ticks - (uint)get_gui_input::button_repeat_timestamp)
                  && (bVar16 ||
                     (uint)new_ticks - (uint)get_gui_input::button_repeat_timestamp != 50000)) {
                uVar15 = get_gui_input::cursor_repeat;
                get_gui_input::button_repeat_timestamp._0_4_ = (uint)new_ticks;
                get_gui_input::button_repeat_timestamp._4_4_ = new_ticks._4_4_;
              }
            }
          }
        }
        else {
          get_ticks_us(&get_gui_input::button_repeat_timestamp);
          get_gui_input::button_repeat_state = BUTTON_HELD_INITIAL;
          get_gui_input::cursor_repeat = uVar15;
        }
        gui_input->action_type = uVar15;
        if (local_2c == __stack_chk_guard) {
          return uVar15;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (event.type == 0x600) break;
      if (event.type < 0x601) {
        if (event.type != 0x300) {
          if (event.type == 0x301) {
            uVar10 = (uint)event.window.data2 >> 0x16 & 0x300 | event.window.data2 & 0xffU;
LAB_080aa148:
            puVar8 = (psVar5->config).controls_code_to_config_map + uVar10;
            uVar10 = *(uint *)puVar8;
            uVar6 = *(uint *)((int)puVar8 + 4);
            if ((uVar10 & 0x40000000) == 0) {
              iVar1 = 0xb;
            }
            else {
              iVar1 = 0;
            }
            if ((uVar10 & 0x80000000) != 0) {
              iVar1 = 1;
            }
            if ((uVar6 & 1) != 0) {
              iVar1 = 2;
            }
            if ((uVar6 & 2) != 0) {
              iVar1 = 3;
            }
            if ((uVar6 & 4) != 0) {
              iVar1 = 4;
            }
            if ((uVar6 & 8) != 0) {
              iVar1 = 5;
            }
            if ((uVar6 & 0x10) != 0) {
              iVar1 = 6;
            }
            if ((uVar6 & 0x20) != 0) {
              iVar1 = 7;
            }
            if ((uVar6 & 0x40) != 0) {
              iVar1 = 8;
            }
            if ((uVar6 & 0x80) != 0) {
              iVar1 = 9;
            }
            gui_actions[iVar1] = '\0';
          }
          goto LAB_080a9d24;
        }
        puVar8 = (psVar5->config).controls_code_to_config_map +
                 ((uint)event.window.data2 >> 0x16 & 0x300 | event.window.data2 & 0xffU);
        uVar10 = *(uint *)puVar8;
        uVar6 = *(uint *)((int)puVar8 + 4);
        if ((uVar10 & 0x40000000) == 0) {
          uVar15 = 0xb;
        }
        else {
          uVar15 = 0;
        }
        if ((uVar10 & 0x80000000) != 0) {
          uVar15 = 1;
        }
        if ((uVar6 & 1) != 0) {
          uVar15 = 2;
        }
        if ((uVar6 & 2) != 0) {
          uVar15 = 3;
        }
        if ((uVar6 & 4) != 0) {
          uVar15 = 4;
        }
        if ((uVar6 & 8) != 0) {
          uVar15 = 5;
        }
        if ((uVar6 & 0x10) != 0) {
          uVar15 = 6;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar15 = 7;
        }
        if ((uVar6 & 0x40) == 0) {
          if ((uVar6 & 0x80) == 0) {
            if (uVar15 == 0xb) {
              uVar15 = key_map_shift(event.window.data2,(uint)event.key.keysym.mod);
              gui_input->key_letter = uVar15;
              uVar15 = 10;
              goto LAB_080a9d24;
            }
          }
          else {
            uVar15 = 9;
          }
        }
        else if ((uVar6 & 0x80) == 0) {
          uVar15 = 8;
        }
        else {
          uVar15 = 9;
        }
        gui_actions[uVar15] = '\x01';
        goto LAB_080a9d24;
      }
      if (event.type == 0x603) {
        puVar8 = (psVar5->config).controls_code_to_config_map +
                 (event.window.event | 0x400 | (event.window.windowID & 3) << 8);
        uVar10 = *(uint *)puVar8;
        uVar6 = *(uint *)((int)puVar8 + 4);
        if ((uVar10 & 0x40000000) == 0) {
          uVar15 = 0xb;
        }
        else {
          uVar15 = 0;
        }
        if ((uVar10 & 0x80000000) != 0) {
          uVar15 = 1;
        }
        if ((uVar6 & 1) != 0) {
          uVar15 = 2;
        }
        if ((uVar6 & 2) != 0) {
          uVar15 = 3;
        }
        if ((uVar6 & 4) != 0) {
          uVar15 = 4;
        }
        if ((uVar6 & 8) != 0) {
          uVar15 = 5;
        }
        if ((uVar6 & 0x10) != 0) {
          uVar15 = 6;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar15 = 7;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar15 = 8;
        }
        if ((uVar6 & 0x80) != 0) {
          uVar15 = 9;
        }
        gui_actions[uVar15] = '\x01';
        goto LAB_080a9d24;
      }
      if (event.type == 0x604) {
        uVar10 = event.window.event | 0x400 | (event.window.windowID & 3) << 8;
        goto LAB_080aa148;
      }
      if (event.type != 0x602) goto LAB_080a9d24;
      uVar10 = (event.window.windowID & 3) << 8;
      puVar8 = (psVar5->config).controls_code_to_config_map + (uVar10 | 0x441);
      uVar6 = *(uint *)puVar8;
      uVar9 = *(uint *)((int)puVar8 + 4);
      puVar8 = (psVar5->config).controls_code_to_config_map + (uVar10 | 0x442);
      puVar3 = (psVar5->config).controls_code_to_config_map + (uVar10 | 0x444);
      uVar12 = *(uint *)puVar3;
      uVar13 = *(uint *)((int)puVar3 + 4);
      puVar3 = (psVar5->config).controls_code_to_config_map + (uVar10 | 0x448);
      if ((uVar6 & 0x40000000) == 0) {
        uVar2 = 0xb;
      }
      else {
        uVar2 = 0;
      }
      if ((uVar6 & 0x80000000) != 0) {
        uVar2 = 1;
      }
      if ((uVar9 & 1) != 0) {
        uVar2 = 2;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = 3;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = 4;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = 5;
      }
      if ((uVar9 & 0x10) != 0) {
        uVar2 = 6;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = 7;
      }
      uVar10 = *(uint *)puVar3;
      uVar6 = *(uint *)((int)puVar3 + 4);
      if ((uVar9 & 0x40) != 0) {
        uVar2 = 8;
      }
      if ((uVar9 & 0x80) != 0) {
        uVar2 = 9;
      }
      if ((uVar12 & 0x40000000) == 0) {
        uVar4 = 0xb;
      }
      else {
        uVar4 = 0;
      }
      if ((uVar12 & 0x80000000) != 0) {
        uVar4 = 1;
      }
      if ((uVar13 & 1) != 0) {
        uVar4 = 2;
      }
      if ((uVar13 & 2) != 0) {
        uVar4 = 3;
      }
      if ((uVar13 & 4) != 0) {
        uVar4 = 4;
      }
      if ((uVar13 & 8) != 0) {
        uVar4 = 5;
      }
      if ((uVar13 & 0x10) != 0) {
        uVar4 = 6;
      }
      if ((uVar13 & 0x20) != 0) {
        uVar4 = 7;
      }
      if ((uVar13 & 0x40) != 0) {
        uVar4 = 8;
      }
      if ((uVar13 & 0x80) != 0) {
        uVar4 = 9;
      }
      if ((uVar10 & 0x40000000) == 0) {
        uVar7 = 0xb;
      }
      else {
        uVar7 = 0;
      }
      if ((uVar10 & 0x80000000) != 0) {
        uVar7 = 1;
      }
      if ((uVar6 & 1) != 0) {
        uVar7 = 2;
      }
      if ((uVar6 & 2) != 0) {
        uVar7 = 3;
      }
      if ((uVar6 & 4) != 0) {
        uVar7 = 4;
      }
      if ((uVar6 & 8) != 0) {
        uVar7 = 5;
      }
      uVar10 = *(uint *)puVar8;
      uVar9 = *(uint *)((int)puVar8 + 4);
      if ((uVar6 & 0x10) != 0) {
        uVar7 = 6;
      }
      gui_actions[uVar2] = '\0';
      if ((uVar6 & 0x20) != 0) {
        uVar7 = 7;
      }
      gui_actions[uVar4] = '\0';
      if ((uVar6 & 0x40) != 0) {
        uVar7 = 8;
      }
      uVar11 = uVar10 & 0x40000000;
      if ((uVar6 & 0x80) != 0) {
        uVar7 = 9;
      }
      bVar16 = uVar11 != 0;
      if (bVar16) {
        uVar11 = 0;
      }
      gui_actions[uVar7] = '\0';
      if (!bVar16) {
        uVar11 = 0xb;
      }
      if ((uVar10 & 0x80000000) != 0) {
        uVar11 = 1;
      }
      if ((uVar9 & 1) != 0) {
        uVar11 = 2;
      }
      if ((uVar9 & 2) != 0) {
        uVar11 = 3;
      }
      if ((uVar9 & 4) != 0) {
        uVar11 = 4;
      }
      if ((uVar9 & 8) != 0) {
        uVar11 = 5;
      }
      if ((uVar9 & 0x10) != 0) {
        uVar11 = 6;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar11 = 7;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar11 = 8;
      }
      if ((uVar9 & 0x80) != 0) {
        uVar11 = 9;
      }
      if ((event.window.padding1 & 1) == 0) {
        uVar2 = uVar15;
      }
      if ((event.window.padding1 & 4) == 0) {
        uVar4 = uVar2;
      }
      gui_actions[uVar11] = '\0';
      if ((event.window.padding1 & 8) == 0) {
        uVar7 = uVar4;
      }
      uVar15 = uVar11;
      if ((event.window.padding1 & 2) == 0) {
        uVar15 = uVar7;
      }
      gui_actions[uVar15] = '\x01';
      iVar1 = SDL_PollEvent(&event);
    }
    uVar10 = (uint)event.window.event << 1;
    uVar6 = SDL_input.axes_active[event.window.windowID] & ~(3 << (uVar10 & 0xff));
    if (event.jaxis.value < 0x2711) {
      if (event.jaxis.value < -10000) {
        uVar6 = uVar6 | 2 << (uVar10 & 0xff);
      }
    }
    else {
      uVar6 = uVar6 | 1 << (uVar10 & 0xff);
    }
    uVar9 = (uint)event.window.event | (event.window.windowID & 3) << 8;
    puVar8 = (psVar5->config).controls_code_to_config_map + (uVar9 | 0x480);
    puVar3 = (psVar5->config).controls_code_to_config_map + (uVar9 | 0x4c0);
    uVar13 = *(uint *)puVar8;
    uVar14 = *(uint *)((int)puVar8 + 4);
    uVar9 = *(uint *)puVar3;
    uVar12 = *(uint *)((int)puVar3 + 4);
    if ((uVar13 & 0x40000000) == 0) {
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0;
    }
    if ((uVar13 & 0x80000000) != 0) {
      uVar2 = 1;
    }
    if ((uVar14 & 1) != 0) {
      uVar2 = 2;
    }
    if ((uVar14 & 2) != 0) {
      uVar2 = 3;
    }
    if ((uVar14 & 4) != 0) {
      uVar2 = 4;
    }
    if ((uVar14 & 8) != 0) {
      uVar2 = 5;
    }
    if ((uVar14 & 0x10) != 0) {
      uVar2 = 6;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar2 = 7;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar2 = 8;
    }
    if ((uVar14 & 0x80) != 0) {
      uVar2 = 9;
    }
    if ((uVar9 & 0x40000000) == 0) {
      uVar4 = 0xb;
    }
    else {
      uVar4 = 0;
    }
    if ((uVar9 & 0x80000000) != 0) {
      uVar4 = 1;
    }
    if ((uVar12 & 1) != 0) {
      uVar4 = 2;
    }
    if ((uVar12 & 2) != 0) {
      uVar4 = 3;
    }
    if ((uVar12 & 4) != 0) {
      uVar4 = 4;
    }
    if ((uVar12 & 8) != 0) {
      uVar4 = 5;
    }
    if ((uVar12 & 0x10) != 0) {
      uVar4 = 6;
    }
    if ((uVar12 & 0x20) != 0) {
      uVar4 = 7;
    }
    if ((uVar12 & 0x40) != 0) {
      uVar4 = 8;
    }
    if ((uVar12 & 0x80) != 0) {
      uVar4 = 9;
    }
    if (SDL_input.axes_active[event.window.windowID] != uVar6) {
      gui_actions[uVar2] = '\0';
      gui_actions[uVar4] = '\0';
      SDL_input.axes_active[event.window.windowID] = uVar6;
      if ((uVar6 & 1 << (uVar10 & 0xff)) == 0) {
        uVar2 = uVar15;
      }
      if ((uVar6 & 2 << (uVar10 & 0xff)) == 0) {
        uVar4 = uVar2;
      }
      gui_actions[uVar4] = '\x01';
      uVar15 = uVar4;
    }
  } while( true );
}


