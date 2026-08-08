/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_render_tiles_extended_normal
 * Address  : 080be284
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void render_scanline_affine_render_tiles_extended_normal
               (undefined4 param_1,ushort *param_2,byte *param_3,ushort *param_4,undefined8 *param_5
               ,int param_6,int param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 in_d0;
  undefined8 in_d1;
  
  pbVar9 = param_3 + 1;
  uVar12 = (uint)*param_3;
  SIMDExpandImmediate(0,0xe,0x20);
  if (uVar12 == 0) {
    uVar12 = 0x100;
  }
  uVar5 = *(ushort *)(param_6 + (uint)*param_4);
  switch(*param_3) {
  case 1:
    uVar12 = 0;
    if ((uVar5 & 0x400) != 0) {
      uVar12 = 7;
    }
    if ((uVar5 & 0x800) != 0) {
      uVar12 = uVar12 | 0x38;
    }
    *(undefined *)param_5 =
         *(undefined *)(param_7 + (uVar5 & 0x3ff) * 0x40 + (*(byte *)param_2 ^ uVar12));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 2:
    uVar12 = 0;
    param_7 = param_7 + (uVar5 & 0x3ff) * 0x40;
    if ((uVar5 & 0x400) != 0) {
      uVar12 = 7;
    }
    if ((uVar5 & 0x800) != 0) {
      uVar12 = uVar12 | 0x38;
    }
    uVar12 = (uint)*param_2 ^ (uVar12 | uVar12 << 8);
    *(ushort *)param_5 =
         CONCAT11(*(undefined *)(param_7 + (uVar12 >> 8)),*(undefined *)(param_7 + (uVar12 & 0xff)))
    ;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    VectorTableLookup(param_7,param_5,4);
    bVar4 = *pbVar9;
    puVar7 = (undefined *)VectorTableLookup(param_7,param_3 + 2,4);
    *param_5 = in_d0;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x308;
    lVar13 = 8;
    puVar6 = puVar7;
    while( true ) {
      *puVar6 = *puVar2;
      puVar6[1] = *puVar3;
      puVar6 = puVar6 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x080bdb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_080be2c0 + (uint)bVar4 * 4))
              (puVar7 + uVar12 * 2,(byte *)((int)param_2 + uVar12),param_3 + 2,param_4 + 2);
    return;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    VectorTableLookup(param_7,param_5,4);
    VectorTableLookup((uint)param_4[1],param_5,4);
    param_3 = param_3 + 2;
    bVar4 = *pbVar9;
    puVar7 = (undefined *)VectorTableLookup(param_7,param_3,4);
    uVar8 = VectorTableLookup((uint)param_4[1],param_3,4);
    *param_5 = in_d0;
    param_5[1] = in_d1;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x310;
    lVar13 = 8;
    puVar6 = puVar7;
    while( true ) {
      *puVar6 = *puVar2;
      puVar6[1] = *puVar3;
      puVar6 = puVar6 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined *)0x308;
    puVar3 = (undefined *)0x318;
    lVar13 = 8;
    while( true ) {
      *puVar6 = *puVar2;
      puVar6[1] = *puVar3;
      puVar6 = puVar6 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x080bdb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_080be2c0 + (uint)bVar4 * 4))(puVar7 + uVar12 * 2,uVar8,param_3,param_4 + 2);
    return;
  default:
    param_2 = param_2 + 4;
    param_3 = param_3 + 2;
    bVar4 = *pbVar9;
    VectorTableLookup(param_7,param_5,4);
    iVar10 = uVar12 - 8;
  }
  do {
    puVar6 = (undefined *)VectorTableLookup(param_7,param_3,4);
    param_2 = param_2 + 4;
    *param_5 = in_d0;
    param_5 = param_5 + 1;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x308;
    lVar13 = 8;
    while( true ) {
      *puVar6 = *puVar2;
      puVar6[1] = *puVar3;
      puVar6 = puVar6 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    VectorTableLookup(param_7,param_5,4);
    iVar11 = iVar10 + -8;
    bVar1 = 7 < iVar10;
    iVar10 = iVar11;
  } while (iVar11 != 0 && bVar1);
  puVar7 = (undefined *)VectorTableLookup(param_7,param_3,4);
  *param_5 = in_d0;
  puVar2 = (undefined *)0x300;
  puVar3 = (undefined *)0x308;
  lVar13 = 8;
  puVar6 = puVar7;
  while( true ) {
    *puVar6 = *puVar2;
    puVar6[1] = *puVar3;
    puVar6 = puVar6 + 2;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x080bdc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080be2c0 + (uint)bVar4 * 4))
            (puVar7 + iVar11 * 2 + 0x10,(byte *)((int)param_2 + iVar11),param_3,param_4 + 2);
  return;
}


