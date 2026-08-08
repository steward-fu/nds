/*
 * Ghidra decompilation
 *
 * Function : FUN_080dc968
 * Address  : 080dc968
 * Program  : drastic16
 */


void FUN_080dc968(int param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 < 5) {
    param_1 = 0;
  }
  if (4 < param_2) {
    uVar6 = *param_4 & 7;
    pbVar2 = (byte *)(param_1 + (param_2 - 4));
    iVar8 = 0;
    iVar5 = -1;
    while (pbVar3 = (byte *)(param_1 + iVar8), pbVar3 < pbVar2) {
      bVar1 = *(byte *)(param_1 + iVar8);
      while ((bVar1 & 0xfe) != 0xe8) {
        pbVar3 = pbVar3 + 1;
        if (pbVar3 == pbVar2) goto LAB_080dc9e8;
        bVar1 = *pbVar3;
      }
      iVar7 = (int)pbVar3 - param_1;
      if ((uint)(iVar7 - iVar5) < 4) {
        uVar6 = uVar6 << ((iVar7 - iVar5) - 1U & 0xff) & 7;
        if ((uVar6 == 0) ||
           (((&DAT_080eec68)[uVar6] != '\0' &&
            ((byte)(pbVar3[4 - (uint)(byte)(&DAT_080eec60)[uVar6]] - 1) < 0xfe))))
        goto LAB_080dca7c;
LAB_080dca60:
        iVar8 = iVar7 + 1;
        uVar6 = (uVar6 & 3) << 1 | 1;
        iVar5 = iVar7;
      }
      else {
        uVar6 = 0;
LAB_080dca7c:
        if ((byte)(pbVar3[4] - 1) < 0xfe) goto LAB_080dca60;
        iVar5 = iVar7 + param_3 + 5;
        uVar4 = (uint)pbVar3[3] << 0x10 | (uint)pbVar3[4] << 0x18 | (uint)pbVar3[1] |
                (uint)pbVar3[2] << 8;
        if (param_5 == 0) {
          if (uVar6 == 0) {
            uVar9 = uVar4 - iVar5;
          }
          else {
            do {
              uVar9 = uVar4 - iVar5;
              uVar4 = (1 << ((uint)(byte)(&DAT_080eec60)[uVar6] * -8 + 0x20 & 0xff)) - 1U ^ uVar9;
            } while (0xfd < ((uVar9 >> ((uint)(byte)(&DAT_080eec60)[uVar6] * -8 + 0x18 & 0xff)) - 1
                            & 0xff));
          }
        }
        else if (uVar6 == 0) {
          uVar9 = uVar4 + iVar5;
        }
        else {
          do {
            uVar9 = uVar4 + iVar5;
            uVar4 = (1 << ((uint)(byte)(&DAT_080eec60)[uVar6] * -8 + 0x20 & 0xff)) - 1U ^ uVar9;
          } while (0xfd < ((uVar9 >> ((uint)(byte)(&DAT_080eec60)[uVar6] * -8 + 0x18 & 0xff)) - 1 &
                          0xff));
        }
        pbVar3[1] = (byte)uVar9;
        pbVar3[4] = (byte)((int)(uVar9 << 7) >> 0x1f);
        pbVar3[3] = (byte)(uVar9 >> 0x10);
        pbVar3[2] = (byte)(uVar9 >> 8);
        iVar8 = iVar7 + 5;
        iVar5 = iVar7;
      }
    }
LAB_080dc9e8:
    if (pbVar3 + (-iVar5 - param_1) < (byte *)0x4) {
      uVar6 = uVar6 << ((uint)(pbVar3 + (-iVar5 - param_1) + -1) & 0xff) & 7;
    }
    else {
      uVar6 = 0;
    }
    *param_4 = uVar6;
  }
  return;
}


