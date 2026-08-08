/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_convert_polygon
 * Address  : 001638f0
 * Program  : drastic64
 */


void geometry_load_savestate_v1_convert_polygon(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  
  sVar4 = *(short *)(param_2 + 1);
  uVar3 = *(undefined2 *)(param_2 + 7);
  uVar1 = *param_2;
  bVar2 = *(byte *)((long)param_2 + 0x1e);
  uVar5 = (uint)bVar2;
  *param_1 = param_2[6];
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 6) = uVar3;
  *(short *)((long)param_1 + 0x1a) = sVar4;
  if (bVar2 == 3) {
    if (((int)sVar4 == *(short *)((long)param_2 + 6) + 1) &&
       ((int)*(short *)(param_2 + 2) == sVar4 + 1)) {
      uVar5 = 0x43;
      *(short *)((long)param_1 + 0x1a) = *(short *)((long)param_2 + 6);
    }
  }
  else if ((((bVar2 == 4) && ((int)*(short *)((long)param_2 + 6) == sVar4 + 1)) &&
           ((int)*(short *)((long)param_2 + 10) == *(short *)((long)param_2 + 6) + 1)) &&
          ((int)*(short *)(param_2 + 2) == *(short *)((long)param_2 + 10) + 1)) {
    uVar5 = 0x44;
  }
  param_1[2] = uVar5;
  return;
}


