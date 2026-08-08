/*
 * Ghidra decompilation
 *
 * Function : _ZN14EncodeFileName6DecodeEPcPhjPwj
 * Address  : 080e1438
 * Program  : drastic
 */


/* DWARF original prototype: void Decode(EncodeFileName * this, char * Name, byte * EncName, size_t
   EncSize, wchar * NameW, size_t MaxDecSize) */

void __thiscall
EncodeFileName::Decode
          (EncodeFileName *this,char *Name,byte *EncName,size_t EncSize,wchar *NameW,
          size_t MaxDecSize)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  wchar *pwVar12;
  byte HighByte;
  byte Correction;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  
  bVar1 = *EncName;
  bVar16 = MaxDecSize == 0;
  bVar4 = EncSize == 1;
  bVar3 = EncSize == 0;
  pcVar5 = Name;
  if (!bVar16 && bVar3 || (bVar16 || bVar4)) {
    pcVar5 = (char *)0x1;
  }
  if ((bVar16 || !bVar3) && (!bVar16 && !bVar4)) {
    pcVar5 = (char *)0x0;
  }
  if (!bVar16 && bVar3 || (bVar16 || bVar4)) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar7 = this->FlagBits;
    uVar9 = 1;
    do {
      if (uVar7 == 0) {
        pbVar8 = EncName + uVar9;
        uVar6 = (uint)*pbVar8;
        uVar9 = uVar9 + 1;
        uVar7 = 8;
        iVar15 = (int)uVar6 >> 6;
        this->Flags = *pbVar8;
        this->FlagBits = 8;
        if (iVar15 != 2) goto LAB_080e1498;
LAB_080e1504:
        uVar13 = uVar9 + 2;
        uVar14 = (uint)EncName[uVar9] + (uint)EncName[uVar9 + 1] * 0x100;
LAB_080e14b0:
        NameW[(int)pcVar5] = uVar14;
        uVar6 = (uint)this->Flags;
        pcVar5 = pcVar5 + 1;
        uVar7 = this->FlagBits;
      }
      else {
        uVar6 = (uint)this->Flags;
        iVar15 = (int)uVar6 >> 6;
        if (iVar15 == 2) goto LAB_080e1504;
LAB_080e1498:
        uVar14 = (uint)EncName[uVar9];
        if (iVar15 == 3) {
          uVar13 = uVar9 + 1;
          if ((EncName[uVar9] & 0x80) == 0) {
            iVar15 = uVar14 + 2;
            if (pcVar5 < MaxDecSize) {
              pbVar8 = (byte *)(Name + (int)pcVar5);
              puVar11 = NameW + (int)pcVar5;
              do {
                pcVar5 = pcVar5 + 1;
                iVar15 = iVar15 + -1;
                *puVar11 = (uint)*pbVar8;
                pbVar8 = pbVar8 + 1;
                puVar11 = puVar11 + 1;
              } while (0 < iVar15 && pcVar5 < MaxDecSize);
              uVar6 = (uint)this->Flags;
              uVar7 = this->FlagBits;
            }
          }
          else {
            bVar2 = EncName[uVar13];
            iVar15 = (uVar14 & 0x7f) + 2;
            uVar13 = uVar9 + 2;
            if (pcVar5 < MaxDecSize) {
              pcVar10 = Name + (int)pcVar5;
              pwVar12 = NameW + (int)pcVar5;
              do {
                pcVar5 = pcVar5 + 1;
                iVar15 = iVar15 + -1;
                *pwVar12 = (uint)bVar1 * 0x100 + (uint)(byte)(*pcVar10 + bVar2);
                pcVar10 = pcVar10 + 1;
                pwVar12 = pwVar12 + 1;
              } while (0 < iVar15 && pcVar5 < MaxDecSize);
              uVar6 = (uint)this->Flags;
              uVar7 = this->FlagBits;
            }
          }
        }
        else {
          uVar13 = uVar9 + 1;
          if (iVar15 != 1) goto LAB_080e14b0;
          NameW[(int)pcVar5] = uVar14 + (uint)bVar1 * 0x100;
          pcVar5 = pcVar5 + 1;
          uVar6 = (uint)this->Flags;
          uVar7 = this->FlagBits;
        }
      }
      uVar7 = uVar7 - 2;
      this->Flags = (byte)(uVar6 << 2);
      this->FlagBits = uVar7;
      uVar9 = uVar13;
    } while (pcVar5 < MaxDecSize && uVar13 < EncSize);
  }
  if (MaxDecSize <= pcVar5) {
    pcVar5 = (char *)(MaxDecSize + 0x3fffffff);
  }
  NameW[(int)pcVar5] = 0;
  return;
}


