/*
 * Ghidra decompilation
 *
 * Function : FUN_0809be44
 * Address  : 0809be44
 * Program  : drastic16
 */


undefined4 FUN_0809be44(uint *param_1,byte *param_2,uint param_3,code **param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (4 < param_3) {
    uVar2 = (uint)*param_2;
    uVar3 = (uint)param_2[3] << 0x10 | (uint)param_2[2] << 8 | (uint)param_2[1] |
            (uint)param_2[4] << 0x18;
    if (uVar3 < 0x1000) {
      uVar3 = 0x1000;
    }
    if (uVar2 < 0xe1) {
      uVar5 = (uVar2 / 9) % 5;
      uVar4 = (0x300 << uVar5 + uVar2 % 9) + 0x736;
      if ((param_1[4] == 0) || (uVar4 != param_1[0x15])) {
        (*param_4[1])(param_4);
        param_1[4] = 0;
        uVar1 = (**param_4)(param_4,uVar4 * 2);
        param_1[0x15] = uVar4;
        param_1[4] = uVar1;
        if (uVar1 == 0) {
          return 2;
        }
      }
      if ((param_1[5] == 0) || (param_1[10] != uVar3)) {
        (*param_4[1])(param_4);
        param_1[5] = 0;
        uVar4 = (**param_4)(param_4,uVar3);
        param_1[5] = uVar4;
        if (uVar4 == 0) {
          (*param_4[1])(param_4,param_1[4]);
          param_1[4] = 0;
          return 2;
        }
      }
      param_1[10] = uVar3;
      *param_1 = uVar2 % 9;
      param_1[1] = uVar5;
      param_1[2] = (uVar2 / 9) / 5;
      param_1[3] = uVar3;
      return 0;
    }
  }
  return 4;
}


