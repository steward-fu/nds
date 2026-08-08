/*
 * Ghidra decompilation
 *
 * Function : load_cheat_listing
 * Address  : 001813c0
 * Program  : drastic64
 */


undefined8 load_cheat_listing(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *__s;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  FILE *__stream;
  char *__s_00;
  size_t sVar6;
  long *__ptr;
  uint **__ptr_00;
  size_t sVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long extraout_x9;
  uint **ppuVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *__s_01;
  long *plVar17;
  uint uVar18;
  
  lVar5 = lookup_cheat_entry();
  if (*(int *)(extraout_x9 + 0x438) != 0) {
    free(*(void **)(param_1 + 0x448));
    free(*(void **)(param_1 + 0x458));
    free(*(void **)(param_1 + 0x460));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  if (lVar5 == 0) {
    __printf_chk(1,"Couldn\'t find cheat listing for %08x:%08x\n",param_2,param_3);
    set_active_cheats(param_1);
    uVar9 = 0xffffffff;
  }
  else {
    __stream = fopen(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      __printf_chk(1,"ERROR: Couldn\'t load cheat database file at %s.\n",param_1);
      uVar9 = 0xffffffff;
    }
    else {
      __s_00 = (char *)malloc((ulong)*(uint *)(lVar5 + 0xc));
      if (__s_00 == (char *)0x0) {
        puts("ERROR: Couldn\'t allocate cheat data.");
        fclose(__stream);
        uVar9 = 0xffffffff;
      }
      else {
        fseek(__stream,(ulong)*(uint *)(lVar5 + 8),0);
        sVar6 = fread(__s_00,(ulong)*(uint *)(lVar5 + 0xc),1,__stream);
        if (sVar6 == 1) {
          fclose(__stream);
          *(long *)(param_1 + 0x440) = lVar5;
          *(char **)(param_1 + 0x450) = __s_00;
          sVar6 = strlen(__s_00);
          uVar10 = sVar6 + 4 & 0xfffffffffffffffc;
          puVar16 = (uint *)(__s_00 + uVar10 + 0x24);
          uVar1 = *(uint *)(__s_00 + uVar10) & 0xfffffff;
          __ptr = (long *)malloc((ulong)uVar1 * 0x28);
          *(long **)(param_1 + 0x458) = __ptr;
          __ptr_00 = (uint **)malloc((ulong)uVar1 * 0x28);
          *(uint ***)(param_1 + 0x460) = __ptr_00;
          if (uVar1 == 0) {
            uVar14 = 0;
            uVar15 = 0;
            sVar7 = 0;
            sVar6 = 0;
          }
          else {
            uVar18 = 0;
            uVar14 = 0;
            uVar15 = 0;
            ppuVar12 = __ptr_00;
            plVar17 = __ptr;
            uVar13 = 0;
            do {
              while( true ) {
                __s_01 = puVar16 + 1;
                uVar3 = *puVar16;
                uVar2 = uVar3 & 0xffffff;
                if ((uVar3 >> 0x1c & 1) != 0) break;
                plVar17[1] = (long)__s_01;
                plVar17[4] = (long)puVar16 + 3;
                sVar6 = strlen((char *)__s_01);
                __s = (char *)((long)__s_01 + (sVar6 & 0xffffffff) + 1);
                plVar17[2] = (long)__s;
                uVar15 = uVar15 + 1;
                iVar11 = -1;
                if (uVar13 != 0) {
                  uVar13 = uVar13 - 1;
                  iVar11 = uVar14 - 1;
                }
                *(int *)((long)plVar17 + 0x1c) = iVar11;
                sVar7 = strlen(__s);
                uVar18 = uVar18 + 1;
                uVar10 = (sVar6 & 0xffffffff) + 5 + sVar7 & 0xfffffffffffffffc;
                uVar4 = *(undefined4 *)((long)__s_01 + uVar10);
                *plVar17 = (long)__s_01 + uVar10 + 4;
                *(undefined4 *)(plVar17 + 3) = uVar4;
                puVar16 = puVar16 + (uVar2 + 1);
                plVar17 = plVar17 + 5;
                if (uVar1 == uVar18) goto LAB_001815cc;
              }
              *ppuVar12 = __s_01;
              *(uint *)(ppuVar12 + 2) = uVar2;
              ppuVar12[3] = (uint *)((long)puVar16 + 2);
              *(char *)(ppuVar12 + 4) = (char)(uVar3 >> 0x18);
              uVar18 = uVar18 + 1;
              sVar6 = strlen((char *)__s_01);
              puVar16 = (uint *)((long)__s_01 + (sVar6 & 0xffffffff) + 1);
              ppuVar12[1] = puVar16;
              uVar14 = uVar14 + 1;
              sVar7 = strlen((char *)puVar16);
              puVar16 = (uint *)((long)__s_01 +
                                (sVar7 + 5 + (sVar6 & 0xffffffff) & 0xfffffffffffffffc));
              ppuVar12 = ppuVar12 + 5;
              uVar13 = uVar2;
            } while (uVar1 != uVar18);
LAB_001815cc:
            sVar6 = (ulong)uVar15 * 0x28;
            sVar7 = (ulong)uVar14 * 0x28;
          }
          *(uint *)(param_1 + 0x468) = uVar14;
          *(uint *)(param_1 + 0x46c) = uVar15;
          pvVar8 = realloc(__ptr,sVar6);
          *(void **)(param_1 + 0x458) = pvVar8;
          pvVar8 = realloc(__ptr_00,sVar7);
          *(void **)(param_1 + 0x460) = pvVar8;
          *(char **)(param_1 + 0x448) = __s_00;
          *(undefined4 *)(param_1 + 0x438) = 1;
          set_active_cheats(param_1);
          uVar9 = 0;
        }
        else {
          puts("ERROR: Couldn\'t load cheat database data.");
          free(__s_00);
          fclose(__stream);
          uVar9 = 0xffffffff;
        }
      }
    }
  }
  return uVar9;
}


