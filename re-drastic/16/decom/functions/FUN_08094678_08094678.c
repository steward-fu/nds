/*
 * Ghidra decompilation
 *
 * Function : FUN_08094678
 * Address  : 08094678
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08094678(undefined4 param_1,char *param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint uStack_241d0;
  int iStack_241cc;
  undefined8 uStack_241c8;
  undefined *puStack_241c0;
  short *psStack_241bc;
  undefined *puStack_241b8;
  uint uStack_241b4;
  int *piStack_241b0;
  undefined *puStack_241ac;
  undefined4 auStack_241a0 [2];
  uint auStack_24198 [2];
  uint auStack_24190 [2];
  undefined4 auStack_24188 [2];
  int aiStack_24180 [2];
  int aiStack_24178 [2];
  int aiStack_24170 [2];
  uint auStack_24168 [2];
  undefined auStack_24160 [8];
  code *pcStack_24158;
  code *pcStack_24154;
  undefined *puStack_24150;
  undefined *puStack_2414c;
  char *pcStack_24148;
  uint uStack_24144;
  code *pcStack_24140;
  undefined auStack_2413c [8];
  undefined auStack_24134 [8];
  undefined auStack_2412c [4];
  undefined auStack_24128 [12];
  int iStack_2411c;
  int iStack_24118;
  uint uStack_2410c;
  int iStack_240f0;
  int iStack_240ec;
  undefined auStack_240d8 [16];
  undefined4 uStack_240c8;
  undefined4 uStack_240c4;
  undefined auStack_24048 [4];
  code *pcStack_24044;
  code *pcStack_24040;
  undefined *puStack_24038;
  undefined auStack_20028 [65536];
  uint auStack_10028 [16270];
  undefined auStack_1f0 [456];
  code *pcStack_28;
  
  *param_3 = 0;
  pcStack_24158 = FUN_08096fb8;
  puStack_24150 = &LAB_08096fcc;
  pcStack_24154 = FUN_08096fc4;
  puStack_2414c = &LAB_08096fd8;
  iVar2 = FUN_08099018(auStack_2412c,param_1);
  if (iVar2 != 0) {
    puts("can not open input file");
    return 0;
  }
  puStack_241ac = auStack_24048;
  FUN_08099210(auStack_24134);
  FUN_08099724(auStack_24048,0);
  puStack_24038 = auStack_24134;
  FUN_0809976c(auStack_24048);
  FUN_080970b0();
  FUN_08097964(auStack_24128);
  iVar2 = FUN_08097c38(auStack_24128,auStack_24048,&pcStack_24158,&puStack_24150);
  if (iVar2 != 0) {
    FUN_080979a8(auStack_24128,&pcStack_24158);
    FUN_08096fc4(0,0);
    FUN_08099088(auStack_2412c);
    return 0;
  }
  auStack_241a0[0] = 0xffffffff;
  auStack_24198[0] = 0;
  auStack_24190[0] = auStack_24198[0];
  if (uStack_2410c == 0) {
    psStack_241bc = (short *)0x0;
LAB_08094a48:
    FUN_080979a8(auStack_24128,&pcStack_24158);
    uVar15 = 0;
    FUN_08096fc4(0,psStack_241bc);
    FUN_08099088(auStack_2412c);
    iVar2 = *param_3;
joined_r0x08094b54:
    if (iVar2 == 0) {
      return 0;
    }
    return uVar15;
  }
  psStack_241bc = (short *)0x0;
  uVar15 = 0;
  puStack_241c0 = (undefined *)0x0;
  uStack_241b4 = 0;
  uVar3 = uStack_2410c;
LAB_080947e0:
  iVar2 = iStack_24118 + uVar15 * 0x20;
  auStack_24188[0] = 0;
  if (*(char *)(iVar2 + 0x19) != '\0') {
    puStack_241c0 = (undefined *)0x0;
    uVar15 = uVar15 + 1;
    if (uVar3 <= uVar15) goto LAB_08094a48;
    goto LAB_080947e0;
  }
  uVar3 = FUN_08097b20(auStack_24128,uVar15,0);
  if (uStack_241b4 < uVar3) {
    FUN_08096fc4(0,psStack_241bc);
    psStack_241bc = (short *)FUN_08096fb8(0,uVar3 << 1);
    uStack_241b4 = uVar3;
    if (psStack_241bc == (short *)0x0) {
      FUN_080979a8(auStack_24128,&pcStack_24158);
      FUN_08096fc4(0,0);
      FUN_08099088(auStack_2412c);
      return 0;
    }
  }
  FUN_08097b20(auStack_24128,uVar15,psStack_241bc);
  FUN_08096fe0(&pcStack_24148);
  if (*psStack_241bc == 0) {
    uVar3 = 1;
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    psVar8 = psStack_241bc;
    do {
      psVar8 = psVar8 + 1;
      iVar12 = iVar12 + 1;
    } while (*psVar8 != 0);
    iVar14 = 0;
    iVar16 = 0;
    do {
      iVar18 = iVar16 + 1;
      uVar3 = (uint)(ushort)psStack_241bc[iVar16];
      if (uVar3 < 0x80) {
        iVar14 = iVar14 + 1;
      }
      else {
        if (uVar3 - 0xd800 < 0x800) {
          if ((0xdbff < uVar3 || iVar12 == iVar18) ||
             (0x3ff < (ushort)psStack_241bc[iVar16 + 1] - 0xdc00)) break;
          iVar18 = iVar16 + 2;
          if (((ushort)psStack_241bc[iVar16 + 1] - 0xdc00 | (uVar3 - 0xd800) * 0x400) + 0x10000 <
              0x200000) {
            iVar9 = 3;
          }
          else {
            iVar9 = 4;
          }
        }
        else if (uVar3 < 0x800) {
          iVar9 = 1;
        }
        else {
          iVar9 = 2;
        }
        iVar14 = iVar14 + 1 + iVar9;
      }
      iVar16 = iVar18;
    } while (iVar12 != iVar18);
    uVar3 = iVar14 + 1;
  }
  if (uStack_24144 < uVar3) {
    FUN_08097034(&pcStack_24148,&DAT_08101c40);
    iVar14 = FUN_08096ff0(&pcStack_24148,uVar3,&DAT_08101c40);
    if (iVar14 != 0) goto LAB_080949a8;
  }
  else {
LAB_080949a8:
    iVar12 = FUN_08094250(pcStack_24148,auStack_10028,psStack_241bc,iVar12);
    pcStack_24148[auStack_10028[0]] = '\0';
    if (((iVar12 != 0) && (pcVar4 = strrchr(pcStack_24148,0x2e), pcVar4 != (char *)0x0)) &&
       (iVar12 = strcasecmp(pcVar4 + 1,param_2), iVar12 == 0)) {
      FUN_08097034(&pcStack_24148,&DAT_08101c40);
      *param_3 = *(int *)(iVar2 + 8);
      piStack_241b0 = param_3;
      if (param_4 == 0) {
        uVar15 = FUN_08098b38(auStack_24128,auStack_24048,uVar15,auStack_241a0,auStack_24198,
                              auStack_24190,auStack_24188,aiStack_24180,&pcStack_24158,
                              &puStack_24150);
        if ((uVar15 == 0) && (uVar3 = auStack_24198[0], *param_3 == aiStack_24180[0]))
        goto LAB_08094b28;
        (*pcStack_24154)(&pcStack_24158,auStack_24198[0]);
        FUN_080979a8(auStack_24128,&pcStack_24158);
        FUN_08096fc4(0,psStack_241bc);
        FUN_08099088(auStack_2412c);
        if (uVar15 != 0) {
          return 0;
        }
        goto LAB_08094b48;
      }
      iVar12 = *(int *)(iStack_240ec + uVar15 * 4);
      iVar14 = iStack_2411c + iVar12 * 0x28;
      iVar16 = *(int *)(iStack_2411c + iVar12 * 0x28);
      uVar21 = FUN_08097784(iVar14);
      iVar2 = (int)uVar21;
      uStack_241c8 = VectorShiftRight(CONCAT44(iVar2,iVar2),0x20);
      if ((int)((ulonglong)uStack_241c8 >> 0x20) != (int)((ulonglong)uVar21 >> 0x20) ||
          (int)uStack_241c8 != iVar2) goto LAB_08094b24;
      if (*(int *)(iVar14 + 0x10) != 1) {
        printf("7Z: Multiple coders not supported");
        goto LAB_08094b24;
      }
      uVar3 = *(uint *)(iVar16 + 8);
      uVar10 = *(uint *)(iVar16 + 0xc);
      if (((uVar10 != 0 || uVar3 != 0x30101) && (uVar3 | uVar10) != 0) &&
         (uVar10 != 0 || uVar3 != 0x21)) goto LAB_08094cb0;
      uVar21 = FUN_08097a64(auStack_24128,iVar12,0);
      uVar5 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_080995a8(auStack_24048,uVar5,(int)uVar21,uVar5);
      FUN_08099228(&pcStack_24140);
      FUN_0809900c(auStack_2413c);
      iVar2 = FUN_08099050(auStack_2413c,param_4);
      if (iVar2 != 0) goto LAB_08094b24;
      uVar3 = *(uint *)(iStack_240f0 + iVar12 * 4);
      if (uVar15 < uVar3) {
        uVar13 = 0;
        uVar10 = uVar13;
      }
      else {
        uVar13 = 0;
        uVar10 = 0;
        do {
          iVar12 = uVar3 * 0x20;
          uVar3 = uVar3 + 1;
          uVar6 = *(uint *)(iStack_24118 + iVar12 + 8);
          bVar20 = CARRY4(uVar13,uVar6);
          uVar13 = uVar13 + uVar6;
          uVar10 = uVar10 + bVar20;
        } while (uVar3 <= uVar15);
      }
      uVar3 = *(uint *)(iVar16 + 8);
      uVar15 = *(uint *)(iVar16 + 0xc);
      DAT_081c5088 = 0;
      DAT_081c5090 = uVar13;
      DAT_081c5094 = uVar10;
      aiStack_24178[0] = iVar2;
      if ((uVar3 | uVar15) == 0) {
        if (puStack_241c0 != (undefined *)0x0) {
          (*pcStack_24044)(auStack_24048,puStack_241c0);
          bVar20 = uVar13 < puStack_241c0;
          uVar13 = uVar13 - (int)puStack_241c0;
          uVar10 = uVar10 - bVar20;
          DAT_081c5088 = CONCAT44(DAT_081c5088._4_4_ +
                                  (uint)CARRY4((uint)DAT_081c5088,(uint)puStack_241c0),
                                  (uint)DAT_081c5088 + (int)puStack_241c0);
        }
        if ((int)(uVar10 - (uVar13 == 0)) < 0 == (SBORROW4(uVar10,(uint)(uVar13 == 0)) != false)) {
          do {
            auStack_10028[0] = uVar13;
            if (0 < (int)(uVar10 + (0xffff < uVar13)) !=
                (SBORROW4(-uVar10,(uint)(0xffff < uVar13)) != false)) {
              auStack_10028[0] = 0x10000;
            }
            iVar2 = (*pcStack_24040)(auStack_24048,auStack_20028,auStack_10028);
            if ((iVar2 != 0) ||
               (uVar15 = (*pcStack_24140)(&pcStack_24140,auStack_20028,auStack_10028[0]),
               uVar15 != auStack_10028[0])) {
              FUN_08099088(auStack_2413c);
              uVar3 = 0;
              goto LAB_08094b28;
            }
            bVar20 = uVar13 < uVar15;
            uVar13 = uVar13 - uVar15;
            uVar10 = uVar10 - bVar20;
            DAT_081c5088 = CONCAT44(DAT_081c5088._4_4_ + (uint)CARRY4(uVar15,(uint)DAT_081c5088),
                                    uVar15 + (uint)DAT_081c5088);
          } while ((int)(uVar10 - (uVar13 == 0)) < 0 ==
                   (SBORROW4(uVar10,(uint)(uVar13 == 0)) != false));
        }
        uVar3 = (uint)((uVar13 | uVar10) == 0);
LAB_080950d8:
        FUN_08099088(auStack_2413c);
      }
      else {
        if (uVar15 == 0 && uVar3 == 0x30101) {
          uStack_240c4 = 0;
          uStack_240c8 = 0;
          FUN_0809be44(auStack_240d8,*(undefined4 *)(iVar16 + 0x10),*(undefined4 *)(iVar16 + 0x14),
                       &pcStack_24158);
          FUN_0809adb4(auStack_240d8);
          uStack_241b4 = -0x24118;
          iVar2 = 0;
          puStack_241b8 = auStack_24048;
          uStack_241d0 = (uint)puStack_241c0;
          iStack_241cc = 0;
          puStack_241c0 = auStack_20028;
          do {
            if (iVar2 == aiStack_24178[0]) {
              aiStack_24178[0] = 0x10000;
              iVar2 = (**(code **)(puStack_241ac + 8))(puStack_241b8,puStack_241c0,aiStack_24178);
              puStack_241ac = puStack_241b8;
              if (iVar2 == 0) {
                iVar2 = 0;
                puVar17 = puStack_241c0;
                goto LAB_08095278;
              }
LAB_08095464:
              uVar3 = (uint)((uVar13 | uVar10) == 0);
              goto LAB_080950cc;
            }
            puVar17 = puStack_241c0 + iVar2;
LAB_08095278:
            aiStack_24170[0] = aiStack_24178[0] - iVar2;
            auStack_24168[0] = 0x10000;
            puVar11 = (undefined *)0x0;
            bVar19 = uStack_241c8._4_4_ != 0;
            bVar1 = 0xfffe < (uint)uStack_241c8;
            bVar20 = (uint)uStack_241c8 != 0xffff;
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              puVar11 = auStack_1f0;
            }
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              puVar11 = puVar11 + 0x1c8;
            }
            if ((bVar19 || bVar1) && (bVar19 || bVar20)) {
              puVar11 = (undefined *)0x0;
            }
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              *(uint *)(puVar11 + -0x24140) = (uint)uStack_241c8;
              puVar11 = (undefined *)0x1;
            }
            iVar12 = FUN_0809b42c(auStack_240d8,auStack_10028,auStack_24168,puVar17,aiStack_24170,
                                  puVar11,auStack_24160);
            bVar20 = uVar13 < auStack_24168[0];
            uVar13 = uVar13 - auStack_24168[0];
            uVar10 = uVar10 - bVar20;
            iVar2 = iVar2 + aiStack_24170[0];
            uStack_241c8 = CONCAT44(uStack_241c8._4_4_ -
                                    (uint)((uint)uStack_241c8 < auStack_24168[0]),
                                    (uint)uStack_241c8 - auStack_24168[0]);
            if ((int)(iStack_241cc - (uint)(uStack_241d0 == 0)) < 0 ==
                (SBORROW4(iStack_241cc,(uint)(uStack_241d0 == 0)) != false)) {
              bVar20 = uStack_241d0 < auStack_24168[0];
              uStack_241d0 = uStack_241d0 - auStack_24168[0];
              iStack_241cc = iStack_241cc - (uint)bVar20;
              if (iStack_241cc < 0) {
                puVar7 = (uint *)((int)auStack_10028 + auStack_24168[0] + uStack_241d0);
                uVar15 = -uStack_241d0;
              }
              else {
                puVar7 = auStack_10028;
                uVar15 = 0;
              }
            }
            else {
              puVar7 = auStack_10028;
              uVar15 = auStack_24168[0];
            }
            if ((int)uVar10 < 0) {
              uVar15 = uVar15 + uVar13;
              DAT_081c5088 = CONCAT44(DAT_081c5094,DAT_081c5090);
              uVar13 = 0;
              uVar10 = 0;
            }
            else {
              DAT_081c5088 = VectorAdd((ulonglong)auStack_24168[0],DAT_081c5088,8);
            }
            if ((uVar15 != 0) &&
               (uVar3 = (**(code **)((int)&pcStack_28 + uStack_241b4))(&pcStack_24140,puVar7,uVar15)
               , uVar3 != uVar15)) goto LAB_08095144;
            if (iVar12 != 0) goto LAB_08095104;
            if ((uVar13 | uVar10) == 0) goto LAB_080950f8;
          } while ((aiStack_24170[0] != 0) || (auStack_24168[0] != 0));
LAB_080950c4:
          uVar3 = 0;
          goto LAB_080950cc;
        }
        if (uVar15 == 0 && uVar3 == 0x21) {
          uStack_240c4 = 0;
          uStack_240c8 = 0;
          uStack_241b4 = -0x24118;
          FUN_0809c228(auStack_240d8,**(undefined **)(iVar16 + 0x10),&pcStack_24158);
          FUN_0809c2b0(auStack_240d8);
          iVar2 = 0;
          puStack_241b8 = auStack_24048;
          uStack_241d0 = (uint)puStack_241c0;
          iStack_241cc = 0;
          puStack_241c0 = auStack_20028;
          do {
            if (iVar2 == aiStack_24178[0]) {
              aiStack_24178[0] = 0x10000;
              iVar2 = (**(code **)(puStack_241ac + 8))(puStack_241b8,puStack_241c0,aiStack_24178);
              puStack_241ac = puStack_241b8;
              if (iVar2 != 0) goto LAB_08095464;
              iVar2 = 0;
              puVar17 = puStack_241c0;
            }
            else {
              puVar17 = puStack_241c0 + iVar2;
            }
            aiStack_24170[0] = aiStack_24178[0] - iVar2;
            auStack_24168[0] = 0x10000;
            puVar11 = (undefined *)0x0;
            bVar19 = uStack_241c8._4_4_ != 0;
            bVar1 = 0xfffe < (uint)uStack_241c8;
            bVar20 = (uint)uStack_241c8 != 0xffff;
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              puVar11 = auStack_1f0;
            }
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              puVar11 = puVar11 + 0x1c8;
            }
            if ((bVar19 || bVar1) && (bVar19 || bVar20)) {
              puVar11 = (undefined *)0x0;
            }
            if (!bVar19 && !bVar1 || !bVar19 && !bVar20) {
              *(uint *)(puVar11 + -0x24140) = (uint)uStack_241c8;
              puVar11 = (undefined *)0x1;
            }
            iVar12 = FUN_0809c76c(auStack_240d8,auStack_10028,auStack_24168,puVar17,aiStack_24170,
                                  puVar11,auStack_24160);
            bVar20 = uVar13 < auStack_24168[0];
            uVar13 = uVar13 - auStack_24168[0];
            uVar10 = uVar10 - bVar20;
            iVar2 = iVar2 + aiStack_24170[0];
            uStack_241c8 = CONCAT44(uStack_241c8._4_4_ -
                                    (uint)((uint)uStack_241c8 < auStack_24168[0]),
                                    (uint)uStack_241c8 - auStack_24168[0]);
            if ((int)(iStack_241cc - (uint)(uStack_241d0 == 0)) < 0 ==
                (SBORROW4(iStack_241cc,(uint)(uStack_241d0 == 0)) != false)) {
              bVar20 = uStack_241d0 < auStack_24168[0];
              uStack_241d0 = uStack_241d0 - auStack_24168[0];
              iStack_241cc = iStack_241cc - (uint)bVar20;
              if (iStack_241cc < 0) {
                puVar7 = (uint *)((int)auStack_10028 + auStack_24168[0] + uStack_241d0);
                uVar15 = -uStack_241d0;
              }
              else {
                puVar7 = auStack_10028;
                uVar15 = 0;
              }
            }
            else {
              puVar7 = auStack_10028;
              uVar15 = auStack_24168[0];
            }
            if ((int)uVar10 < 0) {
              uVar15 = uVar15 + uVar13;
              DAT_081c5088 = CONCAT44(DAT_081c5094,DAT_081c5090);
              uVar13 = 0;
              uVar10 = 0;
            }
            else {
              DAT_081c5088 = VectorAdd((ulonglong)auStack_24168[0],DAT_081c5088,8);
            }
            if ((uVar15 != 0) &&
               (uVar3 = (**(code **)((int)&pcStack_28 + uStack_241b4))(&pcStack_24140,puVar7,uVar15)
               , uVar3 != uVar15)) {
LAB_08095144:
              uVar3 = (uint)((uVar13 | uVar10) == 0);
              goto LAB_080950cc;
            }
            if (iVar12 != 0) goto LAB_08095104;
            if ((uVar13 | uVar10) == 0) goto LAB_080950f8;
            if ((aiStack_24170[0] == 0) && (auStack_24168[0] == 0)) goto LAB_080950c4;
          } while( true );
        }
LAB_08094cb0:
        printf("7Z: method ID %08X not supported.\n",uVar3);
LAB_08094b24:
        uVar3 = 0;
      }
LAB_08094b28:
      FUN_080979a8(auStack_24128,&pcStack_24158);
      FUN_08096fc4(0,psStack_241bc);
      FUN_08099088(auStack_2412c);
      uVar15 = uVar3;
LAB_08094b48:
      iVar2 = *piStack_241b0;
      goto joined_r0x08094b54;
    }
  }
  uVar15 = uVar15 + 1;
  puStack_241c0 = (undefined *)((int)puStack_241c0 + *(int *)(iVar2 + 8));
  uVar3 = uStack_2410c;
  if (uStack_2410c <= uVar15) goto LAB_08094a48;
  goto LAB_080947e0;
LAB_08095104:
  uVar3 = (uint)((uVar13 | uVar10) == 0);
  goto LAB_080950cc;
LAB_080950f8:
  uVar3 = 1;
LAB_080950cc:
  FUN_0809bc40(auStack_240d8,&pcStack_24158);
  goto LAB_080950d8;
}


