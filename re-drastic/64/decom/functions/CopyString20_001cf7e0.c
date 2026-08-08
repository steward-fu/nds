/*
 * Ghidra decompilation
 *
 * Function : CopyString20
 * Address  : 001cf7e0
 * Program  : drastic64
 */


/* Unpack::CopyString20(unsigned int, unsigned int) */

void __thiscall Unpack::CopyString20(Unpack *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)(this + 0xb0);
  uVar9 = *(ulong *)(this + 0xc0);
  lVar13 = *(long *)(this + 0x4da0);
  lVar11 = *(long *)(this + 0xe978);
  *(uint *)(this + 0xb0) = uVar4 + 1;
  uVar10 = uVar9 - param_2;
  *(uint *)(this + (((ulong)uVar4 & 3) + 0x28) * 4) = param_2;
  *(uint *)(this + 0xb4) = param_1;
  *(uint *)(this + 0xb8) = param_2;
  *(ulong *)(this + 0x4da0) = lVar13 - (ulong)param_1;
  uVar3 = uVar9;
  if (uVar9 < uVar10) {
    uVar3 = uVar10;
  }
  if (uVar3 < lVar11 - 0x1001U) {
    *(ulong *)(this + 0xc0) = param_1 + uVar9;
    puVar14 = (undefined *)(*(long *)(this + 0x4b90) + uVar10);
    puVar12 = (undefined *)(*(long *)(this + 0x4b90) + uVar9);
    if (7 < param_1) {
      lVar11 = uVar10 + 0x10;
      uVar3 = uVar9 + 0x10;
      bVar5 = false;
      if ((long)uVar9 < lVar11) {
        bVar5 = (long)(uVar3 - uVar10) < 0;
      }
      uVar4 = param_1 - 8;
      bVar5 = bVar5 == ((long)uVar9 < lVar11 && SBORROW8(uVar3,uVar10));
      if ((((long)uVar9 < lVar11 && uVar3 != uVar10) && bVar5 || uVar4 < 7) ||
          ((lVar11 <= (long)uVar9 || uVar3 == uVar10) || !bVar5) && uVar4 == 7) {
        puVar6 = puVar14;
        puVar8 = puVar12;
        do {
          *puVar8 = *puVar6;
          puVar2 = puVar6 + 8;
          puVar8[1] = puVar6[1];
          puVar8[2] = puVar6[2];
          puVar8[3] = puVar6[3];
          puVar8[4] = puVar6[4];
          puVar8[5] = puVar6[5];
          puVar8[6] = puVar6[6];
          puVar8[7] = puVar6[7];
          puVar6 = puVar2;
          puVar8 = puVar8 + 8;
        } while (puVar14 + (ulong)(uVar4 & 0xfffffff8) + 8 != puVar2);
      }
      else {
        uVar1 = (uVar4 >> 3) + 1;
        lVar11 = 0;
        do {
          uVar15 = *(undefined8 *)(puVar14 + lVar11);
          *(undefined8 *)((long)(puVar12 + lVar11) + 8) =
               *(undefined8 *)((long)(puVar14 + lVar11) + 8);
          *(undefined8 *)(puVar12 + lVar11) = uVar15;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != ((ulong)((uVar1 >> 1) - 1) + 1) * 0x10);
        lVar11 = ((ulong)uVar1 & 0x3ffffffe) * 8;
        if ((uVar1 & 1) != 0) {
          puVar12[lVar11] = puVar14[lVar11];
          puVar12[lVar11 + 1] = puVar14[lVar11 + 1];
          puVar12[lVar11 + 2] = puVar14[lVar11 + 2];
          puVar12[lVar11 + 3] = puVar14[lVar11 + 3];
          puVar12[lVar11 + 4] = puVar14[lVar11 + 4];
          puVar12[lVar11 + 5] = puVar14[lVar11 + 5];
          puVar12[lVar11 + 6] = puVar14[lVar11 + 6];
          puVar12[lVar11 + 7] = puVar14[lVar11 + 7];
        }
      }
      lVar11 = (ulong)(uVar4 & 0xfffffff8) + 8;
      puVar14 = puVar14 + lVar11;
      puVar12 = puVar12 + lVar11;
      param_1 = param_1 & 7;
    }
    if ((((param_1 != 0) && (*puVar12 = *puVar14, param_1 != 1)) &&
        (puVar12[1] = puVar14[1], param_1 != 2)) &&
       (((puVar12[2] = puVar14[2], param_1 != 3 && (puVar12[3] = puVar14[3], param_1 != 4)) &&
        ((puVar12[4] = puVar14[4], param_1 != 5 && (puVar12[5] = puVar14[5], param_1 == 7)))))) {
      puVar12[6] = puVar14[6];
      return;
    }
  }
  else if (param_1 != 0) {
    uVar7 = *(ulong *)(this + 0xe980);
    uVar3 = (ulong)(param_1 - 1) + 1 + uVar10;
    do {
      uVar7 = uVar7 & uVar10;
      uVar10 = uVar10 + 1;
      *(undefined *)(*(long *)(this + 0x4b90) + uVar9) =
           *(undefined *)(*(long *)(this + 0x4b90) + uVar7);
      uVar7 = *(ulong *)(this + 0xe980);
      uVar9 = *(long *)(this + 0xc0) + 1U & uVar7;
      *(ulong *)(this + 0xc0) = uVar9;
    } while (uVar10 != uVar3);
  }
  return;
}


