/*
 * Ghidra decompilation
 *
 * Function : render_polygon_apply_fog_c
 * Address  : 0014a330
 * Program  : drastic64
 */


void render_polygon_apply_fog_c(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  uVar1 = (uint)param_2;
  if (uVar1 != 0) {
    if (2 < uVar1 - 1) {
      puVar2 = param_1;
      do {
        puVar3 = puVar2 + 2;
        puVar2[1] = puVar2[1] | 0x8000000080000000;
        *puVar2 = *puVar2 | 0x8000000080000000;
        puVar2 = puVar3;
      } while (puVar3 != param_1 + (ulong)((uVar1 >> 2) - 1) * 2 + 2);
      param_1 = (ulong *)((long)param_1 + (param_2 & 0xfffffffc) * 4);
      uVar1 = uVar1 & 3;
      if ((param_2 & 3) == 0) {
        return;
      }
    }
    *(uint *)param_1 = *(uint *)param_1 | 0x80000000;
    if ((uVar1 != 1) &&
       (*(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) | 0x80000000, uVar1 != 2)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x80000000;
    }
  }
  return;
}


