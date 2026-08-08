/*
 * Ghidra decompilation
 *
 * Function : motion_pack_set_acceleration
 * Address  : 0016f0e0
 * Program  : drastic64
 */


void motion_pack_set_acceleration(float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)NEON_fmadd(param_1 * 0.1019716,0x424c0000,0x43000000);
  fVar5 = (float)NEON_fmadd(param_2 * -0.1019716,0x424c0000,0x43000000);
  fVar6 = (float)NEON_fmadd(param_3 * -0.1019716,0x424c0000,0x43000000);
  uVar3 = (uint)fVar4;
  uVar2 = (uint)fVar5;
  uVar1 = (uint)fVar6;
  if (0xfe < uVar3) {
    uVar3 = 0xfe;
  }
  if (0xfe < uVar2) {
    uVar2 = 0xfe;
  }
  if (0xfe < uVar1) {
    uVar1 = 0xfe;
  }
  *(char *)(param_4 + 2) = (char)uVar3;
  *(char *)(param_4 + 3) = (char)uVar2;
  *(char *)(param_4 + 4) = (char)uVar1;
  return;
}


