/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_affine_span_4bpp
 * Address  : 080c0760
 * Program  : drastic
 */


ulonglong render_scanline_obj_affine_span_4bpp
                    (uint *param_1,undefined *param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar6;
  int iVar7;
  int in_lr;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  puVar3 = (undefined *)0x310;
  puVar4 = (undefined *)0x320;
  lVar9 = 8;
  while( true ) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) break;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined *)0x318;
  puVar4 = (undefined *)0x328;
  lVar9 = 8;
  while( true ) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) break;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  SIMDExpandImmediate(0,0xe,0x7f);
  uVar2 = SIMDExpandImmediate(0,0xe,0xf);
  *(int *)((int)register0x00000054 + -4) = in_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  iVar6 = *(int *)register0x00000054;
  do {
    bVar5 = *(byte *)(param_4 + (*param_1 >> 0x10));
    iVar7 = iVar6 + -8;
    uVar11 = *param_3;
    param_3 = param_3 + 1;
    uVar10 = VectorShiftLeft(CONCAT44(CONCAT13(*(undefined *)(param_4 + (param_1[3] >> 0x10)),
                                               CONCAT12(*(undefined *)
                                                         (param_4 + (param_1[3] & 0xffff)),
                                                        CONCAT11(*(undefined *)
                                                                  (param_4 + (param_1[2] >> 0x10)),
                                                                 *(undefined *)
                                                                  (param_4 + (param_1[2] & 0xffff)))
                                                       )),
                                      CONCAT13(*(undefined *)(param_4 + (param_1[1] >> 0x10)),
                                               CONCAT12(*(undefined *)
                                                         (param_4 + (param_1[1] & 0xffff)),
                                                        CONCAT11(bVar5,*(undefined *)
                                                                        (param_4 +
                                                                        (*param_1 & 0xffff)))))),
                             uVar11,1,1);
    uVar11 = VectorTest(uVar10,uVar2);
    VectorShiftLeft(uVar11,7,8,0);
    VectorTableLookup(param_1,(uint)bVar5,2);
    VectorTableLookup(param_1,param_3,2);
    puVar3 = (undefined *)0x330;
    puVar4 = (undefined *)0x338;
    lVar9 = 8;
    puVar8 = param_1;
    while( true ) {
      *(undefined *)puVar8 = *puVar3;
      *(undefined *)((int)puVar8 + 1) = *puVar4;
      puVar8 = (uint *)((int)puVar8 + 2);
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1 = param_1 + 4;
    bVar1 = 7 < iVar6;
    iVar6 = iVar7;
  } while (iVar7 != 0 && bVar1);
  return uVar10 & uVar2;
}


