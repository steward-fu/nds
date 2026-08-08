/*
 * Ghidra decompilation
 *
 * Function : load_custom_cheats
 * Address  : 00181700
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_custom_cheats(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  FILE *__stream;
  undefined8 uVar3;
  char *pcVar4;
  byte *pbVar5;
  ushort **ppuVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  void **ppvVar10;
  void **unaff_x19;
  int iVar11;
  ulong uVar12;
  size_t __size;
  void *pvVar13;
  long lVar14;
  ulong unaff_x24;
  uint uVar15;
  void *local_948;
  void *local_940;
  byte *local_930;
  char acStack_928 [256];
  char acStack_828 [2080];
  long local_8;
  
  pvVar13 = *(void **)(param_1 + 0x410);
  local_8 = ___stack_chk_guard;
  if (pvVar13 != (void *)0x0) {
    if (*(int *)(param_1 + 0x420) != 0) {
      uVar12 = 0;
      do {
        lVar14 = uVar12 * 0x28;
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar15;
        free(*(void **)((long)pvVar13 + lVar14 + 8));
        free(*(void **)((long)pvVar13 + lVar14));
        pvVar13 = *(void **)(param_1 + 0x410);
      } while (uVar15 < *(uint *)(param_1 + 0x420));
    }
    free(pvVar13);
    free(*(void **)(param_1 + 0x418));
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  __sprintf_chk(acStack_828,1,0x820,"%s%ccheats%c%s.cht",param_2 + 0x8ab80,0x2f,0x2f,
                param_2 + 0x8b380);
  __stream = fopen(acStack_828,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"No custom cheat file at %s.\n",acStack_828);
    uVar3 = 0xffffffff;
LAB_001817fc:
    if (local_8 - ___stack_chk_guard == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  local_940 = malloc(0x500);
  __size = 0;
  uVar15 = 0x20;
  local_948 = malloc(0x20);
LAB_00181860:
  pcVar4 = fgets(acStack_928,0x100,__stream);
  iVar11 = (int)__size;
  do {
    if (pcVar4 == (char *)0x0) {
      if (iVar11 == 0) {
LAB_00181adc:
        __size = 0;
        pvVar13 = realloc(local_940,0);
        pvVar9 = realloc(local_948,0);
        *(void **)(param_1 + 0x410) = pvVar13;
        *(void **)(param_1 + 0x418) = pvVar9;
        *(undefined4 *)(param_1 + 0x420) = 0;
      }
      else {
LAB_00181934:
        pvVar13 = realloc(*unaff_x19,(ulong)*(uint *)(unaff_x19 + 3) << 2);
        *unaff_x19 = pvVar13;
        pvVar8 = realloc(local_940,__size * 0x28);
        pvVar13 = realloc(local_948,__size);
        pvVar9 = (void *)((long)pvVar13 + (ulong)(iVar11 - 1) + 1);
        *(void **)(param_1 + 0x410) = pvVar8;
        *(void **)(param_1 + 0x418) = pvVar13;
        *(int *)(param_1 + 0x420) = iVar11;
        ppvVar10 = (void **)((long)pvVar8 + 0x20);
        do {
          *ppvVar10 = pvVar13;
          pvVar13 = (void *)((long)pvVar13 + 1);
          ppvVar10 = ppvVar10 + 5;
        } while (pvVar9 != pvVar13);
      }
      __printf_chk(1,"Loaded custom cheat file with %d cheats.\n",__size);
      fclose(__stream);
      set_active_cheats(param_1);
      uVar3 = 0;
      goto LAB_001817fc;
    }
    pbVar5 = (byte *)skip_whitespace(acStack_928);
    bVar2 = *pbVar5;
    local_930 = pbVar5;
    if (bVar2 == 0x5b) {
      pcVar4 = strrchr((char *)(pbVar5 + 1),0x5d);
      if (iVar11 != 0) {
        pvVar13 = realloc(*unaff_x19,(ulong)*(uint *)(unaff_x19 + 3) << 2);
        *unaff_x19 = pvVar13;
      }
      if (pcVar4 == (char *)0x0) {
        __printf_chk(1,"ERROR: Custom cheat file name missing closing \']\' bracket. Stopping load."
                    );
        if (iVar11 != 0) goto LAB_00181934;
        goto LAB_00181adc;
      }
      unaff_x19 = (void **)((long)local_940 + __size * 0x28);
      pbVar5 = local_930 + 1;
      *(bool *)((long)local_948 + __size) = pcVar4[1] == '+';
      __size = (size_t)(iVar11 + 1U);
      local_930 = pbVar5;
      if (uVar15 < iVar11 + 1U) {
        uVar15 = uVar15 * 2;
        local_940 = realloc(local_940,(ulong)uVar15 * 0x28);
        local_948 = realloc(local_948,(ulong)uVar15);
      }
      pvVar13 = malloc((ulong)((int)((long)pcVar4 - (long)pbVar5) + 1));
      unaff_x19[1] = pvVar13;
      uVar12 = (long)pcVar4 - (long)pbVar5 & 0xffffffff;
      memcpy(pvVar13,pbVar5,uVar12);
      *(undefined *)((long)pvVar13 + uVar12) = 0;
      unaff_x19[2] = (void *)0x0;
      unaff_x24 = 0x20;
      unaff_x19[3] = (void *)0xffffffff00000000;
      pvVar13 = malloc(0x80);
      *unaff_x19 = pvVar13;
      goto LAB_00181860;
    }
    ppuVar6 = __ctype_b_loc();
    if (((*ppuVar6)[bVar2] >> 3 & 1) == 0) goto LAB_00181860;
    if (iVar11 == 0) {
      __printf_chk(1,"ERROR: Custom cheat file started cheat w/o a name. Stopping load.");
      goto LAB_00181adc;
    }
    uVar12 = strtoul((char *)pbVar5,(char **)&local_930,0x10);
    local_930 = (byte *)skip_whitespace(local_930);
    uVar7 = strtoul((char *)local_930,(char **)&local_930,0x10);
    pvVar13 = *unaff_x19;
    *(int *)((long)pvVar13 + (ulong)*(uint *)(unaff_x19 + 3) * 4) = (int)uVar12;
    *(int *)((long)pvVar13 + (ulong)(*(int *)(unaff_x19 + 3) + 1) * 4) = (int)uVar7;
    iVar1 = *(int *)(unaff_x19 + 3);
    *(uint *)(unaff_x19 + 3) = iVar1 + 2U;
    if (iVar1 + 2U < (uint)unaff_x24) goto LAB_00181860;
    unaff_x24 = (ulong)((uint)unaff_x24 * 2);
    pvVar13 = realloc(pvVar13,unaff_x24 << 2);
    *unaff_x19 = pvVar13;
    pcVar4 = fgets(acStack_928,0x100,__stream);
  } while( true );
}


