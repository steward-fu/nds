/*
 * Ghidra decompilation
 *
 * Function : render_sprite_set_alpha_c
 * Address  : 0014d5e0
 * Program  : drastic64
 */


void render_sprite_set_alpha_c(undefined8 *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (uint)param_2 << 0x18 | 0xffffff;
  if (param_3 != 0) {
    if (param_3 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      puVar3 = param_1;
      do {
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        puVar4 = puVar3 + 2;
        puVar3[1] = CONCAT17((byte)((ulong)uVar6 >> 0x38) & param_2,
                             CONCAT16((char)((ulong)uVar6 >> 0x30),
                                      CONCAT15((char)((ulong)uVar6 >> 0x28),
                                               CONCAT14((char)((ulong)uVar6 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar6 >> 0x18) &
                                                                 param_2,(int3)uVar6)))));
        *puVar3 = CONCAT17((byte)((ulong)uVar5 >> 0x38) & param_2,
                           CONCAT16((char)((ulong)uVar5 >> 0x30),
                                    CONCAT15((char)((ulong)uVar5 >> 0x28),
                                             CONCAT14((char)((ulong)uVar5 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                               param_2,(int3)uVar5)))));
        puVar3 = puVar4;
      } while (puVar4 != param_1 + (ulong)((param_3 >> 2) - 1) * 2 + 2);
      param_1 = (undefined8 *)((long)param_1 + ((ulong)param_3 & 0xfffffffc) * 4);
      uVar2 = param_3 & 0xfffffffc;
      if ((param_3 & 3) == 0) {
        return;
      }
    }
    *(uint *)param_1 = *(uint *)param_1 & uVar1;
    if ((uVar2 + 1 < param_3) &&
       (*(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) & uVar1, uVar2 + 2 < param_3)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & uVar1;
    }
  }
  return;
}


