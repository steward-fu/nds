/*
 * Ghidra decompilation
 *
 * Function : FUN_08015dcc
 * Address  : 08015dcc
 * Program  : drastic16
 */


void FUN_08015dcc(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *__src;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  byte *__src_00;
  size_t __n_00;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_3 < 4) {
    __n = 0xb;
    __n_00 = 0x2c;
  }
  else {
    __n = 0x10;
    __n_00 = 0x40;
  }
  __src = *(byte **)(param_2 + 0x10) + 1;
  bVar1 = **(byte **)(param_2 + 0x10);
  __src_00 = __src + __n;
  *(byte **)(param_2 + 0x10) = __src;
  memcpy(&local_68,__src,__n);
  *(byte **)(param_2 + 0x10) = __src_00;
  memcpy(&local_58,__src_00,__n_00);
  *(byte **)(param_2 + 0x10) = __src_00 + __n_00;
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  else {
    iVar4 = param_1 + (uint)local_68 * 0x18;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(param_1 + (uint)local_68 * 0x18) = local_58;
    *(int *)(param_1 + 0x180) = iVar4;
    iVar3 = iVar4;
    if (bVar1 != 1) {
      iVar3 = param_1 + (uint)local_67 * 0x18;
      *(undefined4 *)(param_1 + (uint)local_67 * 0x18) = local_54;
      *(int *)(iVar4 + 0xc) = iVar3;
      *(int *)(iVar3 + 0x10) = iVar4;
      if (2 < bVar1) {
        iVar4 = param_1 + (uint)local_66 * 0x18;
        *(undefined4 *)(param_1 + (uint)local_66 * 0x18) = local_50;
        *(int *)(iVar3 + 0xc) = iVar4;
        *(int *)(iVar4 + 0x10) = iVar3;
        iVar3 = iVar4;
        if (3 < bVar1) {
          iVar3 = param_1 + (uint)local_65 * 0x18;
          *(undefined4 *)(param_1 + (uint)local_65 * 0x18) = local_4c;
          *(int *)(iVar4 + 0xc) = iVar3;
          *(int *)(iVar3 + 0x10) = iVar4;
          if (4 < bVar1) {
            iVar4 = param_1 + (uint)local_64 * 0x18;
            *(undefined4 *)(param_1 + (uint)local_64 * 0x18) = local_48;
            *(int *)(iVar3 + 0xc) = iVar4;
            *(int *)(iVar4 + 0x10) = iVar3;
            iVar3 = iVar4;
            if (5 < bVar1) {
              iVar3 = param_1 + (uint)local_63 * 0x18;
              *(undefined4 *)(param_1 + (uint)local_63 * 0x18) = local_44;
              *(int *)(iVar4 + 0xc) = iVar3;
              *(int *)(iVar3 + 0x10) = iVar4;
              if (6 < bVar1) {
                iVar4 = param_1 + (uint)local_62 * 0x18;
                *(undefined4 *)(param_1 + (uint)local_62 * 0x18) = local_40;
                *(int *)(iVar3 + 0xc) = iVar4;
                *(int *)(iVar4 + 0x10) = iVar3;
                iVar3 = iVar4;
                if (7 < bVar1) {
                  iVar3 = param_1 + (uint)local_61 * 0x18;
                  *(undefined4 *)(param_1 + (uint)local_61 * 0x18) = local_3c;
                  *(int *)(iVar4 + 0xc) = iVar3;
                  *(int *)(iVar3 + 0x10) = iVar4;
                  if (8 < bVar1) {
                    iVar4 = param_1 + (uint)local_60 * 0x18;
                    *(undefined4 *)(param_1 + (uint)local_60 * 0x18) = local_38;
                    *(int *)(iVar3 + 0xc) = iVar4;
                    *(int *)(iVar4 + 0x10) = iVar3;
                    iVar3 = iVar4;
                    if (9 < bVar1) {
                      iVar3 = param_1 + (uint)local_5f * 0x18;
                      *(undefined4 *)(param_1 + (uint)local_5f * 0x18) = local_34;
                      *(int *)(iVar4 + 0xc) = iVar3;
                      *(int *)(iVar3 + 0x10) = iVar4;
                      if (10 < bVar1) {
                        iVar4 = param_1 + (uint)local_5e * 0x18;
                        *(undefined4 *)(param_1 + (uint)local_5e * 0x18) = local_30;
                        *(int *)(iVar3 + 0xc) = iVar4;
                        *(int *)(iVar4 + 0x10) = iVar3;
                        iVar3 = iVar4;
                        if (0xb < bVar1) {
                          iVar3 = param_1 + (uint)local_5d * 0x18;
                          *(undefined4 *)(param_1 + (uint)local_5d * 0x18) = local_2c;
                          *(int *)(iVar4 + 0xc) = iVar3;
                          *(int *)(iVar3 + 0x10) = iVar4;
                          if (0xc < bVar1) {
                            iVar4 = param_1 + (uint)local_5c * 0x18;
                            *(undefined4 *)(param_1 + (uint)local_5c * 0x18) = local_28;
                            *(int *)(iVar3 + 0xc) = iVar4;
                            *(int *)(iVar4 + 0x10) = iVar3;
                            iVar3 = iVar4;
                            if (0xd < bVar1) {
                              iVar2 = param_1 + (uint)local_5b * 0x18;
                              *(undefined4 *)(param_1 + (uint)local_5b * 0x18) = local_24;
                              *(int *)(iVar4 + 0xc) = iVar2;
                              *(int *)(iVar2 + 0x10) = iVar4;
                              iVar3 = iVar2;
                              if (0xe < bVar1) {
                                iVar3 = param_1 + (uint)local_5a * 0x18;
                                *(undefined4 *)(param_1 + (uint)local_5a * 0x18) = local_20;
                                *(int *)(iVar2 + 0xc) = iVar3;
                                *(int *)(iVar3 + 0x10) = iVar2;
                                if (0xf < bVar1) {
                                  iVar4 = param_1 + (uint)local_59 * 0x18;
                                  *(undefined4 *)(param_1 + (uint)local_59 * 0x18) = local_1c;
                                  *(int *)(iVar3 + 0xc) = iVar4;
                                  *(int *)(iVar4 + 0x10) = iVar3;
                                  iVar3 = iVar4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return;
}


