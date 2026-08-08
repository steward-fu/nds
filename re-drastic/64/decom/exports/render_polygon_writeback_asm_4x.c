/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_asm_4x
 * Address  : 0019c850
 * Program  : drastic64
 */


void render_polygon_writeback_asm_4x
               (long param_1,long param_2,long param_3,int param_4,int param_5,undefined4 *param_6,
               uint *param_7,char *param_8)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  
  puVar3 = (ushort *)(param_1 + 0x580);
  do {
    uVar2 = *puVar3;
    uVar7 = (uint)puVar3[0x58];
    puVar3 = puVar3 + 2;
    puVar8 = (undefined4 *)(param_2 + (ulong)uVar2 * 4);
    puVar9 = (uint *)(param_3 + (ulong)uVar2 * 4);
    puVar4 = param_6;
    puVar5 = param_7;
    pcVar6 = param_8;
    do {
      param_8 = pcVar6 + 1;
      param_7 = puVar5 + 1;
      param_6 = puVar4 + 1;
      uVar1 = *puVar4;
      if (*pcVar6 != '\0') {
        *puVar9 = *puVar5 | param_5 << 0x18;
        *puVar8 = uVar1;
      }
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
      puVar4 = param_6;
      puVar5 = param_7;
      pcVar6 = param_8;
    } while (uVar7 != 0);
    param_2 = param_2 + 0x800;
    param_3 = param_3 + 0x800;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}


