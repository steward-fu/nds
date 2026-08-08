/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_c_4x
 * Address  : 00153b30
 * Program  : drastic64
 */


void render_sprite_load_depth_c_4x(long param_1,long param_2,uint param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    uVar4 = param_3 & 0xfffffffc;
    uVar5 = param_3 - 1;
    lVar3 = param_2 + ((ulong)(param_4 - 1) + 1) * 0x800;
    lVar7 = ((ulong)param_3 & 0xfffffffc) * 4;
    do {
      bVar1 = (ulong)((param_1 + 0xf) - param_2) < 0x1f;
      lVar6 = 0;
      if ((bVar1 || uVar5 < 7) || !bVar1 && uVar5 == 7) {
        do {
          *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_2 + lVar6 * 4);
          lVar2 = lVar6 + 1;
          if (param_3 <= (uint)lVar2) break;
          *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_2 + lVar2 * 4);
          lVar6 = lVar6 + 2;
        } while ((uint)lVar6 < param_3);
      }
      else {
        do {
          uVar8 = *(undefined8 *)(param_2 + lVar6);
          ((undefined8 *)(param_1 + lVar6))[1] = ((undefined8 *)(param_2 + lVar6))[1];
          *(undefined8 *)(param_1 + lVar6) = uVar8;
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != ((ulong)((param_3 >> 2) - 1) + 1) * 0x10);
        if (((param_3 != uVar4) &&
            (*(undefined4 *)(param_1 + lVar7) = *(undefined4 *)(param_2 + lVar7),
            uVar4 + 1 < param_3)) &&
           (*(undefined4 *)(param_1 + lVar7 + 4) = *(undefined4 *)(param_2 + (ulong)(uVar4 + 1) * 4)
           , uVar4 + 2 < param_3)) {
          *(undefined4 *)(param_1 + lVar7 + 8) = *(undefined4 *)(param_2 + (ulong)(uVar4 + 2) * 4);
        }
      }
      param_2 = param_2 + 0x800;
      param_1 = param_1 + (ulong)uVar5 * 4 + 4;
    } while (param_2 != lVar3);
  }
  return;
}


