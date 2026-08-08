/*
 * Ghidra decompilation
 *
 * Function : menu
 * Address  : 0017fbd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menu(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  code **ppcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  code **__ptr;
  bool bVar8;
  code *pcVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  int local_5a0 [2];
  long local_598;
  uint *local_590;
  code **local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  void *local_570;
  void *local_568;
  void *local_560;
  int local_558;
  int local_554;
  int iStack_550;
  undefined4 uStack_54c;
  uint local_548;
  uint local_544;
  undefined8 local_540;
  byte local_538;
  byte local_537;
  byte local_536;
  undefined local_535 [261];
  int local_430;
  undefined auStack_428 [1056];
  long local_8;
  
  local_548 = *(uint *)(param_1 + 0x859f4);
  local_8 = ___stack_chk_guard;
  iVar7 = *(int *)(param_1 + 0x85a34);
  if (2 < local_548) {
    local_548 = local_548 - 1;
  }
  local_540 = CONCAT17((char)((ulong)*(undefined8 *)(param_1 + 0x855c0) >> 0x20),
                       CONCAT16((char)*(undefined8 *)(param_1 + 0x855c0),
                                CONCAT15((char)((ulong)*(undefined8 *)(param_1 + 0x855b8) >> 0x20),
                                         CONCAT14((char)*(undefined8 *)(param_1 + 0x855b8),
                                                  CONCAT13((char)((ulong)*(undefined8 *)
                                                                          (param_1 + 0x855b0) >>
                                                                 0x20),
                                                           CONCAT12((char)*(undefined8 *)
                                                                           (param_1 + 0x855b0),
                                                                    CONCAT11((char)((ulong)*(
                                                  undefined8 *)(param_1 + 0x855a8) >> 0x20),
                                                  (char)*(undefined8 *)(param_1 + 0x855a8))))))));
  local_544 = 0;
  puVar1 = (uint *)(param_1 + 0x855a8);
  local_554 = 0;
  local_538 = (byte)*(undefined4 *)(param_1 + 0x855c8);
  local_537 = (byte)*(undefined4 *)(param_1 + 0x855cc);
  local_536 = (byte)*(undefined4 *)(param_1 + 0x855d0);
  local_430 = 0;
  if (iVar7 == 100000) {
    bVar8 = true;
    uVar5 = 1;
LAB_0017fcd8:
    if (iVar7 == 0x411a) {
      uVar5 = 5;
    }
    else {
LAB_0017ff04:
      if (iVar7 != 0x37cd) goto LAB_00180120;
      uVar5 = 6;
    }
  }
  else {
    if (iVar7 != 0x8235) {
      if (iVar7 != 25000) {
        bVar8 = false;
        uVar5 = 0;
        goto LAB_0017fccc;
      }
      bVar8 = true;
      uVar5 = 3;
      goto LAB_0017ff04;
    }
    bVar8 = true;
    uVar5 = 2;
LAB_0017fccc:
    if (iVar7 != 20000) goto LAB_0017fcd8;
    bVar8 = true;
    uVar5 = 4;
LAB_00180120:
    if (iVar7 == 0x30d4) {
      uVar5 = 7;
    }
    else if (!bVar8) goto LAB_0017fcec;
  }
  local_544 = uVar5;
LAB_0017fcec:
  local_598 = param_1;
  local_590 = puVar1;
  if (*(char *)(param_1 + 0x8b380) == '\0') {
    local_558 = 0;
  }
  else {
    local_558 = 1;
    pvVar11 = malloc(0x18000);
    local_570 = pvVar11;
    local_568 = malloc(0x18000);
    screen_copy16(pvVar11,0);
    screen_copy16(local_568,1);
  }
  load_logo(&local_598);
  __ptr = (code **)create_menu_main(&local_598);
  uStack_580 = 0;
  local_578 = 0;
  iStack_550 = 0;
  uStack_54c = 1;
  local_535[0] = 0;
  local_588 = __ptr;
  uVar6 = audio_pause(param_1 + 0x1587000);
  set_screen_menu_on();
  if (param_2 != 0) {
    iVar7 = load_file(&local_598,&nds_ext,auStack_428);
    lVar12 = local_598;
    if ((iVar7 != -1) && (iVar7 = load_nds(local_598 + 800,auStack_428), -1 < iVar7)) {
      local_548 = *(uint *)(lVar12 + 0x859f4);
      local_554 = 1;
      iStack_550 = 1;
      uStack_54c = 0;
    }
  }
LAB_0017fd50:
  do {
    while( true ) {
      do {
        ppcVar4 = local_588;
        if ((iStack_550 != 0) && (*(char *)(param_1 + 0x8b380) != '\0')) {
          audio_revert_pause_state(param_1 + 0x1587000,uVar6);
          do {
            get_gui_input(local_598 + 0x5550,local_5a0);
          } while (local_5a0[0] != 0xb);
          clear_gui_actions();
          uVar10 = 0;
          if (*(int *)((long)__ptr + 0x14) != 0) {
            do {
              pvVar11 = *(void **)(__ptr[4] + uVar10 * 8);
              if (*(code **)((long)pvVar11 + 0x28) != (code *)0x0) {
                (**(code **)((long)pvVar11 + 0x28))(&local_598,pvVar11);
              }
              free(pvVar11);
              uVar5 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar5;
            } while (uVar5 < *(uint *)((long)__ptr + 0x14));
          }
          free(__ptr[4]);
          free(__ptr);
          uVar5 = local_548;
          if (1 < local_548) {
            uVar5 = *(uint *)(param_1 + 0x859f4) | 2;
          }
          *(uint *)(param_1 + 0x859f4) = uVar5;
          uVar5 = local_544;
          if (local_544 != 0) {
            uVar5 = 0;
            if (*(uint *)(speed_override_values_11981 + (ulong)local_544 * 4) != 0) {
              uVar5 = 5000000 / *(uint *)(speed_override_values_11981 + (ulong)local_544 * 4);
            }
          }
          *(uint *)(param_1 + 0x85a34) = uVar5;
          *local_590 = (uint)(byte)local_540;
          local_590[1] = (uint)local_540._1_1_;
          local_590[2] = (uint)local_540._2_1_;
          local_590[3] = (uint)local_540._3_1_;
          local_590[4] = (uint)local_540._4_1_;
          local_590[5] = (uint)local_540._5_1_;
          local_590[6] = (uint)local_540._6_1_;
          local_590[7] = (uint)local_540._7_1_;
          local_590[8] = (uint)local_538;
          local_590[9] = (uint)local_537;
          local_590[10] = (uint)local_536;
          config_update_settings(puVar1);
          set_screen_menu_off();
          if (local_560 != (void *)0x0) {
            free(local_560);
          }
          if (local_554 != 0) {
            reset_system(param_1);
          }
          nds_system[param_1 + 0x362e9a3] = 1;
          if (local_558 != 0) {
            free(local_570);
            free(local_568);
            if (local_554 != 0) {
              puts("Performing long jmp to reset.");
                    /* WARNING: Subroutine does not return */
              __longjmp_chk(param_1 + 0x3b2a840,0);
            }
          }
          if (local_8 - ___stack_chk_guard == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
        }
        delay_us(10000);
        draw_menu_bg(&local_598);
        uVar10 = 0;
        set_font_narrow();
        print_string(local_535,0xa676,0,0x10);
        set_font_wide();
        if (*(int *)((long)ppcVar4 + 0x14) != 0) {
          do {
            lVar12 = uVar10 * 8;
            iVar7 = (int)uVar10;
            uVar5 = iVar7 + 1;
            uVar10 = (ulong)uVar5;
            (**(code **)(*(long *)(ppcVar4[4] + lVar12) + 0x10))
                      (&local_598,*(long *)(ppcVar4[4] + lVar12),*(int *)(ppcVar4 + 3) == iVar7);
          } while (uVar5 < *(uint *)((long)ppcVar4 + 0x14));
        }
        if (*ppcVar4 != (code *)0x0) {
          (**ppcVar4)(&local_598,ppcVar4);
        }
        lVar12 = *(long *)(ppcVar4[4] + (ulong)*(uint *)(ppcVar4 + 3) * 8);
        update_screen_menu();
        update_screen_menu();
        update_screen_menu();
        if (local_430 == 0) {
          lVar2 = local_598 + 0x5550;
          do {
            get_gui_input(lVar2,local_5a0);
          } while (local_5a0[0] == 0xb);
        }
      } while (*(code **)(lVar12 + 0x18) == (code *)0x0);
      iVar7 = (**(code **)(lVar12 + 0x18))(&local_598,lVar12,local_5a0);
      if (iVar7 != 1) break;
LAB_0017fe3c:
      iVar3 = *(int *)(ppcVar4 + 3);
      if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
        (**(code **)(lVar12 + 0x20))(&local_598,lVar12,1);
      }
      uVar5 = *(uint *)((long)ppcVar4 + 0x14) - 1;
      if (-1 < iVar7 + iVar3) {
        uVar5 = iVar7 + iVar3;
      }
      if (uVar5 < *(uint *)((long)ppcVar4 + 0x14)) {
        uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
      }
      else {
        uVar5 = 0;
        uVar10 = 0;
      }
      lVar12 = *(long *)(ppcVar4[4] + uVar10);
      pcVar9 = *(code **)(lVar12 + 0x20);
      *(uint *)(ppcVar4 + 3) = uVar5;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(&local_598,lVar12,0);
      }
    }
    if (iVar7 != 5) {
      if (iVar7 == 0) {
        iVar7 = -1;
        goto LAB_0017fe3c;
      }
      goto LAB_0017fd50;
    }
    select_exit_current_menu(&local_598,lVar12);
  } while( true );
}


