/*
 * Ghidra decompilation
 *
 * Function : FUN_0805e6dc
 * Address  : 0805e6dc
 * Program  : drastic16
 */


undefined4 FUN_0805e6dc(void **param_1,char *param_2)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  size_t sVar7;
  void *pvVar8;
  void *__base;
  void *pvVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined uVar12;
  size_t sVar13;
  char **ppcVar14;
  undefined4 uVar15;
  uint uVar16;
  char *__s1;
  void *local_6ac;
  int local_6a8;
  void *local_6a4;
  ulong local_6a0;
  ulong local_698;
  void *local_694;
  stat sStack_690;
  char local_638 [256];
  char acStack_538 [256];
  char acStack_438 [256];
  char acStack_338 [256];
  undefined auStack_238 [256];
  char *local_138;
  char *local_134 [32];
  char *local_b4 [32];
  uint local_34;
  byte local_30;
  
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    printf("Error: could not load game database file %s.\n",param_2);
    return 0xffffffff;
  }
  __xstat(3,param_2,&sStack_690);
  param_1[3] = (void *)sStack_690.st_mtim.tv_sec;
  local_6a4 = malloc(0x600);
  pcVar1 = fgets(acStack_538,0x100,__stream);
  if (pcVar1 != (char *)0x0) {
    iVar2 = strncasecmp(acStack_538,"<?xml version=\'1.0\' encoding=\'UTF-8\'?>",0x26);
    if (iVar2 == 0) {
      iVar2 = FUN_0805e270(__stream,auStack_238,acStack_438);
      pcVar1 = local_138;
      if (((iVar2 != -1) && (iVar2 = strcasecmp(local_138,"database"), iVar2 == 0)) &&
         (local_30 == 0)) {
        iVar2 = 3;
        local_694 = (void *)0x20;
        local_6a0 = 0;
        local_698 = 0;
        local_6ac = (void *)0x0;
        while (iVar3 = FUN_0805e270(__stream,auStack_238,acStack_438), pcVar1 = local_138,
              local_6a8 = iVar2, iVar3 != -1) {
          iVar3 = strcasecmp(local_138,"database");
          if ((iVar3 == 0) && (local_30 == 1)) {
            sVar7 = (int)local_6ac * 4;
            pvVar8 = realloc(local_6a4,(int)local_6ac * 0x30);
            param_1[4] = local_6ac;
            *param_1 = pvVar8;
            __base = malloc(sVar7);
            param_1[1] = __base;
            pvVar9 = malloc(sVar7);
            param_1[2] = pvVar9;
            if (local_6ac != (void *)0x0) {
              sVar13 = 0;
              while( true ) {
                *(void **)((int)__base + sVar13) = pvVar8;
                *(void **)((int)param_1[2] + sVar13) = pvVar8;
                sVar13 = sVar13 + 4;
                pvVar8 = (void *)((int)pvVar8 + 0x30);
                if (sVar7 == sVar13) break;
                __base = param_1[1];
              }
              __base = param_1[1];
            }
            qsort(__base,(size_t)local_6ac,4,(__compar_fn_t)&LAB_0805debc);
            qsort(param_1[2],(size_t)local_6ac,4,(__compar_fn_t)&LAB_0805def0);
            printf("Loaded %d games in database file %s.\n",local_6ac,param_2);
            return 0;
          }
          iVar3 = strcasecmp(pcVar1,"cartridge");
          uVar10 = local_34;
          local_6a8 = iVar2 + 1;
          if (((iVar3 != 0) || (local_30 != 0)) || (local_6a8 = iVar2 + 2, local_34 == 0)) break;
          ppcVar14 = &local_138;
          uVar16 = 0;
          while( true ) {
            ppcVar14 = ppcVar14 + 1;
            iVar3 = strcmp(*ppcVar14,"title");
            if (iVar3 == 0) break;
            uVar16 = uVar16 + 1;
            if (uVar16 == uVar10) goto LAB_0805ef08;
          }
          if (local_b4[uVar16] == (char *)0x0) break;
          strcpy(acStack_338,local_b4[uVar16]);
          iVar3 = FUN_0805e270(__stream,auStack_238,acStack_438);
          if (((iVar3 == -1) || (iVar3 = strcasecmp(local_138,"slot1"), iVar3 != 0)) ||
             (local_30 != 0)) break;
          local_6a8 = iVar2 + 3;
          iVar3 = FUN_0805e270(__stream,auStack_238,acStack_438);
          if (((iVar3 == -1) || (iVar3 = strcasecmp(local_138,"rom"), uVar10 = local_34, iVar3 != 0)
              ) || ((local_30 != 2 || (local_6a8 = iVar2 + 4, local_34 == 0)))) break;
          ppcVar14 = &local_138;
          uVar16 = 0;
          while( true ) {
            ppcVar14 = ppcVar14 + 1;
            iVar3 = strcmp(*ppcVar14,"size");
            if (iVar3 == 0) break;
            uVar16 = uVar16 + 1;
            if (uVar16 == uVar10) goto LAB_0805ef08;
          }
          if ((local_b4[uVar16] == (char *)0x0) ||
             (uVar4 = strtoul(local_b4[uVar16],(char **)0x0,0x10), uVar10 = local_34, local_34 == 0)
             ) break;
          ppcVar14 = &local_138;
          uVar16 = 0;
          while( true ) {
            ppcVar14 = ppcVar14 + 1;
            iVar3 = strcmp(*ppcVar14,"crc32");
            if (iVar3 == 0) break;
            uVar16 = uVar16 + 1;
            if (uVar16 == uVar10) goto LAB_0805ef08;
          }
          if (local_b4[uVar16] == (char *)0x0) break;
          uVar5 = strtoul(local_b4[uVar16],(char **)0x0,0x10);
          uVar10 = local_34;
          if (local_34 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            ppcVar14 = &local_138;
            uVar16 = 0;
            do {
              ppcVar14 = ppcVar14 + 1;
              iVar3 = strcmp(*ppcVar14,"id");
              if (iVar3 == 0) {
                if (local_b4[uVar16] != (char *)0x0) {
                  uVar6 = strtoul(local_b4[uVar16],(char **)0x0,0x10);
                  uVar10 = local_34;
                  if (local_34 == 0) goto LAB_0805effc;
                  goto LAB_0805eabc;
                }
                break;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar10);
            uVar6 = 0xffffffff;
LAB_0805eabc:
            uVar16 = 0;
            ppcVar14 = &local_138;
            do {
              ppcVar14 = ppcVar14 + 1;
              iVar3 = strcmp(*ppcVar14,"title");
              if (iVar3 == 0) {
                if (local_b4[uVar16] != (char *)0x0) {
                  strcpy(local_638,local_b4[uVar16]);
                  goto LAB_0805eb10;
                }
                break;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar10);
          }
LAB_0805effc:
          local_638[0] = '\0';
LAB_0805eb10:
          iVar3 = FUN_0805e270(__stream,auStack_238,acStack_438);
          pcVar1 = local_138;
          if (iVar3 == -1) break;
          iVar3 = strcasecmp(local_138,"save");
          uVar10 = local_34;
          uVar12 = 0;
          if (iVar3 == 0) {
            if (local_34 == 0) break;
            ppcVar14 = &local_138;
            uVar16 = 0;
            while( true ) {
              ppcVar14 = ppcVar14 + 1;
              iVar3 = strcmp(*ppcVar14,"size");
              if (iVar3 == 0) break;
              uVar16 = uVar16 + 1;
              if (uVar16 == uVar10) goto LAB_0805ef08;
            }
            if ((local_b4[uVar16] == (char *)0x0) ||
               (local_698 = strtoul(local_b4[uVar16],(char **)0x0,0x10), uVar10 = local_34,
               local_34 == 0)) break;
            ppcVar14 = &local_138;
            uVar16 = 0;
            while( true ) {
              ppcVar14 = ppcVar14 + 1;
              iVar3 = strcmp(*ppcVar14,"type");
              if (iVar3 == 0) break;
              uVar16 = uVar16 + 1;
              if (uVar16 == uVar10) goto LAB_0805ef08;
            }
            pcVar1 = local_b4[uVar16];
            if (pcVar1 == (char *)0x0) break;
            iVar3 = strcasecmp(pcVar1,"eeprom");
            if (iVar3 == 0) {
              uVar12 = 2;
            }
            else {
              iVar3 = strcasecmp(pcVar1,"flash");
              if (iVar3 == 0) {
                ppcVar14 = &local_138;
                uVar16 = 0;
                do {
                  ppcVar14 = ppcVar14 + 1;
                  iVar3 = strcmp(*ppcVar14,"id");
                  if (iVar3 == 0) {
                    if (local_b4[uVar16] != (char *)0x0) {
                      uVar12 = 1;
                      local_6a0 = strtoul(local_b4[uVar16],(char **)0x0,0x10);
                      goto LAB_0805ec9c;
                    }
                    break;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar10);
                uVar12 = 1;
              }
              else {
                iVar3 = strcasecmp(pcVar1,"nand");
                if (iVar3 != 0) {
                  sprintf(acStack_438,"Unknown save type %s.\n",pcVar1);
                  break;
                }
                uVar12 = 3;
              }
            }
LAB_0805ec9c:
            iVar3 = FUN_0805e270(__stream,auStack_238,acStack_438);
            if (iVar3 == -1) break;
            local_6a8 = iVar2 + 5;
            pcVar1 = local_138;
          }
          iVar2 = strcasecmp(pcVar1,"irport");
          if (iVar2 == 0) {
            if (local_30 == 2) {
              iVar2 = FUN_0805e270(__stream,auStack_238,acStack_438);
              if (iVar2 == -1) break;
              uVar11 = 3;
              uVar15 = 1;
              local_6a8 = local_6a8 + 1;
              pcVar1 = local_138;
            }
            else {
              uVar11 = 2;
              uVar15 = 0;
            }
          }
          else {
            uVar11 = 2;
            uVar15 = 0;
          }
          iVar2 = strcasecmp(pcVar1,"bluetooth");
          if ((iVar2 == 0) && (local_30 == 2)) {
            iVar2 = FUN_0805e270(__stream,auStack_238,acStack_438);
            if (iVar2 == -1) break;
            local_6a8 = local_6a8 + 1;
            uVar15 = uVar11;
            pcVar1 = local_138;
          }
          iVar2 = strcasecmp(pcVar1,"slot1");
          if ((iVar2 != 0) || (local_30 != 1)) break;
          iVar2 = FUN_0805e270(__stream,auStack_238,acStack_438);
          pcVar1 = local_138;
          if ((iVar2 == -1) || (iVar2 = strcasecmp(local_138,"cartridge"), iVar2 != 0)) {
            uVar10 = (uint)local_30;
LAB_0805f1b4:
            sprintf(acStack_438,"Expected closing cartridge and got (%s, %d)\n",pcVar1,uVar10);
            break;
          }
          uVar10 = (uint)local_30;
          if (uVar10 != 1) goto LAB_0805f1b4;
          sVar7 = strlen(acStack_338);
          pvVar8 = malloc(sVar7 + 1);
          *(void **)((int)local_6a4 + (int)local_6ac * 0x30) = pvVar8;
          *(ulong *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x18) = uVar5;
          *(undefined *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x2c) = uVar12;
          *(ulong *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x14) = uVar4;
          *(undefined4 *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x28) = uVar15;
          *(ulong *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x20) = uVar6;
          *(ulong *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x1c) = local_698;
          *(ulong *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x24) = local_6a0;
          FUN_0805e080(pvVar8,acStack_338,sVar7 + 1);
          sVar7 = strlen(local_638);
          if (sVar7 != 0xffffffff) {
            iVar2 = (int)local_6a4 + (int)local_6ac * 0x30 + 5;
            pcVar1 = local_638;
            uVar10 = 0;
            do {
              if (pcVar1[uVar10] == '&') {
                __s1 = pcVar1 + uVar10 + 1;
                iVar3 = strncmp(__s1,"amp;",4);
                if (iVar3 == 0) {
                  *(undefined *)(iVar2 + -1) = 0x26;
                  uVar10 = uVar10 + 3;
                }
                else {
                  iVar3 = strncmp(__s1,"apos;",5);
                  if (iVar3 == 0) {
                    uVar10 = uVar10 + 4;
                    *(undefined *)(iVar2 + -1) = 0x27;
                  }
                  else {
                    iVar3 = strncmp(__s1,"quot;",5);
                    if (iVar3 == 0) {
                      uVar10 = uVar10 + 4;
                      *(undefined *)(iVar2 + -1) = 0x22;
                    }
                    else {
                      iVar3 = strncmp(__s1,"lt;",3);
                      if (iVar3 == 0) {
                        uVar10 = uVar10 + 2;
                        *(undefined *)(iVar2 + -1) = 0x3c;
                      }
                      else {
                        iVar3 = strncmp(__s1,"gt;",3);
                        if (iVar3 == 0) {
                          uVar10 = uVar10 + 2;
                          *(undefined *)(iVar2 + -1) = 0x3e;
                        }
                      }
                    }
                  }
                }
                pcVar1 = pcVar1 + 1;
                if (sVar7 + 1 <= uVar10) break;
              }
              else {
                *(char *)(iVar2 + -1) = pcVar1[uVar10];
              }
              if (iVar2 == (int)local_6a4 + (int)local_6ac * 0x30 + 0x10) break;
              uVar10 = uVar10 + 1;
              iVar2 = iVar2 + 1;
            } while (uVar10 < sVar7 + 1);
          }
          pvVar8 = (void *)((int)local_6ac + 1);
          *(undefined *)((int)local_6a4 + (int)local_6ac * 0x30 + 0x10) = 0;
          iVar2 = local_6a8 + 1;
          local_6ac = pvVar8;
          if (pvVar8 == local_694) {
            local_694 = (void *)((int)pvVar8 * 2);
            local_6a4 = realloc(local_6a4,(int)pvVar8 * 0x60);
          }
        }
LAB_0805ef08:
        printf("%d: Failed to parse game database file: %s\n",local_6a8,acStack_438);
        fflush(stdout);
        if (local_6ac != (void *)0x0) {
          iVar2 = 0;
          pvVar8 = (void *)0x0;
          do {
            pvVar8 = (void *)((int)pvVar8 + 1);
            free(*(void **)((int)local_6a4 + iVar2));
            iVar2 = iVar2 + 0x30;
          } while (pvVar8 != local_6ac);
        }
        goto LAB_0805e794;
      }
      sprintf(acStack_438,"Wrong tag name: expected database, got %s\n",pcVar1);
    }
  }
  printf("%d: Failed to parse game database file: %s\n");
  fflush(stdout);
LAB_0805e794:
  free(local_6a4);
  return 0xffffffff;
}


