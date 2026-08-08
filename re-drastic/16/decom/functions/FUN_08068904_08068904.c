/*
 * Ghidra decompilation
 *
 * Function : FUN_08068904
 * Address  : 08068904
 * Program  : drastic16
 */


undefined4 FUN_08068904(char *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  FILE *__stream;
  char *__s;
  size_t sVar4;
  int *piVar5;
  uint **ppuVar6;
  char *__s_00;
  size_t sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *__s_01;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int local_4c;
  int local_44;
  int local_38 [5];
  
  local_38[0] = param_2;
  pvVar1 = bsearch(local_38,*(void **)(param_1 + 0x400),*(size_t *)(param_1 + 0x404),0x10,
                   FUN_08067888);
  if (pvVar1 == (void *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar16 = *(int *)(param_1 + 0x400);
    iVar10 = (int)pvVar1 - iVar16 >> 4;
    if ((iVar10 < 0) ||
       (iVar15 = iVar16 + iVar10 * 0x10, param_2 != *(int *)(iVar16 + iVar10 * 0x10))) {
LAB_080689ac:
      uVar3 = iVar10 + 1;
      if (uVar3 < *(uint *)(param_1 + 0x404)) {
        iVar15 = iVar16 + uVar3 * 0x10;
        if (param_2 == *(int *)(iVar16 + uVar3 * 0x10)) {
          if (param_3 != *(int *)(iVar15 + 4)) {
            iVar10 = iVar16 + uVar3 * 0x10 + -0x10;
            do {
              uVar3 = uVar3 + 1;
              iVar15 = iVar10 + 0x20;
              if ((*(uint *)(param_1 + 0x404) <= uVar3) || (param_2 != *(int *)(iVar10 + 0x20)))
              goto LAB_08068a14;
              piVar5 = (int *)(iVar10 + 0x24);
              iVar10 = iVar10 + 0x10;
            } while (param_3 != *piVar5);
          }
          goto LAB_08068a18;
        }
      }
LAB_08068a14:
      iVar15 = 0;
    }
    else {
      iVar9 = *(int *)(iVar15 + 4);
      iVar2 = iVar10;
      while (param_3 != iVar9) {
        iVar2 = iVar2 + -1;
        if ((iVar2 == -1) || (param_2 != *(int *)(iVar15 + -0x10))) goto LAB_080689ac;
        iVar9 = *(int *)(iVar15 + -0xc);
        iVar15 = iVar15 + -0x10;
      }
    }
  }
LAB_08068a18:
  if (*(int *)(param_1 + 0x420) != 0) {
    free(*(void **)(param_1 + 0x428));
    free(*(void **)(param_1 + 0x430));
    free(*(void **)(param_1 + 0x434));
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  if (iVar15 == 0) {
    printf("Couldn\'t find cheat listing for %08x:%08x\n",param_2,param_3);
    uVar8 = 0xffffffff;
  }
  else {
    __stream = fopen(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      printf("ERROR: Couldn\'t load cheat database file at %s.\n",param_1);
      uVar8 = 0xffffffff;
    }
    else {
      __s = (char *)malloc(*(size_t *)(iVar15 + 0xc));
      if (__s == (char *)0x0) {
        puts("ERROR: Couldn\'t allocate cheat data.");
        fclose(__stream);
        uVar8 = 0xffffffff;
      }
      else {
        fseek(__stream,*(long *)(iVar15 + 8),0);
        sVar4 = fread(__s,*(size_t *)(iVar15 + 0xc),1,__stream);
        if (sVar4 == 1) {
          fclose(__stream);
          *(int *)(param_1 + 0x424) = iVar15;
          *(char **)(param_1 + 0x42c) = __s;
          sVar4 = strlen(__s);
          uVar3 = sVar4 + 4 & 0xfffffffc;
          puVar11 = (uint *)(__s + uVar3 + 0x24);
          uVar3 = *(uint *)(__s + uVar3) & 0xfffffff;
          piVar5 = (int *)malloc(uVar3 * 0x18);
          *(int **)(param_1 + 0x430) = piVar5;
          ppuVar6 = (uint **)malloc(uVar3 * 0x14);
          *(uint ***)(param_1 + 0x434) = ppuVar6;
          if (uVar3 == 0) {
            sVar4 = 0;
            local_4c = 0;
            local_44 = 0;
            sVar7 = 0;
          }
          else {
            uVar14 = 0;
            puVar13 = (uint *)0x0;
            local_4c = 0;
            local_44 = 0;
            do {
              while( true ) {
                uVar12 = *puVar11;
                __s_01 = puVar11 + 1;
                if ((uVar12 & 0x10000000) != 0) break;
                piVar5[5] = (int)((int)puVar11 + 3);
                piVar5[1] = (int)__s_01;
                sVar4 = strlen((char *)__s_01);
                bVar17 = puVar13 != (uint *)0x0;
                if (bVar17) {
                  puVar13 = (uint *)((int)puVar13 + -1);
                }
                uVar14 = uVar14 + 1;
                iVar15 = local_4c + -1;
                if (!bVar17) {
                  iVar15 = -1;
                }
                piVar5[4] = iVar15;
                local_44 = local_44 + 1;
                puVar11 = puVar11 + (uVar12 & 0xffffff) + 1;
                __s_00 = (char *)((int)__s_01 + sVar4 + 1);
                piVar5[2] = (int)__s_00;
                sVar7 = strlen(__s_00);
                uVar12 = sVar4 + 5 + sVar7 & 0xfffffffc;
                iVar15 = *(int *)((int)__s_01 + uVar12);
                *piVar5 = (int)__s_01 + uVar12 + 4;
                piVar5[3] = iVar15;
                piVar5 = piVar5 + 6;
                if (uVar14 == uVar3) goto LAB_08068c18;
              }
              puVar13 = (uint *)(uVar12 & 0xffffff);
              ppuVar6[3] = (uint *)((int)puVar11 + 2);
              uVar14 = uVar14 + 1;
              local_4c = local_4c + 1;
              *(char *)(ppuVar6 + 4) = (char)(uVar12 >> 0x18);
              ppuVar6[2] = puVar13;
              *ppuVar6 = __s_01;
              sVar4 = strlen((char *)__s_01);
              puVar11 = (uint *)((int)__s_01 + sVar4 + 1);
              ppuVar6[1] = puVar11;
              sVar7 = strlen((char *)puVar11);
              puVar11 = (uint *)((int)__s_01 + (sVar4 + sVar7 + 5 & 0xfffffffc));
              ppuVar6 = ppuVar6 + 5;
            } while (uVar14 != uVar3);
LAB_08068c18:
            piVar5 = *(int **)(param_1 + 0x430);
            sVar4 = local_44 * 0x18;
            sVar7 = local_4c * 0x14;
          }
          *(int *)(param_1 + 0x43c) = local_44;
          *(int *)(param_1 + 0x438) = local_4c;
          pvVar1 = realloc(piVar5,sVar4);
          *(void **)(param_1 + 0x430) = pvVar1;
          pvVar1 = realloc(*(void **)(param_1 + 0x434),sVar7);
          *(char **)(param_1 + 0x428) = __s;
          *(undefined4 *)(param_1 + 0x420) = 1;
          *(void **)(param_1 + 0x434) = pvVar1;
          FUN_080687e0(param_1);
          uVar8 = 0;
        }
        else {
          puts("ERROR: Couldn\'t load cheat database data.");
          free(__s);
          fclose(__stream);
          uVar8 = 0xffffffff;
        }
      }
    }
  }
  return uVar8;
}


