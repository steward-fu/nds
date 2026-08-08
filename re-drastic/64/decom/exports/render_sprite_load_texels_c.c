/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_texels_c
 * Address  : 00147e60
 * Program  : drastic64
 */


void render_sprite_load_texels_c(long param_1,long param_2,uint param_3,int param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    uVar3 = param_3 & 0xfffffffc;
    uVar4 = param_3 - 1;
    lVar7 = ((ulong)param_3 & 0xfffffffc) * 4;
    iVar6 = 0;
    do {
      bVar1 = (ulong)((param_1 + 0xf) - param_2) < 0x1f;
      lVar5 = 0;
      if ((bVar1 || uVar4 < 7) || !bVar1 && uVar4 == 7) {
        do {
          *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_2 + lVar5 * 4);
          lVar2 = lVar5 + 1;
          if (param_3 <= (uint)lVar2) break;
          *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_2 + lVar2 * 4);
          lVar5 = lVar5 + 2;
        } while ((uint)lVar5 < param_3);
      }
      else {
        do {
          uVar8 = *(undefined8 *)(param_2 + lVar5);
          ((undefined8 *)(param_1 + lVar5))[1] = ((undefined8 *)(param_2 + lVar5))[1];
          *(undefined8 *)(param_1 + lVar5) = uVar8;
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != ((ulong)((param_3 >> 2) - 1) + 1) * 0x10);
        if (((param_3 != uVar3) &&
            (*(undefined4 *)(param_1 + lVar7) = *(undefined4 *)(param_2 + lVar7),
            uVar3 + 1 < param_3)) &&
           (*(undefined4 *)(param_1 + lVar7 + 4) = *(undefined4 *)(param_2 + (ulong)(uVar3 + 1) * 4)
           , uVar3 + 2 < param_3)) {
          *(undefined4 *)(param_1 + lVar7 + 8) = *(undefined4 *)(param_2 + (ulong)(uVar3 + 2) * 4);
        }
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + (ulong)uVar4 * 4 + 4;
      param_2 = param_2 + (param_5 & 0xffffffff) * 4;
    } while (param_4 != iVar6);
  }
  return;
}


