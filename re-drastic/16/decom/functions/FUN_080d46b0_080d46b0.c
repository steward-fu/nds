/*
 * Ghidra decompilation
 *
 * Function : FUN_080d46b0
 * Address  : 080d46b0
 * Program  : drastic16
 */


int FUN_080d46b0(ushort *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  if (*param_1 == 0x100) {
    local_c = param_2 + 0x640;
    *(undefined4 *)(param_2 + 0x4a84) = 1;
  }
  else {
    if (param_3 < (int)((uint)**(ushort **)(param_1 + 4) - (uint)*param_1)) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    if ((uint)param_1[1] < (uint)*param_1 * 0xb) {
      iVar3 = 8;
    }
    else {
      iVar3 = 0;
    }
    if (param_3 < *(int *)(param_2 + 0x654)) {
      iVar4 = 0x10;
    }
    else {
      iVar4 = 0;
    }
    local_c = param_2 + (uint)*(byte *)(param_2 + param_3 + 0x76b) * 0x40 +
              iVar2 + iVar3 + iVar4 + (uint)*(byte *)(param_2 + 0xa6e) * 4;
    uVar1 = FUN_080d2684(local_c);
    *(undefined4 *)(param_2 + 0x4a84) = uVar1;
  }
  return local_c;
}


