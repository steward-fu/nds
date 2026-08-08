/*
 * Ghidra decompilation
 *
 * Function : render_scanline_shade_c
 * Address  : 001398c0
 * Program  : drastic64
 */


void render_scanline_shade_c(long param_1,byte *param_2,long param_3,uint *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0xa2) * 2;
  if (0x10 < *(ushort *)(param_1 + 0xa2)) {
    iVar2 = 0x20;
  }
  iVar3 = 0x20 - iVar2;
  iVar2 = iVar2 * 0x3f + 0x10;
  pbVar8 = (byte *)(param_3 + 0x20);
  pbVar1 = param_2 + 0x100;
  if ((*(ushort *)(param_1 + 0xa0) & 0x40) != 0) {
    iVar2 = 0x10;
  }
  do {
    uVar7 = *param_4;
    pbVar4 = pbVar8 + -0x20;
    pbVar6 = param_2;
    do {
      while( true ) {
        pbVar5 = pbVar4;
        if ((uVar7 & 1) == 0) break;
        uVar7 = uVar7 >> 1;
        *pbVar6 = (byte)(iVar2 + (uint)*pbVar5 * iVar3 >> 5);
        pbVar6[0x100] = (byte)(iVar2 + (uint)pbVar5[0x100] * iVar3 >> 5);
        pbVar6[0x200] = (byte)(iVar2 + (uint)pbVar5[0x200] * iVar3 >> 5);
        pbVar4 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
        if (pbVar5 + 1 == pbVar8) goto LAB_00139988;
      }
      *pbVar6 = *pbVar5;
      pbVar6[0x100] = pbVar5[0x100];
      uVar7 = uVar7 >> 1;
      pbVar6[0x200] = pbVar5[0x200];
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar5 + 1;
    } while (pbVar5 + 1 != pbVar8);
LAB_00139988:
    param_2 = param_2 + 0x20;
    pbVar8 = pbVar5 + 0x21;
    param_4 = param_4 + 1;
    if (param_2 == pbVar1) {
      return;
    }
  } while( true );
}


