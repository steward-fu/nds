/*
 * Ghidra decompilation
 *
 * Function : FUN_080800fc
 * Address  : 080800fc
 * Program  : drastic16
 */


uint FUN_080800fc(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  
  iVar7 = param_1 + 0x480;
  uVar1 = *(ushort *)(param_1 + 0x49c);
  uVar5 = (uint)uVar1;
  if ((param_2 < 0xfd) && (uVar3 = (uint)*(byte *)(iVar7 + param_2), uVar3 != 0xff)) {
    *(ushort *)(param_1 + 0x49c) = uVar1 | (ushort)(param_3 << uVar3);
    *param_4 = 0;
    return uVar3;
  }
  *param_4 = 1;
  iVar8 = param_1 + 0x400;
  uVar2 = (undefined)param_2;
  if (((*(byte *)(param_1 + 0x405) & 0xfd) != 0xfd) || (uVar3 = uVar5 & 1, (uVar1 & 1) != 0)) {
    if (((*(byte *)(param_1 + 0x40d) & 0xfd) == 0xfd) && ((uVar1 & 2) == 0)) {
      uVar3 = 1;
    }
    else if (((*(byte *)(param_1 + 0x415) & 0xfd) == 0xfd) && ((uVar1 & 4) == 0)) {
      uVar3 = 2;
    }
    else if (((*(byte *)(param_1 + 0x41d) & 0xfd) == 0xfd) && ((uVar1 & 8) == 0)) {
      uVar3 = 3;
    }
    else if (((*(byte *)(param_1 + 0x425) & 0xfd) == 0xfd) && ((uVar1 & 0x10) == 0)) {
      uVar3 = 4;
    }
    else if (((*(byte *)(param_1 + 0x42d) & 0xfd) == 0xfd) && ((uVar1 & 0x20) == 0)) {
      uVar3 = 5;
    }
    else if (((*(byte *)(param_1 + 0x435) & 0xfd) == 0xfd) && ((uVar1 & 0x40) == 0)) {
      uVar3 = 6;
    }
    else if (((*(byte *)(param_1 + 0x43d) & 0xfd) == 0xfd) && ((uVar1 & 0x80) == 0)) {
      uVar3 = 7;
    }
    else if (((*(byte *)(param_1 + 0x445) & 0xfd) == 0xfd) && ((uVar1 & 0x100) == 0)) {
      uVar3 = 8;
    }
    else if (((*(byte *)(param_1 + 0x44d) & 0xfd) == 0xfd) && ((uVar1 & 0x200) == 0)) {
      uVar3 = 9;
    }
    else if (((*(byte *)(param_1 + 0x455) & 0xfd) == 0xfd) && ((uVar1 & 0x400) == 0)) {
      uVar3 = 10;
    }
    else if (((*(byte *)(param_1 + 0x45d) & 0xfd) == 0xfd) && ((uVar1 & 0x800) == 0)) {
      uVar3 = 0xb;
    }
    else if (((*(byte *)(param_1 + 0x465) & 0xfd) == 0xfd) && ((uVar1 & 0x1000) == 0)) {
      uVar3 = 0xc;
    }
    else if (((*(byte *)(param_1 + 0x46d) & 0xfd) == 0xfd) && ((uVar1 & 0x2000) == 0)) {
      uVar3 = 0xd;
    }
    else {
      if (((*(byte *)(param_1 + 0x475) & 0xfd) != 0xfd) || ((uVar1 & 0x4000) != 0)) {
        uVar3 = *(uint *)(param_1 + 0x490);
        do {
          uVar3 = uVar3 + 1 & 0xf;
          if (*(uint *)(param_1 + 0x490) == uVar3) {
            uVar3 = *(uint *)(param_1 + 0x494);
            do {
              uVar3 = uVar3 + 1 & 0xf;
              if (*(uint *)(param_1 + 0x494) == uVar3) {
                uVar3 = *(uint *)(param_1 + 0x498);
                do {
                  uVar3 = uVar3 + 1 & 0xf;
                  if (*(uint *)(param_1 + 0x498) == uVar3) {
                    if ((uVar1 & 0x4000) == 0) {
                      uVar5 = 0xe;
                    }
                    else if ((uVar1 & 0x2000) == 0) {
                      uVar5 = 0xd;
                    }
                    else if ((uVar1 & 0x1000) == 0) {
                      uVar5 = 0xc;
                    }
                    else if ((uVar1 & 0x800) == 0) {
                      uVar5 = 0xb;
                    }
                    else if ((uVar1 & 0x400) == 0) {
                      uVar5 = 10;
                    }
                    else if ((uVar1 & 0x200) == 0) {
                      uVar5 = 9;
                    }
                    else if ((uVar1 & 0x100) == 0) {
                      uVar5 = 8;
                    }
                    else if ((uVar1 & 0x80) == 0) {
                      uVar5 = 7;
                    }
                    else if ((uVar1 & 0x40) == 0) {
                      uVar5 = 6;
                    }
                    else if ((uVar1 & 0x20) == 0) {
                      uVar5 = 5;
                    }
                    else if ((uVar1 & 0x10) == 0) {
                      uVar5 = 4;
                    }
                    else if ((uVar1 & 8) == 0) {
                      uVar5 = 3;
                    }
                    else if ((uVar1 & 4) == 0) {
                      uVar5 = 2;
                    }
                    else if ((uVar1 & 2) == 0) {
                      uVar5 = 1;
                    }
                    else {
                      uVar5 = uVar5 & 1;
                      if ((uVar1 & 1) != 0) {
                        printf("FATAL: Could not allocate register to emulated reg %d!\n");
                        return 0xff;
                      }
                    }
                    iVar6 = param_1 + (uVar5 + 0x80) * 8;
                    uVar3 = (uint)*(byte *)(iVar6 + 5);
                    iVar8 = param_2 - uVar3;
                    if (iVar8 != 0) {
                      iVar8 = 1;
                    }
                    if (0xfc < uVar3) {
                      iVar8 = 0;
                    }
                    if (((iVar8 != 0) &&
                        (*(undefined *)(iVar7 + uVar3) = 0xff, *(char *)(iVar6 + 6) != '\0')) &&
                       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar3 & 1U) !=
                        0)) {
                      uVar4 = (uVar3 + 0x3fffffeb) * 4;
                      puVar9 = *(uint **)(param_1 + 0x4ac);
                      if ((int)uVar4 < 0) {
                        uVar4 = (uVar3 + 0x3fffffeb) * -4;
                        uVar3 = 0;
                      }
                      else {
                        uVar3 = 0x800000;
                      }
                      *puVar9 = uVar5 << 0xc | 0xe50b0000 | uVar3 | uVar4;
                      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
                    }
                    if (param_2 < 0xfd) {
                      *(char *)(iVar7 + param_2) = (char)uVar5;
                    }
                    *(undefined *)(iVar6 + 5) = uVar2;
                    *(ushort *)(param_1 + 0x49c) =
                         *(ushort *)(param_1 + 0x49c) | (ushort)(param_3 << uVar5);
                    return uVar5;
                  }
                  uVar4 = (uint)*(byte *)(iVar8 + uVar3 * 8 + 5);
                } while (((0xfc < uVar4) ||
                         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U)
                          != 0)) || ((uVar5 & 1 << uVar3) != 0));
                iVar8 = param_1 + (uVar3 + 0x80) * 8;
                uVar5 = (uint)*(byte *)(iVar8 + 5);
                iVar6 = param_2 - uVar5;
                if (iVar6 != 0) {
                  iVar6 = 1;
                }
                if (0xfc < uVar5) {
                  iVar6 = 0;
                }
                if (((iVar6 != 0) &&
                    (*(undefined *)(iVar7 + uVar5) = 0xff, *(char *)(iVar8 + 6) != '\0')) &&
                   (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0))
                {
                  uVar4 = (uVar5 + 0x3fffffeb) * 4;
                  puVar9 = *(uint **)(param_1 + 0x4ac);
                  if ((int)uVar4 < 0) {
                    uVar4 = (uVar5 + 0x3fffffeb) * -4;
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = 0x800000;
                  }
                  *puVar9 = uVar3 << 0xc | 0xe50b0000 | uVar5 | uVar4;
                  *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
                }
                if (param_2 < 0xfd) {
                  *(char *)(iVar7 + param_2) = (char)uVar3;
                }
                *(undefined *)(iVar8 + 5) = uVar2;
                *(uint *)(param_1 + 0x498) = uVar3;
                *(ushort *)(param_1 + 0x49c) =
                     *(ushort *)(param_1 + 0x49c) | (ushort)(param_3 << uVar3);
                return uVar3;
              }
            } while ((*(char *)(iVar8 + uVar3 * 8 + 4) != -1) || ((uVar5 & 1 << uVar3) != 0));
            iVar8 = param_1 + (uVar3 + 0x80) * 8;
            uVar5 = (uint)*(byte *)(iVar8 + 5);
            iVar6 = param_2 - uVar5;
            if (iVar6 != 0) {
              iVar6 = 1;
            }
            if (0xfc < uVar5) {
              iVar6 = 0;
            }
            if (((iVar6 != 0) &&
                (*(undefined *)(iVar7 + uVar5) = 0xff, *(char *)(iVar8 + 6) != '\0')) &&
               (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0)) {
              uVar4 = (uVar5 + 0x3fffffeb) * 4;
              puVar9 = *(uint **)(param_1 + 0x4ac);
              if ((int)uVar4 < 0) {
                uVar4 = (uVar5 + 0x3fffffeb) * -4;
                uVar5 = 0;
              }
              else {
                uVar5 = 0x800000;
              }
              *puVar9 = uVar3 << 0xc | 0xe50b0000 | uVar5 | uVar4;
              *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
            }
            if (param_2 < 0xfd) {
              *(char *)(iVar7 + param_2) = (char)uVar3;
            }
            *(undefined *)(iVar8 + 5) = uVar2;
            *(uint *)(param_1 + 0x494) = uVar3;
            *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | (ushort)(param_3 << uVar3)
            ;
            return uVar3;
          }
        } while ((*(char *)(iVar8 + uVar3 * 8 + 5) != -2) || ((uVar5 & 1 << uVar3) != 0));
        iVar8 = param_1 + (uVar3 + 0x80) * 8;
        uVar5 = (uint)*(byte *)(iVar8 + 5);
        iVar6 = param_2 - uVar5;
        if (iVar6 != 0) {
          iVar6 = 1;
        }
        if (0xfc < uVar5) {
          iVar6 = 0;
        }
        if (((iVar6 != 0) && (*(undefined *)(iVar7 + uVar5) = 0xff, *(char *)(iVar8 + 6) != '\0'))
           && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0)) {
          uVar4 = (uVar5 + 0x3fffffeb) * 4;
          puVar9 = *(uint **)(param_1 + 0x4ac);
          if ((int)uVar4 < 0) {
            uVar4 = (uVar5 + 0x3fffffeb) * -4;
            uVar5 = 0;
          }
          else {
            uVar5 = 0x800000;
          }
          *puVar9 = uVar3 << 0xc | 0xe50b0000 | uVar5 | uVar4;
          *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
        }
        if (param_2 < 0xfd) {
          *(char *)(iVar7 + param_2) = (char)uVar3;
        }
        *(undefined *)(iVar8 + 5) = uVar2;
        *(uint *)(param_1 + 0x490) = uVar3;
        *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | (ushort)(param_3 << uVar3);
        return uVar3;
      }
      uVar3 = 0xe;
    }
  }
  iVar6 = param_1 + (uVar3 + 0x80) * 8;
  uVar5 = (uint)*(byte *)(iVar6 + 5);
  iVar8 = param_2 - uVar5;
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  if (0xfc < uVar5) {
    iVar8 = 0;
  }
  if (((iVar8 != 0) && (*(undefined *)(iVar7 + uVar5) = 0xff, *(char *)(iVar6 + 6) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0)) {
    uVar4 = (uVar5 + 0x3fffffeb) * 4;
    puVar9 = *(uint **)(param_1 + 0x4ac);
    if ((int)uVar4 < 0) {
      uVar4 = (uVar5 + 0x3fffffeb) * -4;
      uVar5 = 0;
    }
    else {
      uVar5 = 0x800000;
    }
    *puVar9 = uVar3 << 0xc | 0xe50b0000 | uVar5 | uVar4;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
  }
  if (param_2 < 0xfd) {
    *(char *)(iVar7 + param_2) = (char)uVar3;
  }
  *(undefined *)(iVar6 + 5) = uVar2;
  *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | (ushort)(param_3 << uVar3);
  return uVar3;
}


