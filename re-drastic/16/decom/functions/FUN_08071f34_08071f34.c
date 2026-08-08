/*
 * Ghidra decompilation
 *
 * Function : FUN_08071f34
 * Address  : 08071f34
 * Program  : drastic16
 */


void FUN_08071f34(int *param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  uint local_12c;
  undefined auStack_128 [260];
  
  iVar10 = DAT_081c5048;
  iVar8 = *param_1;
  if (DAT_081c5048 == 0) {
    uVar4 = 0xffffffff;
    local_12c = 0xffff;
  }
  else {
    puVar15 = &DAT_081c5008;
    puVar12 = (undefined4 *)(iVar8 + 0x232c);
    do {
      puVar14 = puVar12 + 4;
      uVar3 = puVar12[1];
      uVar5 = puVar12[2];
      uVar6 = puVar12[3];
      *puVar15 = *puVar12;
      puVar15[1] = uVar3;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      puVar15 = puVar15 + 4;
      puVar12 = puVar14;
    } while (puVar14 != (undefined4 *)(iVar8 + 0x236c));
    uVar4 = *(uint *)(iVar10 + 4);
    uVar7 = *(uint *)(iVar10 + 8);
    if ((uVar4 & 0xf) != 0xf) {
      *(undefined4 *)(iVar8 + ((uVar4 & 0xf) + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2240);
    }
    uVar11 = uVar4 >> 4;
    if ((uVar11 & 0xf) != 0xf) {
      *(undefined4 *)(iVar8 + ((uVar11 & 0xf) + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2244);
    }
    uVar1 = (uVar11 & 0xf0) >> 4;
    if (uVar1 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar1 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2248);
    }
    uVar1 = (uVar11 & 0xf00) >> 8;
    if (uVar1 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar1 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x224c);
    }
    uVar1 = (uVar11 & 0xf000) >> 0xc;
    if (uVar1 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar1 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2250);
    }
    uVar1 = (uVar11 & 0xf0000) >> 0x10;
    if (uVar1 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar1 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2254);
    }
    uVar11 = (uVar11 & 0xf00000) >> 0x14;
    if (uVar11 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar11 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2258);
    }
    if (uVar4 >> 0x1c != 0xf) {
      *(undefined4 *)(iVar8 + ((uVar4 >> 0x1c) + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x225c);
    }
    if ((uVar7 & 0xf) != 0xf) {
      *(undefined4 *)(iVar8 + ((uVar7 & 0xf) + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2260);
    }
    uVar4 = uVar7 >> 4 & 0xf;
    if (uVar4 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar4 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2264);
    }
    uVar4 = uVar7 >> 8 & 0xf;
    if (uVar4 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar4 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2270);
    }
    uVar4 = uVar7 >> 0xc & 0xf;
    if (uVar4 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar4 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2274);
    }
    uVar4 = uVar7 >> 0x10 & 0xf;
    if (uVar4 != 0xf) {
      *(undefined4 *)(iVar8 + (uVar4 + 0x8ca) * 4 + 4) = *(undefined4 *)(iVar8 + 0x2278);
    }
    uVar4 = *(uint *)(iVar10 + 0xc);
    local_12c = uVar4 >> 0x10;
  }
  if (*(char *)(iVar8 + 0x2104) == '\0') {
    pcVar2 = "ARM7: ";
  }
  else {
    pcVar2 = "ARM9: ";
  }
  printf(pcVar2);
  uVar7 = param_1[0x48];
  if (((*(uint *)(iVar8 + 9000) & 0x20) == 0) && ((uVar7 & 1) == 0)) {
    uVar3 = FUN_080101a4(*param_1 + 0x2380,uVar7);
    FUN_08075790(uVar3,auStack_128,uVar7,0,0);
    printf("ARM op: %08x  %s\n",uVar3,auStack_128);
  }
  else {
    uVar3 = FUN_0801001c(*param_1 + 0x2380,uVar7 & 0xfffffffe);
    FUN_080761f0(uVar3,auStack_128,uVar7 & 0xfffffffe,0,0);
    printf("Thumb op: %04x  %s\n",uVar3,auStack_128);
  }
  uVar7 = 0;
  iVar10 = *param_1 + 0x232c;
  do {
    putchar(0x20);
    iVar13 = 0;
    uVar11 = uVar7;
    do {
      if (uVar11 < 0xf) {
        pcVar2 = "R%02d %08x*";
        if ((uVar4 & 1 << (uVar11 & 0xff)) != 0) {
          pcVar2 = "R%02d %08x ";
        }
        printf(pcVar2,uVar11,*(undefined4 *)(iVar10 + iVar13));
      }
      else {
        printf(" PC %08x ",param_1[0x48] & 0xfffffffe);
      }
      iVar13 = iVar13 + 4;
      uVar11 = uVar11 + 1;
    } while (iVar13 != 0x10);
    uVar7 = uVar7 + 4;
    putchar(10);
    iVar10 = iVar10 + 0x10;
  } while (uVar7 != 0x10);
  FUN_080718c0(param_1,local_12c);
  iVar10 = *(int *)(*param_1 + 0x2080);
  printf("IME: %d  IE: %08x  IF: %08x  cpu IRQ: %08x\n",(uint)*(ushort *)(iVar10 + 0x208),
         *(undefined4 *)(iVar10 + 0x210),*(undefined4 *)(iVar10 + 0x214),
         *(undefined4 *)(*param_1 + 0x2100));
  iVar13 = *param_1;
  uVar4 = (uint)*(byte *)(param_1 + 0x4c);
  iVar10 = *(int *)(iVar13 + 0x2360);
  puts("Stack:");
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      iVar9 = iVar10 + 0x14;
      do {
        uVar3 = FUN_080101a4(iVar13 + 0x2380,iVar10);
        iVar10 = iVar10 + 4;
        printf(" %08x",uVar3);
      } while (iVar9 != iVar10);
      if (uVar4 != uVar7) {
        putchar(10);
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar9;
    } while (uVar7 < uVar4);
  }
  putchar(10);
  puVar15 = *(undefined4 **)(*param_1 + 0x2308);
  uVar4 = (uint)*(byte *)(*param_1 + 0x2105);
  printf("%llx instructions in. (%d remain)  Scanline %d, frame %llu, cycle %llu (state %d)\n\n",
         uVar4,param_1[0x42] + 1,param_1[0x43] + (uint)(0xfffffffe < (uint)param_1[0x42]),param_2,
         (uint)*(ushort *)(puVar15 + 5),*puVar15,puVar15[1],puVar15[2],puVar15[3],uVar4);
  if (DAT_081c5048 != 0) {
    puVar15 = &DAT_081c5008;
    puVar12 = (undefined4 *)(iVar8 + 0x232c);
    do {
      uVar3 = puVar15[1];
      uVar5 = puVar15[2];
      uVar6 = puVar15[3];
      bVar16 = puVar15 != (undefined4 *)0x81c5038;
      *puVar12 = *puVar15;
      puVar12[1] = uVar3;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      puVar15 = puVar15 + 4;
      puVar12 = puVar12 + 4;
    } while (bVar16);
  }
  return;
}


