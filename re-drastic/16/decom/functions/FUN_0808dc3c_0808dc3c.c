/*
 * Ghidra decompilation
 *
 * Function : FUN_0808dc3c
 * Address  : 0808dc3c
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0808dc3c(undefined4 param_1,ushort *param_2,byte *param_3,ushort *param_4,
                 undefined8 *param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 in_d0;
  undefined8 in_d1;
  
  pbVar8 = param_3 + 1;
  uVar12 = (uint)*param_3;
  SIMDExpandImmediate(0,0xe,0x20);
  if (uVar12 == 0) {
    uVar12 = 0x100;
  }
  switch(*param_3) {
  case 1:
    *(undefined *)param_5 =
         *(undefined *)
          (param_7 + (uint)*(byte *)(param_6 + (uint)*param_4) * 0x40 + (uint)*(byte *)param_2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 2:
    param_7 = param_7 + (uint)*(byte *)(param_6 + (uint)*param_4) * 0x40;
    *(ushort *)param_5 =
         CONCAT11(*(undefined *)(param_7 + (uint)(*param_2 >> 8)),
                  *(undefined *)(param_7 + (*param_2 & 0xff)));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    VectorTableLookup(param_7,param_5,4);
    bVar4 = *pbVar8;
    puVar6 = (undefined *)VectorTableLookup((uint)param_4[1],param_3 + 2,4);
    *param_5 = in_d0;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x308;
    lVar13 = 8;
    puVar5 = puVar6;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar9 = (uint)param_4[1];
    VectorTableLookup(param_7,param_5,4);
    VectorTableLookup(uVar9,param_5,4);
    param_3 = param_3 + 2;
    bVar4 = *pbVar8;
    puVar6 = (undefined *)VectorTableLookup(param_7,param_3,4);
    uVar7 = VectorTableLookup(uVar9,param_3,4);
    *param_5 = in_d0;
    param_5[1] = in_d1;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x310;
    lVar13 = 8;
    puVar5 = puVar6;
    while( true ) {
      *puVar5 = *puVar2;
      puVar5[1] = *puVar3;
      puVar5 = puVar5 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined *)0x308;
    puVar3 = (undefined *)0x318;
    lVar13 = 8;
    while( true ) {
      *puVar5 = *puVar2;
      puVar5[1] = *puVar3;
      puVar5 = puVar5 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0808d7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_0808dc80)[bVar4])(puVar6 + uVar12 * 2,uVar7,param_3,param_4 + 2);
    return;
  default:
    param_2 = param_2 + 4;
    param_3 = param_3 + 2;
    bVar4 = *pbVar8;
    VectorTableLookup(param_7,param_5,4);
    iVar10 = uVar12 - 8;
    do {
      puVar5 = (undefined *)VectorTableLookup(param_7,param_3,4);
      param_2 = param_2 + 4;
      *param_5 = in_d0;
      param_5 = param_5 + 1;
      puVar2 = (undefined *)0x300;
      puVar3 = (undefined *)0x308;
      lVar13 = 8;
      while( true ) {
        *puVar5 = *puVar2;
        puVar5[1] = *puVar3;
        puVar5 = puVar5 + 2;
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
    puVar6 = (undefined *)VectorTableLookup(param_7,param_3,4);
    *param_5 = in_d0;
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x308;
    lVar13 = 8;
    puVar5 = puVar6;
    while( true ) {
      *puVar5 = *puVar2;
      puVar5[1] = *puVar3;
      puVar5 = puVar5 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0808d828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_0808dc80)[bVar4])
              (puVar6 + iVar11 * 2 + 0x10,(byte *)((int)param_2 + iVar11),param_3,param_4 + 2);
    return;
  }
  while( true ) {
    *puVar5 = *puVar2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0808d774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0808dc80)[bVar4])
            (puVar6 + uVar12 * 2,(byte *)((int)param_2 + uVar12),param_3 + 2,param_4 + 2);
  return;
}


