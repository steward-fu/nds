/*
 * Ghidra decompilation
 *
 * Function : FUN_0012bf6c
 * Address  : 0012bf6c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0012bf6c(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort *puVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  long *plVar22;
  byte bVar23;
  uint *puVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  undefined2 uVar28;
  uint uVar29;
  uint uVar30;
  undefined2 uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  int iVar39;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  uint uStack_78;
  int iStack_74;
  long lStack_68;
  uint uStack_44;
  int iStack_3c;
  long lStack_38;
  uint *puStack_30;
  long *plStack_28;
  uint uStack_20;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  byte bStack_10;
  byte bStack_f;
  char cStack_e;
  long lStack_8;
  
  lVar38 = *(long *)(param_1 + 0x2088);
  lStack_8 = ___stack_chk_guard;
  lStack_38 = lVar38 + 0x1420030;
  bStack_f = 0;
  uStack_20 = param_2;
  if ((((*(int *)(param_1 + 0x210c) != 1) || (bStack_f = 8, param_2 < 0xffff0000)) &&
      (0x1ffffff < param_2)) &&
     (lVar41 = *(long *)(nds_system + param_1 + 0xb063d0) + (ulong)(param_2 >> 0x17) * 0x60,
     pcVar21 = *(code **)(lVar41 + 0x48),
     lVar41 = (*pcVar21)(*(undefined8 *)(nds_system + param_1 + 0xb063d8),lVar41,param_2,pcVar21,0),
     lVar41 == 0)) {
LAB_0012ce9c:
    free(puStack_30);
    if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,lStack_8 - ___stack_chk_guard,0);
    }
    return lVar41;
  }
  uVar37 = uStack_20;
  puVar13 = (uint *)malloc(0x200);
  uStack_78 = 0;
  plStack_28 = *(long **)(nds_system + *(long *)(param_1 + 0x2088) + 0xffe140);
  uStack_14 = 0;
  cStack_e = '\0';
  if ((*(int *)(param_1 + 0x210c) == 1) && (uStack_78 = 2, uVar37 < 0x2000000)) {
    iStack_74 = 0;
  }
  else {
    iStack_74 = (uVar37 >> 0x18 != 2) + 1;
  }
  uVar11 = 0xf;
  lVar41 = 0;
  bVar9 = false;
  lStack_68 = 0;
  uStack_44 = 0;
  uVar27 = 0;
  uVar40 = 0x10;
  iVar39 = 0;
  puStack_30 = puVar13;
  if (param_3 == 0) goto LAB_0012c2b8;
LAB_0012c0c8:
  puVar24 = puStack_30;
  sVar10 = load_memory16(param_1 + 0x23d0,uVar37);
  iVar18 = 0;
  if (sVar10 == 0) {
    iVar18 = iVar39 + 1;
  }
  uVar14 = convert_thumb_instruction_to_arm(sVar10,&iStack_3c);
  uVar30 = uVar37 + 4;
  uVar37 = uVar37 + 2;
  *(int *)((long)puVar24 + lStack_68) = (int)uVar14;
  uVar15 = uVar30 & 0xfffffffd;
  if (iStack_3c == 0) {
    uVar15 = uVar30;
  }
  puVar13[1] = uVar15;
  iVar39 = iVar18;
LAB_0012c100:
  uVar16 = uVar14 >> 0x1d & 7;
  uVar33 = (uint)(uVar14 >> 0x1c) & 0xf;
  uVar15 = (uint)uVar14;
  uVar30 = param_3 & 1;
  if ((uVar11 == 0xf) || ((uint)uVar16 != uVar11 >> 1)) {
    *(undefined2 *)((long)puVar13 + 0x16) = 0;
    if ((uVar15 & 0xe000010) != 0x6000010) {
      uVar30 = 0;
    }
    uVar15 = *(uint *)(&condition_source_flags_11246 + uVar16 * 4);
    *(undefined4 *)((long)puVar13 + 0x19) = 0x10000;
    uVar26 = (uint)(uVar14 >> 0x19) & 7;
    bVar8 = uVar26 == 5;
    uVar17 = uVar33;
    if (!bVar8) goto LAB_0012c15c;
LAB_0012c948:
    iVar18 = (int)((long)(uVar14 << 0x28) >> 0x28) + 1;
    if (uVar33 == 0xf) {
      uVar27 = (((uint)(uVar14 >> 0x18) & 1) + iVar18 * 2) * 2;
      if (param_3 == 0) {
        uVar32 = 0xc000;
        uVar27 = uVar27 | 1;
        uVar33 = 0xc000;
      }
      else {
LAB_0012ca3c:
        uVar32 = 0xc000;
        uVar33 = 0xc000;
      }
    }
    else if (param_3 == 0) {
      uVar27 = iVar18 * 4;
      if ((uVar14 & 0x1000000) != 0) goto LAB_0012ca3c;
      uVar32 = 0x8000;
      uVar33 = 0x8000;
    }
    else if ((uVar14 & 0x1000000) == 0) {
      uVar32 = 0x8000;
      uVar27 = iVar18 * 2 | 1;
      uVar33 = 0x8000;
    }
    else {
      uVar32 = 0xc000;
      uVar27 = iVar18 * 2 | 1;
      uVar33 = 0xc000;
    }
    uVar16 = (ulong)(uVar37 + uVar27);
    uVar17 = 0;
    uVar25 = 0;
    uVar26 = 0;
    goto LAB_0012c400;
  }
  if (uVar11 == uVar33) {
    uVar14 = 0xe1a00000;
    uVar17 = 0xe;
    uVar15 = 0;
    uVar30 = 0;
    *puVar13 = 0xe1a00000;
    *(undefined2 *)((long)puVar13 + 0x16) = 0;
    *(undefined4 *)((long)puVar13 + 0x19) = 0x10000;
LAB_0012c74c:
    uVar12 = (uint)uVar14;
    uVar16 = (ulong)(uVar12 & 0x100000);
    if (((uint)(uVar14 >> 0x17) & 3) == 2) {
      if ((uVar14 & 0x100000) == 0) {
        uVar33 = uVar12 & 0x80;
        if ((uVar12 >> 7 & 1) == 0) {
          if ((uVar12 >> 4 & 1) == 0) {
            uVar26 = uVar12 & 0x400000;
            uVar16 = (ulong)(uVar12 & 0x200000);
            if ((uVar12 >> 0x15 & 1) == 0) {
              uVar33 = 1 << (uVar14 >> 0xc & 0xf);
              uVar32 = (ushort)uVar33;
              if ((uVar14 & 0x400000) == 0) {
                uVar15 = uVar15 | 0xf0000000;
                uVar16 = (ulong)uVar26;
                uVar17 = 0;
                uVar25 = 0;
              }
              else {
                uVar26 = 0;
                uVar17 = 0;
                uVar25 = 0;
              }
            }
            else {
              uVar29 = 1 << (ulong)(uVar12 & 0xf);
              if ((uVar14 & 0x400000) == 0) {
                uVar17 = 0;
                if ((uVar14 & 0x80000) != 0) {
                  uVar17 = 0xf0;
                }
                if ((uVar12 >> 0x10 & 1) == 0) {
LAB_0012d884:
                  uVar33 = 0;
                  uVar26 = uVar27 & uVar29;
                  uVar16 = 0;
                  uVar25 = (ushort)uVar29;
                  uVar32 = 0;
                }
                else {
                  uVar26 = uVar27 & (uVar29 | 0x7f00);
                  uVar16 = 0;
                  uVar33 = 0;
                  *(undefined *)((long)puVar13 + 0x1a) = 4;
                  uVar25 = (ushort)uVar29 | 0x7f00;
                  uVar32 = 0;
                }
              }
              else {
                uVar26 = uVar27 & uVar29;
                uVar16 = 0;
                uVar33 = 0;
                uVar17 = 0;
                uVar25 = (ushort)uVar29;
                uVar32 = 0;
              }
            }
          }
          else {
            uVar26 = (uint)(uVar14 >> 5) & 3;
            if (uVar26 == 2) {
              if (uStack_78 == 0) {
LAB_0012ccfc:
                uVar26 = 0;
                uVar16 = 0;
                uVar17 = 0;
                *(undefined *)(puVar13 + 7) = 1;
                uVar25 = 0;
                uVar32 = 0;
              }
              else {
                uVar12 = 1 << (uVar14 >> 0x10 & 0xf) | 1 << (ulong)(uVar12 & 0xf);
                uVar26 = uVar12 & uVar27;
                uVar16 = (ulong)uVar33;
                uVar33 = 1 << (uVar14 >> 0xc & 0xf);
                uVar17 = 0;
                uVar25 = (ushort)uVar12;
                uVar32 = (ushort)uVar33;
              }
            }
            else if (uVar26 == 3) {
              if (uStack_78 == 0 || uVar17 != 0xe) goto LAB_0012ccfc;
              uVar16 = (ulong)uVar33;
              uVar26 = 0;
              uVar17 = 0;
              uVar25 = 0;
              uVar32 = 0;
            }
            else if (uVar26 == 1) {
              if (uStack_78 == 0) goto LAB_0012ccfc;
              uVar16 = (ulong)uVar33;
              uVar12 = 1 << (ulong)(uVar12 & 0xf);
              uVar26 = uVar27 & (uVar12 | 0x8000);
              uVar33 = 0xc000;
              uVar17 = 0;
              uVar25 = (ushort)uVar12 | 0x8000;
              uVar32 = 0xc000;
            }
            else {
              uVar16 = (ulong)(uVar12 & 0x400000);
              if ((uVar12 >> 0x16 & 1) == 0) {
                uVar12 = 1 << (ulong)(uVar12 & 0xf);
                uVar26 = uVar12 & uVar27;
                uVar33 = 0x8000;
                uVar17 = 0;
                uVar25 = (ushort)uVar12;
                uVar32 = 0x8000;
              }
              else if (uStack_78 == 0) {
                uVar26 = 0;
                uVar16 = 0;
                uVar17 = 0;
                uVar33 = 0;
                uVar25 = 0;
                uVar32 = 0;
              }
              else {
                uVar12 = 1 << (ulong)(uVar12 & 0xf);
                uVar17 = 0;
                uVar33 = 1 << (uVar14 >> 0xc & 0xf);
                uVar26 = uVar12 & uVar27;
                uVar16 = 0;
                uVar25 = (ushort)uVar12;
                uVar32 = (ushort)uVar33;
              }
            }
          }
        }
        else {
          if (uStack_78 == 0) goto LAB_0012cab4;
          uVar26 = (uint)(uVar14 >> 0x15) & 3;
          uVar29 = 1 << (uVar14 >> 8 & 0xf) | 1 << (ulong)(uVar12 & 0xf);
          uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
          uVar32 = (ushort)uVar33;
          if (uVar26 == 1) {
            if ((uVar12 >> 5 & 1) == 0) {
              uVar17 = 0;
              uVar29 = 1 << (uVar14 >> 0xc & 0xf) | uVar29;
              uVar26 = uVar27 & uVar29;
              uVar25 = (ushort)uVar29;
            }
            else {
LAB_0012d7b0:
              uVar26 = uVar27 & uVar29;
              uVar17 = 0;
              uVar25 = (ushort)uVar29;
            }
          }
          else if (uVar26 == 2) {
            uVar26 = uVar27 & uVar29;
            uVar33 = uVar33 | 1 << (uVar14 >> 0xc & 0xf);
            uVar17 = 0;
            uVar25 = (ushort)uVar29;
            uVar32 = (ushort)uVar33;
          }
          else {
            if ((uVar12 >> 0x16 & 1) != 0) goto LAB_0012d7b0;
            uVar19 = uVar14 >> 0xc & 0xf;
LAB_0012cc54:
            uVar29 = 1 << uVar19 | uVar29;
            uVar26 = uVar27 & uVar29;
            uVar17 = 0;
            uVar25 = (ushort)uVar29;
          }
        }
        goto LAB_0012c400;
      }
      uVar29 = 1 << (ulong)(uVar12 & 0xf);
      if ((uVar12 >> 4 & 1) != 0) goto LAB_0012cd2c;
      uVar33 = (uint)(uVar14 >> 5) & 3;
      uVar26 = (uint)(uVar14 >> 7) & 0x1f;
      uVar12 = (uint)(uVar14 >> 0x15) & 0xf;
      uVar19 = uVar14 >> 0xc & 0xf;
LAB_0012d480:
      uVar34 = (uint)uVar19;
      if ((uVar26 | uVar33) != 0) {
        uVar42 = 0xe0;
        uVar36 = 0xe0000000;
        uVar17 = 0x20;
        uVar35 = 0x20000000;
        goto LAB_0012c790;
      }
      if (uVar12 < 10) {
        if (uVar12 < 8) {
          uVar17 = 0;
          if (uVar12 < 5) {
            if (uVar12 < 2) goto LAB_0012d4ac;
            uVar36 = 0xf0000000;
            uVar29 = uVar29 | 1 << (uVar14 >> 0x10 & 0xf);
            uVar33 = 1 << uVar19;
            goto LAB_0012c7d8;
          }
          goto LAB_0012c7b8;
        }
        uVar36 = 0xc0000000;
        goto LAB_0012d590;
      }
      if (uVar12 < 0xc) goto LAB_0012cf3c;
      if ((uVar12 & 0xfffffffd) == 0xd) {
        uVar33 = 1 << uVar19;
        uVar36 = 0xc0000000;
        goto LAB_0012c7d8;
      }
LAB_0012d4ac:
      uVar29 = 1 << (uVar14 >> 0x10 & 0xf) | uVar29;
      uVar33 = 1 << uVar19;
      uVar28 = (undefined2)uVar29;
      uVar31 = (undefined2)uVar33;
      uVar17 = 0xc0;
      uVar35 = 0xc0000000;
joined_r0x0012cf10:
      uVar26 = uVar27 & uVar29;
      if (uVar34 == 0xf) {
        uVar25 = (ushort)uVar29;
        uVar32 = (ushort)uVar33;
        uVar36 = (ulong)uVar35;
        *(undefined *)(puVar13 + 7) = 1;
LAB_0012cf20:
        if ((uVar14 & 0x100000) == 0) {
          uVar17 = (int)(uVar36 >> 0x1c) << 4;
          goto LAB_0012c400;
        }
        goto LAB_0012d570;
      }
LAB_0012c1f8:
      uVar16 = 0;
      uVar17 = uVar17 | uVar15 >> 0x1c;
      uVar27 = 0;
      *(undefined2 *)(puVar13 + 4) = 0;
      *(undefined2 *)((long)puVar13 + 0x12) = uVar28;
      *(undefined2 *)(puVar13 + 5) = uVar31;
      *(char *)(puVar13 + 6) = (char)uVar17;
    }
    else {
      uVar29 = 1 << (ulong)(uVar12 & 0xf);
      if ((uVar12 >> 4 & 1) == 0) {
        uVar33 = (uint)(uVar14 >> 5) & 3;
        uVar26 = (uint)(uVar14 >> 7) & 0x1f;
        uVar12 = (uint)(uVar14 >> 0x15) & 0xf;
        uVar19 = uVar14 >> 0xc & 0xf;
        if ((uVar14 & 0x100000) != 0) goto LAB_0012d480;
        uVar35 = 0;
        uVar42 = 0xc0;
        uVar36 = 0xc0000000;
        uVar17 = 0;
LAB_0012c790:
        uVar34 = (uint)uVar19;
        uVar7 = uVar15 | 0x20000000;
        if (uVar26 != 0 || uVar33 != 3) {
          uVar7 = uVar15;
        }
      }
      else {
        if ((uVar14 & 0x100000) != 0) {
LAB_0012cd2c:
          uVar15 = uVar15 | 0x20000000;
          *(undefined *)((long)puVar13 + 0x1b) = 2;
        }
        uVar12 = (uint)(uVar14 >> 0x15) & 0xf;
        uVar29 = uVar29 | 1 << (uVar14 >> 8 & 0xf);
        uVar19 = uVar14 >> 0xc & 0xf;
        uVar34 = (uint)uVar19;
        uVar42 = 0xc0;
        uVar36 = 0xc0000000;
        uVar17 = 0;
        uVar35 = 0;
        uVar7 = uVar15;
      }
      uVar15 = uVar7;
      if (uVar12 < 10) {
        uVar34 = (uint)uVar19;
        if (7 < uVar12) {
LAB_0012d590:
          uVar29 = 1 << (uVar14 >> 0x10 & 0xf) | uVar29;
          uVar25 = (ushort)uVar29;
joined_r0x0012cf5c:
          uVar26 = uVar27 & uVar29;
          if (uVar34 != 0xf) {
            uVar17 = (int)(uVar36 >> 0x1c) << 4;
            uVar16 = 0;
            uVar33 = 0;
            uVar32 = 0;
            goto LAB_0012c400;
          }
          uVar25 = (ushort)uVar29;
          uVar32 = 0;
          uVar33 = 0;
          goto LAB_0012cf20;
        }
        if (uVar12 < 5) {
          if (uVar12 < 2) goto LAB_0012cee0;
          uVar33 = 1 << uVar19;
          uVar29 = uVar29 | 1 << (uVar14 >> 0x10 & 0xf);
          if ((uVar14 & 0x100000) == 0) {
            uVar26 = uVar27 & uVar29;
            uVar16 = 0;
            uVar25 = (ushort)uVar29;
            uVar32 = (ushort)uVar33;
            goto LAB_0012c400;
          }
        }
        else {
LAB_0012c7b8:
          uVar34 = (uint)uVar19;
          uVar15 = uVar15 | 0x20000000;
          uVar29 = uVar29 | 1 << (uVar14 >> 0x10 & 0xf);
          uVar33 = 1 << uVar19;
          if ((uVar14 & 0x100000) == 0) goto LAB_0012cb8c;
        }
        uVar36 = 0xf0000000;
      }
      else {
        if (uVar12 != 0xd) {
          if (uVar12 < 0xe) {
            if (uVar12 - 10 < 2) {
LAB_0012cf3c:
              uVar29 = 1 << (uVar14 >> 0x10 & 0xf) | uVar29;
              uVar25 = (ushort)uVar29;
              uVar36 = 0xf0000000;
              goto joined_r0x0012cf5c;
            }
          }
          else {
            if (uVar12 == 0xf) goto LAB_0012cb80;
            uVar12 = 0xe;
          }
LAB_0012cee0:
          uVar29 = 1 << (uVar14 >> 0x10 & 0xf) | uVar29;
          if ((uVar14 & 0x100000) != 0) {
            uVar35 = (uint)uVar36;
            uVar17 = uVar42;
          }
          uVar33 = 1 << (ulong)uVar34;
          uVar28 = (undefined2)uVar29;
          uVar31 = (undefined2)uVar33;
          goto joined_r0x0012cf10;
        }
LAB_0012cb80:
        uVar33 = 1 << (ulong)uVar34;
        if ((uVar14 & 0x100000) == 0) {
LAB_0012cb8c:
          uVar26 = uVar27 & uVar29;
          uVar16 = 0;
          uVar25 = (ushort)uVar29;
          uVar32 = (ushort)uVar33;
          goto LAB_0012c400;
        }
      }
LAB_0012c7d8:
      uVar26 = uVar27 & uVar29;
      uVar25 = (ushort)uVar29;
      uVar32 = (ushort)uVar33;
      if (uVar34 == 0xf) {
LAB_0012d570:
        if (3 < uVar12 - 8) {
          uVar17 = 0xf0;
          uVar16 = 0;
          goto LAB_0012c400;
        }
      }
      uVar16 = 0;
      uVar17 = (int)(uVar36 >> 0x1c) << 4;
LAB_0012c400:
      uVar17 = uVar17 | uVar15 >> 0x1c;
      uVar27 = 0;
      *(undefined2 *)(puVar13 + 4) = 0;
      *(ushort *)((long)puVar13 + 0x12) = uVar25;
      *(ushort *)(puVar13 + 5) = uVar32;
      *(char *)(puVar13 + 6) = (char)uVar17;
    }
  }
  else {
    uVar33 = uVar15 & 0xfffffff | 0xe0000000;
    uVar14 = (ulong)uVar33;
    uVar26 = (uVar15 & 0xe000000) >> 0x19;
    *puVar13 = uVar33;
    *(undefined2 *)((long)puVar13 + 0x16) = 0;
    *(undefined4 *)((long)puVar13 + 0x19) = 0x10000;
    if ((uVar15 & 0xe000010) != 0x6000010) {
      uVar30 = 0;
    }
    uVar15 = 0;
    bVar8 = uVar26 == 5;
    uVar17 = 0xe;
    uVar33 = 0xe;
    if (bVar8) goto LAB_0012c948;
LAB_0012c15c:
    uVar12 = (uint)uVar14;
    if (4 < uVar26 && !bVar8) {
      if (uVar26 == 6) {
        uVar17 = 0;
        uVar32 = 0;
        uVar25 = 0;
        uVar26 = 0;
        uVar16 = 0;
        uVar33 = 0;
        *(undefined *)(puVar13 + 7) = 1;
      }
      else {
        uVar16 = (ulong)(uVar12 & 0x1000000);
        if ((uVar12 >> 0x18 & 1) != 0) {
LAB_0012c9b0:
          uVar26 = uVar27 & 0x8000;
          uVar31 = 0xc000;
          uVar17 = 0;
          uVar33 = 0xc000;
          uVar28 = 0x8000;
          goto LAB_0012c1f8;
        }
        if (uStack_78 != 0) {
          uVar33 = uVar12 & 0x10;
          if ((uVar12 >> 4 & 1) != 0) {
            uVar33 = 1 << (uVar14 >> 0xc & 0xf);
            uVar32 = (ushort)uVar33;
            if ((uVar12 >> 0x14 & 1) == 0) {
              uVar25 = uVar32;
              if (((uint)(uVar14 >> 8) & 0xf) == 0xf) {
                uVar16 = uVar14 >> 0x15 & 7;
                if ((int)uVar16 == 0) {
                  uVar17 = (uint)(uVar14 >> 0x10) & 0xf;
                  uVar12 = uVar12 & 0xef;
                  if (uVar17 == 7) {
                    if (uVar12 != 0x80 && uVar12 != 0x48) goto LAB_0012c890;
                    uVar26 = uVar27 & (uVar33 | 0x8000);
                    uVar33 = 0x8000;
                    uVar25 = uVar32 | 0x8000;
                    uVar32 = 0x8000;
                    uVar17 = 0;
                    *(undefined *)((long)puVar13 + 0x1a) = 1;
                  }
                  else {
                    uVar26 = uVar27 & uVar33;
                    if ((uVar17 == 9 && uVar12 == 1) || ((uVar14 & 0xef) == 0 && uVar17 == 1)) {
                      uVar33 = 0;
                      uVar17 = 0;
                      *(undefined *)((long)puVar13 + 0x1a) = 4;
                      uVar32 = 0;
                    }
                    else {
                      uVar33 = 0;
                      uVar17 = 0;
                      uVar32 = 0;
                    }
                  }
                }
                else {
                  uVar26 = uVar27 & uVar33;
                  uVar16 = 0;
                  uVar33 = 0;
                  uVar17 = 0;
                  uVar32 = 0;
                }
              }
              else {
LAB_0012c890:
                uVar26 = uVar27 & uVar33;
                uVar17 = 0;
                uVar33 = 0;
                uVar32 = 0;
              }
            }
            else {
              uVar26 = 0;
              uVar17 = 0;
              uVar25 = 0;
            }
            goto LAB_0012c400;
          }
          goto LAB_0012ccfc;
        }
LAB_0012cab4:
        uVar16 = (ulong)uStack_78;
LAB_0012cac0:
        uVar26 = 0;
        uVar33 = 0;
        uVar17 = 0;
        *(undefined *)(puVar13 + 7) = 1;
        uVar25 = 0;
        uVar32 = 0;
      }
      goto LAB_0012c400;
    }
    if (uVar26 < 4) {
      if (uVar26 < 2) {
        if (uVar26 != 1) goto LAB_0012c2dc;
        uVar16 = uVar14 >> 0xc & 0xf;
        iVar18 = (int)uVar16;
        if (((uint)(uVar14 >> 0x17) & 3) == 2) {
          uVar33 = 0;
          if ((uVar12 >> 0x14 & 1) == 0) {
            if (iVar18 == 0xf) {
              uVar16 = (ulong)(uVar12 & 0x400000);
              uVar29 = 1 << (ulong)(uVar12 & 0xf);
              if ((uVar12 >> 0x16 & 1) == 0) {
                uVar17 = 0;
                if ((uVar14 & 0x80000) != 0) {
                  uVar17 = 0xf0;
                }
                if ((uVar12 >> 0x10 & 1) == 0) goto LAB_0012d884;
                uVar26 = uVar27 & (uVar29 | 0x7f00);
                uVar33 = 0;
                *(undefined *)((long)puVar13 + 0x1a) = 4;
                uVar25 = (ushort)uVar29 | 0x7f00;
                uVar32 = 0;
              }
              else {
                uVar26 = uVar27 & uVar29;
                uVar16 = 0;
                uVar17 = 0;
                uVar25 = (ushort)uVar29;
                uVar32 = 0;
              }
            }
            else {
              uVar26 = 0;
              uVar16 = 0;
              uVar17 = 0;
              *(undefined *)(puVar13 + 7) = 1;
              uVar25 = 0;
              uVar32 = 0;
            }
            goto LAB_0012c400;
          }
          uVar29 = (uint)(uVar14 >> 0x15) & 0xf;
          if ((uVar14 & 0xf00) == 0) goto LAB_0012c198;
LAB_0012cc7c:
          if (uVar29 < 10) {
            if (uVar29 < 8) {
              uVar17 = 0x20;
              if (uVar29 < 5) {
                if (uVar29 < 2) goto LAB_0012cca0;
                uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
                uVar35 = 0xf0000000;
                uVar26 = uVar33 & uVar27;
                uVar25 = (ushort)uVar33;
              }
              else {
LAB_0012c8b0:
                uVar35 = 1 << (uVar14 >> 0x10 & 0xf);
                uVar15 = uVar15 | 0x20000000;
                uVar26 = uVar35 & uVar27;
                uVar25 = (ushort)uVar35;
                if ((uVar14 & 0x100000) == 0) {
LAB_0012c9a4:
                  uVar33 = 1 << uVar16;
                  uVar16 = 0;
                  uVar32 = (ushort)uVar33;
                  goto LAB_0012c400;
                }
LAB_0012c8d0:
                uVar25 = (ushort)uVar35;
                uVar35 = 0xf0000000;
              }
              goto LAB_0012c8d4;
            }
            uVar35 = 0xe0000000;
LAB_0012d4e4:
            uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
            uVar25 = (ushort)uVar33;
joined_r0x0012d4fc:
            uVar26 = uVar27 & uVar33;
            if (iVar18 != 0xf) {
              uVar17 = uVar35 >> 0x18;
              uVar16 = 0;
              uVar33 = 0;
              uVar32 = 0;
              goto LAB_0012c400;
            }
            uVar25 = (ushort)uVar33;
            uVar32 = 0;
            uVar33 = 0;
            goto joined_r0x0012cd48;
          }
          if (uVar29 != 0xd) {
            if (uVar29 < 0xe) {
              if (uVar29 - 10 < 2) {
LAB_0012c9f8:
                uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
                uVar35 = 0xf0000000;
                uVar25 = (ushort)uVar33;
                goto joined_r0x0012d4fc;
              }
            }
            else if (uVar29 == 0xf) goto LAB_0012cf8c;
LAB_0012cca0:
            uVar42 = 1 << (uVar14 >> 0x10 & 0xf);
            uVar28 = (undefined2)uVar42;
            uVar31 = (undefined2)(1 << uVar16);
            uVar17 = 0xe0;
            uVar35 = 0xe0000000;
            goto joined_r0x0012c1f0;
          }
LAB_0012cf8c:
          uVar35 = 0xe0000000;
LAB_0012cf98:
          uVar25 = 0;
          uVar26 = 0;
LAB_0012c8d4:
          uVar33 = 1 << uVar16;
          uVar32 = (ushort)uVar33;
          if (iVar18 == 0xf) goto LAB_0012cd4c;
        }
        else {
          uVar29 = (uint)(uVar14 >> 0x15) & 0xf;
          if (((uVar14 & 0xf00) != 0) && ((uVar12 >> 0x14 & 1) != 0)) goto LAB_0012cc7c;
LAB_0012c198:
          if (uVar29 < 10) {
            if (uVar29 < 8) {
              if (4 < uVar29) {
                uVar17 = 0;
                goto LAB_0012c8b0;
              }
              if (uVar29 < 2) goto LAB_0012c1b8;
              uVar35 = 1 << (uVar14 >> 0x10 & 0xf);
              uVar33 = 1 << uVar16;
              uVar26 = uVar35 & uVar27;
              if ((uVar12 >> 0x14 & 1) == 0) {
                uVar17 = 0;
                uVar16 = 0;
                uVar25 = (ushort)uVar35;
                uVar32 = (ushort)uVar33;
                goto LAB_0012c400;
              }
              goto LAB_0012c8d0;
            }
            uVar35 = 0xc0000000;
            goto LAB_0012d4e4;
          }
          if (uVar29 == 0xd) {
LAB_0012c98c:
            uVar26 = uVar12 & 0x100000;
            uVar17 = 0;
            uVar25 = 0;
            if ((uVar12 >> 0x14 & 1) == 0) goto LAB_0012c9a4;
            uVar35 = 0xc0000000;
            goto LAB_0012cf98;
          }
          if (uVar29 < 0xe) {
            if (1 < uVar29 - 10) goto LAB_0012c1b8;
            goto LAB_0012c9f8;
          }
          if (uVar29 == 0xf) goto LAB_0012c98c;
LAB_0012c1b8:
          uVar35 = 0xc0000000;
          if ((uVar14 & 0x100000) == 0) {
            uVar35 = 0;
          }
          uVar42 = 1 << (uVar14 >> 0x10 & 0xf);
          uVar17 = 0xc0;
          if ((uVar14 & 0x100000) == 0) {
            uVar17 = 0;
          }
          uVar28 = (undefined2)uVar42;
          uVar31 = (undefined2)(1 << uVar16);
joined_r0x0012c1f0:
          uVar33 = 1 << uVar16;
          uVar26 = uVar27 & uVar42;
          if (iVar18 != 0xf) goto LAB_0012c1f8;
          uVar32 = (ushort)(1 << uVar16);
          uVar25 = (ushort)uVar42;
          uVar33 = 1 << uVar16;
          *(undefined *)(puVar13 + 7) = 1;
joined_r0x0012cd48:
          if ((uVar14 & 0x100000) == 0) {
            uVar16 = (ulong)(uVar12 & 0x100000);
            uVar17 = uVar35 >> 0x18;
            goto LAB_0012c400;
          }
LAB_0012cd4c:
          if (3 < uVar29 - 8) {
            uVar17 = 0xf0;
            uVar16 = 0;
            goto LAB_0012c400;
          }
        }
        uVar17 = uVar35 >> 0x18;
        uVar16 = 0;
        goto LAB_0012c400;
      }
      if (uVar17 == 0xf) {
        uVar17 = 0;
        uVar26 = 0;
        uVar16 = 0;
        uVar33 = 0;
        uVar25 = 0;
        uVar32 = 0;
        goto LAB_0012c400;
      }
      uVar29 = 0;
      if ((uVar12 >> 0x19 & 1) != 0) {
        if ((uVar12 >> 4 & 1) != 0) {
          if (param_3 != 0) {
            uVar26 = uVar27 & 0x8000;
            uVar16 = (ulong)(uVar12 & 0x10000);
            if ((uVar12 >> 0x10 & 1) != 0) goto LAB_0012c9b0;
            uVar17 = 0;
            uVar33 = 0x4000;
            uVar25 = 0x8000;
            uVar32 = 0x4000;
            goto LAB_0012c400;
          }
          uVar16 = 0;
          goto LAB_0012cac0;
        }
        uVar29 = 1 << (ulong)(uVar12 & 0xf);
      }
      uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
      uVar26 = 1 << (uVar14 >> 0xc & 0xf);
      uVar29 = uVar33 | uVar29;
      if (((uVar12 ^ 0xffffffff) & 0x1200000) != 0) {
        uVar33 = 0;
      }
      if ((uVar12 >> 0x14 & 1) != 0) {
        uVar33 = uVar33 | uVar26;
        uVar26 = uVar27 & uVar29;
        uVar28 = (undefined2)uVar29;
        uVar27 = uVar33 & 0xffff;
        *(undefined *)((long)puVar13 + 0x1a) = 8;
        goto LAB_0012c674;
      }
      uVar29 = uVar29 | uVar26;
LAB_0012c3e4:
      uVar16 = (ulong)(uVar12 & 0x100000);
      uVar26 = uVar27 & uVar29;
      *(undefined *)((long)puVar13 + 0x1a) = 4;
      uVar17 = 0;
      uVar25 = (ushort)uVar29;
      uVar32 = (ushort)uVar33;
      goto LAB_0012c400;
    }
    if (uVar26 == 4) {
      uVar29 = 1 << (uVar14 >> 0x10 & 0xf);
      uVar33 = 0;
      if ((uVar14 & 0x200000) != 0) {
        uVar33 = uVar29;
      }
      iVar18 = (uint)(byte)(&bit_count)[uVar12 & 0xff] +
               (uint)(byte)(&bit_count)[uVar14 >> 8 & 0xff];
      if (iVar18 == 0) {
        *(undefined *)(puVar13 + 7) = 1;
LAB_0012c3dc:
        if ((uVar14 & 0x100000) == 0) {
          uVar29 = uVar12 & 0xffff | uVar29;
          goto LAB_0012c3e4;
        }
      }
      else {
        if (uVar17 != 0xe) goto LAB_0012c3dc;
        cVar6 = (char)iVar18;
        if (iVar18 == 1) {
          cVar6 = '\x02';
        }
        if ((uVar12 & 0x108000) != 0x108000) {
          *(char *)((long)puVar13 + 0x1b) = cVar6;
          goto LAB_0012c3dc;
        }
        *(char *)((long)puVar13 + 0x1b) = cVar6 + '\x01';
      }
      *(undefined *)((long)puVar13 + 0x1a) = 8;
      uVar26 = uVar27 & uVar29;
      uVar28 = (undefined2)uVar29;
      if ((uVar12 >> 0x16 & 1) == 0) {
        uVar33 = uVar33 | uVar12 & 0xffff;
      }
      uVar27 = uVar33 & 0xffff;
    }
    else {
LAB_0012c2dc:
      if ((uVar12 & 0x90) != 0x90) goto LAB_0012c74c;
      uVar33 = uVar12 >> 5 & 3;
      uVar16 = (ulong)uVar33;
      if (uVar33 == 0) {
        if ((uVar12 >> 0x18 & 1) == 0) {
          uVar16 = uVar14 >> 0xc & 0xf;
          uVar26 = 1 << (uVar14 >> 8 & 0xf) | 1 << (ulong)(uVar12 & 0xf);
          uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
          if ((uVar12 >> 0x17 & 1) == 0) {
            uVar29 = uVar26 | 1 << uVar16;
            if ((uVar14 & 0x200000) == 0) {
              uVar29 = uVar26;
            }
          }
          else {
            uVar33 = 1 << uVar16 | uVar33;
            uVar29 = uVar26 | uVar33;
            if ((uVar14 & 0x200000) == 0) {
              uVar29 = uVar26;
            }
          }
          uVar26 = uVar27 & uVar29;
          uVar16 = (ulong)(uVar12 & 0x100000);
          uVar17 = 0;
          uVar25 = (ushort)uVar29;
          uVar32 = (ushort)uVar33;
          if ((uVar12 >> 0x14 & 1) != 0) {
            uVar16 = 0;
            uVar17 = 0xc0;
          }
        }
        else {
          if ((uVar12 >> 0x15 & 0xd) != 8) goto LAB_0012cac0;
          if (uVar17 == 0xe) {
            *(undefined *)((long)puVar13 + 0x1b) = 2;
          }
          uVar12 = 1 << (uVar14 >> 0x10 & 0xf) | 1 << (ulong)(uVar12 & 0xf);
          uVar26 = uVar12 & uVar27;
          uVar33 = 1 << (uVar14 >> 0xc & 0xf);
          *(undefined *)((long)puVar13 + 0x1a) = 4;
          uVar17 = 0;
          uVar25 = (ushort)uVar12;
          uVar32 = (ushort)uVar33;
        }
        goto LAB_0012c400;
      }
      uVar16 = uVar14 >> 0x14 & 1;
      uVar19 = uVar14 >> 0xc & 0xf;
      uVar26 = uVar12 & 0x40;
      if (((uVar12 >> 6 & 1) != 0) && (uVar26 = 0, (int)uVar16 == 0)) {
        uVar16 = (ulong)((uVar12 >> 5 ^ 1) & 1);
        uVar26 = 1;
        if (uVar17 == 0xe) {
          *(undefined *)((long)puVar13 + 0x1b) = 2;
        }
      }
      uVar33 = 1 << (uVar14 >> 0x10 & 0xf);
      uVar29 = 1 << (ulong)(uVar12 & 0xf) | uVar33;
      if ((uVar14 & 0x400000) != 0) {
        uVar29 = uVar33;
      }
      if (((uVar12 ^ 0xffffffff) & 0x1200000) != 0) {
        uVar33 = 0;
      }
      iVar18 = (int)uVar19;
      uVar12 = 1 << uVar19;
      if ((int)uVar16 == 0) {
        *(undefined *)((long)puVar13 + 0x1a) = 4;
        uVar29 = uVar29 | uVar12;
        uVar32 = (ushort)uVar33;
        if (uVar26 != 0) {
          uVar19 = (ulong)(iVar18 + 1);
          goto LAB_0012cc54;
        }
        goto LAB_0012d7b0;
      }
      uVar12 = uVar33 | uVar12;
      *(undefined *)((long)puVar13 + 0x1a) = 8;
      uVar33 = uVar12 | 1 << (ulong)(iVar18 + 1);
      if (uVar26 == 0) {
        uVar33 = uVar12;
      }
      uVar26 = uVar27 & uVar29;
      uVar28 = (undefined2)uVar29;
      uVar27 = uVar33 & 0xffff;
      if (uVar17 == 0xe && iVar18 == 0xf) {
        *(undefined *)((long)puVar13 + 0x1b) = 3;
      }
    }
LAB_0012c674:
    uVar17 = 0;
    *(undefined2 *)(puVar13 + 4) = 0;
    *(undefined2 *)((long)puVar13 + 0x12) = uVar28;
    *(short *)(puVar13 + 5) = (short)uVar27;
    uVar16 = 0;
    *(byte *)(puVar13 + 6) = (byte)(uVar15 >> 0x1c);
  }
  if (uVar26 != 0) {
    *(char *)((long)puVar13 + 0x1b) = *(char *)((long)puVar13 + 0x1b) + '\x01';
  }
  if (uVar30 == 0) {
    bVar9 = false;
LAB_0012c230:
    if (iVar39 == 4) goto LAB_0012c620;
LAB_0012c23c:
    uVar30 = (uint)lVar41 + 1;
    if (uVar37 < 0x2000000) {
      uVar15 = (param_3 ^ 1) & 1;
      if (*(int *)(param_1 + 0x210c) != 1) {
        uVar15 = 0;
      }
      if ((uVar15 == 0) ||
         (lVar20 = *(long *)(param_1 + 0x2088),
         (byte)nds_system[lVar20 + ((ulong)(uVar37 >> 2) & 0x1fff) + 0xfdc038] < 9))
      goto LAB_0012c260;
      cStack_e = '\x04';
      uVar37 = uVar30 & 0xffff;
      if (uVar30 == 0x800) goto LAB_0012c558;
      goto LAB_0012c568;
    }
LAB_0012c260:
    if (*(char *)(puVar13 + 7) != '\0') {
LAB_0012cfbc:
      if (uVar30 != 1) {
        uVar37 = (uint)lVar41 & 0xffff;
        bVar9 = uStack_44 != 0;
        cStack_e = '\x02';
        lVar20 = *(long *)(param_1 + 0x2088);
        goto LAB_0012cff0;
      }
      lVar20 = *(long *)(param_1 + 0x2088);
      cStack_e = '\x02';
      uVar37 = 1;
      uStack_44 = uVar30;
      goto LAB_0012d7d0;
    }
    if ((uVar33 >> 0xf & 1) != 0) {
      uVar15 = (uint)uVar16;
      if (uVar15 == 0) {
        *(ushort *)((long)puVar13 + 0x16) = ~(ushort)uVar33;
        *(byte *)((long)puVar13 + 0x19) = (byte)(uVar17 >> 4) ^ 0xf;
        uVar33 = *puVar13 >> 0x1c;
        uVar32 = uStack_14;
      }
      else {
        if (*(int *)(param_1 + 0x210c) == 0) {
          if (uVar15 - 0x800000 < 0x1800000) goto LAB_0012cfbc;
          iVar18 = 2;
        }
        else {
          iVar18 = (uint)(0x1ffffff < uVar15 || *(int *)(param_1 + 0x210c) != 1) << 1;
        }
        uVar33 = *puVar13;
        uVar32 = uStack_14 + 1;
        if (uVar15 >> 0x18 == 2) {
          iVar18 = 1;
        }
        *(uint *)(plStack_28 + (ulong)uStack_14 * 5 + 3) = uVar15;
        *(uint *)((long)plStack_28 + (ulong)uStack_14 * 0x28 + 0x1c) = uVar37;
        *(undefined4 *)(plStack_28 + (ulong)uStack_14 * 5 + 4) = 0;
        *(short *)((long)plStack_28 + (ulong)uStack_14 * 0x28 + 0x24) = (short)lVar41;
        uVar33 = uVar33 >> 0x1c;
        *(undefined2 *)((long)plStack_28 + (ulong)uStack_14 * 0x28 + 0x26) = 0;
        if (uVar15 < uVar37 && uVar33 < 0xd || uVar15 < uVar37 && uVar33 == 0xd) {
          uVar11 = uVar33;
        }
        if ((iVar18 != iStack_74) && (iStack_74 == 2 || iVar18 == 2)) {
          *(undefined4 *)(plStack_28 + (ulong)uStack_14 * 5 + 4) = 4;
        }
        if ((iVar18 == 0) &&
           ((iStack_74 != 0 ||
            ((8 < (byte)nds_system[*(long *)(param_1 + 0x2088) + (uVar16 >> 2 & 0x1fff) + 0xfdc038]
             && ((uVar16 & 1) == 0)))))) {
          *(undefined4 *)(plStack_28 + (ulong)uStack_14 * 5 + 4) = 2;
        }
      }
      uStack_14 = uVar32;
      if (0xd < uVar33) {
        lVar20 = *(long *)(param_1 + 0x2088);
        if (uVar30 == 0x800) goto LAB_0012c558;
        uVar37 = uVar30 & 0xffff;
        bVar9 = cStack_e != '\0';
        uStack_44 = uVar30;
        goto LAB_0012cff0;
      }
    }
    if ((uVar17 & 0xf0) != 0) {
      uVar11 = 0xf;
    }
    if ((uint)uVar40 == uVar30) {
      uVar40 = (ulong)((uint)uVar40 * 2);
      puStack_30 = (uint *)realloc(puStack_30,uVar40 << 5);
    }
    if (lVar41 == 0x7ff) {
      lVar20 = *(long *)(param_1 + 0x2088);
LAB_0012c558:
      uVar37 = 0x800;
      lStack_68 = 0xffe0;
      cStack_e = '\x01';
      goto LAB_0012c568;
    }
    lVar41 = lVar41 + 1;
    uStack_44 = (uint)lVar41;
    lStack_68 = lVar41 * 0x20;
    puVar13 = puStack_30 + lVar41 * 8;
    if (param_3 != 0) goto LAB_0012c0c8;
LAB_0012c2b8:
    puVar24 = puStack_30;
    uVar14 = load_memory32();
    uVar30 = uVar37 + 8;
    iVar18 = 0;
    if ((int)uVar14 == 0) {
      iVar18 = iVar39 + 1;
    }
    *(int *)((long)puVar24 + lStack_68) = (int)uVar14;
    uVar37 = uVar37 + 4;
    puVar13[1] = uVar30;
    iVar39 = iVar18;
    goto LAB_0012c100;
  }
  if (((uint)uVar14 >> 0x10 & 1) == 0) {
    bVar9 = true;
    goto LAB_0012c230;
  }
  if (!bVar9) goto LAB_0012c230;
  uVar30 = uVar37 + (int)((long)((ulong)((puVar13[-8] >> 5 & 0x7ff) << 0xb |
                                        (uint)(uVar14 >> 5) & 0x7ff) << 0x2a) >> 0x2a) * 2;
  if (((uint)uVar14 >> 0x11 & 1) == 0) {
    uVar30 = uVar30 & 0xfffffffc;
    uVar15 = 0xfa000000;
  }
  else {
    uVar30 = uVar30 | 1;
    uVar15 = 0xfffffffeU - (int)((long)puVar13 >> 2) & 0xffffff | 0xeb000000;
  }
  uVar16 = (ulong)uVar30;
  *puVar13 = uVar15;
  puVar13[-8] = 0xe1a00000;
  bVar9 = false;
  if (iVar39 != 4) goto LAB_0012c23c;
LAB_0012c620:
  uStack_44 = uStack_44 - 2;
  bVar9 = uStack_44 != 0;
  uVar37 = uStack_44 & 0xffff;
  cStack_e = '\x02';
  lVar20 = *(long *)(param_1 + 0x2088);
LAB_0012cff0:
  if (bVar9) {
LAB_0012d7d0:
    lStack_68 = (ulong)(uStack_44 - 1) << 5;
LAB_0012c568:
    *(undefined2 *)((long)puStack_30 + lStack_68 + 0x16) = 0x7fff;
    *(undefined *)((long)puStack_30 + lStack_68 + 0x19) = 0xf;
  }
  uVar27 = (uint)uStack_14;
  uStack_16 = (ushort)((uVar37 & 0x7fff) << 1);
  uStack_18 = (ushort)uVar37;
  uVar40 = *(long *)(nds_system + lVar20 + 0xffe140) + (ulong)uStack_14 * 0x28;
  if (param_3 != 0) {
    uStack_16 = uStack_18;
  }
  *(ulong *)(nds_system + lVar20 + 0xffe140) = uVar40;
  if (uVar40 < lVar20 + 0x1420000U) {
    if (uStack_14 == 0) goto LAB_0012d468;
  }
  else {
    puts("Translation stack overflow!");
    fflush(_stdout);
    uVar27 = (uint)uStack_14;
    if (uVar27 == 0) goto LAB_0012d468;
  }
  uVar37 = 0;
  uVar40 = 0xffffffff;
  plVar22 = plStack_28;
  do {
    uVar11 = *(uint *)(plVar22 + 3) & 0xfffffffe;
    uVar30 = uVar11 - uStack_20;
    if (0 < (int)uVar30) {
      if (*(uint *)((long)plVar22 + 0x1c) <= uVar11 || (uint)uVar40 <= uVar30) {
        uVar30 = (uint)uVar40;
        uVar11 = uVar37;
      }
      uVar37 = uVar11;
      uVar40 = (ulong)uVar30;
    }
    plVar22 = plVar22 + 5;
  } while (plStack_28 + (ulong)(uVar27 - 1) * 5 + 5 != plVar22);
  if ((int)uVar40 == -1) {
LAB_0012d468:
    uVar40 = (ulong)uStack_18;
  }
  else {
    uVar11 = 0;
    uStack_16 = (ushort)(uVar40 >> 1);
    uVar30 = (uint)(uVar40 >> 1);
    if (param_3 == 0) {
      uVar30 = (uint)(uVar40 >> 2);
    }
    uVar40 = (ulong)(uVar30 & 0xffff);
    uStack_18 = (ushort)uVar30;
    cStack_e = '\x03';
    plVar22 = plStack_28;
    do {
      if (uVar37 < *(uint *)((long)plVar22 + 0x1c)) break;
      uVar11 = uVar11 + 1;
      plVar22 = plVar22 + 5;
    } while (uVar27 != uVar11);
    uStack_14 = (short)uVar11 + 1;
    uVar30 = *(uint *)(plVar22 + 4);
    *(ulong *)(nds_system + *(long *)(param_1 + 0x2088) + 0xffe140) =
         *(long *)(nds_system + *(long *)(param_1 + 0x2088) + 0xffe140) +
         (ulong)((uVar27 - 1) - uVar11) * -0x28;
    *(uint *)(plVar22 + 3) = param_3 | uVar37;
    *(uint *)((long)plVar22 + 0x1c) = uVar37;
    *(uint *)(plVar22 + 4) = uVar30 | 1;
    *(ushort *)((long)plVar22 + 0x24) = uStack_18 - 1;
  }
  puStack_30 = (uint *)realloc(puStack_30,uVar40 << 5);
  if ((uStack_14 != 0) && ((*(uint *)(plStack_28 + 3) & 0xfffffffe) == uStack_20)) {
    uVar32 = 0;
    puVar13 = puStack_30 + 5;
    do {
      puVar24 = puVar13 + 8;
      uVar32 = uVar32 | *(ushort *)puVar13;
      puVar13 = puVar24;
    } while (puStack_30 + (ulong)*(ushort *)((long)plStack_28 + 0x24) * 8 + 0xd != puVar24);
    uVar25 = ~uVar32 & 0x7fff;
    puVar13 = puStack_30;
    do {
      while( true ) {
        if ((*(byte *)((long)puVar13 + 0x1a) >> 2 & 1) != 0) goto LAB_0012d200;
        if ((*(ushort *)((long)puVar13 + 0x12) & (uVar25 ^ 0xffff)) != 0) {
          if ((uVar32 & *(ushort *)((long)puVar13 + 0x12)) == 0) break;
          goto LAB_0012d200;
        }
        if (*puVar13 >> 0x1c < 0xe) break;
        puVar24 = puVar13 + 5;
        puVar13 = puVar13 + 8;
        uVar25 = uVar25 | *(ushort *)puVar24;
        if (puVar13 == puStack_30 + (ulong)*(ushort *)((long)plStack_28 + 0x24) * 8 + 8)
        goto LAB_0012d1f0;
      }
      puVar13 = puVar13 + 8;
    } while (puVar13 != puStack_30 + (ulong)*(ushort *)((long)plStack_28 + 0x24) * 8 + 8);
LAB_0012d1f0:
    bStack_f = bStack_f | 4;
  }
LAB_0012d200:
  cpu_block_fill_allocation(param_1,param_2,(ulong)uStack_16 << 1);
  uVar27 = (uint)uStack_14;
  uVar37 = *(uint *)(nds_system + lVar38 + 0xfc4034);
  uVar11 = (uint)uStack_16;
  *(uint *)(nds_system + lVar38 + (ulong)uVar37 * 4 + 0xfa4034) = param_2 | param_3;
  lVar41 = *(long *)(param_1 + 0x2088);
  *(uint *)(nds_system + lVar38 + 0xfc4034) = uVar37 + 1;
  puVar13 = puStack_30;
  if (uStack_14 != 0) {
    uVar37 = 0;
    plVar22 = plStack_28;
    do {
      uVar32 = *(ushort *)((long)plVar22 + 0x24);
      if ((*(uint *)(plVar22 + 4) & 6) == 0) {
        uVar30 = *(uint *)(plVar22 + 3);
        uVar15 = uVar30 - uStack_20;
        if ((((int)uVar15 < 1 || uVar11 * 2 < uVar15) || 0 < (int)uVar15 && uVar11 * 2 == uVar15) ||
           (uVar30 < *(uint *)((long)plVar22 + 0x1c))) {
          if (*(int *)(lStack_38 + 0xa0004) != 0) {
            puVar24 = (uint *)(lStack_38 + 0x80004);
            do {
              if (uVar30 == *puVar24) {
                uVar27 = *(uint *)(lStack_38 + 0x80000);
                lVar20 = lStack_38 + (ulong)uVar27 * 0x10;
                *(uint *)(lVar20 + 8) = uVar30;
                *(uint *)(lStack_38 + 0x80000) = uVar27 + 1;
                *plVar22 = 0;
                plVar22[2] = lVar20;
                *(undefined *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19) = 0xf;
                *(undefined2 *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16) = 0x7fff;
                uVar27 = (uint)uStack_14;
                goto LAB_0012d2ec;
              }
              puVar24 = puVar24 + 1;
            } while (puVar24 !=
                     (uint *)(lStack_38 + 0x80008 + (ulong)(*(int *)(lStack_38 + 0xa0004) - 1) * 4))
            ;
          }
          lVar20 = cpu_block_lookup_recursive(param_1);
          if (lVar20 == 0) {
            uVar27 = *(uint *)(lStack_38 + 0x80000);
            lVar20 = lStack_38 + (ulong)uVar27 * 0x10;
            *(undefined4 *)(lVar20 + 8) = *(undefined4 *)(plVar22 + 3);
            *(uint *)(lStack_38 + 0x80000) = uVar27 + 1;
            *plVar22 = 0;
            plVar22[2] = lVar20;
            *(undefined *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19) = 0xf;
            *(undefined2 *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16) = 0x7fff;
            uVar27 = (uint)uStack_14;
            puVar13 = puStack_30;
          }
          else {
            uVar25 = *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16);
            lVar5 = lVar41 + (ulong)*(uint *)(lVar20 + -4);
            plVar22[2] = 0;
            bVar23 = *(byte *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19);
            *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16) =
                 *(ushort *)(lVar5 + 0xc) & 0x7fff | uVar25;
            *(byte *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19) = bVar23 | *(byte *)(lVar5 + 0xe)
            ;
            uVar27 = (uint)uStack_14;
            *plVar22 = lVar20;
            puVar13 = puStack_30;
          }
        }
        else {
          uVar30 = (int)uVar15 >> 1;
          if (param_3 == 0) {
            uVar30 = (int)uVar15 >> 2;
          }
          uVar40 = -(ulong)(uVar30 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar30 << 5;
          *(short *)((long)plVar22 + 0x26) = (short)uVar30;
          *(short *)(puVar13 + (ulong)uVar32 * 8 + 4) = (short)uVar30;
          *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16) =
               *(ushort *)((long)puVar13 + uVar40 + 0x16) |
               *(ushort *)((long)puVar13 + uVar40 + 0x12) |
               *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16);
          *(byte *)((long)puVar13 + uVar40 + 0x1a) = *(byte *)((long)puVar13 + uVar40 + 0x1a) | 2;
        }
      }
      else {
        *(undefined2 *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16) = 0x7fff;
        *(undefined *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19) = 0xf;
      }
LAB_0012d2ec:
      uVar37 = uVar37 + 1;
      plVar22 = plVar22 + 5;
    } while (uVar37 < uVar27);
    uVar37 = *(int *)(nds_system + lVar38 + 0xfc4034) - 1;
  }
  puVar24 = puVar13 + (ulong)uStack_18 * 8 + -8;
  uStack_12 = *(ushort *)((long)puVar24 + 0x12);
  *(uint *)(nds_system + lVar38 + 0xfc4034) = uVar37;
  bStack_10 = *(byte *)(puVar24 + 6) & 0xf;
  if (uStack_18 != 0) {
    puVar4 = puVar24 + ~(ulong)(uStack_18 - 1) * 8;
    do {
      while( true ) {
        uVar32 = *(ushort *)(puVar24 + 4);
        uVar25 = *(ushort *)((long)puVar24 + 0x16);
        bVar23 = *(byte *)((long)puVar24 + 0x19);
        if (uVar32 != 0) {
          bVar23 = bVar23 | *(byte *)(puVar13 + (ulong)uVar32 * 8 + 6) & 0xf &
                            (*(byte *)(puVar13 + (ulong)uVar32 * 8 + 6) >> 4 ^ 0xff) |
                            *(byte *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x19);
          uVar25 = uVar25 | *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x12) &
                            (*(ushort *)(puVar13 + (ulong)uVar32 * 8 + 5) ^ 0xffff) |
                            *(ushort *)((long)puVar13 + (ulong)uVar32 * 0x20 + 0x16);
        }
        *(ushort *)((long)puVar24 + 0x16) = uVar25 | uStack_12;
        *(byte *)((long)puVar24 + 0x19) = bVar23 | bStack_10;
        if (*puVar24 >> 0x1c < 0xe) break;
        puVar1 = puVar24 + 6;
        puVar2 = puVar24 + 5;
        puVar3 = (ushort *)((long)puVar24 + 0x12);
        puVar24 = puVar24 + -8;
        bStack_10 = *(byte *)puVar1 & 0xf | (bVar23 | bStack_10) & (*(byte *)puVar1 >> 4 ^ 0xff);
        uStack_12 = *puVar3 | (uVar25 | uStack_12) & (*(ushort *)puVar2 ^ 0xffff);
        if (puVar4 == puVar24) goto LAB_0012ce74;
      }
      puVar1 = puVar24 + 6;
      puVar3 = (ushort *)((long)puVar24 + 0x12);
      puVar24 = puVar24 + -8;
      bStack_10 = *(byte *)puVar1 & 0xf | bVar23 | bStack_10;
      uStack_12 = *puVar3 | uVar25 | uStack_12;
    } while (puVar24 != puVar4);
  }
LAB_0012ce74:
  lVar41 = cpu_translate_block(&lStack_38,param_1,param_2,param_3);
  goto LAB_0012ce9c;
}


