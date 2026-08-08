/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_1x
 * Address  : 080c3b9c
 * Program  : drastic
 */


void video_3d_resolve_bin_1x(undefined8 *param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  
  iVar6 = 0x1000;
  auVar1 = SIMDExpandImmediate(1,6,0xe0);
  do {
    auVar2 = *param_2;
    auVar3 = param_2[1];
    auVar4 = param_2[2];
    auVar5 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = SUB168(auVar2 & auVar1,0);
    param_1[1] = SUB168(auVar2 & auVar1,8);
    param_1[2] = SUB168(auVar3 & auVar1,0);
    param_1[3] = SUB168(auVar3 & auVar1,8);
    param_1[4] = SUB168(auVar4 & auVar1,0);
    param_1[5] = SUB168(auVar4 & auVar1,8);
    param_1[6] = SUB168(auVar5 & auVar1,0);
    param_1[7] = SUB168(auVar5 & auVar1,8);
    param_1 = param_1 + 8;
    iVar6 = iVar6 + -0x10;
  } while (iVar6 != 0);
  return;
}


