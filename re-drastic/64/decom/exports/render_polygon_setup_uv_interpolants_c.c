/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_uv_interpolants_c
 * Address  : 00145cf0
 * Program  : drastic64
 */


void render_polygon_setup_uv_interpolants_c
               (long param_1,undefined8 *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  short *psVar16;
  undefined8 *puVar17;
  long lVar18;
  
  puVar17 = (undefined8 *)((long)param_2 + (ulong)(uint)(param_4 << 2));
  psVar16 = (short *)(param_1 + 0x2c0);
  if (param_3 != 0) {
    do {
      puVar2 = (undefined4 *)(psVar16 + 0x58);
      sVar6 = *(short *)puVar2;
      uVar5 = psVar16[0x1b8];
      sVar7 = psVar16[0x59];
      uVar10 = *puVar2;
      uVar9 = *puVar2;
      iVar3 = *psVar16 * 0x8000 + 0x400;
      if (sVar6 < 1) {
        iVar3 = *psVar16 * 0x8000;
      }
      iVar4 = psVar16[1] * 0x8000 + 0x400;
      if (sVar7 < 1) {
        iVar4 = psVar16[1] * 0x8000;
      }
      psVar16 = psVar16 + 2;
      if (uVar5 != 0) {
        puVar13 = (undefined8 *)((long)puVar17 + (ulong)uVar5 * 4);
        bVar1 = param_2 + uVar5 <= puVar17;
        uVar8 = uVar5 - 1;
        if (((!bVar1 && param_2 <= puVar13) && (bVar1 || puVar13 != param_2) || uVar8 < 6) ||
            ((bVar1 || param_2 > puVar13) || !bVar1 && puVar13 == param_2) && uVar8 == 6) {
          puVar13 = param_2;
          puVar14 = puVar17;
          do {
            *(int *)puVar13 = iVar3;
            *(int *)((long)puVar13 + 4) = iVar4;
            *(short *)puVar14 = sVar6;
            *(short *)((long)puVar14 + 2) = sVar7;
            puVar13 = puVar13 + 1;
            puVar14 = (undefined8 *)((long)puVar14 + 4);
          } while (param_2 + (ulong)uVar8 + 1 != puVar13);
        }
        else {
          puVar13 = param_2;
          puVar14 = puVar17;
          do {
            puVar13[1] = CONCAT44(iVar4,iVar3);
            *puVar13 = CONCAT44(iVar4,iVar3);
            puVar13[3] = CONCAT44(iVar4,iVar3);
            puVar13[2] = CONCAT44(iVar4,iVar3);
            puVar13 = puVar13 + 4;
            puVar14[1] = CONCAT26(sVar7,CONCAT24(sVar6,uVar10));
            *puVar14 = CONCAT26(sVar7,CONCAT24(sVar6,uVar9));
            puVar14 = puVar14 + 2;
          } while (param_2 + (ulong)((uVar5 >> 2) - 1) * 4 + 4 != puVar13);
          uVar11 = (ulong)uVar5 & 0xfffc;
          lVar18 = uVar11 * 8;
          lVar12 = uVar11 * 4;
          uVar15 = (uint)uVar5;
          if ((uVar5 & 3) != 0) {
            *(int *)(param_2 + uVar11) = iVar3;
            *(int *)((long)param_2 + lVar18 + 4) = iVar4;
            *(short *)((long)puVar17 + lVar12) = sVar6;
            *(short *)((long)puVar17 + lVar12 + 2) = sVar7;
            if ((uVar15 & 0xfffffffc) + 1 < uVar15) {
              *(int *)(param_2 + uVar11 + 1) = iVar3;
              *(int *)((long)param_2 + lVar18 + 0xc) = iVar4;
              *(short *)((long)puVar17 + lVar12 + 4) = sVar6;
              *(short *)((long)puVar17 + lVar12 + 6) = sVar7;
              if ((uVar15 & 0xfffffffc) + 2 < uVar15) {
                *(int *)(param_2 + uVar11 + 2) = iVar3;
                *(int *)((long)param_2 + lVar18 + 0x14) = iVar4;
                *(short *)((long)puVar17 + lVar12 + 8) = sVar6;
                *(short *)((long)puVar17 + lVar12 + 10) = sVar7;
              }
            }
          }
        }
        lVar12 = (ulong)uVar8 + 1;
        param_2 = param_2 + lVar12;
        puVar17 = (undefined8 *)((long)puVar17 + lVar12 * 4);
      }
    } while (psVar16 != (short *)(param_1 + ((ulong)(param_3 - 1) + 0xb1) * 4));
  }
  return;
}


