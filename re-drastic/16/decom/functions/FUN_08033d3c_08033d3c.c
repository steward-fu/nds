/*
 * Ghidra decompilation
 *
 * Function : FUN_08033d3c
 * Address  : 08033d3c
 * Program  : drastic16
 */


void FUN_08033d3c(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  piVar7 = (int *)param_1[0x26];
  bVar1 = *(byte *)((int)piVar7 + 0x97);
  iVar5 = *piVar7;
  iVar9 = piVar7[0x1d];
  iVar4 = *(int *)(*param_1 + (*(byte *)((int)param_1 + 0x97) + 0x448) * 4);
  iVar8 = piVar7[0x1e];
  *(undefined *)((int)param_1 + 0x95) = 3;
  *(undefined *)(param_1 + 0x25) = 0;
  *(undefined *)((int)param_1 + 0x96) = 0;
  iVar5 = *(int *)(iVar5 + (bVar1 + 0x760) * 4 + 4);
  param_1[5] = iVar4;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((int)param_1 + 0x82) = 0;
  *(undefined2 *)((int)param_1 + 0x86) = 0;
  *(undefined2 *)((int)param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((int)param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x203ce] = 0;
  param_1[0x203cf] = 0;
  param_1[0x28] = iVar5;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x2b] = iVar9;
  param_1[0x2c] = iVar8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)((int)param_1 + 0x10a) = 0;
  *(undefined2 *)(param_1 + 0x43) = 0;
  piVar7 = (int *)param_1[0x48];
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)((int)param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((int)param_1 + 0x116) = 0x7f;
  *(undefined2 *)(param_1 + 0x46) = 0x7f;
  *(undefined *)((int)param_1 + 0x11b) = 0xf;
  *(undefined *)(param_1 + 0x47) = 4;
  *(undefined *)((int)param_1 + 0x11a) = 7;
  *(undefined *)((int)param_1 + 0x11e) = 1;
  bVar1 = *(byte *)((int)piVar7 + 0x97);
  iVar5 = *piVar7;
  iVar4 = piVar7[0x1e];
  param_1[0x4d] = piVar7[0x1d];
  param_1[0x4e] = iVar4;
  iVar4 = *(int *)(iVar5 + (bVar1 + 0x760) * 4 + 4);
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x4a] = iVar4;
  *(undefined *)((int)param_1 + 0x1a3) = 0xf;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x60] = 0;
  *(undefined2 *)((int)param_1 + 0x192) = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  *(undefined2 *)((int)param_1 + 0x196) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined2 *)((int)param_1 + 0x19a) = 0;
  *(undefined2 *)(param_1 + 0x67) = 0;
  piVar6 = (int *)param_1[0x6a];
  *(undefined *)(param_1 + 0x69) = 4;
  *(undefined *)((int)param_1 + 0x1a2) = 7;
  *(undefined *)((int)param_1 + 0x1a6) = 1;
  param_1[0x61] = 0;
  *(undefined2 *)((int)param_1 + 0x19e) = 0x7f;
  *(undefined2 *)(param_1 + 0x68) = 0x7f;
  bVar1 = *(byte *)((int)piVar6 + 0x97);
  iVar4 = *piVar6;
  iVar5 = piVar6[0x1e];
  piVar7 = (int *)param_1[0x8c];
  param_1[0x6f] = piVar6[0x1d];
  iVar4 = *(int *)(iVar4 + (bVar1 + 0x760) * 4 + 4);
  param_1[0x70] = iVar5;
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  param_1[0x6c] = iVar4;
  *(undefined *)((int)param_1 + 0x22b) = 0xf;
  *(undefined *)((int)param_1 + 0x22e) = 1;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined *)(param_1 + 0x8b) = 4;
  *(undefined *)((int)param_1 + 0x22a) = 7;
  *(undefined2 *)((int)param_1 + 0x21a) = 0;
  *(undefined2 *)(param_1 + 0x87) = 0;
  *(undefined2 *)((int)param_1 + 0x21e) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined2 *)((int)param_1 + 0x222) = 0;
  *(undefined2 *)(param_1 + 0x89) = 0;
  *(undefined2 *)((int)param_1 + 0x226) = 0x7f;
  *(undefined2 *)(param_1 + 0x8a) = 0x7f;
  iVar4 = *(int *)(*piVar7 + (*(byte *)((int)piVar7 + 0x97) + 0x760) * 4 + 4);
  param_1[0x8f] = 0;
  param_1[0x8e] = iVar4;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  iVar5 = piVar7[0x1d];
  iVar4 = piVar7[0x1e];
  *(undefined *)((int)param_1 + 0x2b3) = 0xf;
  param_1[0x91] = iVar5;
  param_1[0x92] = iVar4;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined *)(param_1 + 0xad) = 4;
  *(undefined *)((int)param_1 + 0x2b2) = 7;
  *(undefined *)((int)param_1 + 0x2b6) = 1;
  *(undefined2 *)((int)param_1 + 0x2a2) = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined2 *)((int)param_1 + 0x2a6) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)((int)param_1 + 0x2aa) = 0;
  *(undefined2 *)(param_1 + 0xab) = 0;
  *(undefined2 *)((int)param_1 + 0x2ae) = 0x7f;
  *(undefined2 *)(param_1 + 0xac) = 0x7f;
  FUN_08031b14();
  pcVar3 = (code *)&DAT_0808c94c;
  param_1[0x2a] = (int)&DAT_0808c94c;
  param_1[0x4c] = (int)&DAT_0808c94c;
  switch(param_1[0x1c] & 7) {
  case 1:
    param_1[0x6e] = (int)&DAT_0808c94c;
    param_1[0x90] = (int)FUN_0808a2ec;
    return;
  case 2:
    pcVar3 = FUN_0808a2ec;
  case 0:
    param_1[0x6e] = (int)pcVar3;
    param_1[0x90] = (int)pcVar3;
    return;
  case 3:
    param_1[0x6e] = (int)&DAT_0808c94c;
    uVar2 = *(ushort *)(param_1 + 0xa8);
    break;
  case 4:
    uVar2 = *(ushort *)(param_1 + 0xa8);
    param_1[0x6e] = (int)FUN_0808a2ec;
    break;
  case 5:
    if ((*(ushort *)(param_1 + 0x86) & 0x80) == 0) {
      param_1[0x6e] = (int)FUN_0808a994;
    }
    else {
      if ((*(ushort *)(param_1 + 0x86) & 4) == 0) {
        pcVar3 = (code *)&DAT_0802c24c;
      }
      else {
        pcVar3 = FUN_0802c990;
      }
      param_1[0x6e] = (int)pcVar3;
    }
    uVar2 = *(ushort *)(param_1 + 0xa8);
    break;
  case 6:
    param_1[0x4c] = (int)&DAT_0802a9a8;
    param_1[0x90] = (int)&DAT_0802a9a8;
    param_1[0x6e] = (int)&DAT_0802c24c;
  default:
    return;
  }
  if ((uVar2 & 0x80) != 0) {
    if ((uVar2 & 4) == 0) {
      param_1[0x90] = (int)&DAT_0802c24c;
      return;
    }
    param_1[0x90] = (int)FUN_0802c990;
    return;
  }
  param_1[0x90] = (int)FUN_0808a994;
  return;
}


