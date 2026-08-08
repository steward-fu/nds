/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f9fc
 * Address  : 0805f9fc
 * Program  : drastic16
 */


undefined4 FUN_0805f9fc(int param_1,char *param_2,void *param_3,void *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__ptr;
  size_t sVar3;
  int iVar4;
  size_t sVar5;
  void *__ptr_00;
  long __off;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  size_t local_90 [2];
  undefined4 local_88 [2];
  FILE *local_80;
  undefined4 local_7c;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  __ptr = (undefined4 *)malloc(0x680000);
  iVar7 = param_1 + 0x155e000;
  while (DAT_081c4fb0 != 0) {
    usleep(1);
  }
  if (param_5 == 0) {
    uVar9 = FUN_0807908c(iVar7);
    printf("Loading state %s\n",param_2);
  }
  else {
    uVar9 = 0;
  }
  local_7c = 0;
  local_80 = fopen(param_2,"rb");
  local_74 = __ptr;
  local_70 = __ptr;
  if (local_80 == (FILE *)0x0) {
    printf("Error: savestate %s does not exist\n",param_2);
    if (param_5 == 0) {
      FUN_080779a8(iVar7,uVar9);
    }
    free(__ptr);
    return 0xffffffff;
  }
  sVar3 = fread(__ptr,0x40,1,local_80);
  if (sVar3 != 0) {
    local_68 = *local_70;
    uStack_64 = local_70[1];
    uStack_60 = local_70[2];
    uStack_5c = local_70[3];
    local_58 = local_70[4];
    uStack_54 = local_70[5];
    uStack_50 = local_70[6];
    uStack_4c = local_70[7];
    local_48 = local_70[8];
    local_44 = local_70[9];
    local_40 = local_70[10];
    local_3c = local_70[0xb];
    local_38 = local_70[0xc];
    local_34 = local_70[0xd];
    local_30 = local_70[0xe];
    local_2c = local_70[0xf];
    local_70 = local_70 + 0x10;
    iVar4 = memcmp(&local_68,"DraStic-SaveState---------------",0x20);
    uVar8 = local_44;
    if (iVar4 == 0) {
      uVar11 = local_44 & 2;
      if ((uVar11 == 0) && (param_5 == 1)) {
        fclose(local_80);
        free(__ptr);
        return 0;
      }
      if ((local_44 & 1) == 0) {
        __off = ftell(local_80);
        fseek(local_80,0,2);
        lVar6 = ftell(local_80);
        fseek(local_80,__off,0);
        sVar3 = fread(local_70,lVar6 - __off,1,local_80);
        puVar1 = local_74;
        puVar2 = local_70;
        if (sVar3 != 0) goto LAB_0805fcbc;
      }
      else {
        if (param_5 == 0) {
          local_88[0] = 0x680000;
        }
        else {
          local_88[0] = 0x30000;
        }
        sVar5 = fread(local_90,4,1,local_80);
        sVar3 = local_90[0];
        if (sVar5 != 0) {
          __ptr_00 = malloc(local_90[0]);
          sVar3 = fread(__ptr_00,sVar3,1,local_80);
          if (sVar3 != 0) {
            iVar4 = uncompress(__ptr,local_88,__ptr_00,local_90[0]);
            free(__ptr_00);
            puVar1 = __ptr;
            puVar2 = __ptr;
            if (iVar4 == 0) {
              if (param_5 == 0) {
                printf(" Uncompressed savestate from %d to %d bytes.\n",local_90[0],local_88[0]);
              }
            }
            else if (iVar4 != -5 || param_5 != 1) goto LAB_0805faa8;
LAB_0805fcbc:
            local_70 = puVar2;
            local_74 = puVar1;
            puVar1 = local_70;
            if (uVar11 != 0) {
              if (param_3 == (void *)0x0 || param_4 == (void *)0x0) {
                local_70 = local_70 + 0xc000;
              }
              else {
                memcpy(param_3,local_70,0x18000);
                local_70 = puVar1 + 0x6000;
                memcpy(param_4,local_70,0x18000);
                local_70 = puVar1 + 0xc000;
              }
            }
            if (param_5 != 0) {
              fclose(local_80);
              free(__ptr);
              return 0;
            }
            uVar11 = uVar8 >> 2;
            bVar10 = *(byte *)(param_1 + 0x26a7f3e);
            uVar13 = uVar11 & 3 ^ (uint)bVar10;
            printf("custom BIOS in savestate: %x, current: %x, change: %x\n",uVar11 & 3,(uint)bVar10
                   ,uVar13);
            if (uVar13 == 0) goto LAB_0805fda0;
            if ((uVar13 & 2) == 0) {
LAB_0805fd38:
              if ((uVar13 & 1) != 0) {
                if ((uVar11 & 1) == 0) {
                  puts(" Switching from custom ARM7 BIOS to NDS ARM7 BIOS.");
                  bVar10 = bVar10 & 0xfe;
                  iVar4 = FUN_08004eb0(param_1,"nds_bios_arm7.bin",param_1 + 0x25bc730,0x4000);
                }
                else {
                  puts(" Switching from NDS ARM7 BIOS to custom ARM7 BIOS.");
                  bVar10 = bVar10 | 1;
                  iVar4 = FUN_08004eb0(param_1,"drastic_bios_arm7.bin",param_1 + 0x25bc730,0x4000);
                }
                if (iVar4 < 0) {
                  puts("Error: Couldn\'t switch ARM7 BIOS for savestate.");
                  goto LAB_0805ffe8;
                }
              }
              fflush(stdout);
              *(byte *)(param_1 + 0x26a7f3e) = bVar10;
              uVar8 = local_44;
LAB_0805fda0:
              uVar12 = local_48;
              if ((uVar8 & 0x10) != 0) {
                FUN_0805dc98(param_1 + 0xa54,&local_80,local_48);
              }
              FUN_08006128(param_1,&local_80,uVar12);
              fclose(local_80);
              free(__ptr);
              FUN_080779a8(iVar7,uVar9);
              FUN_08077970(iVar7);
              FUN_08077974(iVar7);
              return 0;
            }
            if ((uVar11 & 2) == 0) {
              puts(" Switching from custom ARM9 BIOS to NDS ARM9 BIOS.");
              bVar10 = bVar10 & 0xfd;
              iVar4 = FUN_08004eb0(param_1,"nds_bios_arm9.bin",param_1 + 0x25bb730,0x1000);
            }
            else {
              puts(" Switching from NDS ARM9 BIOS to custom ARM9 BIOS.");
              iVar4 = FUN_08004eb0(param_1,"drastic_bios_arm9.bin",param_1 + 0x25bb730,0x1000);
              bVar10 = bVar10 | 2;
            }
            if (-1 < iVar4) {
              fflush(stdout);
              goto LAB_0805fd38;
            }
            puts("Error: Couldn\'t switch ARM9 BIOS for savestate.");
LAB_0805ffe8:
            puts(" ERROR: Savestate load failed.");
            fclose(local_80);
            free(__ptr);
            uVar12 = 0xfffffffe;
            goto LAB_0805fc48;
          }
          free(__ptr_00);
        }
      }
    }
  }
LAB_0805faa8:
  puts(" ERROR: Savestate load failed.");
  fclose(local_80);
  free(__ptr);
  if (param_5 != 0) {
    return 0xffffffff;
  }
  uVar12 = 0xffffffff;
LAB_0805fc48:
  FUN_080779a8(iVar7,uVar9);
  return uVar12;
}


