/*
 * Ghidra decompilation
 *
 * Function : FUN_080963b4
 * Address  : 080963b4
 * Program  : drastic16
 */


char * FUN_080963b4(char *param_1,char *param_2,uint *param_3,FILE *param_4)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *__ptr;
  uint in_r12;
  int local_88;
  ushort local_84;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  ushort local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  char *local_60;
  size_t local_5c;
  char *local_54;
  uint local_50;
  undefined4 local_40;
  undefined4 local_3c;
  
  __stream = fopen64(param_1,"rb");
  if ((param_4 != (FILE *)0x0) && (param_4 = fopen64((char *)param_4,"wb"), param_4 == (FILE *)0x0))
  {
    fclose(__stream);
    return (char *)0x0;
  }
  if (__stream == (FILE *)0x0) {
    printf("ERROR: could not open zip file %s.\n",param_1);
    return (char *)0x0;
  }
  while (sVar1 = fread(&local_88,4,1,__stream), sVar1 != 0) {
    if (local_88 != 0x4034b50) {
      pcVar6 = (char *)0x0;
      printf("ERROR: %s is not a valid zip file.\n",param_1);
      pcVar7 = (char *)0x0;
      __ptr = pcVar6;
      goto LAB_08096a38;
    }
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_84 = (ushort)iVar2 | (ushort)(iVar3 << 8);
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_82 = (ushort)iVar2 | (ushort)(iVar3 << 8);
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_80 = (ushort)iVar2 | (ushort)(iVar3 << 8);
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_7e = (ushort)iVar2 | (ushort)(iVar3 << 8);
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_7c = (ushort)iVar2 | (ushort)(iVar3 << 8);
    uVar4 = fgetc(__stream);
    iVar2 = fgetc(__stream);
    uVar5 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_78 = (uVar4 | iVar2 << 8) & 0xffff | (uVar5 | iVar3 << 8) << 0x10;
    uVar4 = fgetc(__stream);
    iVar2 = fgetc(__stream);
    uVar5 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_74 = (uVar4 | iVar2 << 8) & 0xffff | (uVar5 | iVar3 << 8) << 0x10;
    uVar4 = fgetc(__stream);
    iVar2 = fgetc(__stream);
    uVar5 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_70 = (uVar4 | iVar2 << 8) & 0xffff | (uVar5 | iVar3 << 8) << 0x10;
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    local_6c = (ushort)iVar2 | (ushort)(iVar3 << 8);
    iVar2 = fgetc(__stream);
    iVar3 = fgetc(__stream);
    uVar4 = (uint)local_6c;
    local_6a = (ushort)iVar2 | (ushort)(iVar3 << 8);
    pcVar6 = (char *)malloc(uVar4 + 1);
    if (pcVar6 == (char *)0x0) {
      puts("Errror: Could not allocate zip file name buffer.");
      pcVar7 = (char *)0x0;
      __ptr = (char *)0x0;
      goto LAB_08096a38;
    }
    sVar1 = fread(pcVar6,uVar4,1,__stream);
    if (sVar1 == 0) {
      printf("ERROR: %s has incomplete header.\n",param_1);
      pcVar7 = (char *)0x0;
      __ptr = (char *)0x0;
      goto LAB_08096a38;
    }
    pcVar6[local_6c] = '\0';
    fseek(__stream,(uint)local_6a,1);
    pcVar7 = strrchr(pcVar6,0x2e);
    if ((pcVar7 != (char *)0x0) && (iVar2 = strcmp(pcVar7 + 1,param_2), iVar2 == 0)) {
      free(pcVar6);
      sVar1 = local_70;
      uVar4 = local_74;
      DAT_081c5088 = 0;
      DAT_081c5090 = local_70;
      DAT_081c5094 = iVar2;
      if (local_80 == 0) {
        if (param_4 != (FILE *)0x0) {
          pcVar7 = (char *)malloc(0x20000);
          if (pcVar7 == (char *)0x0) {
            puts("ERROR: Could not allocate zip buffer.");
            goto LAB_080967e0;
          }
          if (sVar1 != 0) goto LAB_080967a8;
          uVar4 = 0;
          goto LAB_080968c8;
        }
        __ptr = (char *)malloc(local_70);
        if (__ptr == (char *)0x0) {
          puts("ERROR: Could not allocate memory for unzipped gamecard.");
        }
        else {
          sVar1 = fread(__ptr,sVar1,1,__stream);
          if (sVar1 != 0) {
            *param_3 = local_70;
            fclose(__stream);
            return __ptr;
          }
          printf("ERROR: %s has incomplete size (uncompressed).\n",param_1);
        }
        fclose(__stream);
        goto LAB_08096818;
      }
      if (local_80 != 8) {
        printf("ERROR: Unhandled zip compression method %x.\n");
        __ptr = (char *)0x0;
        goto LAB_0809683c;
      }
      printf("%d compressed bytes, %d uncompressed bytes\n",local_74,local_70);
      if (param_4 == (FILE *)0x0) {
        __ptr = (char *)malloc(local_70);
        if (__ptr == (char *)0x0) {
          puts("ERROR: Could not allocate memory for unzipped gamecard.");
          pcVar7 = (char *)0x0;
          goto LAB_08096a34;
        }
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)malloc(0x20000);
        if (pcVar6 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          puts("ERROR: Could not allocate memory for decompression buffer.");
          __ptr = pcVar7;
          goto LAB_08096a34;
        }
        __ptr = (char *)0x0;
      }
      pcVar7 = (char *)malloc(0x20000);
      if (pcVar7 == (char *)0x0) {
        puts("ERROR: Could not allocate zip buffer.");
        goto LAB_08096a34;
      }
      local_40 = 0;
      local_50 = in_r12;
      if (pcVar6 == (char *)0x0) {
        local_50 = local_70;
      }
      local_3c = 0;
      local_54 = __ptr;
      if (pcVar6 != (char *)0x0) {
        local_50 = 0x20000;
        local_54 = pcVar6;
      }
      sVar1 = uVar4;
      if (0x1ffff < uVar4) {
        sVar1 = 0x20000;
      }
      local_60 = pcVar7;
      iVar2 = inflateInit2_(&local_60,0xfffffff1,"1.2.3",0x38);
      local_5c = sVar1;
      sVar8 = fread(pcVar7,sVar1,1,__stream);
      if (sVar8 == 0) {
        printf("ERROR: %s has incomplete size (inflate @ %d/%d).\n",param_1,uVar4,local_74);
        goto LAB_08096a34;
      }
      if (iVar2 != 0) {
        if (pcVar6 != (char *)0x0) goto LAB_08096748;
        goto LAB_08096750;
      }
      uVar4 = uVar4 - sVar1;
      if (pcVar6 == (char *)0x0) goto LAB_08096970;
      goto LAB_080968f0;
    }
    free(pcVar6);
    fseek(__stream,local_74,1);
  }
  printf("ERROR: %s lacks header signature.\n",param_1);
  pcVar6 = (char *)0x0;
  pcVar7 = (char *)0x0;
  __ptr = (char *)0x0;
  goto LAB_08096a38;
  while( true ) {
    fwrite(pcVar7,uVar4,1,param_4);
    sVar1 = sVar1 - uVar4;
    DAT_081c5088 = CONCAT44(DAT_081c5088._4_4_ + (uint)CARRY4((uint)DAT_081c5088,uVar4),
                            (uint)DAT_081c5088 + uVar4);
    uVar4 = local_70;
    if (sVar1 == 0) break;
LAB_080967a8:
    uVar4 = sVar1;
    if (0x1ffff < sVar1) {
      uVar4 = 0x20000;
    }
    sVar8 = fread(pcVar7,uVar4,1,__stream);
    if (sVar8 == 0) goto LAB_080967e0;
  }
LAB_080968c8:
  *param_3 = uVar4;
  fclose(__stream);
  goto LAB_08096858;
LAB_080967e0:
  __ptr = (char *)0x0;
  fclose(__stream);
  pcVar6 = (char *)0x0;
  goto LAB_080967f0;
  while (local_54 = pcVar6, iVar2 != 1) {
LAB_080968f0:
    iVar2 = inflate(&local_60,2);
    uVar5 = 0x20000 - local_50;
    if (uVar5 != 0) {
      DAT_081c5088 = CONCAT44(DAT_081c5088._4_4_ + (uint)CARRY4((uint)DAT_081c5088,uVar5),
                              (uint)DAT_081c5088 + uVar5);
      sVar1 = fwrite(pcVar6,uVar5,1,param_4);
      if (sVar1 == 0) {
        puts("ERROR: Failed writing unzipped file.");
        free(pcVar6);
        goto LAB_08096a34;
      }
    }
    local_50 = 0x20000;
    if (iVar2 == -5) {
      local_60 = pcVar7;
      local_54 = pcVar6;
      if (uVar4 != 0) {
        sVar1 = uVar4;
        if (0x1ffff < uVar4) {
          sVar1 = 0x20000;
        }
        sVar8 = fread(pcVar7,sVar1,1,__stream);
        if (sVar8 == 0) goto LAB_08096b64;
        uVar4 = uVar4 - sVar1;
        local_5c = sVar1;
      }
      goto LAB_080968f0;
    }
  }
LAB_08096748:
  free(pcVar6);
  goto LAB_08096750;
  while (iVar2 != 1) {
LAB_08096970:
    iVar2 = inflate(&local_60,2);
    if (iVar2 == -5) {
      local_60 = pcVar7;
      if (uVar4 != 0) {
        sVar1 = uVar4;
        if (0x1ffff < uVar4) {
          sVar1 = 0x20000;
        }
        sVar8 = fread(pcVar7,sVar1,1,__stream);
        if (sVar8 == 0) goto LAB_08096b64;
        uVar4 = uVar4 - sVar1;
        local_5c = sVar1;
      }
      goto LAB_08096970;
    }
  }
LAB_08096750:
  inflateEnd(&local_60);
  free(pcVar7);
LAB_0809683c:
  *param_3 = local_70;
  fclose(__stream);
  if (param_4 == (FILE *)0x0) {
    return __ptr;
  }
LAB_08096858:
  fclose(param_4);
  return (char *)0x1;
LAB_08096b64:
  printf("ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",param_1,uVar4,local_74,sVar1);
LAB_08096a34:
  pcVar6 = (char *)0x0;
LAB_08096a38:
  fclose(__stream);
  if (param_4 != (FILE *)0x0) {
LAB_080967f0:
    fclose(param_4);
  }
  if (pcVar7 != (char *)0x0) {
    free(pcVar7);
  }
  if (pcVar6 != (char *)0x0) {
    free(pcVar6);
  }
LAB_08096818:
  if (__ptr == (char *)0x0) {
    return (char *)0x0;
  }
  free(__ptr);
  return (char *)0x0;
}


