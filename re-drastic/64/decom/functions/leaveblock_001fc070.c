/*
 * Ghidra decompilation
 *
 * Function : leaveblock
 * Address  : 001fc070
 * Program  : drastic64
 */


void leaveblock(long *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar19 = param_1[2];
  plVar14 = (long *)param_1[3];
  if ((*plVar14 == 0) || (*(char *)((long)plVar14 + 0x11) == '\0')) {
    cVar2 = *(char *)((long)plVar14 + 0x12);
  }
  else {
    uVar6 = luaK_jump();
    luaK_patchclose(param_1,uVar6,*(undefined *)(plVar14 + 2));
    luaK_patchtohere(param_1,uVar6);
    cVar2 = *(char *)((long)plVar14 + 0x12);
  }
  if (cVar2 == '\0') {
    lVar18 = *(long *)(lVar19 + 0x58);
  }
  else {
    uVar7 = luaS_new(*(undefined8 *)(lVar19 + 0x38),"break");
    lVar20 = *(long *)(lVar19 + 0x58);
    lVar13 = *(long *)(lVar19 + 0x30);
    iVar15 = *(int *)(lVar20 + 0x28);
    uVar6 = *(undefined4 *)(lVar13 + 0x20);
    lVar12 = *(long *)(lVar20 + 0x20);
    lVar11 = lVar12;
    lVar18 = lVar20;
    if (*(int *)(lVar20 + 0x2c) <= iVar15) {
      lVar12 = luaM_growaux_(*(undefined8 *)(lVar19 + 0x38),lVar12,lVar20 + 0x2c,0x18,0x7fff,
                             "labels/gotos");
      lVar18 = *(long *)(lVar19 + 0x58);
      lVar13 = *(long *)(lVar19 + 0x30);
      *(long *)(lVar20 + 0x20) = lVar12;
      lVar11 = *(long *)(lVar18 + 0x20);
    }
    lVar16 = (long)iVar15 * 0x18;
    lVar1 = lVar12 + lVar16;
    plVar17 = (long *)(lVar11 + lVar16);
    *(undefined8 *)(lVar12 + lVar16) = uVar7;
    *(undefined4 *)(lVar1 + 0xc) = 0;
    *(undefined *)(lVar1 + 0x10) = *(undefined *)(lVar13 + 0x3a);
    iVar5 = *(int *)(*(long *)(lVar13 + 0x18) + 0xc);
    *(undefined4 *)(lVar1 + 8) = uVar6;
    *(int *)(lVar20 + 0x28) = iVar15 + 1;
    iVar15 = *(int *)(lVar18 + 0x18);
    if (iVar5 < iVar15) {
      do {
        while (*(long *)(*(long *)(lVar18 + 0x10) + (long)iVar5 * 0x18) != *plVar17) {
          iVar5 = iVar5 + 1;
          if (iVar15 <= iVar5) goto LAB_001fc28c;
        }
        closegoto_isra_0(lVar19,iVar5,*(undefined4 *)(plVar17 + 1),*(undefined *)(plVar17 + 2));
        iVar15 = *(int *)(lVar18 + 0x18);
      } while (iVar5 < iVar15);
LAB_001fc28c:
      lVar18 = *(long *)(lVar19 + 0x58);
    }
  }
  lVar11 = *plVar14;
  plVar17 = *(long **)(param_1[2] + 0x58);
  bVar3 = *(byte *)((long)param_1 + 0x3a);
  uVar8 = (uint)bVar3;
  iVar15 = *(int *)(plVar17 + 1);
  param_1[3] = lVar11;
  bVar10 = *(byte *)(plVar14 + 2);
  *(uint *)(plVar17 + 1) = iVar15 - ((uint)bVar3 - (uint)bVar10);
  if ((uint)bVar10 < (uint)bVar3) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    iVar15 = *(int *)((long)param_1 + 0x34);
    lVar13 = *plVar17;
    lVar12 = *(long *)(*param_1 + 0x50);
    uVar8 = (uint)bVar3;
    do {
      uVar4 = uVar8 - 1;
      uVar8 = uVar4 & 0xff;
      *(undefined4 *)
       (lVar12 + (long)*(short *)(lVar13 + (long)(int)(uVar8 + iVar15) * 2) * 0x10 + 0xc) = uVar6;
    } while (bVar10 < uVar8);
    *(char *)((long)param_1 + 0x3a) = (char)uVar4;
  }
  *(char *)((long)param_1 + 0x3c) = (char)uVar8;
  iVar15 = *(int *)((long)plVar14 + 0xc);
  *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)(plVar14 + 1);
  if (lVar11 == 0) {
    if (iVar15 < *(int *)(lVar18 + 0x18)) {
      lVar11 = *(long *)(*(long *)(lVar18 + 0x10) + (long)iVar15 * 0x18);
      if (*(char *)(lVar11 + 8) == '\x04') {
        pcVar9 = "no visible label \'%s\' for <goto> at line %d";
        if (*(char *)(lVar11 + 10) != '\0') {
          pcVar9 = "<%s> at line %d not inside a loop";
        }
      }
      else {
        pcVar9 = "no visible label \'%s\' for <goto> at line %d";
      }
      uVar7 = luaO_pushfstring(*(undefined8 *)(lVar19 + 0x38),pcVar9,lVar11 + 0x20,
                               *(undefined4 *)(*(long *)(lVar18 + 0x10) + (long)iVar15 * 0x18 + 0xc)
                              );
      *(undefined4 *)(lVar19 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(lVar19,uVar7);
    }
  }
  else if (iVar15 < *(int *)(plVar17 + 3)) {
    while( true ) {
      lVar19 = plVar17[2] + (long)iVar15 * 0x18;
      if (bVar10 < *(byte *)(lVar19 + 0x10)) {
        if (*(char *)((long)plVar14 + 0x11) != '\0') {
          luaK_patchclose(param_1,*(undefined4 *)(lVar19 + 8));
          bVar10 = *(byte *)(plVar14 + 2);
        }
        *(byte *)(lVar19 + 0x10) = bVar10;
      }
      iVar5 = findlabel(param_1[2],iVar15);
      if (iVar5 == 0) {
        iVar15 = iVar15 + 1;
      }
      if (*(int *)(plVar17 + 3) <= iVar15) break;
      bVar10 = *(byte *)(plVar14 + 2);
    }
  }
  return;
}


