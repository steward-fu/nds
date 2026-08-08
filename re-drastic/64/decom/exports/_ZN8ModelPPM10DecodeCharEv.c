/*
 * Ghidra decompilation
 *
 * Function : _ZN8ModelPPM10DecodeCharEv
 * Address  : 001d5ad0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ModelPPM::DecodeChar() */

ulong ModelPPM::DecodeChar(void)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ModelPPM MVar7;
  char cVar8;
  ModelPPM *in_x0;
  undefined8 *puVar9;
  ushort *this;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  
  puVar9 = *(undefined8 **)(in_x0 + 0x648);
  if (puVar9 <= *(undefined8 **)(in_x0 + 0x4ca0)) {
    return 0xffffffff;
  }
  if (*(undefined8 **)(in_x0 + 0x4cb0) < puVar9) {
    return 0xffffffff;
  }
  if (*(ushort *)puVar9 == 1) {
    MVar7 = in_x0[(ulong)**(byte **)(in_x0 + 0x660) + 0x980];
    in_x0[0xa82] = MVar7;
    uVar11 = *(uint *)(in_x0 + 0x4a88);
    uVar13 = *(uint *)(in_x0 + 0x4a90) >> 0xe;
    lVar19 = (long)(int)((uint)(byte)in_x0[(long)(int)(**(ushort **)((long)puVar9 + 0xc) - 1) +
                                           0x880] + (uint)(byte)in_x0[0xa81] + (uint)(byte)MVar7 +
                         (uint)(byte)in_x0[(ulong)*(byte *)((long)puVar9 + 2) + 0x980] * 2 +
                        (*(int *)(in_x0 + 0x678) >> 0x1a & 0x20U)) +
             (long)(int)(*(byte *)((long)puVar9 + 3) - 1) * 0x40;
    uVar6 = 0;
    if (uVar13 != 0) {
      uVar6 = (*(int *)(in_x0 + 0x4a8c) - uVar11) / uVar13;
    }
    uVar5 = *(ushort *)(in_x0 + lVar19 * 2 + 0xa84);
    *(uint *)(in_x0 + 0x4a90) = uVar13;
    uVar17 = (uint)uVar5;
    if (uVar6 < uVar17) {
      *(ushort **)(in_x0 + 0x660) = (ushort *)((long)puVar9 + 2);
      *(byte *)((long)puVar9 + 3) =
           *(byte *)((long)puVar9 + 3) + ((byte)(~(uint)*(byte *)((long)puVar9 + 3) >> 7) & 1);
      puVar15 = *(undefined8 **)(in_x0 + 0x660);
      *(undefined4 *)(in_x0 + 0x4a94) = 0;
      *(uint *)(in_x0 + 0x4a98) = (uint)uVar5;
      iVar12 = *(int *)(in_x0 + 0x678);
      *(ushort *)(in_x0 + lVar19 * 2 + 0xa84) = (uVar5 + 0x80) - (short)(uVar5 + 0x20 >> 7);
      *(int *)(in_x0 + 0x678) = iVar12 + 1;
      in_x0[0xa81] = (ModelPPM)0x1;
      goto LAB_001d5bf0;
    }
    uVar16 = (uint)uVar5;
    uVar6 = uVar16 - ((int)(uVar17 + 0x20) >> 7);
    *(uint *)(in_x0 + 0x4a94) = uVar16;
    *(short *)(in_x0 + lVar19 * 2 + 0xa84) = (short)uVar6;
    bVar3 = (&ExpEscape)[(int)(uVar6 & 0xffff) >> 10];
    *(undefined4 *)(in_x0 + 0x4a98) = 0x4000;
    *(undefined4 *)(in_x0 + 0x668) = 1;
    *(uint *)(in_x0 + 0x66c) = (uint)bVar3;
    uVar11 = uVar11 + uVar13 * uVar16;
    uVar13 = (0x4000 - uVar16) * uVar13;
    in_x0[(ulong)*(byte *)((long)puVar9 + 2) + 0x680] = in_x0[0xa80];
    *(undefined8 *)(in_x0 + 0x660) = 0;
    in_x0[0xa81] = (ModelPPM)0x0;
    *(uint *)(in_x0 + 0x4a88) = uVar11;
    *(uint *)(in_x0 + 0x4a90) = uVar13;
  }
  else {
    puVar15 = *(undefined8 **)((long)puVar9 + 4);
    if (puVar15 <= *(undefined8 **)(in_x0 + 0x4ca0) || *(undefined8 **)(in_x0 + 0x4cb0) < puVar15) {
      return 0xffffffff;
    }
    uVar5 = *(ushort *)((long)puVar9 + 2);
    puVar2 = (uint *)(in_x0 + 0x4a88);
    *(uint *)(in_x0 + 0x4a9c) = (uint)uVar5;
    uVar11 = *puVar2;
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar13 = *(uint *)(in_x0 + 0x4a90) / (uint)uVar5;
    }
    uVar6 = 0;
    if (uVar13 != 0) {
      uVar6 = (*(int *)(in_x0 + 0x4a8c) - uVar11) / uVar13;
    }
    *(uint *)(in_x0 + 0x4a90) = uVar13;
    uVar17 = (uint)uVar5;
    if ((int)uVar17 <= (int)uVar6) {
      return 0xffffffff;
    }
    bVar3 = *(byte *)((long)puVar15 + 1);
    uVar16 = (uint)bVar3;
    if ((int)uVar6 < (int)(uint)bVar3) {
      *(uint *)(in_x0 + 0x4a98) = uVar16;
      MVar7 = (ModelPPM)(uVar17 < uVar16 * 2);
      *(undefined8 **)(in_x0 + 0x660) = puVar15;
      *(uint *)(in_x0 + 0x678) = *(int *)(in_x0 + 0x678) + (uint)(byte)MVar7;
      in_x0[0xa81] = MVar7;
      *(byte *)((long)puVar15 + 1) = bVar3 + 4;
      *(ushort *)((long)puVar9 + 2) = *(ushort *)((long)puVar9 + 2) + 4;
      uVar17 = uVar16;
      if (uVar16 != 0x78 && 0x77 < bVar3) {
        PPM_CONTEXT::rescale((PPM_CONTEXT *)puVar9,in_x0);
        uVar11 = *puVar2;
        uVar13 = *(uint *)(in_x0 + 0x4a90);
        uVar17 = *(uint *)(in_x0 + 0x4a98);
      }
      puVar15 = *(undefined8 **)(in_x0 + 0x660);
      *(undefined4 *)(in_x0 + 0x4a94) = 0;
LAB_001d5bf0:
      uVar13 = uVar13 * uVar17;
      *(uint *)(in_x0 + 0x4a88) = uVar11;
      *(uint *)(in_x0 + 0x4a90) = uVar13;
      if (puVar15 != (undefined8 *)0x0) goto LAB_001d5d50;
    }
    else {
      if (*(byte **)(in_x0 + 0x660) == (byte *)0x0) {
        return 0xffffffff;
      }
      in_x0[0xa81] = (ModelPPM)0x0;
      puVar18 = (undefined8 *)((long)puVar15 + ((ulong)(*(ushort *)puVar9 - 2) + 1) * 10);
      do {
        puVar1 = (undefined8 *)((long)puVar15 + 10);
        uVar16 = uVar16 + *(byte *)((long)puVar15 + 0xb);
        if ((int)uVar6 < (int)uVar16) {
          *(uint *)(in_x0 + 0x4a98) = uVar16;
          uVar17 = (uint)*(byte *)((long)puVar15 + 0xb);
          iVar12 = uVar16 - *(byte *)((long)puVar15 + 0xb);
          *(int *)(in_x0 + 0x4a94) = iVar12;
          *(undefined8 **)(in_x0 + 0x660) = puVar1;
          *(byte *)((long)puVar15 + 0xb) = *(byte *)((long)puVar15 + 0xb) + 4;
          *(ushort *)((long)puVar9 + 2) = *(ushort *)((long)puVar9 + 2) + 4;
          if (*(byte *)((long)puVar15 + 1) < *(byte *)((long)puVar15 + 0xb)) {
            bVar3 = *(byte *)puVar1;
            *puVar1 = *puVar15;
            *(byte *)puVar15 = bVar3;
            *(byte *)((long)puVar15 + 1) = *(byte *)((long)puVar15 + 0xb);
            *(undefined8 *)((long)puVar15 + 2) = *(undefined8 *)((long)puVar15 + 0xc);
            *(ushort *)((long)puVar15 + 0x12) = *(ushort *)(puVar15 + 1);
            *(undefined8 **)(in_x0 + 0x660) = puVar15;
            if (*(byte *)((long)puVar15 + 1) < 0x7d) {
              uVar11 = uVar11 + uVar13 * iVar12;
            }
            else {
              PPM_CONTEXT::rescale((PPM_CONTEXT *)puVar9,in_x0);
              uVar13 = *(uint *)(in_x0 + 0x4a90);
              puVar15 = *(undefined8 **)(in_x0 + 0x660);
              uVar17 = *(int *)(in_x0 + 0x4a98) - *(int *)(in_x0 + 0x4a94);
              uVar11 = *puVar2 + uVar13 * *(int *)(in_x0 + 0x4a94);
            }
          }
          else {
            uVar11 = uVar11 + uVar13 * iVar12;
            puVar15 = *(undefined8 **)(in_x0 + 0x660);
          }
          goto LAB_001d5bf0;
        }
        puVar15 = puVar1;
      } while (puVar1 != puVar18);
      in_x0[0xa82] = in_x0[(ulong)**(byte **)(in_x0 + 0x660) + 0x980];
      *(uint *)(in_x0 + 0x4a94) = uVar16;
      MVar7 = in_x0[0xa80];
      in_x0[(ulong)*(byte *)puVar18 + 0x680] = MVar7;
      uVar5 = *(ushort *)puVar9;
      *(undefined8 *)(in_x0 + 0x660) = 0;
      *(uint *)(in_x0 + 0x668) = (uint)uVar5;
      puVar9 = (undefined8 *)((long)puVar18 + (ulong)(uVar5 - 2) * -10 + -10);
      do {
        puVar18 = (undefined8 *)((long)puVar18 + -10);
        in_x0[(ulong)*(byte *)puVar18 + 0x680] = MVar7;
      } while (puVar18 != puVar9);
      uVar11 = uVar11 + uVar13 * uVar16;
      *(uint *)(in_x0 + 0x4a98) = uVar17;
      uVar13 = (uVar17 - uVar16) * uVar13;
      *puVar2 = uVar11;
      *(uint *)(in_x0 + 0x4a90) = uVar13;
    }
  }
  do {
    while ((uVar11 + uVar13 ^ uVar11) < 0x1000000) {
LAB_001d5c64:
      lVar19 = *(long *)(in_x0 + 0x4aa0);
      iVar12 = *(int *)(in_x0 + 0x4a8c);
      iVar14 = *(int *)(lVar19 + 8);
      if (0x7fe2 < iVar14) {
        Unpack::UnpReadBuf();
        iVar14 = *(int *)(lVar19 + 8);
      }
      *(int *)(lVar19 + 8) = iVar14 + 1;
      bVar3 = *(byte *)(*(long *)(lVar19 + 0x18) + (long)iVar14);
      uVar11 = *(int *)(in_x0 + 0x4a88) << 8;
      uVar13 = *(int *)(in_x0 + 0x4a90) << 8;
      *(uint *)(in_x0 + 0x4a88) = uVar11;
      *(uint *)(in_x0 + 0x4a8c) = (uint)bVar3 | iVar12 << 8;
      *(uint *)(in_x0 + 0x4a90) = uVar13;
    }
    if (uVar13 < 0x8000) {
      *(uint *)(in_x0 + 0x4a90) = -uVar11 & 0x7fff;
      goto LAB_001d5c64;
    }
    iVar12 = *(int *)(in_x0 + 0x670);
    this = *(ushort **)(in_x0 + 0x648);
    do {
      iVar12 = iVar12 + 1;
      this = *(ushort **)(this + 6);
      *(ushort **)(in_x0 + 0x648) = this;
      if ((this <= *(ushort **)(in_x0 + 0x4ca0)) || (*(ushort **)(in_x0 + 0x4cb0) < this)) {
        *(int *)(in_x0 + 0x670) = iVar12;
        return 0xffffffff;
      }
    } while ((uint)*this == *(uint *)(in_x0 + 0x668));
    *(int *)(in_x0 + 0x670) = iVar12;
    cVar8 = PPM_CONTEXT::decodeSymbol2((PPM_CONTEXT *)this,in_x0);
    if (cVar8 == '\0') {
      return 0xffffffff;
    }
    puVar15 = *(undefined8 **)(in_x0 + 0x660);
    uVar13 = (*(int *)(in_x0 + 0x4a98) - *(int *)(in_x0 + 0x4a94)) * *(int *)(in_x0 + 0x4a90);
    uVar11 = *(uint *)(in_x0 + 0x4a88) + *(int *)(in_x0 + 0x4a90) * *(int *)(in_x0 + 0x4a94);
    *(uint *)(in_x0 + 0x4a88) = uVar11;
    *(uint *)(in_x0 + 0x4a90) = uVar13;
  } while (puVar15 == (undefined8 *)0x0);
LAB_001d5d50:
  bVar3 = *(byte *)puVar15;
  if ((*(int *)(in_x0 + 0x670) == 0) &&
     (uVar10 = *(ulong *)((long)puVar15 + 2), *(ulong *)(in_x0 + 0x4ca0) < uVar10)) {
    *(ulong *)(in_x0 + 0x648) = uVar10;
    *(ulong *)(in_x0 + 0x658) = uVar10;
  }
  else {
    UpdateModel();
    if (in_x0[0xa80] == (ModelPPM)0x0) {
      in_x0[0xa80] = (ModelPPM)0x1;
      memset(in_x0 + 0x680,0,0x100);
    }
  }
  uVar11 = *(uint *)(in_x0 + 0x4a88);
  uVar13 = *(uint *)(in_x0 + 0x4a90);
  do {
    if (0xffffff < (uVar11 + uVar13 ^ uVar11)) {
      if (0x7fff < uVar13) {
        return (ulong)bVar3;
      }
      *(uint *)(in_x0 + 0x4a90) = -uVar11 & 0x7fff;
    }
    lVar19 = *(long *)(in_x0 + 0x4aa0);
    iVar12 = *(int *)(in_x0 + 0x4a8c);
    iVar14 = *(int *)(lVar19 + 8);
    if (0x7fe2 < iVar14) {
      Unpack::UnpReadBuf();
      iVar14 = *(int *)(lVar19 + 8);
    }
    *(int *)(lVar19 + 8) = iVar14 + 1;
    bVar4 = *(byte *)(*(long *)(lVar19 + 0x18) + (long)iVar14);
    uVar11 = *(int *)(in_x0 + 0x4a88) << 8;
    uVar13 = *(int *)(in_x0 + 0x4a90) << 8;
    *(uint *)(in_x0 + 0x4a88) = uVar11;
    *(uint *)(in_x0 + 0x4a8c) = (uint)bVar4 | iVar12 << 8;
    *(uint *)(in_x0 + 0x4a90) = uVar13;
  } while( true );
}


