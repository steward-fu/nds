/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_rgb_c
 * Address  : 00146230
 * Program  : drastic64
 */


void render_polygon_interpolate_rgb_c
               (long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_5;
  lVar1 = param_2 + uVar6 + uVar6;
  lVar2 = lVar1 + uVar6;
  lVar3 = lVar2 + (ulong)(param_5 << 1);
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      sVar4 = *(short *)(param_3 + lVar5 * 2);
      *(char *)(param_1 + lVar5) =
           (char)(*(int *)(lVar2 + lVar5 * 4) + (int)*(short *)(param_2 + lVar5 * 2) * (int)sVar4 >>
                 0x12);
      *(char *)(param_1 + uVar6 + lVar5) =
           (char)(*(int *)(lVar3 + lVar5 * 4) +
                  (int)*(short *)(param_2 + uVar6 + lVar5 * 2) * (int)sVar4 >> 0x12);
      *(char *)(param_1 + uVar6 + uVar6 + lVar5) =
           (char)(*(int *)(lVar3 + (ulong)(param_5 << 1) + lVar5 * 4) +
                  (int)*(short *)(lVar1 + lVar5 * 2) * (int)sVar4 >> 0x12);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < param_4);
  }
  return;
}


