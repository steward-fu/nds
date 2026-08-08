/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_c_4x
 * Address  : 001539a0
 * Program  : drastic64
 */


void render_polygon_load_depth_c_4x(ulong param_1,long param_2,long param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (param_4 != 0) {
    lVar2 = param_2 + ((ulong)(param_4 - 1) + 1) * 0x800;
    puVar9 = (ushort *)(param_3 + 0x580);
    do {
      uVar5 = puVar9[0x58];
      uVar3 = param_2 + (ulong)*puVar9 * 4;
      if (uVar5 != 0) {
        uVar10 = param_1 + 0x10;
        bVar1 = param_2 + (ulong)*puVar9 * 4 + 0x10 <= param_1;
        uVar6 = uVar5 - 1;
        if (((!bVar1 && uVar3 <= uVar10) && (bVar1 || uVar10 != uVar3) || uVar6 < 7) ||
            ((bVar1 || uVar3 > uVar10) || !bVar1 && uVar10 == uVar3) && uVar6 == 7) {
          lVar7 = 0;
          do {
            *(undefined4 *)(param_1 + lVar7 * 4) = *(undefined4 *)(uVar3 + lVar7 * 4);
            lVar7 = lVar7 + 1;
          } while ((uint)lVar7 < (uint)uVar5);
        }
        else {
          lVar7 = 0;
          do {
            uVar11 = *(undefined8 *)(uVar3 + lVar7);
            ((undefined8 *)(param_1 + lVar7))[1] = ((undefined8 *)(uVar3 + lVar7))[1];
            *(undefined8 *)(param_1 + lVar7) = uVar11;
            lVar7 = lVar7 + 0x10;
          } while (((ulong)((uVar5 >> 2) - 1) + 1) * 0x10 - lVar7 != 0);
          uVar10 = (ulong)uVar5 & 0xfffc;
          lVar7 = param_1 + uVar10 * 4;
          uVar8 = (uint)uVar5;
          lVar4 = uVar3 + uVar10 * 4;
          if ((((uVar5 & 3) != 0) &&
              (*(undefined4 *)(param_1 + uVar10 * 4) = *(undefined4 *)(uVar3 + uVar10 * 4),
              (uVar8 & 0xfffffffc) + 1 < uVar8)) &&
             (*(undefined4 *)(lVar7 + 4) = *(undefined4 *)(lVar4 + 4),
             (uVar8 & 0xfffffffc) + 2 < uVar8)) {
            *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(lVar4 + 8);
          }
        }
        param_1 = param_1 + (ulong)uVar6 * 4 + 4;
      }
      param_2 = param_2 + 0x800;
      puVar9 = puVar9 + 2;
    } while (param_2 != lVar2);
  }
  return;
}


