/*
 * Ghidra decompilation
 *
 * Function : get_gui_input
 * Address  : 0018b9c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_gui_input(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long local_48;
  uint local_40 [2];
  uint local_38;
  byte local_34;
  byte local_33;
  short local_30;
  uint local_2c;
  ushort local_28;
  long local_8;
  
  uVar7 = 0xb;
  lVar10 = *(long *)(param_1 + 0x80008);
  local_8 = ___stack_chk_guard;
  delay_us(10000);
  lVar10 = lVar10 + 0x86318;
LAB_0018ba28:
  do {
    iVar4 = SDL_PollEvent(local_40);
    while( true ) {
      if (iVar4 == 0) {
        if (uVar7 == 0xb) {
          if (*(char *)((long)&gui_actions + (ulong)cursor_repeat_37536) != '\0') {
            get_ticks_us(&local_48);
            if (button_repeat_state_37535 == 1) {
              if (250000 < (ulong)(local_48 - button_repeat_timestamp_37534)) {
                button_repeat_timestamp_37534 = local_48;
                button_repeat_state_37535 = 2;
                uVar7 = cursor_repeat_37536;
              }
            }
            else if ((button_repeat_state_37535 == 2) &&
                    (50000 < (ulong)(local_48 - button_repeat_timestamp_37534))) {
              uVar7 = cursor_repeat_37536;
              button_repeat_timestamp_37534 = local_48;
            }
          }
        }
        else {
          get_ticks_us(&button_repeat_timestamp_37534);
          button_repeat_state_37535 = 1;
          cursor_repeat_37536 = uVar7;
        }
        lVar10 = local_8 - ___stack_chk_guard;
        *param_2 = uVar7;
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(lVar10,0);
        }
        return uVar7;
      }
      if (local_40[0] == 0x602) break;
      if (0x602 < local_40[0]) {
        if (local_40[0] == 0x603) {
          uVar9 = *(ulong *)(lVar10 + (long)(int)((local_38 & 3) << 8 | (uint)local_34 | 0x400) * 8)
          ;
          uVar7 = 0;
          if ((uVar9 & 0x80000000) == 0) {
            uVar7 = 0xb;
          }
          if ((uVar9 & 0x100000000) != 0) {
            uVar7 = 1;
          }
          if ((uVar9 & 0x200000000) != 0) {
            uVar7 = 2;
          }
          if ((uVar9 & 0x400000000) != 0) {
            uVar7 = 3;
          }
          if ((uVar9 & 0x800000000) != 0) {
            uVar7 = 4;
          }
          if ((uVar9 & 0x1000000000) != 0) {
            uVar7 = 5;
          }
          if ((uVar9 & 0x2000000000) != 0) {
            uVar7 = 6;
          }
          if ((uVar9 & 0x4000000000) != 0) {
            uVar7 = 7;
          }
          if ((uVar9 & 0x8000000000) != 0) {
            uVar7 = 8;
          }
          if ((uVar9 & 0x10000000000) != 0) {
            uVar7 = 9;
          }
          *(undefined *)((long)&gui_actions + (ulong)uVar7) = 1;
        }
        else if (local_40[0] == 0x604) {
          uVar9 = *(ulong *)(lVar10 + (long)(int)((local_38 & 3) << 8 | (uint)local_34 | 0x400) * 8)
          ;
          uVar6 = 0;
          if ((uVar9 & 0x80000000) == 0) {
            uVar6 = 0xb;
          }
          if ((uVar9 & 0x100000000) != 0) {
            uVar6 = 1;
          }
          if ((uVar9 & 0x200000000) != 0) {
            uVar6 = 2;
          }
          if ((uVar9 & 0x400000000) != 0) {
            uVar6 = 3;
          }
          if ((uVar9 & 0x800000000) != 0) {
            uVar6 = 4;
          }
          if ((uVar9 & 0x1000000000) != 0) {
            uVar6 = 5;
          }
          if ((uVar9 & 0x2000000000) != 0) {
            uVar6 = 6;
          }
          if ((uVar9 & 0x4000000000) != 0) {
            uVar6 = 7;
          }
          if ((uVar9 & 0x8000000000) != 0) {
            uVar6 = 8;
          }
LAB_0018bd50:
          if ((uVar9 & 0x10000000000) != 0) {
            uVar6 = 9;
          }
          *(undefined *)((long)&gui_actions + (ulong)uVar6) = 0;
        }
        goto LAB_0018ba28;
      }
      if (local_40[0] == 0x301) {
        uVar9 = *(ulong *)(lVar10 + (long)(int)(((int)local_2c >> 0x1e & 3U) << 8 | local_2c & 0xff)
                                    * 8);
        uVar6 = 0;
        if ((uVar9 & 0x80000000) == 0) {
          uVar6 = 0xb;
        }
        if ((uVar9 & 0x100000000) != 0) {
          uVar6 = 1;
        }
        if ((uVar9 & 0x200000000) != 0) {
          uVar6 = 2;
        }
        if ((uVar9 & 0x400000000) != 0) {
          uVar6 = 3;
        }
        if ((uVar9 & 0x800000000) != 0) {
          uVar6 = 4;
        }
        if ((uVar9 & 0x1000000000) != 0) {
          uVar6 = 5;
        }
        if ((uVar9 & 0x2000000000) != 0) {
          uVar6 = 6;
        }
        if ((uVar9 & 0x4000000000) != 0) {
          uVar6 = 7;
        }
        if ((uVar9 & 0x8000000000) != 0) {
          uVar6 = 8;
        }
        goto LAB_0018bd50;
      }
      if (local_40[0] != 0x600) {
        if (local_40[0] != 0x300) goto LAB_0018ba28;
        uVar9 = *(ulong *)(lVar10 + (long)(int)(((int)local_2c >> 0x1e & 3U) << 8 | local_2c & 0xff)
                                    * 8);
        uVar7 = 0;
        if ((uVar9 & 0x80000000) == 0) {
          uVar7 = 0xb;
        }
        if ((uVar9 & 0x100000000) != 0) {
          uVar7 = 1;
        }
        if ((uVar9 & 0x200000000) != 0) {
          uVar7 = 2;
        }
        if ((uVar9 & 0x400000000) != 0) {
          uVar7 = 3;
        }
        if ((uVar9 & 0x800000000) != 0) {
          uVar7 = 4;
        }
        if ((uVar9 & 0x1000000000) != 0) {
          uVar7 = 5;
        }
        if ((uVar9 & 0x2000000000) != 0) {
          uVar7 = 6;
        }
        uVar8 = uVar9 & 0x10000000000;
        if ((uVar9 >> 0x26 & 1) == 0) {
          if ((uVar9 >> 0x27 & 1) != 0) goto LAB_0018bc9c;
          if (uVar8 == 0) {
            if (uVar7 == 0xb) {
              uVar6 = local_2c;
              if ((local_28 & 3) != 0) {
                switch(local_2c) {
                case 0x27:
                  uVar6 = 0x22;
                  break;
                case 0x2c:
                  uVar6 = 0x3c;
                  break;
                case 0x2d:
                  uVar6 = 0x5f;
                  break;
                case 0x2e:
                  uVar6 = 0x3e;
                  break;
                case 0x2f:
                  uVar6 = 0x3f;
                  break;
                case 0x30:
                  uVar6 = 0x29;
                  break;
                case 0x31:
                  uVar6 = 0x21;
                  break;
                case 0x32:
                  uVar6 = 0x40;
                  break;
                case 0x33:
                  uVar6 = 0x23;
                  break;
                case 0x34:
                  uVar6 = 0x24;
                  break;
                case 0x35:
                  uVar6 = 0x25;
                  break;
                case 0x36:
                  uVar6 = 0x5e;
                  break;
                case 0x37:
                  uVar6 = 0x26;
                  break;
                case 0x38:
                  uVar6 = 0x2a;
                  break;
                case 0x39:
                  uVar6 = 0x28;
                  break;
                case 0x3b:
                  uVar6 = 0x3a;
                  break;
                case 0x3d:
                  uVar6 = 0x2b;
                  break;
                case 0x5b:
                  uVar6 = 0x7b;
                  break;
                case 0x5d:
                  uVar6 = 0x7d;
                  break;
                case 0x60:
                  uVar6 = 0x7e;
                  break;
                case 0x61:
                case 0x62:
                case 99:
                case 100:
                case 0x65:
                case 0x66:
                case 0x67:
                case 0x68:
                case 0x69:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                case 0x6d:
                case 0x6e:
                case 0x6f:
                case 0x70:
                case 0x71:
                case 0x72:
                case 0x73:
                case 0x74:
                case 0x75:
                case 0x76:
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                  uVar6 = local_2c - 0x20;
                }
              }
              uVar7 = 10;
              param_2[1] = uVar6;
              goto LAB_0018ba28;
            }
          }
          else {
            uVar7 = 9;
          }
        }
        else if ((uVar9 >> 0x27 & 1) == 0) {
          uVar7 = 7;
          if (uVar8 != 0) {
            uVar7 = 9;
          }
        }
        else {
LAB_0018bc9c:
          uVar7 = (uVar8 != 0) + 8;
        }
        *(undefined *)((long)&gui_actions + (ulong)uVar7) = 1;
        goto LAB_0018ba28;
      }
      uVar3 = (uint)local_34 * 2;
      uVar6 = *(uint *)(SDL_input + (ulong)local_38 * 4) &
              (3 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
      if (local_30 < 0x2711) {
        uVar5 = uVar6 | 2 << (ulong)(uVar3 & 0x1f);
        if (-0x2711 < local_30) {
          uVar5 = uVar6;
        }
      }
      else {
        uVar5 = uVar6 | 1 << (ulong)(uVar3 & 0x1f);
      }
      uVar2 = (local_38 & 3) << 8 | (uint)local_34;
      uVar9 = *(ulong *)(lVar10 + (ulong)(uVar2 | 0x480) * 8);
      uVar6 = 0;
      if ((uVar9 & 0x80000000) == 0) {
        uVar6 = 0xb;
      }
      if ((uVar9 & 0x100000000) != 0) {
        uVar6 = 1;
      }
      if ((uVar9 & 0x200000000) != 0) {
        uVar6 = 2;
      }
      if ((uVar9 & 0x400000000) != 0) {
        uVar6 = 3;
      }
      if ((uVar9 & 0x800000000) != 0) {
        uVar6 = 4;
      }
      if ((uVar9 & 0x1000000000) != 0) {
        uVar6 = 5;
      }
      uVar8 = *(ulong *)(lVar10 + (ulong)(uVar2 | 0x4c0) * 8);
      if ((uVar9 & 0x2000000000) != 0) {
        uVar6 = 6;
      }
      if ((uVar9 & 0x4000000000) != 0) {
        uVar6 = 7;
      }
      if ((uVar9 & 0x8000000000) != 0) {
        uVar6 = 8;
      }
      if ((uVar9 & 0x10000000000) != 0) {
        uVar6 = 9;
      }
      uVar2 = 0;
      if ((uVar8 & 0x80000000) == 0) {
        uVar2 = 0xb;
      }
      if ((uVar8 & 0x100000000) != 0) {
        uVar2 = 1;
      }
      if ((uVar8 & 0x200000000) != 0) {
        uVar2 = 2;
      }
      if ((uVar8 & 0x400000000) != 0) {
        uVar2 = 3;
      }
      if ((uVar8 & 0x800000000) != 0) {
        uVar2 = 4;
      }
      if ((uVar8 & 0x1000000000) != 0) {
        uVar2 = 5;
      }
      if ((uVar8 & 0x2000000000) != 0) {
        uVar2 = 6;
      }
      if ((uVar8 & 0x4000000000) != 0) {
        uVar2 = 7;
      }
      if ((uVar8 & 0x8000000000) != 0) {
        uVar2 = 8;
      }
      if ((uVar8 & 0x10000000000) != 0) {
        uVar2 = 9;
      }
      if (*(uint *)(SDL_input + (ulong)local_38 * 4) == uVar5) goto LAB_0018ba28;
      if ((1 << (ulong)(uVar3 & 0x1f) & uVar5) != 0) {
        uVar7 = uVar6;
      }
      if ((2 << (ulong)(uVar3 & 0x1f) & uVar5) != 0) {
        uVar7 = uVar2;
      }
      *(undefined *)((long)&gui_actions + (ulong)uVar6) = 0;
      *(undefined *)((long)&gui_actions + (ulong)uVar2) = 0;
      *(undefined *)((long)&gui_actions + (ulong)uVar7) = 1;
      *(uint *)(SDL_input + (ulong)local_38 * 4) = uVar5;
      iVar4 = SDL_PollEvent(local_40);
    }
    uVar3 = (local_38 & 3) << 8;
    uVar9 = *(ulong *)(lVar10 + (long)(int)(uVar3 | 0x441) * 8);
    uVar5 = 0xb;
    uVar6 = 0;
    if ((uVar9 & 0x80000000) == 0) {
      uVar6 = uVar5;
    }
    if ((uVar9 & 0x100000000) != 0) {
      uVar6 = 1;
    }
    if ((uVar9 & 0x200000000) != 0) {
      uVar6 = 2;
    }
    if ((uVar9 & 0x400000000) != 0) {
      uVar6 = 3;
    }
    if ((uVar9 & 0x800000000) != 0) {
      uVar6 = 4;
    }
    if ((uVar9 & 0x1000000000) != 0) {
      uVar6 = 5;
    }
    uVar8 = *(ulong *)(lVar10 + (long)(int)(uVar3 | 0x444) * 8);
    if ((uVar9 & 0x2000000000) != 0) {
      uVar6 = 6;
    }
    if ((uVar9 & 0x4000000000) != 0) {
      uVar6 = 7;
    }
    if ((uVar9 & 0x8000000000) != 0) {
      uVar6 = 8;
    }
    if ((uVar9 & 0x10000000000) != 0) {
      uVar6 = 9;
    }
    uVar2 = 0;
    if ((uVar8 & 0x80000000) == 0) {
      uVar2 = uVar5;
    }
    if ((uVar8 & 0x100000000) != 0) {
      uVar2 = 1;
    }
    if ((uVar8 & 0x200000000) != 0) {
      uVar2 = 2;
    }
    if ((uVar8 & 0x400000000) != 0) {
      uVar2 = 3;
    }
    if ((uVar8 & 0x800000000) != 0) {
      uVar2 = 4;
    }
    if ((uVar8 & 0x1000000000) != 0) {
      uVar2 = 5;
    }
    uVar9 = *(ulong *)(lVar10 + (long)(int)(uVar3 | 0x448) * 8);
    if ((uVar8 & 0x2000000000) != 0) {
      uVar2 = 6;
    }
    if ((uVar8 & 0x4000000000) != 0) {
      uVar2 = 7;
    }
    if ((uVar8 & 0x8000000000) != 0) {
      uVar2 = 8;
    }
    if ((uVar8 & 0x10000000000) != 0) {
      uVar2 = 9;
    }
    uVar1 = 0;
    if ((uVar9 & 0x80000000) == 0) {
      uVar1 = uVar5;
    }
    if ((uVar9 & 0x100000000) != 0) {
      uVar1 = 1;
    }
    if ((uVar9 & 0x200000000) != 0) {
      uVar1 = 2;
    }
    if ((uVar9 & 0x400000000) != 0) {
      uVar1 = 3;
    }
    if ((uVar9 & 0x800000000) != 0) {
      uVar1 = 4;
    }
    if ((uVar9 & 0x1000000000) != 0) {
      uVar1 = 5;
    }
    uVar8 = *(ulong *)(lVar10 + (long)(int)(uVar3 | 0x442) * 8);
    if ((uVar9 & 0x2000000000) != 0) {
      uVar1 = 6;
    }
    if ((uVar9 & 0x4000000000) != 0) {
      uVar1 = 7;
    }
    if ((uVar9 & 0x8000000000) != 0) {
      uVar1 = 8;
    }
    if ((uVar9 & 0x10000000000) != 0) {
      uVar1 = 9;
    }
    uVar3 = 0;
    if ((uVar8 & 0x80000000) == 0) {
      uVar3 = uVar5;
    }
    if ((uVar8 & 0x100000000) != 0) {
      uVar3 = 1;
    }
    if ((uVar8 & 0x200000000) != 0) {
      uVar3 = 2;
    }
    if ((uVar8 & 0x400000000) != 0) {
      uVar3 = 3;
    }
    if ((uVar8 & 0x800000000) != 0) {
      uVar3 = 4;
    }
    if ((uVar8 & 0x1000000000) != 0) {
      uVar3 = 5;
    }
    if ((uVar8 & 0x2000000000) != 0) {
      uVar3 = 6;
    }
    if ((uVar8 & 0x4000000000) != 0) {
      uVar3 = 7;
    }
    if ((uVar8 & 0x8000000000) != 0) {
      uVar3 = 8;
    }
    if ((uVar8 & 0x10000000000) != 0) {
      uVar3 = 9;
    }
    if ((local_33 & 1) != 0) {
      uVar7 = uVar6;
    }
    if ((local_33 & 4) != 0) {
      uVar7 = uVar2;
    }
    if ((local_33 & 8) != 0) {
      uVar7 = uVar1;
    }
    *(undefined *)((long)&gui_actions + (ulong)uVar6) = 0;
    if ((local_33 & 2) != 0) {
      uVar7 = uVar3;
    }
    *(undefined *)((long)&gui_actions + (ulong)uVar2) = 0;
    *(undefined *)((long)&gui_actions + (ulong)uVar1) = 0;
    *(undefined *)((long)&gui_actions + (ulong)uVar3) = 0;
    *(undefined *)((long)&gui_actions + (ulong)uVar7) = 1;
  } while( true );
}


