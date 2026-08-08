/*
 * Ghidra decompilation
 *
 * Function : Unpack5
 * Address  : 001dff40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::Unpack5(bool) [clone .part.0] */

void __thiscall Unpack::Unpack5(Unpack *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  Unpack UVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  undefined uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  undefined *puVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined *puVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined *puVar33;
  ulong uVar34;
  undefined *puVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  int *piVar39;
  long lVar40;
  undefined8 uVar41;
  UnpackFilter aUStack_20 [24];
  long local_8;
  
  piVar39 = (int *)(this + 8);
  iVar24 = *piVar39;
  local_8 = ___stack_chk_guard;
  uVar20 = *(ulong *)(this + 0xc0);
  uVar36 = *(ulong *)(this + 0xe980);
LAB_001dff88:
  do {
    uVar20 = uVar20 & uVar36;
    *(ulong *)(this + 0xc0) = uVar20;
    if (*(int *)(this + 0xd4) <= iVar24) goto LAB_001e0308;
LAB_001dff9c:
    if ((*(ulong *)(this + 0x4b88) - uVar20 & uVar36) < 0x1004 &&
        *(ulong *)(this + 0x4b88) != uVar20) goto LAB_001e03f0;
LAB_001dffb8:
    iVar24 = *piVar39;
    iVar18 = *(int *)(this + 0xc);
    lVar40 = *(long *)(this + 0x18);
    uVar38 = *(uint *)(this + 0x170);
    uVar19 = ((uint)*(byte *)(lVar40 + iVar24 + 2) | (uint)*(byte *)(lVar40 + iVar24) << 0x10 |
             (uint)*(byte *)(lVar40 + iVar24 + 1) << 8) >> (ulong)(8U - iVar18 & 0x1f) & 0xfffe;
    if (uVar19 < *(uint *)(this + (ulong)uVar38 * 4 + 0xf0)) {
      uVar20 = (ulong)(uVar19 >> (ulong)(0x10 - uVar38 & 0x1f));
      uVar10 = *(ushort *)(this + uVar20 * 2 + 0x574);
      uVar38 = (uint)(byte)this[uVar20 + 0x174] + iVar18 & 7;
      iVar24 = iVar24 + ((uint)(byte)this[uVar20 + 0x174] + iVar18 >> 3);
      *(int *)(this + 8) = iVar24;
      *(uint *)(this + 0xc) = uVar38;
    }
    else {
      uVar22 = uVar38 + 1;
      if (uVar22 < 0xf) {
        uVar20 = (ulong)uVar22;
        if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
          uVar22 = uVar38 + 2;
          if (uVar38 == 0xd) {
LAB_001e053c:
            uVar30 = 1;
            uVar36 = 0xe;
            uVar20 = 0xf;
            goto LAB_001e01e0;
          }
          uVar20 = (ulong)uVar22;
          if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
            uVar22 = uVar38 + 3;
            if (uVar38 == 0xc) goto LAB_001e053c;
            uVar20 = (ulong)uVar22;
            if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
              uVar22 = uVar38 + 4;
              if (uVar38 == 0xb) goto LAB_001e053c;
              uVar20 = (ulong)uVar22;
              if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                uVar22 = uVar38 + 5;
                if (uVar38 == 10) goto LAB_001e053c;
                uVar20 = (ulong)uVar22;
                if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                  uVar22 = uVar38 + 6;
                  if (uVar38 == 9) goto LAB_001e053c;
                  uVar20 = (ulong)uVar22;
                  if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                    uVar22 = uVar38 + 7;
                    if (uVar38 == 8) goto LAB_001e053c;
                    uVar20 = (ulong)uVar22;
                    if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                      uVar22 = uVar38 + 8;
                      if (uVar38 == 7) goto LAB_001e053c;
                      uVar20 = (ulong)uVar22;
                      if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                        uVar22 = uVar38 + 9;
                        if (uVar38 == 6) goto LAB_001e053c;
                        uVar20 = (ulong)uVar22;
                        if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                          uVar22 = uVar38 + 10;
                          if (uVar38 == 5) goto LAB_001e053c;
                          uVar20 = (ulong)uVar22;
                          if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                            uVar22 = uVar38 + 0xb;
                            if (uVar38 == 4) goto LAB_001e053c;
                            uVar20 = (ulong)uVar22;
                            if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                              uVar22 = uVar38 + 0xc;
                              if (uVar38 == 3) goto LAB_001e053c;
                              uVar20 = (ulong)uVar22;
                              if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                                uVar22 = uVar38 + 0xd;
                                if (uVar38 == 2) goto LAB_001e053c;
                                uVar20 = (ulong)uVar22;
                                if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                                  uVar22 = uVar38 + 0xe;
                                  if (uVar38 == 1) goto LAB_001e053c;
                                  uVar20 = (ulong)uVar22;
                                  if (*(uint *)(this + (ulong)uVar22 * 4 + 0xf0) <= uVar19) {
                                    if ((uVar38 == 0) || (*(uint *)(this + 0x128) <= uVar19))
                                    goto LAB_001e01d0;
                                    uVar22 = 0xe;
                                    uVar20 = 0xe;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar36 = (ulong)(uVar22 - 1);
        uVar30 = 0x10 - uVar22;
      }
      else {
LAB_001e01d0:
        uVar30 = 1;
        uVar36 = 0xe;
        uVar22 = 0xf;
        uVar20 = 0xf;
      }
LAB_001e01e0:
      iVar24 = iVar24 + (uVar22 + iVar18 >> 3);
      uVar38 = uVar22 + iVar18 & 7;
      *(int *)(this + 8) = iVar24;
      *(uint *)(this + 0xc) = uVar38;
      uVar19 = (uVar19 - *(int *)(this + uVar36 * 4 + 0xf0) >> (ulong)(uVar30 & 0x1f)) +
               *(int *)(this + uVar20 * 4 + 0x130);
      if (*(uint *)(this + 0xec) <= uVar19) {
        uVar19 = 0;
      }
      uVar10 = *(ushort *)(this + (ulong)uVar19 * 2 + 0xd74);
    }
    uVar19 = (uint)uVar10;
    if (uVar19 < 0x100) {
      uVar20 = *(ulong *)(this + 0xc0);
      uVar13 = (undefined)uVar10;
      if (this[0x4d98] == (Unpack)0x0) {
        *(ulong *)(this + 0xc0) = uVar20 + 1;
        *(undefined *)(*(long *)(this + 0x4b90) + uVar20) = uVar13;
        iVar24 = *(int *)(this + 8);
        uVar20 = *(ulong *)(this + 0xc0);
        uVar36 = *(ulong *)(this + 0xe980);
        goto LAB_001dff88;
      }
      *(ulong *)(this + 0xc0) = uVar20 + 1;
      if (uVar20 < *(ulong *)(this + 0x4c98)) {
        *(undefined *)(*(long *)(this + 0x4b98) + uVar20) = uVar13;
        goto LAB_001e04c0;
      }
      uVar36 = 1;
      break;
    }
    if (0x105 < uVar19) {
      uVar30 = uVar19 - 0x106;
      uVar22 = ((uint)*(byte *)(lVar40 + iVar24 + 2) | (uint)*(byte *)(lVar40 + iVar24) << 0x10 |
               (uint)*(byte *)(lVar40 + iVar24 + 1) << 8) >> (ulong)(8 - uVar38 & 0x1f);
      if (uVar30 < 8) {
        uVar30 = *(uint *)(this + 0x105c);
        uVar19 = uVar19 - 0x104;
        uVar22 = uVar22 & 0xfffe;
        if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar22) goto LAB_001e05f4;
LAB_001e0a90:
        uVar20 = (ulong)(uVar22 >> (ulong)(0x10 - uVar30 & 0x1f));
        uVar10 = *(ushort *)(this + uVar20 * 2 + 0x1460);
        uVar25 = (byte)this[uVar20 + 0x1060] + uVar38 & 7;
        iVar24 = iVar24 + ((byte)this[uVar20 + 0x1060] + uVar38 >> 3);
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar25;
        if (uVar10 < 4) goto LAB_001e0e64;
LAB_001e0ac4:
        lVar23 = lVar40 + iVar24;
        uVar38 = (uVar10 >> 1) - 1;
        iVar18 = ((uVar10 & 1 | 2) << (ulong)(uVar38 & 0x1f)) + 1;
        uVar22 = 8 - uVar25;
        uVar30 = (uint)*(byte *)(lVar23 + 2);
        uVar37 = (uint)*(byte *)(lVar40 + iVar24);
        uVar31 = (uint)*(byte *)(lVar23 + 1);
        if (uVar38 < 4) {
          uVar22 = (((uint)(*(byte *)(lVar23 + 4) >> (ulong)(uVar22 & 0x1f)) |
                    (uVar30 << 8 | uVar31 << 0x10 | (uint)*(byte *)(lVar23 + 3) | uVar37 << 0x18) <<
                    (ulong)uVar25) >> (ulong)(-uVar38 & 0x1f)) + iVar18;
          *(uint *)(this + 8) = iVar24 + (uVar38 + uVar25 >> 3);
          *(uint *)(this + 0xc) = uVar38 + uVar25 & 7;
        }
        else {
          uVar14 = uVar25;
          if (uVar38 != 4) {
            bVar7 = *(byte *)(lVar23 + 3);
            uVar14 = ((uVar10 >> 1) + uVar25) - 5;
            uVar11 = uVar30 << 8;
            iVar24 = iVar24 + (uVar14 >> 3);
            uVar1 = uVar37 << 0x18;
            uVar2 = uVar31 << 0x10;
            bVar8 = *(byte *)(lVar23 + 4);
            uVar14 = uVar14 & 7;
            uVar12 = uVar22 & 0x1f;
            *(int *)(this + 8) = iVar24;
            *(uint *)(this + 0xc) = uVar14;
            uVar37 = (uint)*(byte *)(lVar40 + iVar24);
            uVar31 = (uint)*(byte *)(lVar40 + iVar24 + 1);
            uVar30 = (uint)*(byte *)(lVar40 + iVar24 + 2);
            uVar22 = 8 - uVar14;
            iVar18 = iVar18 + (((uint)(bVar8 >> (ulong)uVar12) |
                               (uVar11 | uVar2 | bVar7 | uVar1) << (ulong)uVar25) >>
                              (ulong)(0x24 - uVar38 & 0x1f)) * 0x10;
          }
          uVar25 = *(uint *)(this + 0x1f48);
          uVar38 = (uVar31 << 8 | uVar37 << 0x10 | uVar30) >> (ulong)(uVar22 & 0x1f) & 0xfffe;
          if (uVar38 < *(uint *)(this + (ulong)uVar25 * 4 + 0x1ec8)) {
            uVar20 = (ulong)(uVar38 >> (ulong)(0x10 - uVar25 & 0x1f));
            UVar9 = this[uVar20 + 0x1f4c];
            uVar22 = iVar18 + (uint)*(ushort *)(this + uVar20 * 2 + 0x234c);
            *(uint *)(this + 8) = iVar24 + ((byte)UVar9 + uVar14 >> 3);
            *(uint *)(this + 0xc) = (byte)UVar9 + uVar14 & 7;
          }
          else {
            uVar22 = uVar25 + 1;
            if (uVar22 < 0xf) {
              uVar20 = (ulong)uVar22;
              if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                uVar22 = uVar25 + 2;
                if (uVar25 == 0xd) {
LAB_001e15bc:
                  uVar25 = 1;
                  uVar30 = 0xe;
                  uVar20 = 0xf;
                  goto LAB_001e12b4;
                }
                uVar20 = (ulong)uVar22;
                if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                  uVar22 = uVar25 + 3;
                  if (uVar25 == 0xc) goto LAB_001e15bc;
                  uVar20 = (ulong)uVar22;
                  if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                    uVar22 = uVar25 + 4;
                    if (uVar25 == 0xb) goto LAB_001e15bc;
                    uVar20 = (ulong)uVar22;
                    if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                      uVar22 = uVar25 + 5;
                      if (uVar25 == 10) goto LAB_001e15bc;
                      uVar20 = (ulong)uVar22;
                      if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                        uVar22 = uVar25 + 6;
                        if (uVar25 == 9) goto LAB_001e15bc;
                        uVar20 = (ulong)uVar22;
                        if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                          uVar22 = uVar25 + 7;
                          if (uVar25 == 8) goto LAB_001e15bc;
                          uVar20 = (ulong)uVar22;
                          if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                            uVar22 = uVar25 + 8;
                            if (uVar25 == 7) goto LAB_001e15bc;
                            uVar20 = (ulong)uVar22;
                            if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                              uVar22 = uVar25 + 9;
                              if (uVar25 == 6) goto LAB_001e15bc;
                              uVar20 = (ulong)uVar22;
                              if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                                uVar22 = uVar25 + 10;
                                if (uVar25 == 5) goto LAB_001e15bc;
                                uVar20 = (ulong)uVar22;
                                if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                                  uVar22 = uVar25 + 0xb;
                                  if (uVar25 == 4) goto LAB_001e15bc;
                                  uVar20 = (ulong)uVar22;
                                  if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                                    uVar22 = uVar25 + 0xc;
                                    if (uVar25 == 3) goto LAB_001e15bc;
                                    uVar20 = (ulong)uVar22;
                                    if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                                      uVar22 = uVar25 + 0xd;
                                      if (uVar25 == 2) goto LAB_001e15bc;
                                      uVar20 = (ulong)uVar22;
                                      if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38) {
                                        uVar22 = uVar25 + 0xe;
                                        if (uVar25 == 1) goto LAB_001e15bc;
                                        uVar20 = (ulong)uVar22;
                                        if (*(uint *)(this + (ulong)uVar22 * 4 + 0x1ec8) <= uVar38)
                                        {
                                          if ((uVar25 == 0) || (*(uint *)(this + 0x1f00) <= uVar38))
                                          goto LAB_001e0d68;
                                          uVar22 = 0xe;
                                          uVar20 = 0xe;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar30 = uVar22 - 1;
              uVar25 = 0x10 - uVar22;
            }
            else {
LAB_001e0d68:
              uVar25 = 1;
              uVar30 = 0xe;
              uVar22 = 0xf;
              uVar20 = 0xf;
            }
LAB_001e12b4:
            *(uint *)(this + 8) = iVar24 + (uVar22 + uVar14 >> 3);
            *(uint *)(this + 0xc) = uVar22 + uVar14 & 7;
            uVar38 = (uVar38 - *(int *)(this + (ulong)uVar30 * 4 + 0x1ec8) >> (ulong)(uVar25 & 0x1f)
                     ) + *(int *)(this + uVar20 * 4 + 0x1f08);
            if (*(uint *)(this + 0x1ec4) <= uVar38) {
              uVar38 = 0;
            }
            uVar22 = iVar18 + (uint)*(ushort *)(this + (ulong)uVar38 * 2 + 0x2b4c);
          }
        }
        if (0x100 < uVar22) {
          if (uVar22 < 0x2001) {
            uVar19 = uVar19 + 1;
          }
          else {
            if (0x40000 < uVar22) {
              uVar19 = uVar19 + 1;
            }
            uVar19 = uVar19 + 2;
          }
        }
      }
      else {
        uVar25 = (uVar30 >> 2) - 1;
        uVar19 = uVar25 + uVar38;
        uVar38 = uVar19 & 7;
        iVar24 = iVar24 + (uVar19 >> 3);
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar38;
        uVar19 = ((uVar22 & 0xffff) >> (ulong)(0x10 - uVar25 & 0x1f)) +
                 ((uVar30 & 3 | 4) << (ulong)(uVar25 & 0x1f)) + 2;
        uVar30 = *(uint *)(this + 0x105c);
        uVar22 = ((uint)*(byte *)(lVar40 + iVar24 + 2) | (uint)*(byte *)(lVar40 + iVar24) << 0x10 |
                 (uint)*(byte *)(lVar40 + iVar24 + 1) << 8) >> (ulong)(8 - uVar38 & 0x1f) & 0xfffe;
        if (uVar22 < *(uint *)(this + (ulong)uVar30 * 4 + 0xfdc)) goto LAB_001e0a90;
LAB_001e05f4:
        uVar25 = uVar30 + 1;
        if (uVar25 < 0xf) {
          uVar20 = (ulong)uVar25;
          if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
            uVar25 = uVar30 + 2;
            if (uVar30 == 0xd) {
LAB_001e1110:
              uVar31 = 1;
              uVar30 = 0xe;
              uVar20 = 0xf;
              goto LAB_001e0e1c;
            }
            uVar20 = (ulong)uVar25;
            if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
              uVar25 = uVar30 + 3;
              if (uVar30 == 0xc) goto LAB_001e1110;
              uVar20 = (ulong)uVar25;
              if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                uVar25 = uVar30 + 4;
                if (uVar30 == 0xb) goto LAB_001e1110;
                uVar20 = (ulong)uVar25;
                if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                  uVar25 = uVar30 + 5;
                  if (uVar30 == 10) goto LAB_001e1110;
                  uVar20 = (ulong)uVar25;
                  if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                    uVar25 = uVar30 + 6;
                    if (uVar30 == 9) goto LAB_001e1110;
                    uVar20 = (ulong)uVar25;
                    if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                      uVar25 = uVar30 + 7;
                      if (uVar30 == 8) goto LAB_001e1110;
                      uVar20 = (ulong)uVar25;
                      if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                        uVar25 = uVar30 + 8;
                        if (uVar30 == 7) goto LAB_001e1110;
                        uVar20 = (ulong)uVar25;
                        if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                          uVar25 = uVar30 + 9;
                          if (uVar30 == 6) goto LAB_001e1110;
                          uVar20 = (ulong)uVar25;
                          if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                            uVar25 = uVar30 + 10;
                            if (uVar30 == 5) goto LAB_001e1110;
                            uVar20 = (ulong)uVar25;
                            if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                              uVar25 = uVar30 + 0xb;
                              if (uVar30 == 4) goto LAB_001e1110;
                              uVar20 = (ulong)uVar25;
                              if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                                uVar25 = uVar30 + 0xc;
                                if (uVar30 == 3) goto LAB_001e1110;
                                uVar20 = (ulong)uVar25;
                                if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                                  uVar25 = uVar30 + 0xd;
                                  if (uVar30 == 2) goto LAB_001e1110;
                                  uVar20 = (ulong)uVar25;
                                  if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                                    uVar25 = uVar30 + 0xe;
                                    if (uVar30 == 1) goto LAB_001e1110;
                                    uVar20 = (ulong)uVar25;
                                    if (*(uint *)(this + (ulong)uVar25 * 4 + 0xfdc) <= uVar22) {
                                      if ((uVar30 == 0) || (*(uint *)(this + 0x1014) <= uVar22))
                                      goto LAB_001e07c4;
                                      uVar25 = 0xe;
                                      uVar20 = 0xe;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar30 = uVar25 - 1;
          uVar31 = 0x10 - uVar25;
        }
        else {
LAB_001e07c4:
          uVar31 = 1;
          uVar30 = 0xe;
          uVar25 = 0xf;
          uVar20 = 0xf;
        }
LAB_001e0e1c:
        iVar24 = iVar24 + (uVar25 + uVar38 >> 3);
        uVar25 = uVar25 + uVar38 & 7;
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar25;
        uVar38 = (uVar22 - *(int *)(this + (ulong)uVar30 * 4 + 0xfdc) >> (ulong)(uVar31 & 0x1f)) +
                 *(int *)(this + uVar20 * 4 + 0x101c);
        if (*(uint *)(this + 0xfd8) <= uVar38) {
          uVar38 = 0;
        }
        uVar10 = *(ushort *)(this + (ulong)uVar38 * 2 + 0x1c60);
        if (3 < uVar10) goto LAB_001e0ac4;
LAB_001e0e64:
        uVar22 = uVar10 + 1;
      }
      uVar4 = *(undefined4 *)(this + 0xa0);
      uVar5 = *(undefined4 *)(this + 0xa4);
      uVar6 = *(undefined4 *)(this + 0xa8);
      *(uint *)(this + 0xa0) = uVar22;
      *(undefined4 *)(this + 0xa4) = uVar4;
      *(undefined4 *)(this + 0xa8) = uVar5;
      *(undefined4 *)(this + 0xac) = uVar6;
      *(uint *)(this + 0xb4) = uVar19;
      if (this[0x4d98] != (Unpack)0x0) goto LAB_001e1048;
      uVar20 = *(ulong *)(this + 0xc0);
      uVar34 = uVar20 - uVar22;
      uVar36 = uVar20;
      if (uVar20 < uVar34) {
        uVar36 = uVar34;
      }
      if (*(long *)(this + 0xe978) - 0x1001U <= uVar36) {
        uVar26 = (uVar19 - 1) + uVar34;
        uVar36 = *(ulong *)(this + 0xe980);
        if (uVar19 == 0) {
LAB_001e02f0:
          iVar24 = *(int *)(this + 8);
        }
        else {
          do {
            uVar36 = uVar34 & uVar36;
            bVar16 = uVar34 != uVar26;
            uVar34 = uVar34 + 1;
            *(undefined *)(*(long *)(this + 0x4b90) + uVar20) =
                 *(undefined *)(*(long *)(this + 0x4b90) + uVar36);
            uVar36 = *(ulong *)(this + 0xe980);
            uVar20 = *(long *)(this + 0xc0) + 1U & uVar36;
            *(ulong *)(this + 0xc0) = uVar20;
          } while (bVar16);
          iVar24 = *(int *)(this + 8);
        }
        uVar20 = uVar20 & uVar36;
        *(ulong *)(this + 0xc0) = uVar20;
        if (iVar24 < *(int *)(this + 0xd4)) goto LAB_001dff9c;
LAB_001e0308:
LAB_001e030c:
        if (*(int *)(this + 0xe0) + *(int *)(this + 0xd8) <= iVar24) goto LAB_001e033c;
        if (*(int *)(this + 0xe0) + *(int *)(this + 0xd8) + -1 == iVar24) {
          do {
            if (*(int *)(this + 0xc) < *(int *)(this + 0xdc)) break;
LAB_001e033c:
            do {
              if (this[0xe8] != (Unpack)0x0) goto LAB_001e109c;
              cVar17 = ReadBlockHeader(this,(BitInput *)piVar39,(UnpackBlockHeader *)(this + 0xd8));
              if (cVar17 == '\0') goto LAB_001e0418;
              if (this[0xe9] == (Unpack)0x0) {
                iVar24 = *piVar39;
                goto LAB_001e030c;
              }
              if ((((this[0x10] == (Unpack)0x0) && (*(int *)(this + 0xd0) + -0x18 <= *piVar39)) &&
                  (cVar17 = UnpReadBuf(), cVar17 == '\0')) ||
                 (cVar17 = ReadTables((BitInput *)this,(UnpackBlockHeader *)piVar39,
                                      (UnpackBlockTables *)(this + 0xec)), cVar17 == '\0'))
              goto LAB_001e0418;
            } while (*(int *)(this + 0xe0) + *(int *)(this + 0xd8) <= *(int *)(this + 8));
          } while (*(int *)(this + 0xe0) + *(int *)(this + 0xd8) + -1 == *(int *)(this + 8));
        }
        cVar17 = UnpReadBuf();
        if (cVar17 == '\0') goto LAB_001e109c;
        if ((*(long *)(this + 0x4b88) - *(long *)(this + 0xc0) & *(ulong *)(this + 0xe980)) < 0x1004
            && *(long *)(this + 0x4b88) != *(long *)(this + 0xc0)) {
LAB_001e03f0:
          UnpWriteBuf();
          if (*(long *)(this + 0x4db0) <= *(long *)(this + 0x4da0)) {
            if (this[0x4da8] == (Unpack)0x0) goto LAB_001dffb8;
            this[0x4db8] = (Unpack)0x0;
          }
LAB_001e0418:
          if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(local_8 - ___stack_chk_guard,0);
          }
          return;
        }
        goto LAB_001dffb8;
      }
      *(ulong *)(this + 0xc0) = uVar20 + uVar19;
      puVar35 = (undefined *)(*(long *)(this + 0x4b90) + uVar34);
      puVar33 = (undefined *)(*(long *)(this + 0x4b90) + uVar20);
      if (7 < uVar19) {
        uVar38 = uVar19 - 8;
        bVar16 = false;
        if ((long)uVar34 < (long)(uVar20 + 0x10)) {
          bVar16 = (long)(uVar20 - (uVar34 + 0x10)) < 0;
        }
        bVar16 = bVar16 != ((long)uVar34 < (long)(uVar20 + 0x10) && SBORROW8(uVar20,uVar34 + 0x10));
        if ((bVar16 || uVar38 < 7) || !bVar16 && uVar38 == 7) {
          puVar21 = puVar33;
          puVar29 = puVar35;
          do {
            *puVar21 = *puVar29;
            puVar3 = puVar21 + 8;
            puVar21[1] = puVar29[1];
            puVar21[2] = puVar29[2];
            puVar21[3] = puVar29[3];
            puVar21[4] = puVar29[4];
            puVar21[5] = puVar29[5];
            puVar21[6] = puVar29[6];
            puVar21[7] = puVar29[7];
            puVar21 = puVar3;
            puVar29 = puVar29 + 8;
          } while (puVar3 != puVar33 + (ulong)(uVar38 & 0xfffffff8) + 8);
        }
        else {
          uVar22 = (uVar38 >> 3) + 1;
          lVar40 = 0;
          do {
            uVar41 = *(undefined8 *)(puVar35 + lVar40);
            *(undefined8 *)((long)(puVar33 + lVar40) + 8) =
                 *(undefined8 *)((long)(puVar35 + lVar40) + 8);
            *(undefined8 *)(puVar33 + lVar40) = uVar41;
            lVar40 = lVar40 + 0x10;
          } while (lVar40 != ((ulong)((uVar22 >> 1) - 1) + 1) * 0x10);
          lVar40 = ((ulong)uVar22 & 0x3ffffffe) * 8;
          if ((uVar22 & 1) != 0) {
            puVar33[lVar40] = puVar35[lVar40];
            puVar33[lVar40 + 1] = puVar35[lVar40 + 1];
            puVar33[lVar40 + 2] = puVar35[lVar40 + 2];
            puVar33[lVar40 + 3] = puVar35[lVar40 + 3];
            puVar33[lVar40 + 4] = puVar35[lVar40 + 4];
            puVar33[lVar40 + 5] = puVar35[lVar40 + 5];
            puVar33[lVar40 + 6] = puVar35[lVar40 + 6];
            puVar33[lVar40 + 7] = puVar35[lVar40 + 7];
          }
        }
        lVar40 = (ulong)(uVar38 & 0xfffffff8) + 8;
        puVar35 = puVar35 + lVar40;
        puVar33 = puVar33 + lVar40;
        uVar19 = uVar19 & 7;
      }
      if ((((uVar19 == 0) || (*puVar33 = *puVar35, uVar19 == 1)) ||
          (puVar33[1] = puVar35[1], uVar19 == 2)) ||
         (((puVar33[2] = puVar35[2], uVar19 == 3 || (puVar33[3] = puVar35[3], uVar19 == 4)) ||
          ((puVar33[4] = puVar35[4], uVar19 == 5 || (puVar33[5] = puVar35[5], uVar19 != 7))))))
      goto LAB_001e04c0;
      puVar33[6] = puVar35[6];
      iVar24 = *(int *)(this + 8);
      uVar20 = *(ulong *)(this + 0xc0);
      uVar36 = *(ulong *)(this + 0xe980);
      goto LAB_001dff88;
    }
    if (uVar19 == 0x100) {
      cVar17 = ReadFilter(this,(BitInput *)piVar39,aUStack_20);
      if ((cVar17 == '\0') || (cVar17 = AddFilter(this,aUStack_20), cVar17 == '\0')) {
LAB_001e109c:
        UnpWriteBuf();
        goto LAB_001e0418;
      }
      goto LAB_001e04c0;
    }
    if (uVar19 != 0x101) {
      lVar23 = (long)(int)(uVar19 - 0x102) + 0x28;
      uVar22 = *(uint *)(this + lVar23 * 4);
      if (uVar19 - 0x102 != 0) {
        lVar23 = lVar23 * 4;
        lVar27 = (ulong)(uVar19 - 0x103) * -4;
        memmove(this + lVar27 + lVar23,this + lVar23 + -4 + lVar27,((ulong)(uVar19 - 0x103) + 1) * 4
               );
      }
      *(uint *)(this + 0xa0) = uVar22;
      uVar30 = *(uint *)(this + 0x2e34);
      uVar19 = ((uint)*(byte *)(lVar40 + iVar24 + 2) | (uint)*(byte *)(lVar40 + iVar24) << 0x10 |
               (uint)*(byte *)(lVar40 + iVar24 + 1) << 8) >> (ulong)(8 - uVar38 & 0x1f) & 0xfffe;
      if (uVar19 < *(uint *)(this + (ulong)uVar30 * 4 + 0x2db4)) {
        uVar20 = (ulong)(uVar19 >> (ulong)(0x10 - uVar30 & 0x1f));
        uVar10 = *(ushort *)(this + uVar20 * 2 + 0x3238);
        uVar19 = (uint)uVar10;
        uVar30 = (byte)this[uVar20 + 0x2e38] + uVar38 & 7;
        iVar24 = iVar24 + ((byte)this[uVar20 + 0x2e38] + uVar38 >> 3);
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar30;
        if (7 < uVar10) goto LAB_001e0f5c;
LAB_001e0dc4:
        uVar19 = uVar19 + 2;
        UVar9 = this[0x4d98];
        *(uint *)(this + 0xb4) = uVar19;
      }
      else {
        uVar25 = uVar30 + 1;
        if (uVar25 < 0xf) {
          uVar20 = (ulong)uVar25;
          if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
            uVar25 = uVar30 + 2;
            if (uVar30 == 0xd) {
LAB_001e1308:
              uVar37 = 1;
              uVar31 = 0xe;
              uVar20 = 0xf;
              goto LAB_001e0f0c;
            }
            uVar20 = (ulong)uVar25;
            if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
              uVar25 = uVar30 + 3;
              if (uVar30 == 0xc) goto LAB_001e1308;
              uVar20 = (ulong)uVar25;
              if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                uVar25 = uVar30 + 4;
                if (uVar30 == 0xb) goto LAB_001e1308;
                uVar20 = (ulong)uVar25;
                if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                  uVar25 = uVar30 + 5;
                  if (uVar30 == 10) goto LAB_001e1308;
                  uVar20 = (ulong)uVar25;
                  if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                    uVar25 = uVar30 + 6;
                    if (uVar30 == 9) goto LAB_001e1308;
                    uVar20 = (ulong)uVar25;
                    if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                      uVar25 = uVar30 + 7;
                      if (uVar30 == 8) goto LAB_001e1308;
                      uVar20 = (ulong)uVar25;
                      if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                        uVar25 = uVar30 + 8;
                        if (uVar30 == 7) goto LAB_001e1308;
                        uVar20 = (ulong)uVar25;
                        if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                          uVar25 = uVar30 + 9;
                          if (uVar30 == 6) goto LAB_001e1308;
                          uVar20 = (ulong)uVar25;
                          if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                            uVar25 = uVar30 + 10;
                            if (uVar30 == 5) goto LAB_001e1308;
                            uVar20 = (ulong)uVar25;
                            if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                              uVar25 = uVar30 + 0xb;
                              if (uVar30 == 4) goto LAB_001e1308;
                              uVar20 = (ulong)uVar25;
                              if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                                uVar25 = uVar30 + 0xc;
                                if (uVar30 == 3) goto LAB_001e1308;
                                uVar20 = (ulong)uVar25;
                                if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                                  uVar25 = uVar30 + 0xd;
                                  if (uVar30 == 2) goto LAB_001e1308;
                                  uVar20 = (ulong)uVar25;
                                  if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                                    uVar25 = uVar30 + 0xe;
                                    if (uVar30 == 1) goto LAB_001e1308;
                                    uVar20 = (ulong)uVar25;
                                    if (*(uint *)(this + (ulong)uVar25 * 4 + 0x2db4) <= uVar19) {
                                      if ((uVar30 == 0) || (*(uint *)(this + 0x2dec) <= uVar19))
                                      goto LAB_001e0a5c;
                                      uVar25 = 0xe;
                                      uVar20 = 0xe;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar31 = uVar25 - 1;
          uVar37 = 0x10 - uVar25;
        }
        else {
LAB_001e0a5c:
          uVar37 = 1;
          uVar31 = 0xe;
          uVar25 = 0xf;
          uVar20 = 0xf;
        }
LAB_001e0f0c:
        iVar24 = iVar24 + (uVar25 + uVar38 >> 3);
        uVar30 = uVar25 + uVar38 & 7;
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar30;
        uVar19 = (uVar19 - *(int *)(this + (ulong)uVar31 * 4 + 0x2db4) >> (ulong)(uVar37 & 0x1f)) +
                 *(int *)(this + uVar20 * 4 + 0x2df4);
        if (*(uint *)(this + 0x2db0) <= uVar19) {
          uVar19 = 0;
        }
        uVar10 = *(ushort *)(this + (ulong)uVar19 * 2 + 0x3a38);
        uVar19 = (uint)uVar10;
        if (uVar19 < 8) goto LAB_001e0dc4;
LAB_001e0f5c:
        uVar38 = (uVar10 >> 2) - 1;
        uVar19 = ((((uint)*(byte *)(lVar40 + iVar24 + 2) | (uint)*(byte *)(lVar40 + iVar24) << 0x10
                   | (uint)*(byte *)(lVar40 + iVar24 + 1) << 8) >> (ulong)(8 - uVar30 & 0x1f) &
                  0xffff) >> (ulong)(0x10 - uVar38 & 0x1f)) +
                 ((uVar10 & 3 | 4) << (ulong)(uVar38 & 0x1f)) + 2;
        iVar24 = iVar24 + (uVar30 + uVar38 >> 3);
        UVar9 = this[0x4d98];
        *(int *)(this + 8) = iVar24;
        *(uint *)(this + 0xc) = uVar30 + uVar38 & 7;
        *(uint *)(this + 0xb4) = uVar19;
      }
      if (UVar9 == (Unpack)0x0) {
        uVar20 = *(ulong *)(this + 0xc0);
        uVar34 = uVar20 - uVar22;
        uVar36 = uVar20;
        if (uVar20 < uVar34) {
          uVar36 = uVar34;
        }
        if (uVar36 < *(long *)(this + 0xe978) - 0x1001U) {
          *(ulong *)(this + 0xc0) = uVar20 + uVar19;
          puVar35 = (undefined *)(*(long *)(this + 0x4b90) + uVar34);
          puVar33 = (undefined *)(*(long *)(this + 0x4b90) + uVar20);
          if (7 < uVar19) {
            uVar38 = uVar19 - 8;
            bVar16 = (long)uVar34 < (long)(uVar20 + 0x10);
            bVar15 = false;
            if (bVar16) {
              bVar15 = (long)(uVar20 - (uVar34 + 0x10)) < 0;
            }
            bVar16 = bVar15 != (bVar16 && SBORROW8(uVar20,uVar34 + 0x10));
            if ((bVar16 || uVar38 < 7) || !bVar16 && uVar38 == 7) {
              puVar21 = puVar33;
              puVar29 = puVar35;
              do {
                *puVar21 = *puVar29;
                puVar3 = puVar21 + 8;
                puVar21[1] = puVar29[1];
                puVar21[2] = puVar29[2];
                puVar21[3] = puVar29[3];
                puVar21[4] = puVar29[4];
                puVar21[5] = puVar29[5];
                puVar21[6] = puVar29[6];
                puVar21[7] = puVar29[7];
                puVar21 = puVar3;
                puVar29 = puVar29 + 8;
              } while (puVar33 + (ulong)(uVar38 & 0xfffffff8) + 8 != puVar3);
            }
            else {
              uVar22 = (uVar38 >> 3) + 1;
              lVar40 = 0;
              do {
                uVar41 = *(undefined8 *)(puVar35 + lVar40);
                *(undefined8 *)((long)(puVar33 + lVar40) + 8) =
                     *(undefined8 *)((long)(puVar35 + lVar40) + 8);
                *(undefined8 *)(puVar33 + lVar40) = uVar41;
                lVar40 = lVar40 + 0x10;
              } while (lVar40 != ((ulong)((uVar22 >> 1) - 1) + 1) * 0x10);
              lVar40 = ((ulong)uVar22 & 0x3ffffffe) * 8;
              if ((uVar22 & 1) != 0) {
                puVar33[lVar40] = puVar35[lVar40];
                puVar33[lVar40 + 1] = puVar35[lVar40 + 1];
                puVar33[lVar40 + 2] = puVar35[lVar40 + 2];
                puVar33[lVar40 + 3] = puVar35[lVar40 + 3];
                puVar33[lVar40 + 4] = puVar35[lVar40 + 4];
                puVar33[lVar40 + 5] = puVar35[lVar40 + 5];
                puVar33[lVar40 + 6] = puVar35[lVar40 + 6];
                puVar33[lVar40 + 7] = puVar35[lVar40 + 7];
              }
            }
            lVar40 = (ulong)(uVar38 & 0xfffffff8) + 8;
            puVar35 = puVar35 + lVar40;
            puVar33 = puVar33 + lVar40;
            uVar19 = uVar19 & 7;
          }
          if (((((uVar19 != 0) && (*puVar33 = *puVar35, uVar19 != 1)) &&
               (puVar33[1] = puVar35[1], uVar19 != 2)) &&
              ((puVar33[2] = puVar35[2], uVar19 != 3 && (puVar33[3] = puVar35[3], uVar19 != 4)))) &&
             ((puVar33[4] = puVar35[4], uVar19 != 5 && (puVar33[5] = puVar35[5], uVar19 == 7)))) {
            puVar33[6] = puVar35[6];
          }
          iVar24 = *(int *)(this + 8);
          uVar20 = *(ulong *)(this + 0xc0);
          uVar36 = *(ulong *)(this + 0xe980);
        }
        else {
          uVar36 = *(ulong *)(this + 0xe980);
          if (uVar19 != 0) {
            uVar26 = uVar34 + 1;
            uVar32 = uVar34;
            while( true ) {
              uVar28 = uVar26;
              *(undefined *)(*(long *)(this + 0x4b90) + uVar20) =
                   *(undefined *)(*(long *)(this + 0x4b90) + (uVar32 & uVar36));
              uVar36 = *(ulong *)(this + 0xe980);
              uVar20 = *(long *)(this + 0xc0) + 1U & uVar36;
              *(ulong *)(this + 0xc0) = uVar20;
              if (uVar28 == uVar34 + 1 + (ulong)(uVar19 - 1)) break;
              uVar26 = uVar28 + 1;
              uVar32 = uVar28;
            }
            iVar24 = *(int *)(this + 8);
          }
        }
      }
      else {
        FragmentedWindow::CopyString
                  ((FragmentedWindow *)(this + 0x4b98),uVar19,uVar22,(ulong *)(this + 0xc0),
                   *(ulong *)(this + 0xe980));
        iVar24 = *(int *)(this + 8);
        uVar20 = *(ulong *)(this + 0xc0);
        uVar36 = *(ulong *)(this + 0xe980);
      }
      goto LAB_001dff88;
    }
    uVar19 = *(uint *)(this + 0xb4);
    if (uVar19 == 0) goto LAB_001e04c4;
    uVar22 = *(uint *)(this + 0xa0);
    if (this[0x4d98] != (Unpack)0x0) {
LAB_001e1048:
      FragmentedWindow::CopyString
                ((FragmentedWindow *)(this + 0x4b98),uVar19,uVar22,(ulong *)(this + 0xc0),
                 *(ulong *)(this + 0xe980));
      iVar24 = *(int *)(this + 8);
      uVar20 = *(ulong *)(this + 0xc0);
      uVar36 = *(ulong *)(this + 0xe980);
      goto LAB_001dff88;
    }
    uVar36 = *(ulong *)(this + 0xc0);
    uVar34 = uVar36 - uVar22;
    uVar20 = uVar36;
    if (uVar36 < uVar34) {
      uVar20 = uVar34;
    }
    lVar40 = *(long *)(this + 0x4b90);
    if (*(long *)(this + 0xe978) - 0x1001U <= uVar20) {
      uVar26 = uVar34 + 1;
      *(undefined *)(lVar40 + uVar36) =
           *(undefined *)(lVar40 + (uVar34 & *(ulong *)(this + 0xe980)));
      uVar36 = *(ulong *)(this + 0xe980);
      uVar20 = *(long *)(this + 0xc0) + 1U & uVar36;
      *(ulong *)(this + 0xc0) = uVar20;
      if (uVar19 != 1) {
        do {
          uVar36 = uVar36 & uVar26;
          uVar26 = uVar26 + 1;
          *(undefined *)(*(long *)(this + 0x4b90) + uVar20) =
               *(undefined *)(*(long *)(this + 0x4b90) + uVar36);
          uVar36 = *(ulong *)(this + 0xe980);
          uVar20 = *(long *)(this + 0xc0) + 1U & uVar36;
          *(ulong *)(this + 0xc0) = uVar20;
        } while (uVar26 != (uVar19 - 2) + uVar34 + 2);
      }
      goto LAB_001e02f0;
    }
    *(ulong *)(this + 0xc0) = uVar36 + uVar19;
    puVar35 = (undefined *)(lVar40 + uVar36);
    puVar33 = (undefined *)(lVar40 + uVar34);
    if (uVar19 < 8) goto LAB_001e1228;
    uVar38 = uVar19 - 8;
    bVar16 = (long)uVar34 < (long)(uVar36 + 0x10);
    bVar15 = false;
    if (bVar16) {
      bVar15 = (long)(uVar36 - (uVar34 + 0x10)) < 0;
    }
    bVar16 = bVar15 != (bVar16 && SBORROW8(uVar36,uVar34 + 0x10));
    if ((bVar16 || uVar38 < 7) || !bVar16 && uVar38 == 7) {
      puVar21 = puVar35;
      puVar29 = puVar33;
      do {
        *puVar21 = *puVar29;
        puVar3 = puVar21 + 8;
        puVar21[1] = puVar29[1];
        puVar21[2] = puVar29[2];
        puVar21[3] = puVar29[3];
        puVar21[4] = puVar29[4];
        puVar21[5] = puVar29[5];
        puVar21[6] = puVar29[6];
        puVar21[7] = puVar29[7];
        puVar21 = puVar3;
        puVar29 = puVar29 + 8;
      } while (puVar35 + (ulong)(uVar38 & 0xfffffff8) + 8 != puVar3);
    }
    else {
      uVar22 = (uVar38 >> 3) + 1;
      lVar40 = 0;
      do {
        uVar41 = *(undefined8 *)(puVar33 + lVar40);
        *(undefined8 *)((long)(puVar35 + lVar40) + 8) =
             *(undefined8 *)((long)(puVar33 + lVar40) + 8);
        *(undefined8 *)(puVar35 + lVar40) = uVar41;
        lVar40 = lVar40 + 0x10;
      } while (((ulong)((uVar22 >> 1) - 1) + 1) * 0x10 - lVar40 != 0);
      lVar40 = ((ulong)uVar22 & 0x3ffffffe) * 8;
      if ((uVar22 & 1) != 0) {
        puVar35[lVar40] = puVar33[lVar40];
        puVar35[lVar40 + 1] = puVar33[lVar40 + 1];
        puVar35[lVar40 + 2] = puVar33[lVar40 + 2];
        puVar35[lVar40 + 3] = puVar33[lVar40 + 3];
        puVar35[lVar40 + 4] = puVar33[lVar40 + 4];
        puVar35[lVar40 + 5] = puVar33[lVar40 + 5];
        puVar35[lVar40 + 6] = puVar33[lVar40 + 6];
        puVar35[lVar40 + 7] = puVar33[lVar40 + 7];
      }
    }
    lVar40 = (ulong)(uVar38 & 0xfffffff8) + 8;
    puVar33 = puVar33 + lVar40;
    puVar35 = puVar35 + lVar40;
    uVar19 = uVar19 & 7;
    if (uVar19 == 0) goto LAB_001e04c0;
LAB_001e1228:
    *puVar35 = *puVar33;
    if (((((uVar19 == 1) || (puVar35[1] = puVar33[1], uVar19 == 2)) ||
         (puVar35[2] = puVar33[2], uVar19 == 3)) ||
        ((puVar35[3] = puVar33[3], uVar19 == 4 || (puVar35[4] = puVar33[4], uVar19 == 5)))) ||
       (puVar35[5] = puVar33[5], uVar19 != 7)) goto LAB_001e04c0;
    puVar35[6] = puVar33[6];
    iVar24 = *(int *)(this + 8);
    uVar20 = *(ulong *)(this + 0xc0);
    uVar36 = *(ulong *)(this + 0xe980);
  } while( true );
  while (uVar36 = uVar36 + 1, uVar36 != 0x20) {
    if (uVar20 < *(ulong *)(this + uVar36 * 8 + 0x4c98)) {
      *(undefined *)
       (*(long *)(this + (uVar36 & 0xffffffff) * 8 + 0x4b98) +
       (uVar20 - *(long *)(this + ((ulong)((int)uVar36 - 1) + 0x20) * 8 + 0x4b98))) = uVar13;
      goto LAB_001e04c0;
    }
  }
  **(undefined **)(this + 0x4b98) = uVar13;
LAB_001e04c0:
  iVar24 = *(int *)(this + 8);
LAB_001e04c4:
  uVar20 = *(ulong *)(this + 0xc0);
  uVar36 = *(ulong *)(this + 0xe980);
  goto LAB_001dff88;
}


