/*
 * Ghidra decompilation
 *
 * Function : FUN_08031d2c
 * Address  : 08031d2c
 * Program  : drastic16
 */


void FUN_08031d2c(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)&DAT_0808c94c;
  *(undefined **)(param_1 + 0xa8) = &DAT_0808c94c;
  *(undefined **)(param_1 + 0x130) = &DAT_0808c94c;
  switch(*(uint *)(param_1 + 0x70) & 7) {
  case 1:
    *(undefined **)(param_1 + 0x1b8) = &DAT_0808c94c;
    *(code **)(param_1 + 0x240) = FUN_0808a2ec;
    return;
  case 2:
    pcVar2 = FUN_0808a2ec;
  case 0:
    *(code **)(param_1 + 0x1b8) = pcVar2;
    *(code **)(param_1 + 0x240) = pcVar2;
    return;
  case 3:
    *(undefined **)(param_1 + 0x1b8) = &DAT_0808c94c;
    uVar1 = *(ushort *)(param_1 + 0x2a0);
    break;
  case 4:
    uVar1 = *(ushort *)(param_1 + 0x2a0);
    *(code **)(param_1 + 0x1b8) = FUN_0808a2ec;
    break;
  case 5:
    if ((*(ushort *)(param_1 + 0x218) & 0x80) == 0) {
      *(code **)(param_1 + 0x1b8) = FUN_0808a994;
    }
    else {
      if ((*(ushort *)(param_1 + 0x218) & 4) == 0) {
        pcVar2 = (code *)&DAT_0802c24c;
      }
      else {
        pcVar2 = FUN_0802c990;
      }
      *(code **)(param_1 + 0x1b8) = pcVar2;
    }
    uVar1 = *(ushort *)(param_1 + 0x2a0);
    break;
  case 6:
    *(undefined **)(param_1 + 0x130) = &DAT_0802a9a8;
    *(undefined **)(param_1 + 0x240) = &DAT_0802a9a8;
    *(undefined **)(param_1 + 0x1b8) = &DAT_0802c24c;
  default:
    return;
  }
  if ((uVar1 & 0x80) != 0) {
    if ((uVar1 & 4) == 0) {
      *(undefined **)(param_1 + 0x240) = &DAT_0802c24c;
      return;
    }
    *(code **)(param_1 + 0x240) = FUN_0802c990;
    return;
  }
  *(code **)(param_1 + 0x240) = FUN_0808a994;
  return;
}


