/*
 * Ghidra decompilation
 *
 * Function : FUN_08094250
 * Address  : 08094250
 * Program  : drastic16
 */


undefined4 FUN_08094250(int param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar8 = 0;
    iVar2 = 0;
    do {
      while( true ) {
        iVar6 = iVar8 * 2;
        iVar5 = iVar8 + 1;
        uVar1 = *(ushort *)(param_3 + iVar6);
        uVar3 = (uint)uVar1;
        if (0x7f < uVar3) break;
        if (param_1 != 0) {
          *(char *)(param_1 + iVar2) = (char)uVar1;
        }
        iVar2 = iVar2 + 1;
        iVar8 = iVar5;
LAB_08094290:
        if (param_4 == iVar8) goto LAB_0809436c;
      }
      if (uVar3 - 0xd800 < 0x800) {
        if (0xdbff < uVar3 || iVar5 == param_4) {
LAB_080943b8:
          *param_2 = iVar2;
          return 0;
        }
        iVar8 = iVar8 + 2;
        uVar4 = *(ushort *)(param_3 + iVar6 + 2) - 0xdc00;
        if (0x3ff < uVar4) goto LAB_080943b8;
        uVar3 = (uVar4 | (uVar3 - 0xd800) * 0x400) + 0x10000;
        if (uVar3 < 0x200000) {
          iVar6 = 0x12;
          uVar4 = 2;
          iVar9 = 3;
        }
        else {
          iVar6 = 0x18;
          uVar4 = 3;
          iVar9 = 4;
        }
      }
      else {
        if (uVar3 < 0x800) {
          iVar6 = 6;
          iVar9 = 1;
        }
        else {
          iVar6 = 0xc;
          iVar9 = 2;
        }
        uVar4 = (uint)(uVar3 >= 0x800);
        iVar8 = iVar5;
      }
      if (param_1 == 0) {
        iVar2 = iVar9 + iVar2 + 1;
        goto LAB_08094290;
      }
      uVar10 = iVar9 * 6;
      pcVar7 = (char *)(param_1 + iVar2);
      *(char *)(param_1 + iVar2) = (&DAT_080ecbb8)[uVar4] + (char)(uVar3 >> iVar6);
      iVar6 = iVar9;
      do {
        uVar10 = uVar10 - 6;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar7 + 1;
        *pcVar7 = ((byte)(uVar3 >> (uVar10 & 0xff)) & 0x3f) + 0x80;
      } while (iVar6 != 0);
      iVar2 = iVar9 + iVar2 + 1;
    } while (param_4 != iVar8);
  }
LAB_0809436c:
  *param_2 = iVar2;
  return 1;
}


