/*
 * Ghidra decompilation
 *
 * Function : fill_screen_menu
 * Address  : 00188430
 * Program  : drastic64
 */


void fill_screen_menu(undefined2 param_1,ulong param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar5;
  
  lVar2 = get_screen_ptr(0);
  uVar3 = get_screen_pitch(0);
  uVar8 = (uint)(uVar3 >> 1) & 0x7fffffff;
  puVar6 = (undefined8 *)(lVar2 + ((ulong)(uVar8 * param_3) + (param_2 & 0xffffffff)) * 2);
  if (param_5 != 0) {
    if (param_4 != 0) {
      iVar7 = 0;
      do {
        puVar4 = puVar6;
        if (param_4 - 1 < 7) {
          uVar3 = 0;
LAB_001884d0:
          iVar1 = (int)uVar3;
          *(undefined2 *)((long)puVar6 + uVar3 * 2) = param_1;
          if (iVar1 + 1U < param_4) {
            *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 1U) * 2) = param_1;
            if (iVar1 + 2U < param_4) {
              *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 2U) * 2) = param_1;
              if (iVar1 + 3U < param_4) {
                *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 3U) * 2) = param_1;
                if (iVar1 + 4U < param_4) {
                  *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 4U) * 2) = param_1;
                  if (iVar1 + 5U < param_4) {
                    *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 5U) * 2) = param_1;
                    if (iVar1 + 6U < param_4) {
                      *(undefined2 *)((long)puVar6 + (ulong)(iVar1 + 6U) * 2) = param_1;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          do {
            puVar5 = puVar4 + 2;
            puVar4[1] = CONCAT26(param_1,CONCAT24(param_1,CONCAT22(param_1,param_1)));
            *puVar4 = CONCAT26(param_1,CONCAT24(param_1,CONCAT22(param_1,param_1)));
            puVar4 = puVar5;
          } while (puVar5 != puVar6 + ((ulong)((param_4 >> 3) - 1) + 1) * 2);
          if (param_4 != (param_4 & 0xfffffff8)) {
            uVar3 = (ulong)(param_4 & 0xfffffff8);
            goto LAB_001884d0;
          }
        }
        iVar7 = iVar7 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + (ulong)(uVar8 << 1));
      } while (param_5 != iVar7);
    }
  }
  return;
}


