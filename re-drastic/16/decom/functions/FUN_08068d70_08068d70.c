/*
 * Ghidra decompilation
 *
 * Function : FUN_08068d70
 * Address  : 08068d70
 * Program  : drastic16
 */


undefined4 FUN_08068d70(int param_1,int param_2)

{
  ushort uVar1;
  byte *pbVar2;
  FILE *__stream;
  undefined4 uVar3;
  char *pcVar4;
  ushort **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void **unaff_r5;
  int iVar9;
  size_t __size;
  void *pvVar10;
  uint uVar11;
  size_t sVar12;
  void *unaff_r10;
  uint local_53c;
  void *local_538;
  void *local_534;
  byte *local_530 [2];
  byte local_528 [256];
  char acStack_428 [1028];
  
  pvVar10 = *(void **)(param_1 + 0x408);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(param_1 + 0x410) != 0) {
      iVar9 = 0;
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        free(*(void **)((int)pvVar10 + iVar9 + 4));
        free(*(void **)((int)pvVar10 + iVar9));
        iVar9 = iVar9 + 0x18;
        pvVar10 = *(void **)(param_1 + 0x408);
      } while (uVar11 < *(uint *)(param_1 + 0x410));
    }
    free(pvVar10);
    free(*(void **)(param_1 + 0x40c));
    *(undefined4 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
  }
  sprintf(acStack_428,"%s%ccheats%c%s.cht",param_2 + 0x82030,0x2f,0x2f,param_2 + 0x82830);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    printf("No custom cheat file at %s.\n",acStack_428);
    uVar3 = 0xffffffff;
  }
  else {
    __size = 0;
    local_538 = malloc(0x300);
    local_534 = malloc(0x20);
    local_53c = 0x20;
    while (pcVar4 = fgets((char *)local_528,0x100,__stream), pcVar4 != (char *)0x0) {
      ppuVar5 = __ctype_b_loc();
      pbVar2 = local_528;
      do {
        local_530[0] = pbVar2;
        pbVar2 = local_530[0] + 1;
      } while (((*ppuVar5)[*local_530[0]] & 0x2000) != 0);
      if (*local_530[0] == 0x5b) {
        pcVar4 = strrchr((char *)(local_530[0] + 1),0x5d);
        if (__size != 0) {
          pvVar10 = realloc(*unaff_r5,(int)unaff_r5[3] << 2);
          *unaff_r5 = pvVar10;
        }
        if (pcVar4 == (char *)0x0) {
          printf("ERROR: Custom cheat file name missing closing \']\' bracket. Stopping load.");
          break;
        }
        local_530[0] = local_530[0] + 1;
        sVar12 = (int)pcVar4 - (int)local_530[0];
        unaff_r5 = (void **)((int)local_538 + __size * 0x18);
        if (pcVar4[1] == '+') {
          *(undefined *)((int)local_534 + __size) = 1;
        }
        else {
          *(undefined *)((int)local_534 + __size) = 0;
        }
        __size = __size + 1;
        if (local_53c < __size) {
          local_538 = realloc(local_538,local_53c * 0x30);
          local_534 = realloc(local_534,local_53c * 2);
          local_53c = local_53c * 2;
        }
        unaff_r10 = (void *)0x20;
        pvVar10 = malloc(sVar12 + 1);
        unaff_r5[1] = pvVar10;
        memcpy(pvVar10,local_530[0],sVar12);
        *(undefined *)((int)unaff_r5[1] + sVar12) = 0;
        unaff_r5[4] = (void *)0xffffffff;
        unaff_r5[2] = (void *)0x0;
        unaff_r5[3] = (void *)0x0;
        pvVar10 = malloc(0x80);
        *unaff_r5 = pvVar10;
      }
      else if (((*ppuVar5)[*local_530[0]] & 8) != 0) {
        if (__size == 0) {
          printf("ERROR: Custom cheat file started cheat w/o a name. Stopping load.");
          goto LAB_08069088;
        }
        uVar6 = strtoul((char *)local_530[0],(char **)local_530,0x10);
        uVar1 = (*ppuVar5)[*local_530[0]];
        while ((uVar1 & 0x2000) != 0) {
          local_530[0] = local_530[0] + 1;
          uVar1 = (*ppuVar5)[*local_530[0]];
        }
        uVar7 = strtoul((char *)local_530[0],(char **)local_530,0x10);
        pvVar8 = *unaff_r5;
        *(ulong *)((int)pvVar8 + (int)unaff_r5[3] * 4) = uVar6;
        *(ulong *)((int)pvVar8 + ((int)unaff_r5[3] + 1) * 4) = uVar7;
        pvVar10 = unaff_r5[3];
        unaff_r5[3] = (void *)((int)pvVar10 + 2);
        if (unaff_r10 <= (void *)((int)pvVar10 + 2)) {
          pvVar10 = realloc(pvVar8,(int)unaff_r10 << 3);
          *unaff_r5 = pvVar10;
          unaff_r10 = (void *)((int)unaff_r10 << 1);
        }
      }
    }
    if (__size == 0) {
LAB_08069088:
      pvVar10 = realloc(local_538,__size);
      pvVar8 = realloc(local_534,__size);
      *(void **)(param_1 + 0x408) = pvVar10;
      *(size_t *)(param_1 + 0x410) = __size;
      *(void **)(param_1 + 0x40c) = pvVar8;
    }
    else {
      pvVar10 = realloc(*unaff_r5,(int)unaff_r5[3] << 2);
      *unaff_r5 = pvVar10;
      pvVar10 = realloc(local_538,__size * 0x18);
      pvVar8 = realloc(local_534,__size);
      sVar12 = 0;
      *(void **)(param_1 + 0x408) = pvVar10;
      *(size_t *)(param_1 + 0x410) = __size;
      *(void **)(param_1 + 0x40c) = pvVar8;
      do {
        iVar9 = (int)pvVar8 + sVar12;
        sVar12 = sVar12 + 1;
        *(int *)((int)pvVar10 + 0x14) = iVar9;
        pvVar10 = (void *)((int)pvVar10 + 0x18);
      } while (sVar12 != __size);
    }
    printf("Loaded custom cheat file with %d cheats.\n",__size);
    fclose(__stream);
    FUN_080687e0(param_1);
    uVar3 = 0;
  }
  return uVar3;
}


