/*
 * Ghidra decompilation
 *
 * Function : FUN_080ca80c
 * Address  : 080ca80c
 * Program  : drastic16
 */


uint FUN_080ca80c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar1 = (int *)(param_1 + *(int *)(param_1 + 0x9750) * 0x5c + 0x9758);
  piVar1[0x15] = piVar1[0x15] + 1;
  piVar1[8] = piVar1[7];
  piVar1[7] = piVar1[6];
  piVar1[6] = piVar1[9] - piVar1[5];
  piVar1[5] = piVar1[9];
  uVar2 = (piVar1[0x16] * 8 + piVar1[5] * *piVar1 + piVar1[6] * piVar1[1] + piVar1[7] * piVar1[2] +
           piVar1[8] * piVar1[3] + *(int *)(param_1 + 0x9754) * piVar1[4] >> 3 & 0xffU) - param_2;
  iVar4 = (char)param_2 * 8;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = (char)param_2 * -8;
  }
  piVar1[10] = piVar1[10] + iVar3;
  iVar3 = iVar4 - piVar1[5];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0xb] = piVar1[0xb] + iVar3;
  iVar3 = piVar1[5] + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0xc] = piVar1[0xc] + iVar3;
  iVar3 = iVar4 - piVar1[6];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0xd] = piVar1[0xd] + iVar3;
  iVar3 = piVar1[6] + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0xe] = piVar1[0xe] + iVar3;
  iVar3 = iVar4 - piVar1[7];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0xf] = piVar1[0xf] + iVar3;
  iVar3 = piVar1[7] + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0x10] = piVar1[0x10] + iVar3;
  iVar3 = iVar4 - piVar1[8];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0x11] = piVar1[0x11] + iVar3;
  iVar3 = piVar1[8] + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0x12] = piVar1[0x12] + iVar3;
  iVar3 = iVar4 - *(int *)(param_1 + 0x9754);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar1[0x13] = piVar1[0x13] + iVar3;
  iVar4 = *(int *)(param_1 + 0x9754) + iVar4;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  piVar1[0x14] = piVar1[0x14] + iVar4;
  piVar1[9] = (int)(char)((char)uVar2 - (char)piVar1[0x16]);
  *(int *)(param_1 + 0x9754) = piVar1[9];
  piVar1[0x16] = uVar2;
  if ((piVar1[0x15] & 0x1fU) == 0) {
    local_c = piVar1[10];
    local_10 = 0;
    piVar1[10] = 0;
    for (local_14 = 1; local_14 < 0xb; local_14 = local_14 + 1) {
      if ((uint)piVar1[local_14 + 10] < local_c) {
        local_c = piVar1[local_14 + 10];
        local_10 = local_14;
      }
      piVar1[local_14 + 10] = 0;
    }
    switch(local_10) {
    case 1:
      if (*piVar1 + 0x10 < 0 == SCARRY4(*piVar1,0x10)) {
        *piVar1 = *piVar1 + -1;
      }
      break;
    case 2:
      if (*piVar1 < 0x10) {
        *piVar1 = *piVar1 + 1;
      }
      break;
    case 3:
      if (piVar1[1] + 0x10 < 0 == SCARRY4(piVar1[1],0x10)) {
        piVar1[1] = piVar1[1] + -1;
      }
      break;
    case 4:
      if (piVar1[1] < 0x10) {
        piVar1[1] = piVar1[1] + 1;
      }
      break;
    case 5:
      if (piVar1[2] + 0x10 < 0 == SCARRY4(piVar1[2],0x10)) {
        piVar1[2] = piVar1[2] + -1;
      }
      break;
    case 6:
      if (piVar1[2] < 0x10) {
        piVar1[2] = piVar1[2] + 1;
      }
      break;
    case 7:
      if (piVar1[3] + 0x10 < 0 == SCARRY4(piVar1[3],0x10)) {
        piVar1[3] = piVar1[3] + -1;
      }
      break;
    case 8:
      if (piVar1[3] < 0x10) {
        piVar1[3] = piVar1[3] + 1;
      }
      break;
    case 9:
      if (piVar1[4] + 0x10 < 0 == SCARRY4(piVar1[4],0x10)) {
        piVar1[4] = piVar1[4] + -1;
      }
      break;
    case 10:
      if (piVar1[4] < 0x10) {
        piVar1[4] = piVar1[4] + 1;
      }
    }
  }
  return uVar2 & 0xff;
}


