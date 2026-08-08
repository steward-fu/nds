/*
 * Ghidra decompilation
 *
 * Function : luaV_lessequal
 * Address  : 00203010
 * Program  : drastic64
 */


ulong luaV_lessequal(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  char *__s1;
  size_t sVar11;
  char *__s2;
  size_t sVar12;
  float fVar13;
  float fVar14;
  undefined auVar15 [16];
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  puVar17 = &stack0xffffffffffffffc0;
  puVar18 = &stack0xffffffffffffffc0;
  uVar1 = *(uint *)(param_2 + 1);
  fVar13 = *(float *)param_2;
  if (uVar1 == 0x13) {
    fVar14 = *(float *)param_3;
    if (*(int *)(param_3 + 1) == 0x13) {
      return (ulong)((int)fVar13 <= (int)fVar14);
    }
    fVar13 = (float)(int)fVar13;
    if (*(int *)(param_3 + 1) == 3) goto LAB_00203068;
  }
  else if (uVar1 == 3) {
    fVar14 = *(float *)param_3;
    if (*(int *)(param_3 + 1) == 3) {
LAB_00203068:
      return (ulong)(fVar13 <= fVar14);
    }
    if (*(int *)(param_3 + 1) == 0x13) {
      fVar14 = (float)(int)fVar14;
      goto LAB_00203068;
    }
  }
  if (((uVar1 & 0xf) == 4) && ((*(uint *)(param_3 + 1) & 0xf) == 4)) {
    __s1 = (char *)(*param_2 + 0x20);
    sVar12 = *(size_t *)(*param_2 + 0x10);
    __s2 = (char *)(*param_3 + 0x20);
    sVar11 = *(size_t *)(*param_3 + 0x10);
    while( true ) {
      iVar3 = strcoll(__s1,__s2);
      if (iVar3 != 0) {
        return (ulong)(iVar3 < 1);
      }
      sVar5 = strlen(__s1);
      if (sVar5 == sVar11) break;
      if (sVar5 == sVar12) {
        return 1;
      }
      lVar6 = sVar5 + 1;
      __s1 = __s1 + lVar6;
      sVar12 = sVar12 - lVar6;
      __s2 = __s2 + lVar6;
      sVar11 = sVar11 - lVar6;
    }
    return (ulong)(sVar11 == sVar12);
  }
  uVar4 = luaT_callorderTM(param_1,param_2,param_3,0x15);
  if (-1 < (int)uVar4) {
    return uVar4;
  }
  iVar3 = luaT_callorderTM(param_1,param_3,param_2,0x14);
  if (-1 < iVar3) {
    return (ulong)(iVar3 == 0);
  }
  plVar10 = param_3;
  auVar15 = luaG_ordererror(param_1,param_2);
  plVar8 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  uVar19 = 0x2031a4;
  uVar1 = *(uint *)(plVar8 + 1);
  uVar2 = *(uint *)(plVar10 + 1);
  if (((uVar1 ^ uVar2) & 0x3f) != 0) {
    if ((((uVar1 ^ uVar2) & 0xf) == 0) && ((uVar1 & 0xf) == 3)) {
      fVar13 = *(float *)plVar8;
      if ((uVar1 != 3) && (fVar13 = 0.0, uVar1 == 0x13)) {
        fVar13 = (float)(int)*(float *)plVar8;
      }
      fVar14 = *(float *)plVar10;
      if ((uVar2 != 3) && (fVar14 = 0.0, uVar2 == 0x13)) {
        fVar14 = (float)(int)*(float *)plVar10;
      }
      return (ulong)(fVar13 == fVar14);
    }
    return 0;
  }
  uVar1 = uVar1 & 0x3f;
  if (uVar1 != 5) {
    if (uVar1 < 6) {
      if (uVar1 != 2) {
        if (uVar1 < 3) {
          if (uVar1 == 0) {
            return 1;
          }
          if (uVar1 == 1) goto LAB_0020327c;
        }
        else if (uVar1 == 3) {
          return (ulong)(*(float *)plVar8 == *(float *)plVar10);
        }
      }
LAB_0020324c:
      return (ulong)(*plVar8 == *plVar10);
    }
    if (uVar1 == 0x14) {
      uVar4 = luaS_eqlngstr(*plVar8,*plVar10);
      return uVar4;
    }
    if (0x14 < uVar1) goto LAB_0020324c;
    if (uVar1 != 7) {
      if (uVar1 == 0x13) {
LAB_0020327c:
        return (ulong)(*(int *)plVar8 == *(int *)plVar10);
      }
      goto LAB_0020324c;
    }
    lVar9 = *plVar10;
    if (*plVar8 == lVar9) goto LAB_00203380;
    if (lVar6 != 0) {
      lVar7 = *(long *)(*plVar8 + 0x10);
      puVar16 = &stack0xffffffffffffffc0;
      if ((lVar7 != 0) &&
         (puVar16 = &stack0xffffffffffffffc0, (*(byte *)(lVar7 + 10) >> 5 & 1) == 0)) {
        lVar9 = luaT_gettm(lVar7,5,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x120));
        puVar17 = puVar18;
        if (lVar9 != 0) goto LAB_00203354;
        lVar9 = *plVar10;
        puVar16 = puVar18;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) goto LAB_002033d4;
      goto LAB_00203334;
    }
    goto LAB_002033d4;
  }
  lVar9 = *plVar10;
  if (*plVar8 == lVar9) {
LAB_00203380:
    uVar4 = 1;
  }
  else {
    if (lVar6 == 0) goto LAB_002033d4;
    lVar7 = *(long *)(*plVar8 + 0x28);
    puVar16 = &stack0xffffffffffffffc0;
    if ((lVar7 == 0) || (puVar16 = &stack0xffffffffffffffc0, (*(byte *)(lVar7 + 10) >> 5 & 1) != 0))
    {
LAB_002033c8:
      lVar9 = *(long *)(lVar9 + 0x28);
      if (lVar9 != 0) {
LAB_00203334:
        if (((*(byte *)(lVar9 + 10) >> 5 & 1) == 0) &&
           (lVar9 = luaT_gettm(lVar9,5,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x120)),
           puVar17 = puVar16, lVar9 != 0)) goto LAB_00203354;
      }
    }
    else {
      lVar9 = luaT_gettm(lVar7,5,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x120));
      if (lVar9 == 0) {
        lVar9 = *plVar10;
        puVar16 = puVar17;
        goto LAB_002033c8;
      }
LAB_00203354:
      luaT_callTM(lVar6,lVar9,plVar8,plVar10,*(undefined8 *)(lVar6 + 0x10),1,in_x6,in_x7,puVar17,
                  uVar19,param_2,param_3,param_1);
      iVar3 = (*(int **)(lVar6 + 0x10))[2];
      if ((iVar3 != 0) && ((iVar3 != 1 || (**(int **)(lVar6 + 0x10) != 0)))) goto LAB_00203380;
    }
LAB_002033d4:
    uVar4 = 0;
  }
  return uVar4;
}


