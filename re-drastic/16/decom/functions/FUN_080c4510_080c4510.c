/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4510
 * Address  : 080c4510
 * Program  : drastic16
 */


void FUN_080c4510(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  
  memset(param_1 + 0x2e,0,0x98);
  param_1[0x54] = param_1[0x2b];
  iVar3 = *param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  uVar1 = (uint)(iVar3 >> 3) / 0xc;
  uVar4 = *param_1 + uVar1 * -0x54;
  param_1[0x55] = param_1[0x2b] + (uVar4 / 0xc + 1) * 0xc;
  param_1[0x2c] = param_1[0x55];
  param_1[0x57] = param_1[0x2b] + uVar4;
  param_1[0x2d] = param_1[0x2c] + ((uVar1 * 0x54) / 0xc) * 0xc;
  cVar2 = '\x01';
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(char *)((int)param_1 + local_c + 4) = cVar2;
    cVar2 = cVar2 + '\x01';
  }
  cVar2 = cVar2 + '\x01';
  for (; local_c < 8; local_c = local_c + 1) {
    *(char *)((int)param_1 + local_c + 4) = cVar2;
    cVar2 = cVar2 + '\x02';
  }
  cVar2 = cVar2 + '\x01';
  for (; local_c < 0xc; local_c = local_c + 1) {
    *(char *)((int)param_1 + local_c + 4) = cVar2;
    cVar2 = cVar2 + '\x03';
  }
  cVar2 = cVar2 + '\x01';
  for (; local_c < 0x26; local_c = local_c + 1) {
    *(char *)((int)param_1 + local_c + 4) = cVar2;
    cVar2 = cVar2 + '\x04';
  }
  local_c = 0;
  local_10 = 0;
  *(undefined *)((int)param_1 + 0xaa) = 0;
  for (; local_10 < 0x80; local_10 = local_10 + 1) {
    local_c = local_c + (uint)((int)(uint)*(byte *)((int)param_1 + local_c + 4) < local_10 + 1);
    *(char *)((int)param_1 + local_10 + 0x2a) = (char)local_c;
  }
  return;
}


