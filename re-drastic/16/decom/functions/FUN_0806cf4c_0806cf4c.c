/*
 * Ghidra decompilation
 *
 * Function : FUN_0806cf4c
 * Address  : 0806cf4c
 * Program  : drastic16
 */


void FUN_0806cf4c(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = *(ushort *)((int)param_2 + 0x16);
  if (*(short *)(param_2 + 6) != 0) {
    uVar11 = 0;
    piVar9 = (int *)param_2[2];
    do {
      iVar6 = param_2[1];
      uVar3 = piVar9[3];
      iVar10 = iVar6 + (uint)*(ushort *)(piVar9 + 6) * 0x1c;
      if ((piVar9[5] & 6U) == 0) {
        uVar4 = uVar3 - param_2[3];
        if ((uVar4 < (uint)uVar2 << 1 && 0 < (int)uVar4) && ((uint)piVar9[4] <= uVar3)) {
          if (param_3 == 0) {
            iVar7 = (int)uVar4 >> 2;
          }
          else {
            iVar7 = (int)uVar4 >> 1;
          }
          *(short *)((int)piVar9 + 0x1a) = (short)iVar7;
          iVar6 = iVar6 + iVar7 * 0x1c;
          *(short *)(iVar10 + 0xc) = (short)iVar7;
          bVar1 = *(byte *)(iVar6 + 0x16);
          *(ushort *)(iVar10 + 0x12) =
               *(ushort *)(iVar6 + 0x12) | *(ushort *)(iVar10 + 0x12) | *(ushort *)(iVar6 + 0xe);
          *(byte *)(iVar6 + 0x16) = bVar1 | 2;
        }
        else {
          iVar6 = *param_2;
          if (*(int *)(iVar6 + 0x80004) == 0) {
LAB_0806d0a0:
            iVar6 = FUN_0806cd64(param_1);
            if (iVar6 == 0) {
              iVar8 = *param_2;
              iVar6 = *(int *)(iVar8 + 0x60000);
              iVar7 = iVar8 + iVar6 * 0xc;
              *(int *)(iVar7 + 4) = piVar9[3];
              *(int *)(iVar8 + 0x60000) = iVar6 + 1;
              piVar9[2] = iVar7;
              *piVar9 = 0;
              *(undefined2 *)(iVar10 + 0x12) = 0x7fff;
              *(undefined *)(iVar10 + 0x15) = 0xf;
            }
            else {
              iVar7 = *(int *)(iVar6 + -4);
              piVar9[2] = 0;
              *(ushort *)(iVar10 + 0x12) =
                   (ushort)(((uint)*(ushort *)(iVar7 + 0xc) << 0x11) >> 0x11) |
                   *(ushort *)(iVar10 + 0x12);
              *(byte *)(iVar10 + 0x15) =
                   (byte)*(undefined2 *)(iVar7 + 0xe) | *(byte *)(iVar10 + 0x15);
              *piVar9 = iVar6;
            }
          }
          else {
            if (uVar3 != *(uint *)(iVar6 + 0x60004)) {
              iVar7 = 0;
              puVar5 = (uint *)(iVar6 + 0x60004);
              do {
                iVar7 = iVar7 + 1;
                if (iVar7 == *(int *)(iVar6 + 0x80004)) goto LAB_0806d0a0;
                puVar5 = puVar5 + 1;
              } while (uVar3 != *puVar5);
            }
            iVar7 = *(int *)(iVar6 + 0x60000);
            iVar8 = iVar6 + iVar7 * 0xc;
            *(uint *)(iVar8 + 4) = uVar3;
            *(int *)(iVar6 + 0x60000) = iVar7 + 1;
            piVar9[2] = iVar8;
            *piVar9 = 0;
            *(undefined2 *)(iVar10 + 0x12) = 0x7fff;
            *(undefined *)(iVar10 + 0x15) = 0xf;
          }
        }
      }
      else {
        *(undefined2 *)(iVar10 + 0x12) = 0x7fff;
        *(undefined *)(iVar10 + 0x15) = 0xf;
      }
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 7;
    } while (uVar11 < *(ushort *)(param_2 + 6));
  }
  return;
}


