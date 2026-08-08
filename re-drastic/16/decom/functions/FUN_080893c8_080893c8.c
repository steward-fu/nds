/*
 * Ghidra decompilation
 *
 * Function : FUN_080893c8
 * Address  : 080893c8
 * Program  : drastic16
 */


void FUN_080893c8(int param_1,FILE *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined auStack_228 [256];
  undefined auStack_128 [260];
  
  iVar7 = param_3[-1];
  uVar1 = *(ushort *)(iVar7 + 0x10);
  uVar2 = *(ushort *)(iVar7 + 0x12);
  uVar10 = uVar1 & 0xfff;
  iVar6 = *(int *)(iVar7 + 4);
  uVar3 = uVar1 >> 0xc;
  uVar8 = uVar3 & 1;
  if ((uVar3 & 8) == 0) {
    iVar11 = 0x1da5188;
  }
  else {
    iVar11 = 0x159ebf8;
  }
  if ((uVar3 & 1) == 0) {
    uVar10 = ((uint)uVar1 << 0x14) >> 0x15;
  }
  fprintf(param_2,"%s block (%s) at %x: %d instructions, %d bytes translated\n",
          *(undefined4 *)(&DAT_080ec208 + uVar8 * 4),
          *(undefined4 *)(&DAT_080ec210 + (uint)*(byte *)(param_1 + iVar11 + 0x2104) * 4),iVar6,
          uVar10,(uint)uVar2);
  fprintf(param_2,"Live flags: %x, live registers: %04x\n",(uint)*(ushort *)(iVar7 + 0xe),
          (uint)*(ushort *)(iVar7 + 0xc));
  if (uVar10 != 0) {
    iVar7 = param_1 + iVar11 + 0x2380;
    if ((uVar3 & 1) == 0) {
      do {
        uVar4 = FUN_080101a4(iVar7,iVar6);
        uVar8 = uVar8 + 1;
        FUN_08075790(uVar4,auStack_228,iVar6,0,0);
        fprintf(param_2,"  %08x: %08x %s\n",iVar6,uVar4,auStack_228);
        iVar6 = iVar6 + 4;
      } while (uVar8 != uVar10);
    }
    else {
      uVar8 = 0;
      do {
        uVar4 = FUN_0801001c(iVar7,iVar6);
        uVar8 = uVar8 + 1;
        FUN_080761f0(uVar4,auStack_228,iVar6,0,0);
        fprintf(param_2,"  %08x: %04x %s\n",iVar6,uVar4,auStack_228);
        iVar6 = iVar6 + 2;
      } while (uVar8 != uVar10);
    }
  }
  puVar9 = (undefined4 *)((int)param_3 + (uint)uVar2);
  fputc(10,param_2);
  if (param_3 < puVar9) {
    do {
      uVar4 = *param_3;
      FUN_08075790(uVar4,auStack_128,param_3,&PTR_LAB_081019c0,0x50);
      puVar5 = param_3 + 1;
      fprintf(param_2,"  %p: %08x  %s\n",param_3,uVar4,auStack_128);
      param_3 = puVar5;
    } while (puVar5 < puVar9);
  }
  fputc(10,param_2);
  return;
}


