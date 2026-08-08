/*
 * Ghidra decompilation
 *
 * Function : initialize_game_database
 * Address  : 00173180
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 initialize_game_database(void **param_1,char *param_2)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FILE *__stream;
  char *pcVar8;
  ulong uVar9;
  size_t sVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  void **ppvVar15;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  void **local_7e8;
  int local_7e0;
  uint local_7dc;
  uint local_7b8;
  undefined4 local_7b4;
  undefined auStack_798 [136];
  long alStack_710 [31];
  char *local_618;
  char *local_610 [32];
  char *local_510 [32];
  uint local_410;
  char local_40c;
  char acStack_408 [256];
  undefined auStack_308 [256];
  char acStack_208 [256];
  char local_108 [256];
  long local_8;
  void **ppvVar16;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    uVar28 = 0xffffffff;
    __printf_chk(1,"Error: could not load game database file %s.\n",param_2);
    goto LAB_001737a0;
  }
  __xstat(0,param_2,(stat *)auStack_798);
  param_1[3] = (void *)auStack_798._88_8_;
  local_7e8 = (void **)malloc(0x700);
  pcVar8 = fgets(acStack_408,0x100,__stream);
  if (pcVar8 == (char *)0x0) {
    uVar14 = 1;
LAB_00173768:
    __printf_chk(1,"%d: Failed to parse game database file: %s\n",uVar14,auStack_308);
    fflush(_stdout);
  }
  else {
    iVar5 = strncasecmp(acStack_408,"<?xml version=\'1.0\' encoding=\'UTF-8\'?>",0x26);
    if (iVar5 != 0) {
      uVar14 = 1;
      goto LAB_00173768;
    }
    puVar2 = auStack_798 + 0x80;
    iVar5 = xml_parse_line(__stream,puVar2,auStack_308);
    pcVar8 = local_618;
    if (((iVar5 == -1) || (iVar5 = strcasecmp(local_618,"database"), iVar5 != 0)) ||
       (local_40c != '\0')) {
      __sprintf_chk(auStack_308,1,0x100,"Wrong tag name: expected database, got %s\n",pcVar8);
      uVar14 = 2;
      goto LAB_00173768;
    }
    uVar28 = 0;
    local_7e0 = 3;
    local_7dc = 0;
    local_7b8 = 0x20;
    local_7b4 = 0;
LAB_001732a8:
    iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
    pcVar8 = local_618;
    iVar5 = local_7e0;
    if (iVar6 != -1) {
      iVar5 = strcasecmp(local_618,"database");
      if ((iVar5 == 0) && (local_40c == '\x01')) {
        uVar22 = (ulong)local_7dc;
        pvVar12 = realloc(local_7e8,(ulong)local_7dc * 0x38);
        *param_1 = pvVar12;
        *(uint *)(param_1 + 4) = local_7dc;
        pvVar11 = malloc(uVar22 << 3);
        param_1[1] = pvVar11;
        pvVar13 = malloc(uVar22 << 3);
        param_1[2] = pvVar13;
        if (local_7dc == 0) goto LAB_00173cc0;
        if (local_7dc - 1 < 4) {
          uVar7 = 0;
          goto LAB_00173c54;
        }
        lVar19 = 0x10;
        uVar17 = 0x100000000;
        uVar9 = 0x300000002;
        do {
          pvVar23 = (void *)((long)pvVar12 + (uVar17 & 0xffffffff) * 0x38);
          pvVar24 = (void *)((long)pvVar12 + (uVar17 >> 0x20) * 0x38);
          pvVar25 = (void *)((long)pvVar12 + (uVar9 & 0xffffffff) * 0x38);
          pvVar26 = (void *)((long)pvVar12 + (uVar9 >> 0x20) * 0x38);
          ppvVar15 = (void **)((long)pvVar11 + lVar19 + -0x10);
          ppvVar15[1] = pvVar24;
          *ppvVar15 = pvVar23;
          ppvVar15 = (void **)((long)pvVar13 + lVar19 + -0x10);
          ppvVar15[1] = pvVar24;
          *ppvVar15 = pvVar23;
          ((void **)((long)pvVar11 + lVar19))[1] = pvVar26;
          *(void **)((long)pvVar11 + lVar19) = pvVar25;
          ((void **)((long)pvVar13 + lVar19))[1] = pvVar26;
          *(void **)((long)pvVar13 + lVar19) = pvVar25;
          lVar19 = lVar19 + 0x20;
          uVar17 = CONCAT44((int)(uVar17 >> 0x20) + 4,(int)uVar17 + 4);
          uVar9 = CONCAT44((int)(uVar9 >> 0x20) + 4,(int)uVar9 + 4);
        } while (lVar19 != (ulong)((local_7dc >> 2) - 1) * 0x20 + 0x30);
        uVar7 = local_7dc & 0xfffffffc;
        if ((local_7dc & 3) != 0) {
LAB_00173c54:
          pvVar23 = (void *)((long)pvVar12 + (ulong)uVar7 * 0x38);
          *(void **)((long)pvVar11 + (ulong)uVar7 * 8) = pvVar23;
          *(void **)((long)pvVar13 + (ulong)uVar7 * 8) = pvVar23;
          uVar21 = uVar7 + 1;
          if (uVar21 < local_7dc) {
            pvVar23 = (void *)((long)pvVar12 + (ulong)uVar21 * 0x38);
            uVar1 = uVar7 + 2;
            *(void **)((long)pvVar11 + (ulong)uVar21 * 8) = pvVar23;
            *(void **)((long)pvVar13 + (ulong)uVar21 * 8) = pvVar23;
            if (uVar1 < local_7dc) {
              pvVar23 = (void *)((long)pvVar12 + (ulong)uVar1 * 0x38);
              uVar7 = uVar7 + 3;
              *(void **)((long)pvVar11 + (ulong)uVar1 * 8) = pvVar23;
              *(void **)((long)pvVar13 + (ulong)uVar1 * 8) = pvVar23;
              if (uVar7 < local_7dc) {
                pvVar12 = (void *)((long)pvVar12 + (ulong)uVar7 * 0x38);
                *(void **)((long)pvVar11 + (ulong)uVar7 * 8) = pvVar12;
                *(void **)((long)pvVar13 + (ulong)uVar7 * 8) = pvVar12;
              }
            }
          }
        }
LAB_00173cc0:
        qsort(pvVar11,uVar22,8,compare_game_entry_crc32);
        qsort(param_1[2],uVar22,8,compare_game_entry_game_code);
        __printf_chk(1,"Loaded %d games in database file %s.\n",local_7dc,param_2);
        uVar28 = 0;
        goto LAB_001737a0;
      }
      iVar6 = strcasecmp(pcVar8,"cartridge");
      uVar7 = local_410;
      iVar5 = local_7e0 + 1;
      if ((iVar6 != 0) || ((local_40c != '\0' || (iVar5 = local_7e0 + 2, local_410 == 0))))
      goto LAB_00173810;
      uVar22 = 0;
      while( true ) {
        iVar6 = strcmp(local_610[uVar22],"title");
        if (iVar6 == 0) break;
        uVar22 = uVar22 + 1;
        if (uVar7 <= (uint)uVar22) goto LAB_00173810;
      }
      if (alStack_710[(uVar22 & 0xffffffff) + 0x40] == 0) goto LAB_00173810;
      __strcpy_chk(acStack_208,alStack_710[(uVar22 & 0xffffffff) + 0x40],0x100);
      iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
      if (((iVar6 == -1) || (iVar6 = strcasecmp(local_618,"slot1"), iVar6 != 0)) ||
         (local_40c != '\0')) goto LAB_00173810;
      iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
      iVar5 = local_7e0 + 3;
      if (((iVar6 == -1) || (iVar6 = strcasecmp(local_618,"rom"), uVar7 = local_410, iVar6 != 0)) ||
         ((local_40c != '\x02' || (iVar5 = local_7e0 + 4, local_410 == 0)))) goto LAB_00173810;
      uVar22 = 0;
      while( true ) {
        iVar6 = strcmp(local_610[uVar22],"size");
        if (iVar6 == 0) break;
        uVar22 = uVar22 + 1;
        if (uVar7 <= (uint)uVar22) goto LAB_00173810;
      }
      if (local_510[uVar22 & 0xffffffff] == (char *)0x0) goto LAB_00173810;
      uVar22 = strtoul(local_510[uVar22 & 0xffffffff],(char **)0x0,0x10);
      uVar7 = local_410;
      if (local_410 == 0) goto LAB_00173810;
      uVar17 = 0;
      while( true ) {
        iVar6 = strcmp(local_610[uVar17],"crc32");
        if (iVar6 == 0) break;
        uVar17 = uVar17 + 1;
        if (uVar7 <= (uint)uVar17) goto LAB_00173810;
      }
      if (local_510[uVar17 & 0xffffffff] == (char *)0x0) goto LAB_00173810;
      uVar17 = strtoul(local_510[uVar17 & 0xffffffff],(char **)0x0,0x10);
      if (local_410 == 0) {
        uVar27 = 0xffffffff;
      }
      else {
        uVar9 = 0;
        do {
          pcVar8 = local_610[uVar9];
          if (((*pcVar8 == 'i') && (pcVar8[1] == 'd')) && (pcVar8[2] == '\0')) {
            if (local_510[uVar9 & 0xffffffff] != (char *)0x0) {
              uVar9 = strtoul(local_510[uVar9 & 0xffffffff],(char **)0x0,0x10);
              uVar27 = (undefined4)uVar9;
              if (local_410 == 0) goto LAB_001738f8;
              goto LAB_00173504;
            }
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((uint)uVar9 < local_410);
        uVar27 = 0xffffffff;
LAB_00173504:
        uVar7 = local_410;
        uVar9 = 0;
        do {
          iVar6 = strcmp(local_610[uVar9],"title");
          if (iVar6 == 0) {
            if (local_510[uVar9 & 0xffffffff] != (char *)0x0) {
              __strcpy_chk(local_108,local_510[uVar9 & 0xffffffff],0x100);
              goto LAB_00173550;
            }
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((uint)uVar9 < uVar7);
      }
LAB_001738f8:
      local_108[0] = '\0';
LAB_00173550:
      iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
      pcVar8 = local_618;
      if (iVar6 == -1) goto LAB_00173810;
      iVar6 = strcasecmp(local_618,"save");
      uVar7 = local_410;
      uVar4 = 0;
      if (iVar6 == 0) {
        if (local_410 == 0) goto LAB_00173810;
        uVar9 = 0;
        while( true ) {
          iVar6 = strcmp(local_610[uVar9],"size");
          if (iVar6 == 0) break;
          uVar9 = uVar9 + 1;
          if (uVar7 <= (uint)uVar9) goto LAB_00173810;
        }
        if (local_510[uVar9 & 0xffffffff] == (char *)0x0) goto LAB_00173810;
        uVar9 = strtoul(local_510[uVar9 & 0xffffffff],(char **)0x0,0x10);
        uVar7 = local_410;
        uVar28 = (undefined4)uVar9;
        if (local_410 == 0) goto LAB_00173810;
        uVar9 = 0;
        while( true ) {
          iVar6 = strcmp(local_610[uVar9],"type");
          if (iVar6 == 0) break;
          uVar9 = uVar9 + 1;
          if (uVar7 <= (uint)uVar9) goto LAB_00173810;
        }
        pcVar8 = local_510[uVar9 & 0xffffffff];
        if (pcVar8 == (char *)0x0) goto LAB_00173810;
        iVar6 = strcasecmp(pcVar8,"eeprom");
        if (iVar6 == 0) {
          uVar4 = 2;
        }
        else {
          iVar6 = strcasecmp(pcVar8,"flash");
          if (iVar6 == 0) {
            uVar9 = 0;
            do {
              pcVar8 = local_610[uVar9];
              if (((*pcVar8 == 'i') && (pcVar8[1] == 'd')) && (pcVar8[2] == '\0')) {
                if (local_510[uVar9 & 0xffffffff] != (char *)0x0) {
                  uVar9 = strtoul(local_510[uVar9 & 0xffffffff],(char **)0x0,0x10);
                  local_7b4 = (undefined4)uVar9;
                }
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((uint)uVar9 < uVar7);
            uVar4 = 1;
          }
          else {
            iVar6 = strcasecmp(pcVar8,"nand");
            if (iVar6 != 0) {
              __sprintf_chk(auStack_308,1,0x100,"Unknown save type %s.\n",pcVar8);
              goto LAB_00173810;
            }
            uVar4 = 3;
          }
        }
        iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
        if (iVar6 == -1) goto LAB_00173810;
        iVar5 = local_7e0 + 5;
        pcVar8 = local_618;
      }
      iVar6 = strcasecmp(pcVar8,"irport");
      if (iVar6 == 0) {
        uVar20 = 0;
        if (local_40c == '\x02') {
          iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
          if (iVar6 != -1) {
            iVar5 = iVar5 + 1;
            uVar18 = 3;
            uVar20 = 1;
            pcVar8 = local_618;
            goto LAB_001738ac;
          }
          goto LAB_00173810;
        }
      }
      else {
        uVar18 = 2;
        uVar20 = 0;
LAB_001738ac:
        iVar6 = strcasecmp(pcVar8,"bluetooth");
        if ((iVar6 == 0) && (local_40c == '\x02')) {
          iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
          if (iVar6 == -1) goto LAB_00173810;
          iVar5 = iVar5 + 1;
          pcVar8 = local_618;
          uVar20 = uVar18;
        }
      }
      iVar6 = strcasecmp(pcVar8,"slot1");
      if ((iVar6 == 0) && (local_40c == '\x01')) {
        iVar6 = xml_parse_line(__stream,puVar2,auStack_308);
        pcVar8 = local_618;
        if ((iVar6 != -1) &&
           ((iVar6 = strcasecmp(local_618,"cartridge"), iVar6 == 0 && (local_40c == '\x01')))) {
          sVar10 = strlen(acStack_208);
          iVar6 = (int)sVar10 + 1;
          uVar9 = (ulong)local_7dc;
          lVar19 = uVar9 * 0x38;
          pvVar11 = malloc((ulong)((int)sVar10 + 1));
          local_7e8[uVar9 * 7] = pvVar11;
          *(undefined4 *)(local_7e8 + uVar9 * 7 + 5) = local_7b4;
          *(undefined4 *)((long)local_7e8 + lVar19 + 0x2c) = uVar20;
          *(undefined *)(local_7e8 + uVar9 * 7 + 6) = uVar4;
          local_7e8[uVar9 * 7 + 4] = (void *)CONCAT44(uVar27,uVar28);
          local_7e8[uVar9 * 7 + 3] = (void *)CONCAT44((int)uVar17,(int)uVar22);
          unescape_str(pvVar11,acStack_208,iVar6,iVar6);
          sVar10 = strlen(local_108);
          uVar7 = (int)sVar10 + 1;
          ppvVar15 = local_7e8 + uVar9 * 7 + 1;
          uVar21 = 0;
          do {
            cVar3 = local_108[uVar21];
            if (cVar3 == '&') {
              uVar22 = (ulong)(uVar21 + 1);
              pcVar8 = local_108 + uVar22;
              iVar6 = strncmp(pcVar8,"amp;",4);
              if (iVar6 == 0) {
                uVar21 = uVar21 + 4;
                *(char *)ppvVar15 = '&';
              }
              else {
                iVar6 = strncmp(pcVar8,"apos;",5);
                if (iVar6 == 0) {
                  uVar21 = uVar21 + 5;
                  *(char *)ppvVar15 = '\'';
                }
                else {
                  iVar6 = strncmp(pcVar8,"quot;",5);
                  if (iVar6 == 0) {
                    uVar21 = uVar21 + 5;
                    *(char *)ppvVar15 = '\"';
                  }
                  else {
                    cVar3 = local_108[uVar21 + 1];
                    if (((cVar3 == 'l') && (local_108[uVar22 + 1] == 't')) &&
                       (local_108[uVar22 + 2] == ';')) {
                      uVar21 = uVar21 + 3;
                      *(char *)ppvVar15 = '<';
                    }
                    else {
                      if (((cVar3 != 'g') || (local_108[uVar22 + 1] != 't')) ||
                         (local_108[uVar22 + 2] != ';')) {
                        __printf_chk(1,"Unknown escape sequence in string %s\n",local_108);
                        *(char *)ppvVar15 = '_';
                        goto LAB_00173694;
                      }
                      uVar21 = uVar21 + 3;
                      *(char *)ppvVar15 = '>';
                    }
                  }
                }
              }
              if (uVar7 <= uVar21) goto LAB_001736f8;
            }
            else {
              *(char *)ppvVar15 = cVar3;
            }
LAB_00173694:
            ppvVar15 = (void **)((long)ppvVar15 + 1);
            if ((ppvVar15 == (void **)((long)local_7e8 + lVar19 + 0x14)) ||
               (uVar21 = uVar21 + 1, uVar7 <= uVar21)) goto LAB_001736f8;
          } while( true );
        }
        __sprintf_chk(auStack_308,1,0x100,"Expected closing cartridge and got (%s, %d)\n",pcVar8,
                      local_40c);
      }
    }
LAB_00173810:
    __printf_chk(1,"%d: Failed to parse game database file: %s\n",iVar5,auStack_308);
    fflush(_stdout);
    if (local_7dc != 0) {
      ppvVar15 = local_7e8;
      do {
        ppvVar16 = ppvVar15 + 7;
        free(*ppvVar15);
        ppvVar15 = ppvVar16;
      } while (ppvVar16 != local_7e8 + (ulong)(local_7dc - 1) * 7 + 7);
    }
  }
  uVar28 = 0xffffffff;
  free(local_7e8);
LAB_001737a0:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return uVar28;
LAB_001736f8:
  *(undefined *)((long)local_7e8 + lVar19 + 0x14) = 0;
  local_7dc = local_7dc + 1;
  local_7e0 = iVar5 + 1;
  if (local_7b8 == local_7dc) {
    local_7b8 = local_7b8 * 2;
    local_7e8 = (void **)realloc(local_7e8,(ulong)local_7b8 * 0x38);
  }
  goto LAB_001732a8;
}


