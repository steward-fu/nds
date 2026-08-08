/*
 * Ghidra decompilation
 *
 * Function : FUN_080683a4
 * Address  : 080683a4
 * Program  : drastic16
 */


undefined4 FUN_080683a4(char *param_1,char *param_2)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  undefined auStack_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  
  __stream = fopen(param_2,"rb");
  strcpy(param_1,param_2);
  *(undefined4 *)(param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (__stream == (FILE *)0x0) {
    printf("Couldn\'t load cheat database file at %s.\n",param_2);
  }
  else {
    sVar1 = fread(auStack_54,0xc,1,__stream);
    if (sVar1 == 1) {
      iVar2 = memcmp("R4 CheatCode",auStack_54,0xc);
      if (iVar2 == 0) {
        fseek(__stream,0x100,0);
        sVar1 = 0;
        while (sVar3 = fread(&local_48,4,4,__stream), sVar3 == 4) {
          if (local_40 == 0) {
            sVar3 = sVar1 * 0x10;
            *(size_t *)(param_1 + 0x404) = sVar1;
            pvVar4 = malloc(sVar3);
            *(void **)(param_1 + 0x400) = pvVar4;
            fseek(__stream,0,0);
            sVar5 = fread(&local_48,4,4,__stream);
            if (sVar5 != 4) {
              puts("ERROR: Couldn\'t read complete cheat database index.");
            }
            if (sVar1 != 0) {
              sVar5 = 0;
              do {
                sVar6 = fread(&local_38,4,4,__stream);
                if (sVar6 != 4) {
                  puts("ERROR: Couldn\'t read complete cheat database index.");
                }
                iVar2 = *(int *)(param_1 + 0x400) + sVar5 * 0x10;
                *(undefined4 *)(*(int *)(param_1 + 0x400) + sVar5 * 0x10) = local_48;
                sVar5 = sVar5 + 1;
                *(undefined4 *)(iVar2 + 4) = local_44;
                *(int *)(iVar2 + 8) = local_40;
                *(int *)(iVar2 + 0xc) = local_30 - local_40;
                local_48 = local_38;
                local_44 = uStack_34;
                local_40 = local_30;
                uStack_3c = uStack_2c;
              } while (sVar5 != sVar1);
              fseek(__stream,0,2);
              lVar7 = ftell(__stream);
              pvVar4 = *(void **)(param_1 + 0x400);
              *(long *)((int)pvVar4 + (sVar3 - 4)) = lVar7 - *(int *)((int)pvVar4 + (sVar3 - 8));
              qsort(pvVar4,sVar1,0x10,FUN_08067888);
            }
            printf("Loaded cheat directory from database file %s. Loaded %d games.\n",param_2,sVar1)
            ;
            *(undefined4 *)(param_1 + 0x41c) = 1;
            fclose(__stream);
            return 0;
          }
          sVar1 = sVar1 + 1;
        }
        puts("ERROR: Couldn\'t read complete cheat database index.");
        fclose(__stream);
      }
      else {
        puts("ERROR: Invalid cheat database header.");
        fclose(__stream);
      }
    }
    else {
      puts("ERROR: Couldn\'t read cheat database header.");
      fclose(__stream);
    }
  }
  return 0xffffffff;
}


