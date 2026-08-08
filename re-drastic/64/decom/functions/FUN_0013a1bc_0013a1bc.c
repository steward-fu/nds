/*
 * Ghidra decompilation
 *
 * Function : FUN_0013a1bc
 * Address  : 0013a1bc
 * Program  : drastic64
 */


void FUN_0013a1bc(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar1 = (uint)(param_2 >> 8);
  uVar6 = uVar1 & 0xffffff;
  uVar5 = (uint)param_2 & 0xff;
  if ((param_2 & 0xff) == 0) {
    if ((param_2 & 0xfffeff00) != 0) {
      uVar5 = 0x100;
LAB_0013a204:
      if (uVar6 <= uVar5) {
        uVar5 = uVar5 - 1;
        *param_1 = 0;
        param_1[1] = 0;
        uVar2 = (uint)param_2 >> 0xd;
        uVar7 = (ulong)uVar2;
        param_1[2] = 0;
        param_1[3] = 0;
        uVar3 = uVar5 >> 5;
        uVar4 = ~(-2 << (ulong)(uVar5 & 0x1f));
        uVar6 = -1 << (ulong)(uVar1 & 0x1f);
        if (uVar2 == uVar5 >> 5) {
          *(uint *)((long)param_1 + uVar7 * 4) =
               *(uint *)((long)param_1 + uVar7 * 4) | uVar6 & uVar4;
          return;
        }
        uVar5 = uVar2 + 1;
        *(uint *)((long)param_1 + uVar7 * 4) = *(uint *)((long)param_1 + uVar7 * 4) | uVar6;
        if (uVar5 < uVar3) {
          memset((void *)((long)param_1 + (ulong)uVar5 * 4),0xff,
                 ((ulong)((-2 - uVar2) + uVar3) + 1) * 4);
          uVar5 = uVar3;
        }
        *(uint *)((long)param_1 + (ulong)uVar5 * 4) =
             *(uint *)((long)param_1 + (ulong)uVar5 * 4) | uVar4;
        return;
      }
      uVar6 = uVar6 - 1;
      *param_1 = 0xffffffffffffffff;
      param_1[1] = 0xffffffffffffffff;
      uVar2 = uVar5 >> 5;
      param_1[2] = 0xffffffffffffffff;
      param_1[3] = 0xffffffffffffffff;
      uVar3 = uVar6 >> 5;
      uVar1 = -2 << (ulong)(uVar6 & 0x1f);
      uVar5 = ~(-1 << (ulong)(uVar5 & 0x1f));
      uVar7 = (ulong)uVar2;
      if (uVar2 == uVar6 >> 5) {
        *(uint *)((long)param_1 + uVar7 * 4) =
             *(uint *)((long)param_1 + uVar7 * 4) & (uVar5 | uVar1);
        return;
      }
      uVar6 = uVar2 + 1;
      *(uint *)((long)param_1 + uVar7 * 4) = *(uint *)((long)param_1 + uVar7 * 4) & uVar5;
      if (uVar6 < uVar3) {
        memset((void *)((long)param_1 + (ulong)uVar6 * 4),0,((ulong)((uVar3 - 2) - uVar2) + 1) * 4);
        uVar6 = uVar3;
      }
      *(uint *)((long)param_1 + (ulong)uVar6 * 4) =
           *(uint *)((long)param_1 + (ulong)uVar6 * 4) & uVar1;
      return;
    }
  }
  else if (uVar6 != uVar5) goto LAB_0013a204;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


