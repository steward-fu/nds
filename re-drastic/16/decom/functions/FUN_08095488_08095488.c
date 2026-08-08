/*
 * Ghidra decompilation
 *
 * Function : FUN_08095488
 * Address  : 08095488
 * Program  : drastic16
 */


/* WARNING: Heritage AFTER dead removal. Example location: s0xfffdbfc0 : 0x08095e04 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08095488(undefined4 param_1,char *param_2,uint *param_3,int param_4,uint param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined *puStack_241b8;
  uint uStack_2419c;
  uint auStack_24188 [2];
  int aiStack_24180 [2];
  uint auStack_24178 [2];
  undefined auStack_24170 [8];
  code *pcStack_24168;
  code *pcStack_24164;
  undefined *puStack_24160;
  undefined *puStack_2415c;
  char *pcStack_24158;
  uint uStack_24154;
  undefined auStack_2414c [8];
  undefined auStack_24144 [4];
  uint *puStack_24140;
  int iStack_2413c;
  uint uStack_24138;
  uint uStack_24134;
  uint uStack_24130;
  uint uStack_2412c;
  undefined auStack_24128 [12];
  int iStack_2411c;
  int iStack_24118;
  uint uStack_2410c;
  int iStack_240ec;
  undefined auStack_240d8 [16];
  uint uStack_240c8;
  uint uStack_240c4;
  undefined auStack_24048 [8];
  code *pcStack_24040;
  undefined *puStack_24038;
  undefined auStack_20028 [65536];
  uint auStack_10028 [16385];
  
  *param_3 = 0;
  pcStack_24168 = FUN_08096fb8;
  puStack_24160 = &LAB_08096fcc;
  pcStack_24164 = FUN_08096fc4;
  puStack_2415c = &LAB_08096fd8;
  iVar2 = FUN_08099018(auStack_24144,param_1);
  if (iVar2 != 0) {
    puts("can not open input file");
    return 0xffffffff;
  }
  FUN_08099210(auStack_2414c);
  FUN_08099724(auStack_24048,0);
  puStack_24038 = auStack_2414c;
  FUN_0809976c(auStack_24048);
  FUN_080970b0();
  FUN_08097964(auStack_24128);
  iVar2 = FUN_08097c38(auStack_24128,auStack_24048,&pcStack_24168,&puStack_24160);
  uVar17 = param_5;
  if ((iVar2 == 0) && (uStack_2410c != 0)) {
    puVar14 = (ushort *)0x0;
    iVar2 = 0;
    uVar16 = 0;
    uStack_2419c = 0;
    uVar3 = uStack_2410c;
    do {
      while (iVar15 = iStack_24118 + uVar16 * 0x20, *(char *)(iVar15 + 0x19) == '\0') {
        uVar3 = FUN_08097b20(auStack_24128,uVar16,0);
        if (uStack_2419c < uVar3) {
          FUN_08096fc4(0,puVar14);
          puVar14 = (ushort *)FUN_08096fb8(0,uVar3 << 1);
          uStack_2419c = uVar3;
          if (puVar14 == (ushort *)0x0) {
            if (param_5 != 0) {
              uVar17 = 0xffffffff;
            }
            goto LAB_08095578;
          }
        }
        FUN_08097b20(auStack_24128,uVar16,puVar14);
        iVar7 = *(int *)(iStack_240ec + uVar16 * 4);
        iVar18 = iStack_2411c + iVar7 * 0x28;
        iVar10 = *(int *)(iStack_2411c + iVar7 * 0x28);
        if (*(int *)(iVar18 + 0x10) != 1) {
          if (param_5 != 0) {
            param_5 = 0xffffffff;
          }
          printf("7Z: Multiple coders not supported");
          uVar17 = param_5;
          goto LAB_08095578;
        }
        uVar3 = *(uint *)(iVar10 + 8);
        uVar11 = *(uint *)(iVar10 + 0xc);
        if (((uVar11 != 0 || uVar3 != 0x30101) && (uVar3 | uVar11) != 0) &&
           (uVar11 != 0 || uVar3 != 0x21)) {
          if (param_5 != 0) {
            param_5 = 0xffffffff;
          }
          printf("7Z: method ID %08X not supported.\n",uVar3);
          uVar17 = param_5;
          goto LAB_08095578;
        }
        FUN_08096fe0(&pcStack_24158);
        uVar11 = (uint)*puVar14;
        uVar3 = 1;
        if (uVar11 != 0) {
          uVar11 = 0;
          puVar12 = puVar14;
          do {
            puVar12 = puVar12 + 1;
            uVar11 = uVar11 + 1;
          } while (*puVar12 != 0);
          iVar13 = 0;
          uVar3 = 0;
          do {
            uVar19 = uVar3 + 1;
            uVar8 = (uint)puVar14[uVar3];
            if (uVar8 < 0x80) {
              iVar13 = iVar13 + 1;
            }
            else {
              if (uVar8 - 0xd800 < 0x800) {
                if ((0xdbff < uVar8 || uVar11 == uVar19) || (0x3ff < puVar14[uVar3 + 1] - 0xdc00))
                break;
                uVar19 = uVar3 + 2;
                if ((puVar14[uVar3 + 1] - 0xdc00 | (uVar8 - 0xd800) * 0x400) + 0x10000 < 0x200000) {
                  iVar9 = 3;
                }
                else {
                  iVar9 = 4;
                }
              }
              else if (uVar8 < 0x800) {
                iVar9 = 1;
              }
              else {
                iVar9 = 2;
              }
              iVar13 = iVar13 + 1 + iVar9;
            }
            uVar3 = uVar19;
          } while (uVar11 != uVar19);
          uVar3 = iVar13 + 1;
        }
        if (uStack_24154 < uVar3) {
          FUN_08097034(&pcStack_24158,&DAT_08101c40);
          iVar13 = FUN_08096ff0(&pcStack_24158,uVar3,&DAT_08101c40);
          if (iVar13 != 0) goto LAB_080957d8;
        }
        else {
LAB_080957d8:
          iVar13 = FUN_08094250(pcStack_24158,auStack_10028,puVar14,uVar11);
          pcStack_24158[auStack_10028[0]] = '\0';
          if (((iVar13 != 0) && (pcVar4 = strrchr(pcStack_24158,0x2e), pcVar4 != (char *)0x0)) &&
             (iVar13 = strcasecmp(pcVar4 + 1,param_2), iVar13 == 0)) {
            FUN_08097034(&pcStack_24158,&DAT_08101c40);
            uVar3 = *(uint *)(iVar15 + 8);
            iVar15 = *(int *)(iVar15 + 0xc);
            uVar16 = (uint)(param_4 == 0 || param_5 == 0);
            *param_3 = uVar3;
            uVar17 = 0;
            if (param_4 == 0 || param_5 == 0) goto LAB_08095578;
            if (iVar15 != 0 || param_5 + param_6 <= uVar3) {
              uVar3 = 0;
              uVar22 = FUN_08097784(iVar18);
              uVar17 = (uint)uVar22;
              if ((int)((ulonglong)uVar22 >> 0x20) == 0) {
                lVar23 = FUN_08097a64(auStack_24128,iVar7,uVar16);
                uVar5 = (undefined4)((ulonglong)lVar23 >> 0x20);
                FUN_080995a8(auStack_24048,uVar5,(int)lVar23,uVar5);
                uVar11 = *(uint *)(iVar10 + 8);
                uVar19 = *(uint *)(iVar10 + 0xc);
                uStack_2412c = iVar2 + param_6;
                puStack_24140 = &UINT_080943d8;
                uStack_24130 = param_5;
                auStack_24188[0] = uVar16;
                iStack_2413c = param_4;
                uStack_24138 = uVar16;
                uStack_24134 = uVar16;
                if ((uVar11 | uVar19) == 0) {
                  FUN_080995a8(auStack_24048,(int)(lVar23 + (ulonglong)uStack_2412c >> 0x20),
                               (int)(lVar23 + (ulonglong)uStack_2412c));
                  uStack_2412c = uVar16;
                  goto LAB_08095c20;
                }
                if (uVar19 == 0 && uVar11 == 0x30101) {
                  uStack_240c8 = uVar16;
                  uStack_240c4 = uVar16;
                  FUN_0809be44(auStack_240d8,*(undefined4 *)(iVar10 + 0x10),
                               *(undefined4 *)(iVar10 + 0x14),&pcStack_24168);
                  FUN_0809adb4(auStack_240d8);
                  goto LAB_08095cf8;
                }
                if (uVar19 == 0 && uVar11 == 0x21) {
                  uStack_240c8 = uVar16;
                  uStack_240c4 = uVar16;
                  FUN_0809c228(auStack_240d8,**(undefined **)(iVar10 + 0x10),&pcStack_24168);
                  FUN_0809c2b0(auStack_240d8);
                  goto LAB_08095a60;
                }
              }
            }
            uVar17 = 0xffffffff;
            goto LAB_08095578;
          }
        }
        uVar16 = uVar16 + 1;
        iVar2 = iVar2 + *(int *)(iVar15 + 8);
        uVar3 = uStack_2410c;
        if (uStack_2410c <= uVar16) goto LAB_0809586c;
      }
      iVar2 = 0;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar3);
LAB_0809586c:
    if (param_5 != 0) {
      uVar17 = 0xffffffff;
    }
  }
  else {
    puVar14 = (ushort *)0x0;
    if (param_5 != 0) {
      uVar17 = 0xffffffff;
    }
  }
  goto LAB_08095578;
LAB_08095cf8:
  puStack_241b8 = auStack_24048;
  if (uVar16 == auStack_24188[0]) {
    auStack_24188[0] = 0x10000;
    iVar2 = (*pcStack_24040)(puStack_241b8,auStack_20028,auStack_24188);
    if (iVar2 != 0) goto LAB_08095b54;
    uVar16 = 0;
    puVar6 = auStack_20028;
  }
  else {
    puVar6 = auStack_20028 + uVar16;
  }
  bVar20 = uVar3 == 0;
  bVar1 = uVar17 < 0xffff;
  bVar21 = uVar17 == 0xffff;
  aiStack_24180[0] = auStack_24188[0] - uVar16;
  auStack_24178[0] = 0x10000;
  if (bVar20 && bVar1 || bVar20 && bVar21) {
    auStack_24178[0] = uVar17;
  }
  iVar2 = FUN_0809b42c(auStack_240d8,auStack_10028,auStack_24178,puVar6,aiStack_24180,
                       (bVar20 && bVar1 || bVar20 && bVar21) &&
                       (bVar20 && bVar1 || bVar20 && bVar21),auStack_24170);
  bVar21 = uVar17 < auStack_24178[0];
  uVar17 = uVar17 - auStack_24178[0];
  uVar3 = uVar3 - bVar21;
  uVar16 = uVar16 + aiStack_24180[0];
  iVar15 = (*(code *)puStack_24140)(&puStack_24140,auStack_10028);
  param_5 = param_5 - iVar15;
  if ((((int)param_5 < 1) || (iVar2 != 0)) ||
     (((uVar17 | uVar3) == 0 || ((aiStack_24180[0] == 0 && (auStack_24178[0] == 0))))))
  goto LAB_08095b54;
  goto LAB_08095cf8;
LAB_08095a60:
  if (uVar16 == auStack_24188[0]) {
    auStack_24188[0] = 0x10000;
    iVar2 = (*pcStack_24040)(auStack_24048,auStack_20028,auStack_24188);
    if (iVar2 != 0) goto LAB_08095b54;
    uVar16 = 0;
    puVar6 = auStack_20028;
  }
  else {
    puVar6 = auStack_20028 + uVar16;
  }
  bVar20 = uVar3 == 0;
  bVar1 = uVar17 < 0xffff;
  bVar21 = uVar17 == 0xffff;
  aiStack_24180[0] = auStack_24188[0] - uVar16;
  auStack_24178[0] = 0x10000;
  if (bVar20 && bVar1 || bVar20 && bVar21) {
    auStack_24178[0] = uVar17;
  }
  iVar2 = FUN_0809c76c(auStack_240d8,auStack_10028,auStack_24178,puVar6,aiStack_24180,
                       (bVar20 && bVar1 || bVar20 && bVar21) &&
                       (bVar20 && bVar1 || bVar20 && bVar21),auStack_24170);
  bVar21 = uVar17 < auStack_24178[0];
  uVar17 = uVar17 - auStack_24178[0];
  uVar3 = uVar3 - bVar21;
  uVar16 = uVar16 + aiStack_24180[0];
  iVar15 = (*(code *)puStack_24140)(&puStack_24140,auStack_10028);
  param_5 = param_5 - iVar15;
  if (((((int)param_5 < 1) || (iVar2 != 0)) || ((uVar17 | uVar3) == 0)) ||
     ((aiStack_24180[0] == 0 && (auStack_24178[0] == 0)))) goto LAB_08095b54;
  goto LAB_08095a60;
LAB_08095b54:
  if (param_5 != 0) {
    param_5 = 0xffffffff;
  }
  FUN_0809bc40(auStack_240d8,&pcStack_24168);
  uVar17 = param_5;
  goto LAB_08095578;
  while( true ) {
    param_5 = param_5 - uVar16;
    uVar17 = 0;
    if (param_5 == 0) break;
LAB_08095c20:
    uVar17 = param_5;
    if (0xffff < param_5) {
      uVar17 = 0x10000;
    }
    iVar2 = (*pcStack_24040)(auStack_24048,auStack_20028,auStack_10028);
    if ((iVar2 != 0) ||
       (uVar16 = (*(code *)puStack_24140)(&puStack_24140,auStack_20028,uVar17), uVar16 != uVar17)) {
      uVar17 = param_5;
      if (param_5 != 0) {
        uVar17 = 0xffffffff;
      }
      break;
    }
  }
LAB_08095578:
  FUN_080979a8(auStack_24128,&pcStack_24168);
  FUN_08096fc4(0,puVar14);
  FUN_08099088(auStack_24144);
  return uVar17;
}


