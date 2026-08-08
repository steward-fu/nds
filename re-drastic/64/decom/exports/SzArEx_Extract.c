/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Extract
 * Address  : 001ae9e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SzArEx_Extract(long *param_1,undefined8 param_2,uint param_3,uint *param_4,long *param_5,
                   ulong *param_6,long *param_7,long *param_8,code **param_9,undefined8 param_10)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  
  lVar4 = ___stack_chk_guard;
  uVar2 = *(uint *)(param_1[0xc] + (ulong)param_3 * 4);
  lVar10 = *param_5;
  *param_7 = 0;
  *param_8 = 0;
  if (uVar2 == 0xffffffff) {
    (*param_9[1])(param_9);
    *param_4 = 0xffffffff;
    *param_5 = 0;
    uVar8 = 0;
    *param_6 = 0;
    goto LAB_001aebbc;
  }
  uVar7 = (ulong)uVar2;
  if ((lVar10 == 0) || (*param_4 != uVar2)) {
    lVar10 = param_1[3] + (ulong)uVar2 * 0x38;
    if (*(int *)(lVar10 + 0x20) == 0) {
LAB_001aeb08:
      uVar18 = 0;
    }
    else {
      lVar14 = *(long *)(param_1[3] + (ulong)uVar2 * 0x38);
      iVar6 = 0;
      piVar16 = (int *)(lVar14 + 4);
      do {
        piVar15 = piVar16 + 8;
        iVar6 = iVar6 + *piVar16;
        piVar16 = piVar15;
      } while ((int *)(lVar14 + 0x24 + (ulong)(*(int *)(lVar10 + 0x20) - 1) * 0x20) != piVar15);
      uVar18 = 0;
      if ((iVar6 != 0) && (iVar6 = iVar6 + -1, -1 < iVar6)) {
        do {
          if (*(int *)(lVar10 + 0x24) == 0) {
LAB_001aed2c:
            uVar18 = *(ulong *)(*(long *)(lVar10 + 0x18) + (long)iVar6 * 8);
            goto LAB_001aeb0c;
          }
          iVar17 = 0;
          piVar16 = (int *)(*(long *)(lVar10 + 8) + 4);
          while (*piVar16 != iVar6) {
            iVar17 = iVar17 + 1;
            piVar16 = piVar16 + 2;
            if (*(int *)(lVar10 + 0x24) == iVar17) goto LAB_001aed2c;
          }
          if (iVar17 < 0) goto LAB_001aed2c;
          iVar6 = iVar6 + -1;
        } while (iVar6 != -1);
        goto LAB_001aeb08;
      }
    }
LAB_001aeb0c:
    pcVar12 = param_9[1];
    lVar14 = *(long *)(param_1[10] + (ulong)*(uint *)(param_1[9] + uVar7 * 4) * 8);
    lVar13 = param_1[8];
    *param_4 = uVar2;
    lVar14 = lVar14 + lVar13;
    (*pcVar12)(param_9);
    *param_5 = 0;
    uVar8 = LookInStream_SeekTo(param_2,lVar14);
    if ((int)uVar8 != 0) goto LAB_001aebbc;
    *param_6 = uVar18;
    if (uVar18 == 0) {
      lVar13 = *param_5;
    }
    else {
      lVar13 = (**param_9)(param_9,uVar18);
      *param_5 = lVar13;
      uVar8 = 2;
      if (lVar13 == 0) goto LAB_001aebbc;
    }
    uVar8 = SzFolder_Decode(lVar10,*param_1 + (ulong)*(uint *)(param_1[9] + uVar7 * 4) * 8,param_2,
                            lVar14,lVar13,uVar18,param_10);
    if ((int)uVar8 != 0) goto LAB_001aebbc;
    if ((*(int *)(lVar10 + 0x2c) == 0) ||
       (iVar6 = CrcCalc(*param_5,uVar18), iVar6 == *(int *)(lVar10 + 0x30))) goto LAB_001aebf8;
  }
  else {
LAB_001aebf8:
    lVar14 = param_1[4];
    uVar2 = *(uint *)(param_1[0xb] + uVar7 * 4);
    uVar7 = (ulong)uVar2;
    *param_7 = 0;
    lVar10 = lVar14 + (ulong)param_3 * 0x20;
    if (uVar2 < param_3) {
      uVar3 = (param_3 - 1) - uVar2;
      if (uVar3 < 3) {
        lVar13 = 0;
      }
      else {
        puVar11 = (ulong *)(lVar14 + uVar7 * 0x20 + 8);
        puVar1 = puVar11 + 8;
        lVar13 = 0;
        lVar19 = 0;
        puVar5 = puVar1;
        while( true ) {
          puVar9 = puVar5;
          lVar13 = lVar13 + (*puVar11 & 0xffffffff);
          lVar19 = lVar19 + (puVar11[4] & 0xffffffff);
          if (puVar1 + (ulong)((uVar3 >> 1) - 1) * 8 == puVar9) break;
          puVar5 = puVar9 + 8;
          puVar11 = puVar9;
        }
        lVar13 = lVar13 + lVar19;
        uVar7 = (ulong)(uVar2 + (uVar3 & 0xfffffffe));
      }
      uVar2 = (int)uVar7 + 1;
      lVar13 = (ulong)*(uint *)(lVar14 + uVar7 * 0x20 + 8) + lVar13;
      if (uVar2 < param_3) {
        uVar3 = (int)uVar7 + 2;
        lVar13 = lVar13 + (ulong)*(uint *)(lVar14 + (ulong)uVar2 * 0x20 + 8);
        if (uVar3 < param_3) {
          lVar13 = lVar13 + (ulong)*(uint *)(lVar14 + (ulong)uVar3 * 0x20 + 8);
        }
      }
      *param_7 = lVar13;
    }
    lVar14 = *(long *)(lVar10 + 8);
    *param_8 = lVar14;
    uVar8 = 0xb;
    if (*param_6 < (ulong)(lVar14 + *param_7)) goto LAB_001aebbc;
    if ((*(char *)(lVar10 + 0x1b) == '\0') ||
       (iVar6 = CrcCalc(*param_5 + *param_7), iVar6 == *(int *)(lVar10 + 0x10))) {
      uVar8 = 0;
      goto LAB_001aebbc;
    }
  }
  uVar8 = 3;
LAB_001aebbc:
  if (lVar4 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8,lVar4 - ___stack_chk_guard,0);
  }
  return;
}


