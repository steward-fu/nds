/*
 * Ghidra decompilation
 *
 * Function : BinToHex
 * Address  : 080d2398
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void BinToHex(byte *Bin,size_t BinSize,char *HexA,wchar *HexW,size_t HexSize)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint Low;
  uint LowHex;
  uint uVar5;
  uint uVar6;
  wchar wVar7;
  char cVar8;
  int iVar9;
  uint High;
  uint HighHex;
  wchar wVar10;
  char cVar11;
  uint uVar12;
  
  if (BinSize == 0) {
    uVar6 = 0;
    uVar12 = 0;
  }
  else if (HexW == (wchar *)0x0) {
    if (HexA == (char *)0x0) {
      uVar12 = 0;
      goto LAB_080d253c;
    }
    uVar6 = 0;
    pbVar3 = Bin;
    do {
      pbVar2 = pbVar3 + 1;
      uVar12 = (int)(uint)*pbVar3 >> 4;
      uVar5 = *pbVar3 & 0xf;
      cVar1 = (char)uVar12;
      cVar8 = cVar1 + 'W';
      if (uVar12 < 10) {
        cVar8 = cVar1 + '0';
      }
      cVar1 = (char)uVar5;
      cVar11 = cVar1 + 'W';
      if (uVar5 < 10) {
        cVar11 = cVar1 + '0';
      }
      iVar9 = uVar6 + 1;
      if (uVar6 < HexSize - 2) {
        HexA[uVar6] = cVar8;
        uVar6 = uVar6 + 2;
        HexA[iVar9] = cVar11;
      }
      pbVar3 = pbVar2;
    } while (Bin + BinSize != pbVar2);
    uVar12 = 0;
  }
  else {
    if (HexA == (char *)0x0) {
      pbVar3 = Bin;
      uVar6 = 0;
      do {
        pbVar2 = pbVar3 + 1;
        uVar12 = (int)(uint)*pbVar3 >> 4;
        uVar5 = *pbVar3 & 0xf;
        wVar7 = uVar12 + 0x57;
        if (uVar12 < 10) {
          wVar7 = uVar12 + 0x30;
        }
        wVar10 = uVar5 + 0x57;
        if (uVar5 < 10) {
          wVar10 = uVar5 + 0x30;
        }
        uVar12 = uVar6;
        if (uVar6 < HexSize - 2) {
          HexW[uVar6] = wVar7;
          uVar12 = uVar6 + 2;
          HexW[uVar6 + 1] = wVar10;
        }
        pbVar3 = pbVar2;
        uVar6 = uVar12;
      } while (pbVar2 != Bin + BinSize);
LAB_080d253c:
      if (HexSize != 0) {
        HexSize = 1;
      }
      goto LAB_080d245c;
    }
    uVar6 = 0;
    pbVar3 = Bin;
    uVar5 = 0;
    do {
      pbVar2 = pbVar3 + 1;
      uVar12 = (int)(uint)*pbVar3 >> 4;
      uVar4 = *pbVar3 & 0xf;
      if (uVar12 < 10) {
        HighHex = uVar12 + 0x30;
      }
      else {
        HighHex = uVar12 + 0x57;
      }
      if (uVar4 < 10) {
        LowHex = uVar4 + 0x30;
      }
      else {
        LowHex = uVar4 + 0x57;
      }
      if (uVar6 < HexSize - 2) {
        HexA[uVar6] = (char)HighHex;
        iVar9 = uVar6 + 1;
        uVar6 = uVar6 + 2;
        HexA[iVar9] = (char)LowHex;
      }
      uVar12 = uVar5;
      if (uVar5 < HexSize - 2) {
        HexW[uVar5] = HighHex;
        uVar12 = uVar5 + 2;
        HexW[uVar5 + 1] = LowHex;
      }
      pbVar3 = pbVar2;
      uVar5 = uVar12;
    } while (Bin + BinSize != pbVar2);
  }
  if (HexSize != 0) {
    HexSize = 1;
  }
  if (HexA == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = HexSize & 1;
  }
  if (uVar5 != 0) {
    HexA[uVar6] = '\0';
    HexSize = uVar5;
  }
LAB_080d245c:
  if (HexW == (wchar *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = HexSize & 1;
  }
  if (uVar6 != 0) {
    HexW[uVar12] = 0;
  }
  return;
}


