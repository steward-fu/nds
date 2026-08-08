/*
 * Ghidra decompilation
 *
 * Function : _ZN14EncodeFileName6DecodeEPcPhmPwm
 * Address  : 001c2490
 * Program  : drastic64
 */


/* EncodeFileName::Decode(char*, unsigned char*, unsigned long, wchar_t*, unsigned long) */

void __thiscall
EncodeFileName::Decode
          (EncodeFileName *this,char *param_1,uchar *param_2,ulong param_3,wchar_t *param_4,
          ulong param_5)

{
  bool bVar1;
  byte bVar2;
  EncodeFileName EVar3;
  uchar uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  wchar_t wVar9;
  int iVar10;
  wchar_t wVar11;
  uint uVar12;
  wchar_t wVar13;
  int iVar14;
  ulong uVar15;
  
  bVar2 = *param_2;
  if ((param_5 == 0 || param_3 == 0) || param_5 != 0 && param_3 == 1) {
    lVar5 = (param_5 - 1) * 4;
    if (param_5 != 0) {
      lVar5 = 0;
    }
    *(undefined4 *)((long)param_4 + lVar5) = 0;
    return;
  }
  iVar10 = *(int *)(this + 0xc);
  uVar7 = 1;
  uVar6 = 0;
  do {
    while( true ) {
      EVar3 = *(EncodeFileName *)(param_2 + uVar7);
      wVar11 = (wchar_t)(byte)EVar3;
      uVar15 = uVar7 + 1;
      if (iVar10 == 0) break;
      wVar9 = (wchar_t)(byte)this[8];
      iVar14 = (int)(uint)(byte)this[8] >> 6;
      uVar8 = uVar15;
      uVar15 = uVar7;
      wVar13 = wVar11;
      if (iVar14 != 2) goto LAB_001c24d8;
LAB_001c254c:
      uVar15 = uVar6 + 1;
      param_4[uVar6] = wVar13 + (uint)param_2[uVar8] * 0x100;
      iVar10 = *(int *)(this + 0xc) + -2;
      this[8] = SUB41(((byte)this[8] & 0x3f) << 2,0);
      *(int *)(this + 0xc) = iVar10;
      uVar7 = uVar7 + 2;
      uVar6 = uVar15;
      if (param_5 <= uVar15 || param_3 <= uVar7) goto LAB_001c2590;
    }
    this[8] = EVar3;
    *(undefined4 *)(this + 0xc) = 8;
    iVar14 = (int)(uint)(byte)EVar3 >> 6;
    iVar10 = 8;
    uVar8 = uVar7 + 2;
    uVar7 = uVar15;
    wVar13 = (uint)param_2[uVar15];
    wVar9 = wVar11;
    wVar11 = (uint)param_2[uVar15];
    if (iVar14 == 2) goto LAB_001c254c;
LAB_001c24d8:
    uVar7 = uVar8;
    if (iVar14 == 3) {
      iVar14 = (int)uVar6;
      if ((uint)wVar11 >> 7 == 0) {
        if (param_5 <= uVar6) {
LAB_001c2658:
          this[8] = SUB41((wVar9 & 0x3fU) << 2,0);
          *(int *)(this + 0xc) = iVar10 + -2;
          lVar5 = (param_5 - 1) * 4;
          if (uVar6 < param_5) {
            lVar5 = uVar6 << 2;
          }
          *(undefined4 *)((long)param_4 + lVar5) = 0;
          return;
        }
        do {
          param_4[uVar6] = (uint)(byte)param_1[uVar6];
          uVar6 = uVar6 + 1;
          bVar1 = param_5 <= uVar6;
        } while (0 < iVar14 + 2 + (wVar11 - (int)uVar6) && !bVar1);
        uVar12 = (uint)(byte)this[8];
        iVar10 = *(int *)(this + 0xc);
      }
      else {
        uVar4 = param_2[uVar7];
        uVar7 = uVar15 + 2;
        if (param_5 <= uVar6) goto LAB_001c2658;
        do {
          param_4[uVar6] = (uint)bVar2 * 0x100 + (uint)(byte)(uVar4 + param_1[uVar6]);
          uVar6 = uVar6 + 1;
          bVar1 = param_5 <= uVar6;
        } while (0 < iVar14 + 2 + ((wVar11 & 0x7fU) - (int)uVar6) && !bVar1);
        uVar12 = (uint)(byte)this[8];
        iVar10 = *(int *)(this + 0xc);
      }
    }
    else {
      if (iVar14 == 1) {
        wVar11 = wVar11 + (uint)bVar2 * 0x100;
      }
      param_4[uVar6] = wVar11;
      uVar6 = uVar6 + 1;
      uVar12 = (uint)(byte)this[8];
      iVar10 = *(int *)(this + 0xc);
      bVar1 = param_5 <= uVar6;
    }
    iVar10 = iVar10 + -2;
    this[8] = SUB41((uVar12 & 0x3f) << 2,0);
    *(int *)(this + 0xc) = iVar10;
  } while (!bVar1 && uVar7 < param_3);
LAB_001c2590:
  lVar5 = (param_5 - 1) * 4;
  if (uVar6 < param_5) {
    lVar5 = uVar6 << 2;
  }
  *(undefined4 *)((long)param_4 + lVar5) = 0;
  return;
}


