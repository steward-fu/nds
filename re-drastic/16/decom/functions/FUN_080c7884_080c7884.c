/*
 * Ghidra decompilation
 *
 * Function : FUN_080c7884
 * Address  : 080c7884
 * Program  : drastic16
 */


void FUN_080c7884(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  FUN_080d1b7c(param_1,param_2);
  FUN_080c90a0(param_1,param_2);
  FUN_080ceb2c(param_1);
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
  }
  else {
    FUN_080c91ec(param_1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x4c40);
  *(int *)(param_1 + 0x4c40) = iVar2 + -1;
  *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(iVar2 == 0);
  if (-1 < *(int *)(param_1 + 0x4c44)) {
    FUN_080c8f14(param_1);
    *(undefined4 *)(param_1 + 0x5784) = 8;
  }
  while (-1 < *(int *)(param_1 + 0x4c44)) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
    if ((*(int *)(param_1 + 0x78) + -0x1e < *(int *)(param_1 + 4)) &&
       (cVar1 = FUN_080ceb2c(param_1), cVar1 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) break;
    if (((*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)) < 0x10e
        ) && (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x70))) {
      FUN_080c9f00(param_1);
    }
    if (*(int *)(param_1 + 0x577c) == 0) {
      *(int *)(param_1 + 0x5784) = *(int *)(param_1 + 0x5784) + -1;
      if (*(int *)(param_1 + 0x5784) < 0) {
        FUN_080c8f14(param_1);
        *(undefined4 *)(param_1 + 0x5784) = 7;
      }
      if ((*(uint *)(param_1 + 0x575c) & 0x80) == 0) {
        *(int *)(param_1 + 0x575c) = *(int *)(param_1 + 0x575c) << 1;
        *(int *)(param_1 + 0x5784) = *(int *)(param_1 + 0x5784) + -1;
        if (*(int *)(param_1 + 0x5784) < 0) {
          FUN_080c8f14(param_1);
          *(undefined4 *)(param_1 + 0x5784) = 7;
        }
        if ((*(uint *)(param_1 + 0x575c) & 0x80) == 0) {
          *(int *)(param_1 + 0x575c) = *(int *)(param_1 + 0x575c) << 1;
          FUN_080c7c24(param_1);
        }
        else {
          *(int *)(param_1 + 0x575c) = *(int *)(param_1 + 0x575c) << 1;
          if (*(uint *)(param_1 + 0x5788) < *(uint *)(param_1 + 0x578c)) {
            FUN_080c8974(param_1);
          }
          else {
            FUN_080c8330(param_1);
          }
        }
      }
      else {
        *(int *)(param_1 + 0x575c) = *(int *)(param_1 + 0x575c) << 1;
        if (*(uint *)(param_1 + 0x5788) < *(uint *)(param_1 + 0x578c)) {
          FUN_080c8330(param_1);
        }
        else {
          FUN_080c8974(param_1);
        }
      }
    }
    else {
      FUN_080c8974(param_1);
    }
  }
  FUN_080c9f00(param_1);
  return;
}


