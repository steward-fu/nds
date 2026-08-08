/*
 * Ghidra decompilation
 *
 * Function : screen_copy16
 * Address  : 00188290
 * Program  : drastic64
 */


void screen_copy16(ushort *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  
  lVar4 = get_screen_ptr(param_2);
  uVar5 = get_screen_pitch(param_2);
  iVar2 = get_screen_hires_mode(param_2);
  if (lVar4 != 0) {
    iVar3 = get_screen_bytes_per_pixel();
    puVar8 = param_1 + 0x100;
    if (iVar3 == 2) {
      puVar7 = param_1;
      puVar10 = puVar8;
      while( true ) {
        uVar9 = 0;
        do {
          puVar6 = puVar7 + 1;
          *puVar7 = *(ushort *)(lVar4 + uVar9 * 2);
          uVar9 = (ulong)(uint)((int)uVar9 + iVar2 + 1);
          puVar7 = puVar6;
        } while (puVar6 != puVar8);
        lVar4 = lVar4 + (uVar5 & 0xfffffffe);
        puVar8 = puVar8 + 0x100;
        if (puVar10 == param_1 + 0xc000) break;
        puVar7 = puVar10;
        puVar10 = puVar10 + 0x100;
      }
    }
    else {
      puVar7 = param_1;
      puVar10 = puVar8;
      while( true ) {
        uVar9 = 0;
        do {
          uVar1 = *(uint *)(lVar4 + uVar9 * 4);
          uVar9 = (ulong)(uint)((int)uVar9 + iVar2 + 1);
          puVar6 = puVar7 + 1;
          *puVar7 = (ushort)(uVar1 >> 3) & 0x1f | (ushort)((uVar1 >> 0x13) << 0xb) |
                    (ushort)((uVar1 >> 10 & 0x3f) << 5);
          puVar7 = puVar6;
        } while (puVar8 != puVar6);
        lVar4 = lVar4 + (uVar5 & 0xfffffffc);
        puVar8 = puVar8 + 0x100;
        if (puVar10 == param_1 + 0xc000) break;
        puVar7 = puVar10;
        puVar10 = puVar10 + 0x100;
      }
    }
    return;
  }
  memset(param_1,0,0x18000);
  return;
}


