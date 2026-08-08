/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_gba
 * Address  : 0016ec50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gamecard_load_gba(long param_1,undefined8 param_2)

{
  long lVar1;
  char *__filename;
  uint uVar2;
  uint uVar3;
  FILE *pFVar4;
  long lVar5;
  size_t sVar6;
  void *__ptr;
  ulong uVar7;
  undefined8 uVar8;
  ulong __size;
  long lVar9;
  char acStack_428 [1056];
  long local_8;
  
  lVar9 = *(long *)(param_1 + 0x918);
  local_8 = ___stack_chk_guard;
  lVar1 = lVar9 + 0x8ab80;
  __filename = (char *)(param_1 + 0x4a0);
  __snprintf_chk(0,acStack_428,0x420,1,0x420,"%s%cslot2%c%s.gba",lVar1,0x2f,0x2f,param_2);
  pFVar4 = fopen(acStack_428,"rb");
  if (*(char *)(param_1 + 0x8e3) != '\0') {
    free(*(void **)(param_1 + 0x8c0));
    if (*(void **)(param_1 + 0x8c8) != (void *)0x0) {
      free(*(void **)(param_1 + 0x8c8));
    }
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    *(undefined *)(param_1 + 0x8e3) = 0;
  }
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  if (pFVar4 == (FILE *)0x0) {
    uVar8 = 0xffffffff;
    goto LAB_0016ee74;
  }
  fseek(pFVar4,0,2);
  lVar5 = ftell(pFVar4);
  *(int *)(param_1 + 0x8d0) = (int)lVar5;
  fseek(pFVar4,0,0);
  __printf_chk(1,"Loading GBA ROM %s in slot 2: %d bytes\n",param_2,*(undefined4 *)(param_1 + 0x8d0)
              );
  uVar3 = *(uint *)(param_1 + 0x8d0);
  if (uVar3 < 0x800000) {
    __printf_chk(1," Padding GBA ROM to %d bytes.\n",0x800000);
    sVar6 = 0x800000;
    uVar3 = 0x800000;
  }
  else {
    sVar6 = (size_t)uVar3;
  }
  __ptr = malloc(sVar6);
  *(void **)(param_1 + 0x8c0) = __ptr;
  sVar6 = fread(__ptr,(ulong)*(uint *)(param_1 + 0x8d0),1,pFVar4);
  if (sVar6 == 1) {
    fclose(pFVar4);
    uVar2 = *(uint *)(param_1 + 0x8d0);
  }
  else {
    puts("ERROR: Failed to load GBA data.");
    fclose(pFVar4);
    uVar2 = *(uint *)(param_1 + 0x8d0);
  }
  if (uVar2 != uVar3) {
    memset((void *)(*(long *)(param_1 + 0x8c0) + (ulong)uVar2),0xff,(ulong)(uVar3 - uVar2));
  }
  *(uint *)(param_1 + 0x8d0) = uVar3;
  gba_scan_save(__filename);
  __snprintf_chk(__filename,0x420,1,0x420,"%s%cslot2%c%s.sav",lVar1,0x2f,0x2f,param_2);
  pFVar4 = fopen(__filename,"rb");
  if (pFVar4 == (FILE *)0x0) {
LAB_0016ef1c:
    memset(*(void **)(param_1 + 0x8c8),0xff,(ulong)*(uint *)(param_1 + 0x8d4));
  }
  else {
    if (*(long *)(param_1 + 0x8c8) == 0) {
      puts(" Can\'t load GBA backup file: cart has no backup.");
      fclose(pFVar4);
      goto LAB_0016ef1c;
    }
    fseek(pFVar4,0,2);
    uVar7 = ftell(pFVar4);
    fseek(pFVar4,0,0);
    __size = uVar7 & 0xffffffff;
    if (*(uint *)(param_1 + 0x8d4) < (uint)uVar7) {
      __printf_chk(1," GBA backup is %d bytes, but file is %d bytes. Partially loading file.\n",
                   *(uint *)(param_1 + 0x8d4),uVar7 & 0xffffffff);
      __size = (ulong)*(uint *)(param_1 + 0x8d4);
      sVar6 = fread(*(void **)(param_1 + 0x8c8),__size,1,pFVar4);
      if (sVar6 != 1) goto LAB_0016eee4;
LAB_0016ee30:
      fclose(pFVar4);
      uVar3 = *(uint *)(param_1 + 0x8d4);
      if ((uint)__size < uVar3) {
LAB_0016efb0:
        __printf_chk(1," GBA backup is %d bytes, but file is %d bytes. Padding save with 0xFF.\n",
                     uVar3,__size);
        memset((void *)(*(long *)(param_1 + 0x8c8) + __size),0xff,
               (ulong)(uint)(*(int *)(param_1 + 0x8d4) - (int)__size));
        uVar3 = *(uint *)(param_1 + 0x8d4);
      }
    }
    else {
      sVar6 = fread(*(void **)(param_1 + 0x8c8),__size,1,pFVar4);
      if (sVar6 == 1) goto LAB_0016ee30;
LAB_0016eee4:
      puts("ERROR: Failed to load GBA backup data.");
      fclose(pFVar4);
      uVar3 = *(uint *)(param_1 + 0x8d4);
      if ((uint)__size < uVar3) goto LAB_0016efb0;
    }
    __printf_chk(1," Loaded GBA ROM backup %s: %d bytes.\n",__filename,uVar3);
  }
  *(undefined *)(param_1 + 0x8e3) = 1;
  memory_setup_slot2_gba
            (lVar9 + 0x35d4930,*(undefined8 *)(param_1 + 0x8c0),*(undefined4 *)(param_1 + 0x8d0));
  uVar8 = 0;
LAB_0016ee74:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8,local_8 - ___stack_chk_guard,0);
}


