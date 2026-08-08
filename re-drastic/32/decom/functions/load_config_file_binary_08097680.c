/*
 * Ghidra decompilation
 *
 * Function : load_config_file_binary
 * Address  : 08097680
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_config_file_binary(system_struct *system,char *file_name,u32 game_specific)

{
  int iVar1;
  FILE *__stream;
  FILE *config_file;
  int iVar2;
  u16 *puVar3;
  uint uVar4;
  u64 *__s;
  u64 *map;
  s32 sVar5;
  u32 uVar6;
  u32 enable_cheats;
  u64 *puVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ulonglong in_d18;
  config_header_struct config_header;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  uVar6 = (system->config).enable_cheats;
  __sprintf_chk(path,1,0x400,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  __printf_chk(1,"Loading binary config file %s\n",path);
  __stream = fopen(path,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Config file %s does not exist.\n",path);
    sVar5 = -1;
  }
  else {
    fread(&config_header,4,1,__stream);
    fread(&config_header.version,4,1,__stream);
    fread(config_header.reserved,8,1,__stream);
    iVar2 = strncmp(config_header.magic_string,"DSCF",4);
    if ((iVar2 == 0) && (config_header.version < 9)) {
      fread(&(system->config).frameskip_type,4,1,__stream);
      fread(&(system->config).frameskip_value,4,1,__stream);
      fread(&(system->config).show_frame_counter,4,1,__stream);
      fread(&(system->config).screen_orientation,4,1,__stream);
      fread(&(system->config).screen_scaling,4,1,__stream);
      fread(&(system->config).screen_swap,4,1,__stream);
      fread(&(system->config).fast_forward,4,1,__stream);
      fread(&(system->config).enable_sound,4,1,__stream);
      fread(&(system->config).clock_speed,4,1,__stream);
      if (1 < config_header.version) {
        fread(&(system->config).threaded_3d,4,1,__stream);
        fread(&(system->config).mirror_touch,4,1,__stream);
        fread(&(system->config).compress_savestates,4,1,__stream);
        fread(&(system->config).savestate_snapshot,4,1,__stream);
        if (2 < config_header.version) {
          fread(&system->config,0x2c,1,__stream);
          fread(&(system->config).firmware.language,4,1,__stream);
          fread(&(system->config).firmware.favorite_color,4,1,__stream);
          fread(&(system->config).firmware.birthday_month,4,1,__stream);
          fread(&(system->config).firmware.birthday_day,4,1,__stream);
          fread(&(system->config).enable_cheats,4,1,__stream);
          if (3 < config_header.version) {
            fread(&(system->config).unzip_roms,4,1,__stream);
            fread(&(system->config).backup_in_savestates,4,1,__stream);
            fread(&(system->config).frame_interval,4,1,__stream);
            if ((4 < config_header.version) &&
               (fread(&(system->config).fix_main_2d_screen,4,1,__stream), 5 < config_header.version)
               ) {
              fread(&(system->config).use_rtc_custom_time,4,1,__stream);
              fread(&(system->config).rtc_custom_time,4,1,__stream);
              if (6 < config_header.version) {
                fread(&(system->config).rtc_system_time,4,1,__stream);
                fread(&(system->config).disable_edge_marking,4,1,__stream);
                if (7 < config_header.version) {
                  fread(&(system->config).hires_3d,4,1,__stream);
                }
              }
            }
          }
        }
      }
      __s = (system->config).controls_code_to_config_map;
      fclose(__stream);
      set_screen_orientation((system->config).screen_orientation);
      set_screen_scale_factor((system->config).screen_scaling);
      set_screen_swap((system->config).screen_swap);
      memset(__s,0,0x4000);
      puVar8 = (ushort *)((int)&(system->config).rtc_system_time + 2);
      puVar3 = (system->config).controls_a + 0x27;
      uVar4 = 0;
      do {
        puVar8 = puVar8 + 1;
        if (*puVar8 != 0xffff) {
          in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar4 & 0xffff;
          puVar7 = __s + *puVar8;
          uVar9 = VectorShiftLeft(1,in_d18,8,1);
          *(uint *)puVar7 = *(uint *)puVar7 | (uint)uVar9;
          *(uint *)((int)puVar7 + 4) = *(uint *)((int)puVar7 + 4) | (uint)((ulonglong)uVar9 >> 0x20)
          ;
        }
        puVar3 = puVar3 + 1;
        if (*puVar3 != 0xffff) {
          in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar4 & 0xffff;
          puVar7 = __s + *puVar3;
          uVar9 = VectorShiftLeft(1,in_d18,8,1);
          *(uint *)puVar7 = *(uint *)puVar7 | (uint)uVar9;
          *(uint *)((int)puVar7 + 4) = *(uint *)((int)puVar7 + 4) | (uint)((ulonglong)uVar9 >> 0x20)
          ;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x28);
      sVar5 = 0;
      if (game_specific != 0) {
        (system->config).enable_cheats = uVar6;
      }
    }
    else {
      sVar5 = -1;
      puts("ERROR: Config file could not be loaded.");
      fclose(__stream);
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


