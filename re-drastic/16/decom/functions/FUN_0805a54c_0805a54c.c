/*
 * Ghidra decompilation
 *
 * Function : FUN_0805a54c
 * Address  : 0805a54c
 * Program  : drastic16
 */


void FUN_0805a54c(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  *(undefined *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined *)(param_1 + 0x419) = 0;
  *(undefined *)(param_1 + 0x41a) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  iVar2 = 0;
  local_2c[0] = 0;
  puVar5 = *(uint **)(param_1 + 0x400);
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          puVar4 = puVar5;
          bVar7 = iVar2 == (*(uint *)(param_1 + 0x408) >> 2) - 1;
          iVar2 = iVar2 + 1;
          if (bVar7) {
            return;
          }
          uVar3 = *puVar4;
          puVar5 = puVar4 + 1;
          uVar6 = *puVar5;
          if (uVar3 != 0x4d415253) break;
          if ((uVar6 & 0xffff) == 0x5f56) {
            local_38 = *puVar4;
            local_34 = puVar4[1];
            local_30 = (uint)*(byte *)(puVar4 + 2);
            printf(" Detected GBA SRAM backup type: %s\n",&local_38);
            iVar2 = 0x8000;
            *(undefined4 *)(param_1 + 0x40c) = 0x8000;
            *(undefined *)(param_1 + 0x418) = 1;
            goto LAB_0805a6a4;
          }
        }
        if (uVar3 != 0x52504545) break;
        if (uVar6 == 0x565f4d4f) {
          local_38 = *puVar4;
          local_34 = puVar4[1];
          local_30 = (uint)*(uint3 *)(puVar4 + 2);
          printf(" Detected GBA EEPROM backup type: %s (unsupported)\n",&local_38);
          iVar2 = *(int *)(param_1 + 0x40c);
          *(undefined *)(param_1 + 0x418) = 2;
          if (iVar2 == 0) {
            return;
          }
          goto LAB_0805a6a4;
        }
      }
    } while (uVar3 != 0x53414c46);
    if ((uVar6 & 0xffffff) == 0x565f48) break;
    if (uVar6 == 0x32313548) {
      local_38 = *puVar4;
      local_34 = puVar4[1];
      local_30 = puVar4[2];
      local_2c[0] = (uint)*(byte *)(puVar4 + 3);
      goto LAB_0805a73c;
    }
    if (uVar6 == 0x5f4d3148) {
      local_38 = *puVar4;
      local_34 = puVar4[1];
      local_30 = puVar4[2];
      printf(" Detected GBA FLASH backup type: %s\n",&local_38,local_30,local_2c);
      iVar2 = 0x20000;
      *(undefined4 *)(param_1 + 0x40c) = 0x20000;
      *(undefined *)(param_1 + 0x418) = 3;
LAB_0805a6a4:
      printf(" Allocated %d bytes of GBA backup.\n",iVar2);
      pvVar1 = malloc(*(size_t *)(param_1 + 0x40c));
      *(void **)(param_1 + 0x404) = pvVar1;
      return;
    }
  }
  local_38 = *puVar4;
  local_34 = puVar4[1];
  local_30 = (uint)*(ushort *)(puVar4 + 2);
LAB_0805a73c:
  printf(" Detected GBA FLASH backup type: %s\n",&local_38);
  iVar2 = 0x10000;
  *(undefined4 *)(param_1 + 0x40c) = 0x10000;
  *(undefined *)(param_1 + 0x418) = 3;
  goto LAB_0805a6a4;
}


