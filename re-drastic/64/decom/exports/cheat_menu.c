/*
 * Ghidra decompilation
 *
 * Function : cheat_menu
 * Address  : 0017c900
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cheat_menu(long *param_1)

{
  char **ppcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *__ptr;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  size_t sVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  undefined4 uVar25;
  long local_938;
  uint local_928;
  uint local_924;
  long local_908;
  uint local_900;
  uint local_8e0;
  undefined4 local_8dc;
  long local_8d8;
  char local_8d0 [8];
  undefined auStack_8c8 [32];
  undefined auStack_8a8 [32];
  undefined auStack_888 [128];
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined7 uStack_7d0;
  undefined local_7c9;
  undefined uStack_7c8;
  undefined6 uStack_7c7;
  undefined local_7c1;
  long local_8;
  
  lVar13 = *param_1;
  local_8 = ___stack_chk_guard;
  iVar6 = *(int *)(lVar13 + 0x7b0);
  iVar2 = *(int *)(lVar13 + 0x7b4);
  platform_print_code(auStack_8c8,*(undefined2 *)(lVar13 + 0x862ba));
  platform_print_code(auStack_8a8,*(undefined2 *)(lVar13 + 0x862bc));
  clear_screen_menu(0);
  set_font_narrow();
  __ptr = (long *)malloc((ulong)(uint)(iVar2 + iVar6) << 4);
  uVar20 = 0;
  local_928 = 0;
  local_924 = 0;
  local_908 = 0;
  local_900 = 0;
  bVar5 = false;
LAB_0017c9b0:
  __sprintf_chk(auStack_888,1,0x80,"%s: toggle cheat/folder    %s: return to main menu",auStack_8c8,
                auStack_8a8);
  clear_gui_actions();
  uVar19 = *(uint *)(lVar13 + 0x7b4);
  if (uVar19 != 0) {
    lVar14 = *(long *)(lVar13 + 0x7a0);
    lVar22 = lVar14 + 0x28;
    lVar17 = lVar22 + (ulong)(uVar19 - 1) * 0x28;
    uVar11 = *(uint *)(lVar14 + 0x1c);
    plVar18 = (long *)0x0;
    lVar15 = 0;
    uVar19 = 0;
    bVar4 = false;
    plVar7 = __ptr;
    plVar8 = __ptr;
    uVar23 = 0xffffffff;
    if (uVar11 == 0xffffffff) goto LAB_0017caa0;
LAB_0017ca20:
    plVar8 = plVar7;
    if (uVar11 == 0xffffffff) goto LAB_0017cab4;
    uVar19 = uVar19 + 1;
    lVar15 = *(long *)(lVar13 + 0x7a8) + (ulong)uVar11 * 0x28;
    *plVar7 = lVar15;
    cVar3 = **(char **)(lVar15 + 0x18);
    *(uint *)(plVar7 + 1) = (cVar3 == '\0') + 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 0;
    plVar8 = plVar7 + 2;
    do {
      plVar9 = plVar8;
      if (cVar3 != '\0') {
        uVar19 = uVar19 + 1;
        plVar9 = plVar8 + 2;
        *plVar8 = lVar14;
        *(undefined4 *)(plVar8 + 1) = 0;
      }
      ppcVar1 = (char **)(lVar14 + 0x20);
      bVar4 = true;
      lVar14 = lVar22;
      plVar18 = plVar7;
      uVar23 = uVar11;
      if (**ppcVar1 != '\0') {
        *(undefined4 *)((long)plVar7 + 0xc) = 1;
      }
      while( true ) {
        plVar7 = plVar9;
        if (lVar17 == lVar14) goto LAB_0017cae8;
        uVar11 = *(uint *)(lVar14 + 0x1c);
        lVar22 = lVar14 + 0x28;
        plVar8 = plVar7;
        if (uVar11 != uVar23) goto LAB_0017ca20;
LAB_0017caa0:
        uVar11 = uVar23;
        plVar7 = plVar18;
        plVar18 = plVar7;
        if (bVar4) break;
LAB_0017cab4:
        *plVar8 = lVar14;
        *(undefined4 *)(plVar8 + 1) = 0;
        uVar19 = uVar19 + 1;
        bVar4 = false;
        plVar9 = plVar8 + 2;
        lVar14 = lVar22;
        uVar23 = uVar11;
      }
      cVar3 = **(char **)(lVar15 + 0x18);
    } while( true );
  }
LAB_0017cae8:
  do {
    uVar24 = (ulong)local_928;
    local_938 = 0;
    print_string(auStack_888,0xffff,0,6,0x1c2);
    iVar6 = 0x14;
    do {
      while( true ) {
        uVar23 = (uint)uVar24;
        uVar11 = (uint)uVar20;
        if (uVar19 <= uVar23) break;
        puVar21 = (undefined8 *)__ptr[uVar24 * 2];
        if (uVar11 == uVar23) {
          if (*(int *)(__ptr + uVar24 * 2 + 1) != 0) {
            local_938 = puVar21[1];
            uVar16 = 0x17;
            goto LAB_0017cb1c;
          }
          local_938 = puVar21[2];
          uVar12 = 0x17;
          uVar16 = puVar21[1];
          uVar25 = uVar12;
          if (*(int *)((long)puVar21 + 0x1c) != -1) goto LAB_0017cb9c;
LAB_0017cd0c:
          __sprintf_chk(&local_808,1,0x800,"%s",uVar16);
        }
        else {
          if (*(int *)(__ptr + uVar24 * 2 + 1) != 0) {
            uVar16 = 0;
LAB_0017cb1c:
            puVar21 = (undefined8 *)*puVar21;
            sVar10 = strlen((char *)puVar21);
            if (0x46 < sVar10) {
              local_808 = *puVar21;
              uStack_800 = puVar21[1];
              local_7f8 = puVar21[2];
              uStack_7f0 = puVar21[3];
              local_7e8 = puVar21[4];
              uStack_7e0 = puVar21[5];
              local_7d8 = puVar21[6];
              uStack_7d0 = (undefined7)puVar21[7];
              local_7c9 = (undefined)*(undefined8 *)((long)puVar21 + 0x3f);
              uStack_7c7 = (undefined6)((ulong)*(undefined8 *)((long)puVar21 + 0x3f) >> 0x10);
              uStack_7c8 = 0;
              puVar21 = &local_808;
            }
            uVar12 = 0x4c42;
            if (*(int *)((long)__ptr + uVar24 * 0x10 + 0xc) != 0) {
              uVar12 = 0x9603;
            }
            print_string(puVar21,uVar12,uVar16,10,iVar6);
            break;
          }
          uVar16 = puVar21[1];
          uVar12 = 0;
          uVar25 = 0;
          if (*(int *)((long)puVar21 + 0x1c) == -1) goto LAB_0017cd0c;
LAB_0017cb9c:
          __sprintf_chk(&local_808,1,0x800," %s",uVar16);
          uVar25 = uVar12;
        }
        sVar10 = strlen((char *)&local_808);
        if (0x46 < sVar10) {
          local_7c1 = 0;
        }
        if (*(char *)puVar21[4] == '\0') {
          print_string("disabled",0x80a1,uVar25,0x28a,iVar6);
          uVar16 = 0x7bef;
        }
        else {
          print_string("enabled",0x17e4,uVar25,0x28a,iVar6);
          uVar16 = 0xffff;
        }
        iVar2 = iVar6 + 0xf;
        print_string(&local_808,uVar16,uVar25,10,iVar6);
        uVar24 = (ulong)(uVar23 + 1);
        iVar6 = iVar2;
        if (iVar2 == 0x19a) goto LAB_0017cc18;
      }
      iVar6 = iVar6 + 0xf;
      uVar24 = (ulong)(uVar23 + 1);
    } while (iVar6 != 0x19a);
LAB_0017cc18:
    if (local_938 != 0) {
      print_string(local_938,0xffff,0,6,0x1a4);
    }
    update_screen_menu();
    update_screen_menu();
    update_screen_menu();
    delay_us(5000);
    lVar22 = *param_1;
    do {
      get_gui_input(lVar22 + 0x5550,&local_8e0);
    } while (local_8e0 == 0xb);
    if (local_8e0 == 5) {
      clear_screen_menu(0);
      free(__ptr);
      set_font_wide();
      clear_gui_actions();
      if (bVar5) {
        update_cheat_listing(*param_1 + 0x348);
        set_active_cheats(*param_1 + 0x348);
      }
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
      }
      return 0xffffffff;
    }
    if (local_8e0 < 6) {
      if (local_8e0 == 1) {
        if (uVar11 < uVar19 - 1) {
          uVar20 = (ulong)(uVar11 + 1);
          if (local_924 == 0x19) {
            local_928 = local_928 + 1;
          }
          else {
            local_924 = local_924 + 1;
          }
        }
      }
      else {
        if (local_8e0 == 4) break;
        if ((local_8e0 == 0) && (uVar11 != 0)) {
          uVar20 = (ulong)(uVar11 - 1);
          if (local_924 == 0) {
            local_928 = local_928 - 1;
          }
          else {
            local_924 = local_924 - 1;
          }
        }
      }
    }
    else if (local_8e0 == 8) {
      iVar6 = 0x1c;
      do {
        while (uVar19 - 1 <= (uint)uVar20) {
LAB_0017ceec:
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_0017cdb0;
        }
        uVar20 = (ulong)((uint)uVar20 + 1);
        if (local_924 != 0x19) {
          local_924 = local_924 + 1;
          goto LAB_0017ceec;
        }
        local_928 = local_928 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else if (local_8e0 == 10) {
      get_ticks_us(&local_8d8);
      lVar22 = local_8d8;
      if ((ulong)(local_8d8 - local_908) < 0x7a121) {
        if (local_900 < 6) {
          uVar11 = local_900 + 2;
          uVar24 = (ulong)local_900;
          local_900 = local_900 + 1;
          goto LAB_0017cdd0;
        }
      }
      else {
        uVar24 = 0;
        local_900 = 1;
        uVar11 = 2;
LAB_0017cdd0:
        local_8d0[uVar24] = (char)local_8dc;
        local_8d0[uVar11] = '\0';
        if (uVar19 != 0) {
          uVar11 = 0;
          plVar8 = __ptr;
          do {
            ppcVar1 = (char **)*plVar8 + 1;
            if (*(int *)(plVar8 + 1) != 0) {
              ppcVar1 = (char **)*plVar8;
            }
            iVar6 = strncasecmp(*ppcVar1,local_8d0,(ulong)local_900);
            if (iVar6 == 0) {
              local_928 = uVar11 - 0xd;
              if ((int)local_928 < 0) {
                uVar20 = (ulong)uVar11;
                local_928 = 0;
                local_924 = uVar11;
              }
              else {
                uVar20 = (ulong)uVar11;
                local_924 = 0xd;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            plVar8 = plVar8 + 2;
          } while (uVar19 != uVar11);
        }
      }
      local_908 = lVar22;
    }
    else {
      iVar6 = 0x1c;
      if (local_8e0 == 7) {
        do {
          if ((int)uVar20 != 0) {
            uVar20 = (ulong)((int)uVar20 - 1);
            if (local_924 == 0) {
              local_928 = local_928 - 1;
            }
            else {
              local_924 = local_924 - 1;
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
LAB_0017cdb0:
    clear_screen_menu(0);
  } while( true );
  iVar6 = local_928 + local_924;
  lVar22 = __ptr[uVar20 * 2];
  if (*(int *)(__ptr + uVar20 * 2 + 1) == 0) {
    **(byte **)(lVar22 + 0x20) = **(byte **)(lVar22 + 0x20) ^ 1;
  }
  else {
    **(byte **)(lVar22 + 0x18) = **(byte **)(lVar22 + 0x18) ^ 1;
    if (**(char **)(lVar22 + 0x18) != '\0') {
      for (; (0x19 < *(int *)(lVar22 + 0x10) + local_924 && (local_924 != 0));
          local_924 = local_924 - 1) {
        local_928 = (1 - local_924) + iVar6;
      }
    }
  }
  bVar5 = true;
  clear_screen_menu(0);
  goto LAB_0017c9b0;
}


