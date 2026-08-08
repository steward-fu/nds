/*
 * Ghidra decompilation
 *
 * Function : geometry_light_colors_0
 * Address  : 0015f690
 * Program  : drastic64
 */


void geometry_light_colors_0(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar4;
  undefined8 *puVar3;
  
  uVar4 = (ushort)((*(uint *)(param_1 + 0x9760) >> 0xe) << 10) |
          (ushort)((*(uint *)(param_1 + 0x975c) >> 0xe) << 5) |
          (ushort)(*(uint *)(param_1 + 0x9758) >> 0xe);
  if (param_4 != 0) {
    if (param_4 - 1 < 7) {
      uVar1 = 0;
    }
    else {
      puVar2 = param_2;
      do {
        puVar3 = puVar2 + 2;
        puVar2[1] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
        *puVar2 = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
        puVar2 = puVar3;
      } while (puVar3 != param_2 + (ulong)((param_4 >> 3) - 1) * 2 + 2);
      uVar1 = param_4 & 0xfffffff8;
      if ((param_4 & 7) == 0) {
        return;
      }
    }
    *(ushort *)((long)param_2 + (ulong)uVar1 * 2) = uVar4;
    if (uVar1 + 1 < param_4) {
      *(ushort *)((long)param_2 + (ulong)(uVar1 + 1) * 2) = uVar4;
      if (uVar1 + 2 < param_4) {
        *(ushort *)((long)param_2 + (ulong)(uVar1 + 2) * 2) = uVar4;
        if (uVar1 + 3 < param_4) {
          *(ushort *)((long)param_2 + (ulong)(uVar1 + 3) * 2) = uVar4;
          if (uVar1 + 4 < param_4) {
            *(ushort *)((long)param_2 + (ulong)(uVar1 + 4) * 2) = uVar4;
            if (uVar1 + 5 < param_4) {
              *(ushort *)((long)param_2 + (ulong)(uVar1 + 5) * 2) = uVar4;
              if (uVar1 + 6 < param_4) {
                *(ushort *)((long)param_2 + (ulong)(uVar1 + 6) * 2) = uVar4;
              }
            }
          }
        }
      }
    }
  }
  return;
}


