/*
 * Ghidra decompilation
 *
 * Function : render_sprite_writeback_c_4x
 * Address  : 001530b0
 * Program  : drastic64
 */


void render_sprite_writeback_c_4x
               (long param_1,long param_2,uint param_3,int param_4,undefined4 *param_5,
               undefined4 param_6,char *param_7)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if ((param_3 & 3) == 0) {
    if ((param_4 != 0) && (param_3 != 0)) {
      lVar2 = param_2 + ((ulong)(param_4 - 1) + 1) * 0x800;
      do {
        uVar7 = 0;
        do {
          iVar5 = (int)uVar7;
          if (*param_7 != '\0') {
            uVar4 = *param_5;
            *(undefined4 *)(param_2 + uVar7 * 4) = param_6;
            *(undefined4 *)(param_1 + uVar7 * 4) = uVar4;
          }
          if (param_7[1] != '\0') {
            uVar4 = param_5[1];
            *(undefined4 *)(param_2 + (ulong)(iVar5 + 1) * 4) = param_6;
            *(undefined4 *)(param_1 + (ulong)(iVar5 + 1) * 4) = uVar4;
          }
          if (param_7[2] != '\0') {
            uVar4 = param_5[2];
            *(undefined4 *)(param_2 + (ulong)(iVar5 + 2) * 4) = param_6;
            *(undefined4 *)(param_1 + (ulong)(iVar5 + 2) * 4) = uVar4;
          }
          pcVar1 = param_7 + 3;
          param_7 = param_7 + 4;
          if (*pcVar1 != '\0') {
            uVar4 = param_5[3];
            *(undefined4 *)(param_2 + (ulong)(iVar5 + 3) * 4) = param_6;
            *(undefined4 *)(param_1 + (ulong)(iVar5 + 3) * 4) = uVar4;
          }
          param_5 = param_5 + 4;
          uVar7 = (ulong)(iVar5 + 4U);
        } while (iVar5 + 4U < param_3);
        param_2 = param_2 + 0x800;
        param_1 = param_1 + 0x800;
      } while (param_2 != lVar2);
      return;
    }
  }
  else if (param_4 != 0) {
    lVar2 = (ulong)(param_3 - 1) + 1;
    lVar8 = lVar2 * 4;
    lVar3 = param_2 + ((ulong)(param_4 - 1) + 1) * 0x800;
    if (param_3 == 0) {
      lVar8 = 4;
    }
    do {
      lVar6 = 0;
      do {
        if (param_7[lVar6] != '\0') {
          uVar4 = param_5[lVar6];
          *(undefined4 *)(param_2 + lVar6 * 4) = param_6;
          *(undefined4 *)(param_1 + lVar6 * 4) = uVar4;
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < param_3);
      lVar6 = lVar2;
      if (param_3 == 0) {
        lVar6 = 1;
      }
      param_2 = param_2 + 0x800;
      param_5 = (undefined4 *)((long)param_5 + lVar8);
      param_1 = param_1 + 0x800;
      param_7 = param_7 + lVar6;
    } while (lVar3 != param_2);
  }
  return;
}


