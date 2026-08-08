/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_4x
 * Address  : 080c4a90
 * Program  : drastic
 */


void render_polygon_writeback_4x
               (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
               uint *param_7,char *param_8)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  puVar3 = (ushort *)(param_1 + 0x580);
  do {
    uVar2 = *puVar3;
    puVar4 = (uint *)(puVar3 + 0x58);
    puVar3 = puVar3 + 2;
    puVar7 = (undefined4 *)(param_2 + (uint)uVar2 * 4);
    uVar6 = *puVar4 & 0xffff;
    puVar8 = (uint *)(param_3 + (uint)uVar2 * 4);
    puVar4 = param_7;
    pcVar5 = param_8;
    puVar10 = param_6;
    do {
      param_8 = pcVar5 + 1;
      cVar1 = *pcVar5;
      param_7 = puVar4 + 1;
      param_6 = puVar10 + 1;
      uVar9 = *puVar10;
      if (cVar1 != '\0') {
        *puVar8 = *puVar4 | param_5 << 0x18;
      }
      puVar8 = puVar8 + 1;
      if (cVar1 != '\0') {
        *puVar7 = uVar9;
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
      puVar4 = param_7;
      pcVar5 = param_8;
      puVar10 = param_6;
    } while (uVar6 != 0);
    param_2 = param_2 + 0x800;
    param_3 = param_3 + 0x800;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}


