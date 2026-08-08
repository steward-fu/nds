/*
 * Ghidra decompilation
 *
 * Function : FUN_08042c10
 * Address  : 08042c10
 * Program  : drastic16
 */


void FUN_08042c10(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int local_34;
  int local_30;
  
  local_30 = param_2 + 0xe0;
  puVar5 = (ushort *)(param_2 + 0x380);
  if (param_4 != 0) {
    local_34 = 0;
    do {
      iVar8 = *param_1;
      iVar6 = param_1[1];
      uVar13 = *(ushort *)(iVar8 + 8);
      uVar12 = (uint)*(byte *)(param_3 + local_34);
      uVar4 = (uint)*(ushort *)(iVar6 + 4) - (uint)*(ushort *)(iVar8 + 4);
      uVar16 = VectorShiftRight(CONCAT44(CONCAT22(uVar13,uVar13),CONCAT22(uVar13,uVar13)),0x30);
      uVar16 = VectorShiftLeft(uVar16,0x27,0x40,0);
      iVar14 = (uint)*(ushort *)(iVar8 + 4) * 0x40000;
      uVar10 = ((uint)*(ushort *)(iVar6 + 8) - (uint)uVar13) * 0x200;
      uVar11 = *(uint *)(&DAT_0aaec110 +
                        ((uint)*(ushort *)(iVar6 + 6) - (uint)*(ushort *)(iVar8 + 6)) * 4);
      if (uVar4 == 0) {
        uVar13 = 0x8000;
LAB_08042d90:
        lVar1 = (ulonglong)uVar10 * (ulonglong)uVar11;
        uVar4 = (uint)((ulonglong)uVar4 * (ulonglong)uVar11) >> 0xc |
                (uVar11 * ((int)uVar4 >> 0x1f) + (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20)
                ) * 0x100000;
        if (-1 < (int)uVar10) goto LAB_08042ce8;
LAB_08042db0:
        uVar15 = CONCAT44(uVar11 * ((int)uVar10 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
                          (uint)(0xbfffffff < (uint)lVar1),(uint)lVar1 + 0x40000000);
      }
      else {
        if (-1 < (int)uVar4) {
          uVar13 = 0;
          goto LAB_08042d90;
        }
        uVar9 = (uint)((ulonglong)uVar4 * (ulonglong)uVar11);
        uVar13 = 0;
        lVar1 = (ulonglong)uVar10 * (ulonglong)uVar11;
        uVar4 = uVar9 + 0xfff >> 0xc |
                (uVar11 * ((int)uVar4 >> 0x1f) + (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20)
                + (uint)(0xfffff000 < uVar9)) * 0x100000;
        if ((int)uVar10 < 0) goto LAB_08042db0;
LAB_08042ce8:
        uVar15 = CONCAT44(uVar11 * ((int)uVar10 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20),
                          (int)lVar1);
      }
      if (local_34 == 0) {
        iVar14 = param_5 * uVar4 + iVar14;
        uVar2 = (uVar15 & 0xffffffff) * (ulonglong)param_5;
        uVar16 = VectorAdd(uVar16,((ulonglong)
                                   (param_5 * (int)(uVar15 >> 0x20) + (int)(uVar2 >> 0x20)) << 0x20)
                                  + (uVar2 & 0xffffffff),8);
      }
      if (uVar12 != 0) {
        puVar7 = (uint *)(local_30 + -4);
        uVar10 = uVar12;
        puVar3 = puVar5;
        do {
          uVar2 = (ulonglong)uVar16 >> 0x20;
          uVar9 = (uint)uVar16;
          uVar16 = VectorAdd(uVar16,uVar15,8);
          uVar10 = uVar10 - 1;
          uVar11 = (uint)iVar14 >> 0x12;
          iVar14 = iVar14 + uVar4;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar9 >> 0x1e | (int)uVar2 << 2;
          *puVar3 = uVar13 | (ushort)uVar11;
          puVar3 = puVar3 + 2;
        } while (uVar10 != 0);
        puVar5 = puVar5 + uVar12 * 2;
        local_30 = local_30 + uVar12 * 4;
      }
      param_1 = param_1 + 2;
      local_34 = local_34 + 1;
    } while (local_34 != param_4);
  }
  return;
}


