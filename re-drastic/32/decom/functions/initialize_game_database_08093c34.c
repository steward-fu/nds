/*
 * Ghidra decompilation
 *
 * Function : initialize_game_database
 * Address  : 08093c34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 initialize_game_database(game_database_struct *game_database,char *game_database_file_name)

{
  void **ppvVar1;
  int iVar2;
  FILE *__stream;
  FILE *game_database_file;
  game_database_entry_struct *games;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  u32 rom_size;
  ulong uVar6;
  u32 rom_crc32;
  ulong uVar7;
  u32 game_code;
  size_t sVar8;
  game_database_entry_struct *pgVar9;
  game_database_entry_struct **__base;
  game_database_entry_struct **ppgVar10;
  undefined4 uVar11;
  size_t sVar12;
  game_database_entry_struct *current_game;
  s32 sVar13;
  u32 uVar14;
  u32 uVar15;
  undefined4 uVar16;
  uint uVar17;
  char *pcVar18;
  undefined uVar19;
  char **ppcVar20;
  u32 i;
  char **ppcVar21;
  u32 game_title_length;
  char *__s1;
  size_t local_6c8;
  int local_6c4;
  void *local_6c0;
  int local_6bc;
  ulong local_6a8;
  size_t local_6a0;
  ulong local_69c;
  stat game_database_file_info;
  xml_line_struct xml_line;
  char line_buffer [256];
  char error_message [256];
  char title_buffer [256];
  char title_buffer_header [256];
  
  iVar2 = __stack_chk_guard;
  __stream = fopen(game_database_file_name,"rb");
  if (__stream == (FILE *)0x0) {
    sVar13 = -1;
    __printf_chk(1,"Error: could not load game database file %s.\n",game_database_file_name);
    goto LAB_08093d20;
  }
  __xstat(3,game_database_file_name,(stat *)&game_database_file_info);
  game_database->creation_time = game_database_file_info.st_mtim.tv_sec;
  local_6c0 = malloc(0x600);
  pcVar3 = fgets(line_buffer,0x100,__stream);
  if ((pcVar3 == (char *)0x0) ||
     (iVar4 = strncasecmp(line_buffer,"<?xml version=\'1.0\' encoding=\'UTF-8\'?>",0x26), iVar4 != 0
     )) {
    uVar11 = 1;
LAB_08093cf4:
    __printf_chk(1,"%d: Failed to parse game database file: %s\n",uVar11,error_message);
    fflush(stdout);
  }
  else {
    sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
    pcVar3 = xml_line.tag_name;
    if (((sVar13 == -1) || (iVar4 = strcasecmp(xml_line.tag_name,"database"), iVar4 != 0)) ||
       (xml_line.tag_type != '\0')) {
      __sprintf_chk(error_message,1,0x100,"Wrong tag name: expected database, got %s\n",pcVar3);
      uVar11 = 2;
      goto LAB_08093cf4;
    }
    local_6bc = 3;
    local_6a0 = 0x20;
    local_6a8 = 0;
    local_69c = 0;
    local_6c8 = 0;
    while (sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message),
          pcVar3 = xml_line.tag_name, local_6c4 = local_6bc, sVar13 != -1) {
      local_6c4 = local_6bc + 1;
      iVar4 = strcasecmp(xml_line.tag_name,"database");
      if ((iVar4 == 0) && (xml_line.tag_type == '\x01')) {
        sVar8 = local_6c8 * 4;
        pgVar9 = (game_database_entry_struct *)realloc(local_6c0,local_6c8 * 0x30);
        game_database->games = pgVar9;
        game_database->num_games = local_6c8;
        __base = (game_database_entry_struct **)malloc(sVar8);
        game_database->games_sorted_crc32 = __base;
        ppgVar10 = (game_database_entry_struct **)malloc(sVar8);
        game_database->games_sorted_game_code = ppgVar10;
        if (local_6c8 != 0) {
          sVar12 = 0;
          while( true ) {
            *(game_database_entry_struct **)((int)__base + sVar12) = pgVar9;
            *(game_database_entry_struct **)((int)game_database->games_sorted_game_code + sVar12) =
                 pgVar9;
            sVar12 = sVar12 + 4;
            pgVar9 = pgVar9 + 1;
            if (sVar8 == sVar12) break;
            __base = game_database->games_sorted_crc32;
          }
          __base = game_database->games_sorted_crc32;
        }
        qsort(__base,local_6c8,4,compare_game_entry_crc32);
        qsort(game_database->games_sorted_game_code,local_6c8,4,compare_game_entry_game_code);
        __printf_chk(1,"Loaded %d games in database file %s.\n",local_6c8,game_database_file_name);
        sVar13 = 0;
        goto LAB_08093d20;
      }
      iVar4 = strcasecmp(pcVar3,"cartridge");
      uVar14 = xml_line.num_parameters;
      if (((iVar4 != 0) || (xml_line.tag_type != '\0')) ||
         (local_6c4 = local_6bc + 2, xml_line.num_parameters == 0)) break;
      ppcVar21 = &xml_line.tag_name;
      uVar15 = 0;
      ppcVar20 = ppcVar21;
      while( true ) {
        ppcVar20 = ppcVar20 + 1;
        iVar4 = strcmp(*ppcVar20,"title");
        if (iVar4 == 0) break;
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar14) goto failed_to_load;
      }
      if (xml_line.parameter_values[uVar15] == (char *)0x0) break;
      __strcpy_chk(title_buffer,xml_line.parameter_values[uVar15],0x100);
      sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
      if (((sVar13 == -1) || (iVar4 = strcasecmp(xml_line.tag_name,"slot1"), iVar4 != 0)) ||
         (xml_line.tag_type != '\0')) break;
      local_6c4 = local_6bc + 3;
      sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
      if (((sVar13 == -1) ||
          (iVar4 = strcasecmp(xml_line.tag_name,"rom"), uVar14 = xml_line.num_parameters, iVar4 != 0
          )) || ((xml_line.tag_type != '\x02' ||
                 (local_6c4 = local_6bc + 4, xml_line.num_parameters == 0)))) break;
      uVar15 = 0;
      ppcVar20 = ppcVar21;
      while( true ) {
        ppcVar20 = ppcVar20 + 1;
        iVar4 = strcmp(*ppcVar20,"size");
        if (iVar4 == 0) break;
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar14) goto failed_to_load;
      }
      if ((xml_line.parameter_values[uVar15] == (char *)0x0) ||
         (uVar5 = strtoul(xml_line.parameter_values[uVar15],(char **)0x0,0x10),
         uVar14 = xml_line.num_parameters, xml_line.num_parameters == 0)) break;
      uVar15 = 0;
      ppcVar20 = ppcVar21;
      while( true ) {
        ppcVar20 = ppcVar20 + 1;
        iVar4 = strcmp(*ppcVar20,"crc32");
        if (iVar4 == 0) break;
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar14) goto failed_to_load;
      }
      if (xml_line.parameter_values[uVar15] == (char *)0x0) break;
      uVar6 = strtoul(xml_line.parameter_values[uVar15],(char **)0x0,0x10);
      uVar14 = xml_line.num_parameters;
      if (xml_line.num_parameters == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar15 = 0;
        ppcVar20 = ppcVar21;
        do {
          ppcVar20 = ppcVar20 + 1;
          iVar4 = strcmp(*ppcVar20,"id");
          if (iVar4 == 0) {
            if (xml_line.parameter_values[uVar15] != (char *)0x0) {
              uVar7 = strtoul(xml_line.parameter_values[uVar15],(char **)0x0,0x10);
              uVar14 = xml_line.num_parameters;
              if (xml_line.num_parameters != 0) goto LAB_08094080;
              goto LAB_08094618;
            }
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar14);
        uVar7 = 0xffffffff;
LAB_08094080:
        uVar17 = 0;
        ppcVar20 = ppcVar21;
        do {
          ppcVar20 = ppcVar20 + 1;
          iVar4 = strcmp(*ppcVar20,"title");
          if (iVar4 == 0) {
            if (xml_line.parameter_values[uVar17] != (char *)0x0) {
              __strcpy_chk(title_buffer_header,xml_line.parameter_values[uVar17],0x100);
              goto LAB_080940d0;
            }
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar14);
      }
LAB_08094618:
      title_buffer_header[0] = '\0';
LAB_080940d0:
      sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
      pcVar3 = xml_line.tag_name;
      if (sVar13 == -1) break;
      iVar4 = strcasecmp(xml_line.tag_name,"save");
      uVar14 = xml_line.num_parameters;
      uVar19 = 0;
      if (iVar4 == 0) {
        if (xml_line.num_parameters == 0) break;
        uVar15 = 0;
        ppcVar20 = ppcVar21;
        while( true ) {
          ppcVar20 = ppcVar20 + 1;
          iVar4 = strcmp(*ppcVar20,"size");
          if (iVar4 == 0) break;
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar14) goto failed_to_load;
        }
        if ((xml_line.parameter_values[uVar15] == (char *)0x0) ||
           (local_6a8 = strtoul(xml_line.parameter_values[uVar15],(char **)0x0,0x10),
           uVar14 = xml_line.num_parameters, xml_line.num_parameters == 0)) break;
        uVar15 = 0;
        ppcVar20 = ppcVar21;
        while( true ) {
          ppcVar20 = ppcVar20 + 1;
          iVar4 = strcmp(*ppcVar20,"type");
          if (iVar4 == 0) break;
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar14) goto failed_to_load;
        }
        pcVar3 = xml_line.parameter_values[uVar15];
        if (pcVar3 == (char *)0x0) break;
        iVar4 = strcasecmp(pcVar3,"eeprom");
        if (iVar4 == 0) {
          uVar19 = 2;
        }
        else {
          iVar4 = strcasecmp(pcVar3,"flash");
          if (iVar4 == 0) {
            i = 0;
            do {
              ppcVar21 = ppcVar21 + 1;
              iVar4 = strcmp(*ppcVar21,"id");
              if (iVar4 == 0) {
                if (xml_line.parameter_values[i] != (char *)0x0) {
                  uVar19 = 1;
                  local_69c = strtoul(xml_line.parameter_values[i],(char **)0x0,0x10);
                  goto LAB_08094244;
                }
                break;
              }
              i = i + 1;
            } while (i != uVar14);
            uVar19 = 1;
          }
          else {
            iVar4 = strcasecmp(pcVar3,"nand");
            if (iVar4 != 0) {
              __sprintf_chk(error_message,1,0x100,"Unknown save type %s.\n",pcVar3);
              break;
            }
            uVar19 = 3;
          }
        }
LAB_08094244:
        sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
        if (sVar13 == -1) break;
        local_6c4 = local_6bc + 5;
        pcVar3 = xml_line.tag_name;
      }
      iVar4 = strcasecmp(pcVar3,"irport");
      if (iVar4 == 0) {
        if (xml_line.tag_type == '\x02') {
          sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
          if (sVar13 != -1) {
            uVar16 = 3;
            uVar11 = 1;
            local_6c4 = local_6c4 + 1;
            pcVar3 = xml_line.tag_name;
            goto LAB_08094568;
          }
          break;
        }
        uVar11 = 0;
      }
      else {
        uVar16 = 2;
        uVar11 = 0;
LAB_08094568:
        iVar4 = strcasecmp(pcVar3,"bluetooth");
        if ((iVar4 == 0) && (xml_line.tag_type == '\x02')) {
          sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
          if (sVar13 == -1) break;
          local_6c4 = local_6c4 + 1;
          pcVar3 = xml_line.tag_name;
          uVar11 = uVar16;
        }
      }
      iVar4 = strcasecmp(pcVar3,"slot1");
      if ((iVar4 != 0) || (xml_line.tag_type != '\x01')) break;
      sVar13 = xml_parse_line((FILE *)__stream,&xml_line,error_message);
      pcVar3 = xml_line.tag_name;
      if ((sVar13 == -1) ||
         ((iVar4 = strcasecmp(xml_line.tag_name,"cartridge"), iVar4 != 0 ||
          (xml_line.tag_type != '\x01')))) {
        __sprintf_chk(error_message,1,0x100,"Expected closing cartridge and got (%s, %d)\n",pcVar3,
                      xml_line.tag_type);
        break;
      }
      sVar8 = strlen(title_buffer);
      sVar8 = sVar8 + 1;
      pcVar3 = (char *)malloc(sVar8);
      *(char **)((int)local_6c0 + local_6c8 * 0x30) = pcVar3;
      pcVar18 = (char *)((int)local_6c0 + local_6c8 * 0x30 + 4);
      *(ulong *)((int)local_6c0 + local_6c8 * 0x30 + 0x14) = uVar5;
      *(ulong *)((int)local_6c0 + local_6c8 * 0x30 + 0x18) = uVar6;
      *(ulong *)((int)local_6c0 + local_6c8 * 0x30 + 0x1c) = local_6a8;
      *(ulong *)((int)local_6c0 + local_6c8 * 0x30 + 0x20) = uVar7;
      *(undefined4 *)((int)local_6c0 + local_6c8 * 0x30 + 0x28) = uVar11;
      *(undefined *)((int)local_6c0 + local_6c8 * 0x30 + 0x2c) = uVar19;
      *(ulong *)((int)local_6c0 + local_6c8 * 0x30 + 0x24) = local_69c;
      unescape_str(pcVar3,title_buffer,sVar8,sVar8);
      sVar8 = strlen(title_buffer_header);
      if (sVar8 != 0xffffffff) {
        pcVar3 = title_buffer_header;
        uVar17 = 0;
        do {
          if (pcVar3[uVar17] == '&') {
            __s1 = pcVar3 + uVar17 + 1;
            iVar4 = strncmp(__s1,"amp;",4);
            if (iVar4 == 0) {
              uVar17 = uVar17 + 3;
              *pcVar18 = '&';
            }
            else {
              iVar4 = strncmp(__s1,"apos;",5);
              if (iVar4 == 0) {
                uVar17 = uVar17 + 4;
                *pcVar18 = '\'';
              }
              else {
                iVar4 = strncmp(__s1,"quot;",5);
                if (iVar4 == 0) {
                  uVar17 = uVar17 + 4;
                  *pcVar18 = '\"';
                }
                else {
                  iVar4 = strncmp(__s1,"lt;",3);
                  if (iVar4 == 0) {
                    uVar17 = uVar17 + 2;
                    *pcVar18 = '<';
                  }
                  else {
                    iVar4 = strncmp(__s1,"gt;",3);
                    if (iVar4 == 0) {
                      uVar17 = uVar17 + 2;
                      *pcVar18 = '>';
                    }
                  }
                }
              }
            }
            pcVar3 = pcVar3 + 1;
            if (sVar8 + 1 <= uVar17) break;
          }
          else {
            *pcVar18 = pcVar3[uVar17];
          }
          pcVar18 = pcVar18 + 1;
          if ((pcVar18 == (char *)((int)local_6c0 + local_6c8 * 0x30 + 0x10)) ||
             (uVar17 = uVar17 + 1, sVar8 + 1 <= uVar17)) break;
        } while( true );
      }
      sVar8 = local_6c8 + 1;
      local_6bc = local_6c4 + 1;
      *(undefined *)((int)local_6c0 + local_6c8 * 0x30 + 0x10) = 0;
      local_6c8 = sVar8;
      if (local_6a0 == sVar8) {
        local_6c0 = realloc(local_6c0,local_6a0 * 0x60);
        local_6a0 = local_6a0 * 2;
      }
    }
failed_to_load:
    __printf_chk(1,"%d: Failed to parse game database file: %s\n",local_6c4,error_message);
    fflush(stdout);
    if (local_6c8 != 0) {
      iVar4 = 0;
      sVar8 = 0;
      do {
        ppvVar1 = (void **)((int)local_6c0 + iVar4);
        sVar8 = sVar8 + 1;
        iVar4 = iVar4 + 0x30;
        free(*ppvVar1);
      } while (local_6c8 != sVar8);
    }
  }
  sVar13 = -1;
  free(local_6c0);
LAB_08093d20:
  if (iVar2 == __stack_chk_guard) {
    return sVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


