/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_alpha_1x
 * Address  : 080c370c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x080c3798 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void render_polygon_writeback_alpha_1x
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar5 = (uint)*(ushort *)(param_1 + 0x580);
  uVar6 = *(uint *)(param_1 + 0x630) & 0xffff;
  puVar3 = (undefined8 *)(param_3 + uVar5 * 4);
  puVar2 = (undefined8 *)(param_2 + uVar5 * 4);
  puVar4 = (undefined8 *)(param_4 + uVar5);
  iVar7 = uVar6 - 8;
  iVar8 = iVar7;
  if (7 < uVar6) {
    do {
      uVar9 = *param_7;
      uVar10 = param_7[1];
      uVar11 = param_7[2];
      uVar12 = param_7[3];
      param_7 = param_7 + 4;
      uVar13 = *param_6;
      uVar14 = param_6[1];
      uVar15 = param_6[2];
      uVar16 = param_6[3];
      param_6 = param_6 + 4;
      uVar17 = *param_8;
      param_8 = param_8 + 1;
      iVar7 = iVar8 + -8;
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar3 = puVar3 + 4;
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar2 = puVar2 + 4;
      *puVar4 = uVar17;
      puVar4 = puVar4 + 1;
      bVar1 = 7 < iVar8;
      iVar8 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x080c3798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080c37a0 + (iVar7 + 8) * 4))
            ((int)*param_7,(int)((ulonglong)*param_7 >> 0x20),(int)param_7[1],
             (int)((ulonglong)param_7[1] >> 0x20),(int)param_7[2],
             (int)((ulonglong)param_7[2] >> 0x20),(int)param_7[3],param_1 + 0x584);
  return;
}


