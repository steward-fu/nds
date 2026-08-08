/*
 * Ghidra decompilation
 *
 * Function : render_sprite_modulate_alpha_c
 * Address  : 0014d4f0
 * Program  : drastic64
 */


void render_sprite_modulate_alpha_c(ulong *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar1 = (uint)param_3;
  if (uVar1 != 0) {
    if (uVar1 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      puVar2 = param_1;
      do {
        uVar6 = puVar2[1];
        uVar4 = *puVar2;
        uVar5 = uVar4 & 0xffffff00ffffff;
        uVar7 = uVar6 & 0xffffff00ffffff;
        uVar8 = (uint)((byte)(uVar4 >> 0x18) & 0x1f);
        uVar9 = (uint)((byte)(uVar4 >> 0x38) & 0x1f);
        uVar10 = (uint)((byte)(uVar6 >> 0x18) & 0x1f);
        uVar11 = (uint)((byte)(uVar6 >> 0x38) & 0x1f);
        puVar3 = puVar2 + 2;
        puVar2[1] = CONCAT17((char)(param_2 + uVar11 * param_2 + uVar11 >> 5),
                             CONCAT16((char)(uVar7 >> 0x30),
                                      CONCAT15((char)(uVar7 >> 0x28),
                                               CONCAT14((char)(uVar7 >> 0x20),
                                                        CONCAT13((char)(param_2 + uVar10 * param_2 +
                                                                        uVar10 >> 5),(int3)uVar7))))
                            );
        *puVar2 = CONCAT17((char)(param_2 + uVar9 * param_2 + uVar9 >> 5),
                           CONCAT16((char)(uVar5 >> 0x30),
                                    CONCAT15((char)(uVar5 >> 0x28),
                                             CONCAT14((char)(uVar5 >> 0x20),
                                                      CONCAT13((char)(param_2 + uVar8 * param_2 +
                                                                      uVar8 >> 5),(int3)uVar5)))));
        puVar2 = puVar3;
      } while (puVar3 != param_1 + (ulong)((uVar1 >> 2) - 1) * 2 + 2);
      param_1 = (ulong *)((long)param_1 + (param_3 & 0xfffffffc) * 4);
      uVar8 = uVar1 & 0xfffffffc;
      if ((param_3 & 3) == 0) {
        return;
      }
    }
    uVar9 = *(uint *)param_1 >> 0x18 & 0x1f;
    *(uint *)param_1 =
         (param_2 + uVar9 * param_2 + uVar9) * 0x80000 & 0xff000000 | *(uint *)param_1 & 0xffffff;
    if ((uVar8 + 1 < uVar1) &&
       (uVar9 = *(uint *)((long)param_1 + 4) >> 0x18 & 0x1f,
       *(uint *)((long)param_1 + 4) =
            (param_2 + uVar9 * param_2 + uVar9) * 0x80000 & 0xff000000 |
            *(uint *)((long)param_1 + 4) & 0xffffff, uVar8 + 2 < uVar1)) {
      uVar1 = *(uint *)(param_1 + 1) >> 0x18 & 0x1f;
      *(uint *)(param_1 + 1) =
           (param_2 + uVar1 * param_2 + uVar1) * 0x80000 & 0xff000000 |
           *(uint *)(param_1 + 1) & 0xffffff;
    }
  }
  return;
}


