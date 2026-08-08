/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12UnpWriteAreaEmm
 * Address  : 001dc710
 * Program  : drastic64
 */


/* Unpack::UnpWriteArea(unsigned long, unsigned long) */

void __thiscall Unpack::UnpWriteArea(Unpack *this,ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uchar **ppuVar3;
  ulong uVar4;
  uchar *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_2 == param_1) || (this[0x4daa] = (Unpack)0x1, param_1 <= param_2)) {
    uVar10 = param_2 - param_1;
    if (this[0x4d98] == (Unpack)0x0) {
      if (*(long *)(this + 0x4da0) <= *(long *)(this + 0x4db0)) {
        return;
      }
      uVar11 = *(long *)(this + 0x4da0) - *(long *)(this + 0x4db0);
      uVar6 = uVar10;
      if ((long)uVar11 < (long)uVar10) {
        uVar6 = uVar11;
      }
      ComprDataIO::UnpWrite
                (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + param_1),uVar6);
      *(ulong *)(this + 0x4db0) = *(long *)(this + 0x4db0) + uVar10;
      return;
    }
  }
  else {
    this[0x4da9] = (Unpack)0x1;
    if (this[0x4d98] == (Unpack)0x0) {
      if (*(long *)(this + 0x4da0) <= *(long *)(this + 0x4db0)) {
        return;
      }
      uVar6 = *(long *)(this + 0x4da0) - *(long *)(this + 0x4db0);
      uVar11 = *(long *)(this + 0xe978) - param_1;
      uVar10 = uVar11;
      if ((long)uVar6 < (long)uVar11) {
        uVar10 = uVar6;
      }
      ComprDataIO::UnpWrite
                (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + param_1),uVar10);
      lVar9 = uVar11 + *(long *)(this + 0x4db0);
      *(long *)(this + 0x4db0) = lVar9;
      if (*(long *)(this + 0x4da0) <= lVar9) {
        return;
      }
      uVar6 = *(long *)(this + 0x4da0) - lVar9;
      uVar10 = param_2;
      if ((long)uVar6 < (long)param_2) {
        uVar10 = uVar6;
      }
      ComprDataIO::UnpWrite(*(ComprDataIO **)this,*(uchar **)(this + 0x4b90),uVar10);
      *(ulong *)(this + 0x4db0) = *(long *)(this + 0x4db0) + param_2;
      return;
    }
    uVar10 = param_2 - param_1;
  }
  uVar10 = uVar10 & *(ulong *)(this + 0xe980);
  if (uVar10 != 0) {
    lVar9 = *(long *)(this + 0x4db0);
    puVar2 = (ulong *)(this + 0x4c98);
    ppuVar3 = (uchar **)(this + 0x4b98);
    puVar7 = puVar2;
LAB_001dc820:
    do {
      puVar1 = puVar7 + 1;
      if (param_1 < *puVar7) {
        uVar6 = *puVar7 - param_1;
        uVar11 = *(ulong *)(this + 0x4c98);
        if (uVar10 < uVar6) {
          uVar6 = uVar10;
        }
        uVar10 = uVar10 - uVar6;
        uVar4 = uVar6 + param_1;
      }
      else {
        puVar7 = puVar1;
        if ((ulong *)(this + 0x4d98) != puVar1) goto LAB_001dc820;
        uVar11 = *(ulong *)(this + 0x4c98);
        uVar6 = 0;
        uVar4 = param_1;
      }
      if (param_1 < uVar11) {
        puVar5 = *ppuVar3 + param_1;
      }
      else {
        uVar11 = 1;
        do {
          uVar8 = uVar11 + 1;
          if (param_1 < puVar2[uVar11]) {
            puVar5 = ppuVar3[uVar11 & 0xffffffff] +
                     (param_1 - (long)ppuVar3[(ulong)((int)uVar11 - 1) + 0x20]);
            goto LAB_001dc88c;
          }
          uVar11 = uVar8;
        } while (uVar8 != 0x20);
        puVar5 = *ppuVar3;
      }
LAB_001dc88c:
      if (lVar9 < *(long *)(this + 0x4da0)) {
        uVar8 = *(long *)(this + 0x4da0) - lVar9;
        uVar11 = uVar6;
        if ((long)uVar8 < (long)uVar6) {
          uVar11 = uVar8;
        }
        ComprDataIO::UnpWrite(*(ComprDataIO **)this,puVar5,uVar11);
        lVar9 = uVar6 + *(long *)(this + 0x4db0);
        *(long *)(this + 0x4db0) = lVar9;
      }
      param_1 = uVar4 & *(ulong *)(this + 0xe980);
      puVar7 = puVar2;
    } while (uVar10 != 0);
  }
  return;
}


