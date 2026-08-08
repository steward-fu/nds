/*
 * Ghidra decompilation
 *
 * Function : update_input
 * Address  : 001886b0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_input(long param_1)

{
  uint **ppuVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void *__ptr;
  void *__ptr_00;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ushort uVar13;
  uint *puVar14;
  undefined auStack_828 [2080];
  long local_8;
  
  ppuVar1 = (uint **)(param_1 + 0x80000);
  uVar3 = *(uint *)(param_1 + 0x80010);
  puVar12 = *(ulong **)(param_1 + 0x80008);
  local_8 = ___stack_chk_guard;
  platform_get_input(param_1,&__stack_chk_guard,0);
  if ((*(int *)(puVar12 + 0x10b4a) != 0) && (iVar6 = lua_is_active(), iVar6 != 0)) {
    lua_on_frame_update();
  }
  uVar10 = *(uint *)(param_1 + 0x80010);
  uVar11 = (ulong)uVar10;
  if (*(char *)(param_1 + 0x80050) == '\x02') {
    puVar14 = *ppuVar1;
    if ((ulong)*puVar14 != *puVar12) goto LAB_001887a8;
    uVar10 = puVar14[1] & 0x7fffffff;
    uVar11 = (ulong)uVar10;
    *(byte *)(param_1 + 0x8001c) = (byte)(puVar14[1] >> 0x1f);
    *(uint *)(param_1 + 0x80014) = (uint)*(byte *)(puVar14 + 2);
    bVar5 = *(byte *)((long)puVar14 + 9);
    *ppuVar1 = (uint *)((long)puVar14 + 10);
    *(uint *)(param_1 + 0x80010) = uVar10;
    *(uint *)(param_1 + 0x80018) = (uint)bVar5;
    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_00188b5c;
LAB_001887ac:
    if (((uint)uVar11 >> 0x1d & 1) == 0) goto LAB_001887b0;
LAB_00188b34:
    set_debug_mode(puVar12 + 0x4ba08b,0);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xdfffffff;
    if (((uint)uVar11 >> 0x1e & 1) != 0) goto LAB_00188ad8;
LAB_001887b4:
    if (((uint)uVar11 >> 0x13 & 1) == 0) goto LAB_001887b8;
LAB_00188a70:
    __ptr = malloc(0x18000);
    __ptr_00 = malloc(0x18000);
    screen_copy16(__ptr,0);
    screen_copy16(__ptr_00,1);
    save_state_index(puVar12,*(undefined4 *)(puVar12 + 0x10b40),__ptr,__ptr_00);
    free(__ptr);
    free(__ptr_00);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xfff7ffff;
    if (((uint)uVar11 >> 0x14 & 1) != 0) goto LAB_001889d0;
LAB_001887bc:
    uVar10 = (uint)uVar11;
  }
  else {
    if (((*(uint *)(param_1 + 0x80020) != uVar10) ||
        (*(char *)(param_1 + 0x8002c) != *(char *)(param_1 + 0x8001c))) ||
       ((*(char *)(param_1 + 0x8002c) != '\0' &&
        ((*(int *)(param_1 + 0x80014) != *(int *)(param_1 + 0x80024) ||
         (*(int *)(param_1 + 0x80018) != *(int *)(param_1 + 0x80028))))))) {
      puVar14 = *ppuVar1;
      if (puVar14 < (uint *)(param_1 + 0x7ffecU)) {
        *puVar14 = (uint)*puVar12;
        puVar14[1] = uVar10 & 0x7fffffff | (uint)*(byte *)(param_1 + 0x8001c) << 0x1f;
        *(char *)(puVar14 + 2) = (char)*(undefined4 *)(param_1 + 0x80014);
        *(char *)((long)puVar14 + 9) = (char)*(undefined4 *)(param_1 + 0x80018);
        if (*(long *)(param_1 + 0x80048) != 0) {
          __printf_chk(1,"input capture button to log %p\n");
          fwrite(puVar14,10,1,*(FILE **)(param_1 + 0x80048));
          fflush(*(FILE **)(param_1 + 0x80048));
        }
        *ppuVar1 = (uint *)((long)puVar14 + 10);
      }
      *(uint *)(param_1 + 0x80020) = uVar10;
      *(undefined8 *)(param_1 + 0x80024) = *(undefined8 *)(param_1 + 0x80014);
      *(undefined *)(param_1 + 0x8002c) = *(undefined *)(param_1 + 0x8001c);
    }
LAB_001887a8:
    if ((uVar10 >> 0x1c & 1) == 0) goto LAB_001887ac;
LAB_00188b5c:
    set_debug_mode(puVar12 + 0x2b93cd,0);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xefffffff;
    if (((uint)uVar11 >> 0x1d & 1) != 0) goto LAB_00188b34;
LAB_001887b0:
    if (((uint)uVar11 >> 0x1e & 1) == 0) goto LAB_001887b4;
LAB_00188ad8:
    __sprintf_chk(auStack_828,1,0x820,"%s%cprofiles%c%s_translation_post.txt",puVar12 + 0x114f0,0x2f
                  ,0x2f,puVar12 + 0x11670);
    __printf_chk(1,"Logging recompiled block information to %s.\n",auStack_828);
    cpu_block_log_all(puVar12,auStack_828);
    if (((uint)uVar11 >> 0x13 & 1) != 0) goto LAB_00188a70;
LAB_001887b8:
    if (((uint)uVar11 >> 0x14 & 1) == 0) goto LAB_001887bc;
LAB_001889d0:
    uVar9 = puVar12[0x4ba0ac];
    uVar8 = puVar12[0x2b93ee];
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xffefffff;
    __printf_chk(1,"load state @ %lx, %lx in.\n",uVar8,uVar9);
    if (*(char *)((long)puVar12 + 0x15c9f99) == '\a') {
      set_debug_mode(puVar12 + 0x2b93cd,0);
    }
    if (*(char *)((long)puVar12 + 0x25d0589) == '\a') {
      set_debug_mode(puVar12 + 0x4ba08b,0);
    }
    iVar6 = load_state_index(puVar12,*(undefined4 *)(puVar12 + 0x10b40),0,0,0);
    if (iVar6 == 0) goto LAB_0018899c;
    uVar10 = (uint)uVar11;
  }
  if ((uVar10 >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xfffbffff;
    menu(puVar12,0);
    goto LAB_0018899c;
  }
  uVar10 = (uint)uVar11;
  if ((uVar10 >> 0x19 & 1) != 0) {
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xfdffffff;
    menu(puVar12,1);
    goto LAB_0018899c;
  }
  if ((uVar10 >> 0x15 & 1) != 0) {
    iVar6 = *(int *)((long)puVar12 + 0x85a04);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xffdfffff;
    if (iVar6 == 0) {
      *(undefined *)((long)puVar12 + 0x3b2a9a3) = 1;
      *(undefined4 *)((long)puVar12 + 0x85a04) = 1;
    }
    else {
      *(undefined4 *)((long)puVar12 + 0x85a04) = 0;
    }
  }
  if ((uVar10 >> 0x16 & 1) != 0) {
    uVar2 = *(uint *)((long)puVar12 + 0x859fc);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xffbfffff;
    *(uint *)((long)puVar12 + 0x859fc) = uVar2 ^ 1;
    set_screen_swap();
  }
  if ((uVar10 >> 0x17 & 1) != 0) {
    uVar2 = *(uint *)((long)puVar12 + 0x859f4);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xff7fffff;
    *(uint *)((long)puVar12 + 0x859f4) = uVar2 ^ 1;
    set_screen_orientation();
  }
  if ((uVar10 >> 0x18 & 1) != 0) {
    uVar2 = *(uint *)((long)puVar12 + 0x859f4);
    *(uint *)(param_1 + 0x80010) = *(uint *)(param_1 + 0x80010) & 0xfeffffff;
    *(uint *)((long)puVar12 + 0x859f4) = uVar2 ^ 2;
    set_screen_orientation();
  }
  if ((uVar10 >> 0x1a & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    quit(*(undefined8 *)(param_1 + 0x80008));
  }
  uVar2 = uVar3 & 0x8000000;
  if ((uVar10 >> 0x1b & 1) == 0) {
    if (uVar2 != 0) {
      spu_fake_microphone_stop(puVar12 + 0x2b0e00);
    }
  }
  else if (uVar2 == 0) {
    spu_fake_microphone_start(puVar12 + 0x2b0e00);
  }
  uVar2 = (uint)(uVar11 >> 4) & 1;
  uVar10 = uVar2 | 2;
  if ((uVar11 & 0x20) == 0) {
    uVar10 = uVar2;
  }
  uVar2 = uVar10 | 0x40;
  if ((uVar11 & 1) == 0) {
    uVar2 = uVar10;
  }
  uVar10 = uVar2 | 0x80;
  if ((uVar11 & 2) == 0) {
    uVar10 = uVar2;
  }
  uVar2 = uVar10 | 0x20;
  if ((uVar11 & 4) == 0) {
    uVar2 = uVar10;
  }
  uVar10 = uVar2 | 0x10;
  if ((uVar11 & 8) == 0) {
    uVar10 = uVar2;
  }
  uVar2 = uVar10 | 0x200;
  if ((uVar11 & 0x100) == 0) {
    uVar2 = uVar10;
  }
  uVar10 = uVar2 | 0x100;
  if ((uVar11 & 0x200) == 0) {
    uVar10 = uVar2;
  }
  uVar2 = uVar10 | 8;
  if ((uVar11 & 0x400) == 0) {
    uVar2 = uVar10;
  }
  uVar10 = uVar2 | 4;
  if ((uVar11 & 0x800) == 0) {
    uVar10 = uVar2;
  }
  uVar7 = 0xff02;
  if ((uVar11 & 0x40) != 0) {
    uVar7 = 0xff03;
  }
  uVar13 = 0xff00;
  if ((uVar11 & 0x40) != 0) {
    uVar13 = 0xff01;
  }
  if ((uVar11 & 0x80) == 0) {
    uVar7 = uVar13;
  }
  uVar13 = uVar7 | 0x80;
  if ((uVar11 & 0x1000) != 0) {
    uVar13 = uVar7;
  }
  if (*(char *)(param_1 + 0x8001c) == '\0') {
    if (*(char *)(param_1 + 0x8003c) == '\0') goto LAB_001888b0;
LAB_00188dbc:
    motion_pack_set_acceleration
              (*(undefined4 *)(param_1 + 0x80030),*(undefined4 *)(param_1 + 0x80034),
               *(undefined4 *)(param_1 + 0x80038),puVar12 + 0x181);
    motion_pack_hb_set_acceleration
              (*(undefined4 *)(param_1 + 0x80030),*(undefined4 *)(param_1 + 0x80034),
               *(undefined4 *)(param_1 + 0x80038),(long)puVar12 + 0xc0e);
    cVar4 = *(char *)(param_1 + 0x80044);
  }
  else {
    uVar13 = uVar13 | 0x40;
    touchscreen_set_position
              (puVar12 + 0xa9f,*(undefined4 *)(param_1 + 0x80014),*(undefined4 *)(param_1 + 0x80018)
              );
    if (*(char *)(param_1 + 0x8003c) != '\0') goto LAB_00188dbc;
LAB_001888b0:
    cVar4 = *(char *)(param_1 + 0x80044);
  }
  if (cVar4 != '\0') {
    motion_pack_hb_set_gyroscope(*(undefined4 *)(param_1 + 0x80040),(long)puVar12 + 0xc0e);
  }
  uVar7 = *(ushort *)((long)puVar12 + 0x35efad2);
  if ((uVar7 >> 0xe & 1) != 0) {
    if ((short)uVar7 < 0) {
      if ((uVar7 & uVar10) != 0) {
        uVar8 = puVar12[0x2b93ba];
        uVar2 = *(uint *)(uVar8 + 0x214) | 0x1000;
        *(uint *)(uVar8 + 0x214) = uVar2;
        if ((*(uint *)(puVar12 + 0x2b93cc) >> 2 & 1) == 0) {
          *(uint *)(puVar12 + 0x2b93cb) =
               -*(int *)(uVar8 + 0x208) & uVar2 & *(uint *)(uVar8 + 0x210);
        }
      }
    }
    else if ((uVar7 & uVar10) == uVar10) {
      uVar8 = puVar12[0x2b93ba];
      uVar2 = *(uint *)(uVar8 + 0x214) | 0x1000;
      *(uint *)(uVar8 + 0x214) = uVar2;
      if ((*(uint *)(puVar12 + 0x2b93cc) >> 2 & 1) == 0) {
        *(uint *)(puVar12 + 0x2b93cb) = -*(int *)(uVar8 + 0x208) & uVar2 & *(uint *)(uVar8 + 0x210);
      }
    }
  }
  uVar7 = *(ushort *)((long)puVar12 + 0x35f7ad2);
  if ((uVar7 >> 0xe & 1) != 0) {
    if ((short)uVar7 < 0) {
      if ((uVar7 & uVar10) != 0) {
        uVar8 = puVar12[0x4ba078];
        uVar2 = *(uint *)(uVar8 + 0x214) | 0x1000;
        *(uint *)(uVar8 + 0x214) = uVar2;
        if ((*(uint *)(puVar12 + 0x4ba08a) >> 2 & 1) == 0) {
          *(uint *)(puVar12 + 0x4ba089) =
               -*(int *)(uVar8 + 0x208) & uVar2 & *(uint *)(uVar8 + 0x210);
        }
      }
    }
    else if ((uVar7 & uVar10) == uVar10) {
      uVar8 = puVar12[0x4ba078];
      uVar2 = *(uint *)(uVar8 + 0x214) | 0x1000;
      *(uint *)(uVar8 + 0x214) = uVar2;
      if ((*(uint *)(puVar12 + 0x4ba08a) >> 2 & 1) == 0) {
        *(uint *)(puVar12 + 0x4ba089) = -*(int *)(uVar8 + 0x208) & uVar2 & *(uint *)(uVar8 + 0x210);
      }
    }
  }
  uVar7 = (ushort)uVar10 ^ 0x3ff;
  *(ushort *)(puVar12 + 0x6bdf5a) = uVar7;
  *(ushort *)(puVar12 + 0x6bef5a) = uVar7;
  *(ushort *)((long)puVar12 + 0x35f7ad6) = ~uVar13;
  if ((uVar3 & 0x1000) != 0 && (uVar11 & 0x1000) == 0) {
    uVar11 = puVar12[0x4ba078];
    uVar3 = *(uint *)(uVar11 + 0x214) | 0x400000;
    *(uint *)(uVar11 + 0x214) = uVar3;
    if ((*(uint *)(puVar12 + 0x4ba08a) >> 2 & 1) == 0) {
      *(uint *)(puVar12 + 0x4ba089) = -*(int *)(uVar11 + 0x208) & uVar3 & *(uint *)(uVar11 + 0x210);
    }
  }
LAB_0018899c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


