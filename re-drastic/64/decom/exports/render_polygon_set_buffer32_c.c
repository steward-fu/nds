/*
 * Ghidra decompilation
 *
 * Function : render_polygon_set_buffer32_c
 * Address  : 0014a3e0
 * Program  : drastic64
 */


void render_polygon_set_buffer32_c(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 - 1 < 3) {
      uVar1 = 0;
    }
    else {
      puVar2 = param_1;
      do {
        puVar3 = puVar2 + 2;
        puVar2[1] = CONCAT44(param_2,param_2);
        *puVar2 = CONCAT44(param_2,param_2);
        puVar2 = puVar3;
      } while (puVar3 != param_1 + (ulong)((param_3 >> 2) - 1) * 2 + 2);
      param_1 = (undefined8 *)((long)param_1 + ((ulong)param_3 & 0xfffffffc) * 4);
      uVar1 = param_3 & 0xfffffffc;
      if ((param_3 & 3) == 0) {
        return;
      }
    }
    *(undefined4 *)param_1 = param_2;
    if ((uVar1 + 1 < param_3) && (*(undefined4 *)((long)param_1 + 4) = param_2, uVar1 + 2 < param_3)
       ) {
      *(undefined4 *)(param_1 + 1) = param_2;
    }
  }
  return;
}


