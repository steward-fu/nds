/*
 * Ghidra decompilation
 *
 * Function : render_sprite_writeback_asm_1x
 * Address  : 0019b850
 * Program  : drastic64
 */


void render_sprite_writeback_asm_1x
               (undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5
               ,undefined4 param_6,uint *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = 0;
  uVar7 = param_3;
  if ((param_3 & 3) != 0) {
    do {
      do {
        puVar6 = (uint *)((long)param_7 + 1);
        puVar4 = param_5 + 1;
        uVar1 = *param_5;
        if (*(char *)param_7 != '\0') {
          param_2[uVar8] = param_6;
          param_1[uVar8] = uVar1;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
        uVar7 = uVar7 - 1;
        param_5 = puVar4;
        param_7 = puVar6;
      } while (uVar7 != 0);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 0x100;
      uVar8 = 0;
      param_4 = param_4 + -1;
      uVar7 = param_3;
    } while (param_4 != 0);
    return;
  }
  do {
    do {
      puVar3 = param_2;
      puVar4 = param_1;
      puVar6 = param_7 + 1;
      uVar2 = *param_7;
      uVar1 = *param_5;
      if ((uVar2 & 0xff) != 0) {
        *puVar3 = param_6;
        *puVar4 = uVar1;
      }
      uVar1 = param_5[1];
      if ((uVar2 & 0xff00) != 0) {
        puVar3[1] = param_6;
        puVar4[1] = uVar1;
      }
      puVar5 = param_5 + 3;
      uVar1 = param_5[2];
      if ((uVar2 & 0xff0000) != 0) {
        puVar3[2] = param_6;
        puVar4[2] = uVar1;
      }
      param_5 = param_5 + 4;
      uVar1 = *puVar5;
      if ((uVar2 & 0xff000000) != 0) {
        puVar3[3] = param_6;
        puVar4[3] = uVar1;
      }
      uVar7 = uVar7 - 4;
      param_1 = puVar4 + 4;
      param_2 = puVar3 + 4;
      param_7 = puVar6;
    } while (uVar7 != 0);
    param_4 = param_4 + -1;
    param_1 = puVar4 + (0x104 - (ulong)param_3);
    param_2 = puVar3 + (0x104 - (ulong)param_3);
    uVar7 = param_3;
  } while (param_4 != 0);
  return;
}


