/*
 * Ghidra decompilation
 *
 * Function : FUN_080882c8
 * Address  : 080882c8
 * Program  : drastic16
 */


void FUN_080882c8(FILE *param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  char *__format;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined *puVar12;
  undefined auStack_228 [256];
  undefined auStack_128 [260];
  
  puVar10 = *(undefined4 **)(param_2 + 0x4d8);
  uVar6 = *(undefined4 *)(param_2 + 0x4d0);
  uVar8 = *puVar10;
  FUN_08075790(uVar8,auStack_228,uVar6,0,0);
  if (param_3 == 0) {
    puVar12 = auStack_228;
    fprintf(param_1," %08x: %08x %s",uVar6,uVar8,puVar12);
  }
  else {
    uVar3 = FUN_0801001c(*(int *)(param_2 + 0x4e0) + 0x2380,uVar6);
    FUN_080761f0(uVar3,auStack_128,uVar6,0,0);
    puVar12 = auStack_228;
    fprintf(param_1," %08x: %08x %s (%04x %s)",uVar6,uVar8,puVar12,uVar3,auStack_128);
  }
  fwrite(&DAT_080ea0c4,1,2,param_1);
  uVar5 = 0;
  iVar7 = param_2;
  do {
    while( true ) {
      iVar4 = uVar5 - 10;
      bVar11 = 0xe < uVar5;
      if (uVar5 != 0xf) {
        bVar11 = iVar4 != 0;
      }
      if (bVar11 && (uVar5 != 0xf && iVar4 != 1)) break;
LAB_08088350:
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 8;
      if (uVar5 == 0x10) goto LAB_080883d0;
    }
    uVar9 = (uint)*(byte *)(iVar7 + 0x405);
    fprintf(param_1,"r%d: ",uVar5,iVar4,puVar12);
    __format = "R%d ";
    if (uVar9 == 0xff) {
      fwrite(&DAT_080ec330,1,3,param_1);
      goto LAB_08088350;
    }
    if (uVar9 == 0xfd) {
      fwrite(&DAT_080ec334,1,4,param_1);
      goto LAB_08088350;
    }
    uVar5 = uVar5 + 1;
    if (uVar9 == 0xfe) {
      uVar9 = *(uint *)(iVar7 + 0x400);
      __format = "c%08x ";
    }
    fprintf(param_1,__format,uVar9);
    iVar7 = iVar7 + 8;
  } while (uVar5 != 0x10);
LAB_080883d0:
  fputc(10,param_1);
  iVar4 = 0;
  iVar7 = param_2;
  do {
    while( true ) {
      bVar1 = *(byte *)(iVar7 + 0x480);
      fprintf(param_1,"R%d: ",iVar4);
      if (bVar1 != 0xff) break;
      iVar4 = iVar4 + 1;
      fwrite(&DAT_080ec330,1,3,param_1);
      iVar7 = iVar7 + 1;
      if (iVar4 == 0xf) goto LAB_08088454;
    }
    iVar4 = iVar4 + 1;
    fprintf(param_1,"r%d ",(uint)bVar1);
    iVar7 = iVar7 + 1;
  } while (iVar4 != 0xf);
LAB_08088454:
  fputc(10,param_1);
  fputc(0x5b,param_1);
  iVar7 = 0;
  if ((*(uint *)(param_2 + 0x4a4) & 8) == 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = 0x4e;
  }
  fputc(iVar4,param_1);
  if ((*(uint *)(param_2 + 0x4a4) & 4) == 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = 0x5a;
  }
  fputc(iVar4,param_1);
  if ((*(uint *)(param_2 + 0x4a4) & 2) == 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = 0x43;
  }
  fputc(iVar4,param_1);
  if ((*(uint *)(param_2 + 0x4a4) & 1) == 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = 0x56;
  }
  fputc(iVar4,param_1);
  fputc(0x5d,param_1);
  bVar1 = *(byte *)(puVar10 + 5);
  uVar2 = *(ushort *)((int)puVar10 + 0xe);
  fputc(0x28,param_1);
  do {
    uVar5 = 0x2d;
    if ((bVar1 & 0xf & 1 << (3U - iVar7 & 0xff)) != 0) {
      uVar5 = (uint)(byte)(&UNK_080ec35c)[iVar7];
    }
    iVar7 = iVar7 + 1;
    fputc(uVar5,param_1);
  } while (iVar7 != 4);
  fwrite(&DAT_080ec364,1,2,param_1);
  uVar5 = 0;
  do {
    while (((uint)uVar2 & 1 << (uVar5 & 0xff)) != 0) {
      uVar9 = uVar5 + 1;
      fprintf(param_1,"%01X",uVar5);
      uVar5 = uVar9;
      if (uVar9 == 0x10) goto LAB_08088588;
    }
    uVar5 = uVar5 + 1;
    fputc(0x2d,param_1);
  } while (uVar5 != 0x10);
LAB_08088588:
  fputc(0x29,param_1);
  fwrite(&DAT_080ec364,1,2,param_1);
  bVar1 = *(byte *)(puVar10 + 5);
  uVar2 = *(ushort *)(puVar10 + 4);
  fputc(0x28,param_1);
  iVar7 = 0;
  do {
    uVar5 = 0x2d;
    if (((uint)(bVar1 >> 4) & 1 << (3U - iVar7 & 0xff)) != 0) {
      uVar5 = (uint)(byte)(&UNK_080ec35c)[iVar7];
    }
    iVar7 = iVar7 + 1;
    fputc(uVar5,param_1);
  } while (iVar7 != 4);
  fwrite(&DAT_080ec364,1,2,param_1);
  uVar5 = 0;
  do {
    while (((uint)uVar2 & 1 << (uVar5 & 0xff)) != 0) {
      uVar9 = uVar5 + 1;
      fprintf(param_1,"%01X",uVar5);
      uVar5 = uVar9;
      if (uVar9 == 0x10) goto LAB_0808865c;
    }
    uVar5 = uVar5 + 1;
    fputc(0x2d,param_1);
  } while (uVar5 != 0x10);
LAB_0808865c:
  fputc(0x29,param_1);
  fprintf(param_1," -> (%x)",(uint)*(byte *)((int)puVar10 + 0x15));
  uVar2 = *(ushort *)((int)puVar10 + 0x12);
  bVar1 = *(byte *)((int)puVar10 + 0x15);
  fputc(0x28,param_1);
  iVar7 = 0;
  do {
    uVar5 = 0x2d;
    if (((uint)bVar1 & 1 << (3U - iVar7 & 0xff)) != 0) {
      uVar5 = (uint)(byte)(&UNK_080ec35c)[iVar7];
    }
    iVar7 = iVar7 + 1;
    fputc(uVar5,param_1);
  } while (iVar7 != 4);
  fwrite(&DAT_080ec364,1,2,param_1);
  uVar5 = 0;
  do {
    while (((uint)uVar2 & 1 << (uVar5 & 0xff)) != 0) {
      uVar9 = uVar5 + 1;
      fprintf(param_1,"%01X",uVar5);
      uVar5 = uVar9;
      if (uVar9 == 0x10) goto LAB_08088728;
    }
    uVar5 = uVar5 + 1;
    fputc(0x2d,param_1);
  } while (uVar5 != 0x10);
LAB_08088728:
  fputc(0x29,param_1);
  fputc(10,param_1);
  return;
}


