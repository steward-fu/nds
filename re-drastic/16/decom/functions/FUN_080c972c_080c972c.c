/*
 * Ghidra decompilation
 *
 * Function : FUN_080c972c
 * Address  : 080c972c
 * Program  : drastic16
 */


void FUN_080c972c(int param_1,char param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x4c48) == '\0') {
    FUN_080d1b7c(param_1,param_2);
    cVar1 = FUN_080ceb2c(param_1);
    if (cVar1 != '\x01') {
      return;
    }
    if ((param_2 != '\x01') && (cVar1 = FUN_080ca03c(param_1), cVar1 != '\x01')) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x4c40);
    *(int *)(param_1 + 0x4c40) = iVar3 + -1;
    *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(iVar3 == 0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
  }
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((*(int *)(param_1 + 0x4c44) < 0) ||
               ((*(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)
                , *(int *)(param_1 + 0x78) + -0x1e < *(int *)(param_1 + 4) &&
                (cVar1 = FUN_080ceb2c(param_1), cVar1 != '\x01')))) goto LAB_080c9ee8;
            if (((*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8))
                 < 0x10e) &&
               ((*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x70) &&
                (FUN_080c9f00(param_1), *(char *)(param_1 + 0x4c48) != '\0')))) {
              return;
            }
            if (*(int *)(param_1 + 0x9748) == 0) break;
            iVar3 = FUN_080d4ef0(param_1,param_1 + 4,
                                 param_1 + *(int *)(param_1 + 0x9750) * 0xeec + 0x5794);
            if (iVar3 == 0x100) {
              cVar1 = FUN_080ca03c(param_1);
              if (cVar1 != '\x01') goto LAB_080c9ee8;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x4b34);
              iVar7 = *(int *)(param_1 + 0x70);
              *(int *)(param_1 + 0x70) = iVar7 + 1;
              uVar2 = FUN_080ca80c(param_1,iVar3);
              *(undefined *)(iVar6 + iVar7) = uVar2;
              *(int *)(param_1 + 0x9750) = *(int *)(param_1 + 0x9750) + 1;
              if (*(int *)(param_1 + 0x9750) == *(int *)(param_1 + 0x974c)) {
                *(undefined4 *)(param_1 + 0x9750) = 0;
              }
              iVar3 = *(int *)(param_1 + 0x4c40);
              *(int *)(param_1 + 0x4c40) = iVar3 + -1;
              *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(iVar3 == 0);
            }
          }
          iVar3 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x94);
          if (0xff < iVar3) break;
          iVar6 = *(int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = iVar6 + 1;
          *(char *)(*(int *)(param_1 + 0x4b34) + iVar6) = (char)iVar3;
          iVar3 = *(int *)(param_1 + 0x4c40);
          *(int *)(param_1 + 0x4c40) = iVar3 + -1;
          *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(iVar3 == 0);
        }
        if (iVar3 < 0x10e) break;
        local_14 = (byte)(&DAT_08101fca)[iVar3] + 3;
        cVar1 = (&DAT_08101fe6)[iVar3];
        if (cVar1 != '\0') {
          uVar4 = FUN_080d229c(param_1 + 4);
          local_14 = local_14 + (uVar4 >> (uint)(byte)(0x10 - cVar1));
          FUN_080d2234(param_1 + 4,cVar1);
        }
        iVar3 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0xf80);
        local_18 = *(int *)(&DAT_08102110 + iVar3 * 4) + 1;
        cVar1 = (&DAT_081021d0)[iVar3];
        if (cVar1 != '\0') {
          uVar4 = FUN_080d229c(param_1 + 4);
          local_18 = local_18 + (uVar4 >> (uint)(byte)(0x10 - cVar1));
          FUN_080d2234(param_1 + 4,cVar1);
        }
        iVar3 = local_14;
        if ((0x1fff < local_18) && (iVar3 = local_14 + 1, 0x3ffff < local_18)) {
          iVar3 = local_14 + 2;
        }
        local_14 = iVar3;
        FUN_080c9660(param_1,local_14,local_18);
      }
      if (iVar3 == 0x10d) break;
      if (iVar3 == 0x100) {
        FUN_080c9660(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      }
      else if (iVar3 < 0x105) {
        uVar4 = *(uint *)(param_1 + ((*(int *)(param_1 + 100) - iVar3 & 3U) + 0x14) * 4 + 4);
        iVar3 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x2d58);
        local_1c = (byte)(&DAT_081020d8)[iVar3] + 2;
        cVar1 = (&DAT_081020f4)[iVar3];
        if (cVar1 != '\0') {
          uVar5 = FUN_080d229c(param_1 + 4);
          local_1c = local_1c + (uVar5 >> (uint)(byte)(0x10 - cVar1));
          FUN_080d2234(param_1 + 4,cVar1);
        }
        iVar3 = local_1c;
        if (((0x100 < uVar4) && (iVar3 = local_1c + 1, 0x1fff < uVar4)) &&
           (iVar3 = local_1c + 2, 0x3ffff < uVar4)) {
          iVar3 = local_1c + 3;
        }
        local_1c = iVar3;
        FUN_080c9660(param_1,local_1c,uVar4);
      }
      else if (iVar3 < 0x10e) {
        local_20 = (byte)(&DAT_081020fb)[iVar3] + 1;
        cVar1 = (&DAT_08102103)[iVar3];
        if (cVar1 != '\0') {
          uVar4 = FUN_080d229c(param_1 + 4);
          local_20 = local_20 + (uVar4 >> (uint)(byte)(0x10 - cVar1));
          FUN_080d2234(param_1 + 4,cVar1);
        }
        FUN_080c9660(param_1,2,local_20);
      }
    }
    cVar1 = FUN_080ca03c(param_1);
  } while (cVar1 == '\x01');
LAB_080c9ee8:
  FUN_080ca648(param_1);
  FUN_080c9f00(param_1);
  return;
}


