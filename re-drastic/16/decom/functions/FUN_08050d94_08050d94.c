/*
 * Ghidra decompilation
 *
 * Function : FUN_08050d94
 * Address  : 08050d94
 * Program  : drastic16
 */


void FUN_08050d94(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  if (*(byte *)(param_1 + 0x9a86) == 0) {
    uVar3 = (param_2 << 9) >> 0x19;
    uVar1 = (param_2 << 0x11) >> 0x19;
    uVar8 = param_2 & 0x7f;
    uVar2 = (param_2 << 1) >> 0x19;
    pbVar5 = *(byte **)(param_1 + 0x9a40);
    iVar7 = (uint)(byte)(&DAT_080e6df8)[uVar1] + (uint)(byte)(&DAT_080e6df8)[uVar3] +
            (uint)(byte)(&DAT_080e6df8)[uVar8] + (uint)(byte)(&DAT_080e6df8)[uVar2];
    pbVar6 = pbVar5;
    if (uVar8 != 0) {
      pbVar6 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8;
    }
    pbVar5 = pbVar6;
    if (uVar1 != 0) {
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)((param_2 << 0x11) >> 0x19);
    }
    pbVar6 = pbVar5;
    if (uVar3 != 0) {
      pbVar6 = pbVar5 + 1;
      *pbVar5 = (byte)((param_2 << 9) >> 0x19);
    }
    pbVar5 = pbVar6;
    if (uVar2 != 0) {
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)((param_2 << 1) >> 0x19);
    }
    *(byte **)(param_1 + 0x9a48) = pbVar5;
    if (iVar7 == 0) {
      *(byte **)(param_1 + 0x9a40) = pbVar5;
      if ((int)pbVar5 - (param_1 + 0x61ab0) < 0x401) {
        return;
      }
      FUN_08050498(param_1,0x9a40,param_1 + 0x61ab0,param_4);
      return;
    }
  }
  else {
    iVar7 = *(byte *)(param_1 + 0x9a86) - 1;
    puVar4 = *(uint **)(param_1 + 0x9a4c) + 1;
    **(uint **)(param_1 + 0x9a4c) = param_2;
    *(uint **)(param_1 + 0x9a4c) = puVar4;
    if (iVar7 == 0) {
      *(uint **)(param_1 + 0x9a44) = puVar4;
      *(int *)(param_1 + 0x9a40) = *(int *)(param_1 + 0x9a48);
      if (0x400 < *(int *)(param_1 + 0x9a48) - (param_1 + 0x61ab0)) {
        FUN_08050498();
      }
    }
  }
  *(char *)(param_1 + 0x9a86) = (char)iVar7;
  return;
}


