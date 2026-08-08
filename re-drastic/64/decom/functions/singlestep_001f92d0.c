/*
 * Ghidra decompilation
 *
 * Function : singlestep
 * Address  : 001f92d0
 * Program  : drastic64
 */


long singlestep(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long **pplVar4;
  int iVar5;
  long **pplVar6;
  long lVar7;
  long lVar8;
  long **pplVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  int extraout_w13;
  int iVar13;
  int extraout_w13_00;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long **pplVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar14 = *(long *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar14 + 0x55);
  if (bVar1 == 4) {
    pplVar19 = *(long ***)(lVar14 + 0x60);
    if (pplVar19 != (long **)0x0) {
      bVar1 = *(byte *)(lVar14 + 0x54);
      lVar16 = *(long *)(lVar14 + 0x18);
      lVar18 = lVar16;
      if ((long **)*pplVar19 != (long **)0x0) {
        lVar18 = 0x58;
        pplVar6 = (long **)*pplVar19;
        while( true ) {
          pplVar11 = (long **)*pplVar6;
          if ((byte)((bVar1 ^ 3) & (*(byte *)((long)pplVar6 + 9) ^ 3)) == 0) {
            *pplVar19 = (long *)pplVar11;
            freeobj(param_1);
            pplVar11 = (long **)*pplVar19;
          }
          else {
            *(byte *)((long)pplVar6 + 9) = *(byte *)((long)pplVar6 + 9) & 0xf8 | bVar1 & 3;
            pplVar19 = pplVar6;
          }
          if (pplVar11 == (long **)0x0) break;
          lVar18 = lVar18 + -1;
          pplVar6 = pplVar11;
          if (lVar18 == 0) {
            *(long *)(lVar14 + 0x28) =
                 *(long *)(lVar14 + 0x28) + (*(long *)(lVar14 + 0x18) - lVar16);
            *(long ***)(lVar14 + 0x60) = pplVar19;
            return 0x318;
          }
        }
        lVar18 = *(long *)(lVar14 + 0x18);
      }
      *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + (lVar18 - lVar16);
    }
    *(undefined *)(lVar14 + 0x55) = 5;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    return 0;
  }
  if (4 < bVar1) {
    if (bVar1 != 6) {
      if (bVar1 != 7) {
        if (bVar1 != 5) {
          return 0;
        }
        *(byte *)(*(long *)(lVar14 + 0xe0) + 9) =
             *(byte *)(*(long *)(lVar14 + 0xe0) + 9) & 0xf8 | *(byte *)(lVar14 + 0x54) & 3;
        if (*(char *)(lVar14 + 0x56) != '\x01') {
          lVar18 = *(long *)(lVar14 + 0x18);
          uVar20 = luaM_realloc_(param_1,*(undefined8 *)(lVar14 + 0xb0),
                                 *(undefined8 *)(lVar14 + 0xc0),0);
          iVar5 = *(int *)(lVar14 + 0x3c);
          *(undefined8 *)(lVar14 + 0xb0) = uVar20;
          *(undefined8 *)(lVar14 + 0xc0) = 0;
          iVar13 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar13 = iVar5;
          }
          if (*(int *)(lVar14 + 0x38) < iVar13 >> 2) {
            luaS_resize(param_1,iVar5 / 2);
          }
          *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + (*(long *)(lVar14 + 0x18) - lVar18);
        }
        *(undefined *)(lVar14 + 0x55) = 6;
        return 0;
      }
      *(undefined8 *)(lVar14 + 0x90) = 0;
      *(long *)(lVar14 + 0x20) = (long)*(int *)(lVar14 + 0x3c) << 3;
      *(undefined8 *)(lVar14 + 0x78) = 0;
      *(undefined8 *)(lVar14 + 0x70) = 0;
      *(undefined8 *)(lVar14 + 0x88) = 0;
      *(undefined8 *)(lVar14 + 0x80) = 0;
      if ((*(long *)(lVar14 + 0xe0) != 0) && ((*(byte *)(*(long *)(lVar14 + 0xe0) + 9) & 3) != 0)) {
        reallymarkobject(lVar14);
      }
      if (((*(uint *)(lVar14 + 0x48) >> 6 & 1) != 0) &&
         ((*(byte *)(*(long *)(lVar14 + 0x40) + 9) & 3) != 0)) {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1b8) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1b8) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1c0) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1c0) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1c8) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1c8) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1d0) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1d0) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1d8) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1d8) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1e0) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1e0) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1e8) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1e8) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1f0) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1f0) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      if ((*(long *)(lVar14 + 0x1f8) != 0) && ((*(byte *)(*(long *)(lVar14 + 0x1f8) + 9) & 3) != 0))
      {
        reallymarkobject(lVar14);
      }
      for (pplVar19 = *(long ***)(lVar14 + 0x98); pplVar19 != (long **)0x0;
          pplVar19 = (long **)*pplVar19) {
        while ((*(byte *)((long)pplVar19 + 9) & 3) != 0) {
          reallymarkobject(lVar14,pplVar19);
          pplVar19 = (long **)*pplVar19;
          if (pplVar19 == (long **)0x0) goto LAB_001f94c4;
        }
      }
LAB_001f94c4:
      *(undefined *)(lVar14 + 0x55) = 0;
      return *(long *)(lVar14 + 0x20);
    }
    if ((*(long *)(lVar14 + 0x98) == 0) || (*(char *)(lVar14 + 0x56) == '\x01')) {
      *(undefined *)(lVar14 + 0x55) = 7;
      return 0;
    }
    uVar15 = 0;
    do {
      if (*(uint *)(lVar14 + 200) <= uVar15) {
        iVar13 = *(uint *)(lVar14 + 200) * 2;
        goto LAB_001f9c58;
      }
      GCTM(param_1,1);
      uVar15 = uVar15 + 1;
    } while (*(long *)(lVar14 + 0x98) != 0);
    iVar13 = 0;
LAB_001f9c58:
    *(int *)(lVar14 + 200) = iVar13;
    return (long)(int)uVar15 * 9;
  }
  if (bVar1 == 2) {
    pplVar19 = *(long ***)(lVar14 + 0x60);
    if (pplVar19 != (long **)0x0) {
      pplVar6 = (long **)*pplVar19;
      bVar2 = *(byte *)(lVar14 + 0x54);
      lVar16 = *(long *)(lVar14 + 0x18);
      bVar1 = bVar2 ^ 3;
      lVar18 = lVar16;
      if (pplVar6 != (long **)0x0) {
        bVar3 = *(byte *)((long)pplVar6 + 9);
        lVar18 = 0x58;
        pplVar9 = (long **)*pplVar6;
        pplVar11 = pplVar9;
        if ((bVar1 & (bVar3 ^ 3)) == 0) goto LAB_001f9acc;
        do {
          *(byte *)((long)pplVar6 + 9) = bVar3 & 0xf8 | bVar2 & 3;
          pplVar19 = pplVar6;
          while( true ) {
            if (pplVar11 == (long **)0x0) {
              lVar18 = *(long *)(lVar14 + 0x18);
              goto LAB_001f9bfc;
            }
            lVar18 = lVar18 + -1;
            if (lVar18 == 0) goto LAB_001f936c;
            bVar3 = *(byte *)((long)pplVar11 + 9);
            pplVar9 = (long **)*pplVar11;
            pplVar6 = pplVar11;
            pplVar11 = pplVar9;
            if ((bVar1 & (bVar3 ^ 3)) != 0) break;
LAB_001f9acc:
            *pplVar19 = (long *)pplVar9;
            freeobj(param_1);
            pplVar11 = (long **)*pplVar19;
          }
        } while( true );
      }
LAB_001f9bfc:
      *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + (lVar18 - lVar16);
    }
    *(undefined *)(lVar14 + 0x55) = 3;
    *(long *)(lVar14 + 0x60) = lVar14 + 0x68;
    return 0;
  }
  if (bVar1 == 3) {
    pplVar19 = *(long ***)(lVar14 + 0x60);
    if (pplVar19 != (long **)0x0) {
      bVar1 = *(byte *)(lVar14 + 0x54);
      lVar16 = *(long *)(lVar14 + 0x18);
      lVar18 = lVar16;
      if ((long **)*pplVar19 != (long **)0x0) {
        lVar18 = 0x58;
        pplVar6 = (long **)*pplVar19;
        while( true ) {
          pplVar11 = (long **)*pplVar6;
          if ((byte)((bVar1 ^ 3) & (*(byte *)((long)pplVar6 + 9) ^ 3)) == 0) {
            *pplVar19 = (long *)pplVar11;
            freeobj(param_1);
            pplVar11 = (long **)*pplVar19;
          }
          else {
            *(byte *)((long)pplVar6 + 9) = *(byte *)((long)pplVar6 + 9) & 0xf8 | bVar1 & 3;
            pplVar19 = pplVar6;
          }
          if (pplVar11 == (long **)0x0) break;
          lVar18 = lVar18 + -1;
          pplVar6 = pplVar11;
          if (lVar18 == 0) {
LAB_001f936c:
            *(long *)(lVar14 + 0x28) =
                 *(long *)(lVar14 + 0x28) + (*(long *)(lVar14 + 0x18) - lVar16);
            *(long ***)(lVar14 + 0x60) = pplVar19;
            return 0x318;
          }
        }
        lVar18 = *(long *)(lVar14 + 0x18);
      }
      *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + (lVar18 - lVar16);
    }
    *(undefined *)(lVar14 + 0x55) = 4;
    *(long *)(lVar14 + 0x60) = lVar14 + 0x98;
    return 0;
  }
  if (bVar1 == 0) {
    *(undefined8 *)(lVar14 + 0x20) = 0;
    propagatemark(lVar14);
    if (*(long *)(lVar14 + 0x70) == 0) {
      *(undefined *)(lVar14 + 0x55) = 1;
      lVar14 = *(long *)(lVar14 + 0x20);
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x20);
    }
    return lVar14;
  }
  if (bVar1 != 1) {
    return 0;
  }
  lVar18 = lVar14;
  if (*(long *)(lVar14 + 0x70) != 0) {
    do {
      propagatemark(lVar14);
    } while (*(long *)(lVar14 + 0x70) != 0);
    lVar18 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(lVar18 + 0x20) = 0;
  *(undefined *)(lVar18 + 0x55) = 8;
  lVar16 = *(long *)(lVar18 + 0x78);
  if ((*(byte *)(param_1 + 9) & 3) != 0) {
    reallymarkobject(lVar18,param_1);
  }
  if (((*(uint *)(lVar18 + 0x48) >> 6 & 1) != 0) &&
     ((*(byte *)(*(long *)(lVar18 + 0x40) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1b8) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1b8) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1c0) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1c0) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1c8) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1c8) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1d0) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1d0) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1d8) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1d8) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1e0) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1e0) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1e8) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1e8) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1f0) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1f0) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  if ((*(long *)(lVar18 + 0x1f8) != 0) && ((*(byte *)(*(long *)(lVar18 + 0x1f8) + 9) & 3) != 0)) {
    reallymarkobject(lVar18);
  }
  plVar12 = (long *)(lVar18 + 0xa8);
  lVar7 = *(long *)(lVar18 + 0xa8);
  while (lVar7 != 0) {
    pplVar19 = *(long ***)(lVar7 + 0x40);
    lVar8 = *(long *)(lVar7 + 0x50);
    if ((*(byte *)(lVar7 + 9) & 7) == 0) {
      if (pplVar19 == (long **)0x0) {
        *plVar12 = lVar8;
        *(long *)(lVar7 + 0x50) = lVar7;
        lVar7 = *plVar12;
      }
      else {
        plVar12 = (long *)(lVar7 + 0x50);
        lVar7 = lVar8;
      }
    }
    else {
      *plVar12 = lVar8;
      *(long *)(lVar7 + 0x50) = lVar7;
      for (; pplVar19 != (long **)0x0; pplVar19 = (long **)pplVar19[2]) {
        if (*(int *)(pplVar19 + 3) != 0) {
          if (((*(uint *)(*pplVar19 + 1) >> 6 & 1) != 0) && ((*(byte *)(**pplVar19 + 9) & 3) != 0))
          {
            reallymarkobject(lVar18);
          }
          *(undefined4 *)(pplVar19 + 3) = 0;
        }
      }
      lVar7 = *plVar12;
    }
  }
  while (*(long *)(lVar18 + 0x70) != 0) {
    propagatemark(lVar18);
  }
  *(long *)(lVar18 + 0x70) = lVar16;
  lVar7 = *(long *)(lVar18 + 0x20);
  while (lVar16 != 0) {
    propagatemark(lVar18);
    lVar16 = *(long *)(lVar18 + 0x70);
  }
  *(undefined8 *)(lVar18 + 0x20) = 0;
  do {
    lVar16 = *(long *)(lVar18 + 0x88);
    *(undefined8 *)(lVar18 + 0x88) = 0;
    if (lVar16 == 0) break;
    do {
      lVar8 = *(long *)(lVar16 + 0x30);
      iVar5 = traverseephemeron(lVar18,lVar16);
      iVar13 = extraout_w13;
      if (iVar5 != 0) {
        while (*(long *)(lVar18 + 0x70) != 0) {
          propagatemark(lVar18);
        }
        iVar13 = 1;
      }
      lVar16 = lVar8;
    } while (lVar8 != 0);
  } while (iVar13 != 0);
  clearvalues(lVar18,*(undefined8 *)(lVar18 + 0x80),0);
  clearvalues(lVar18,*(undefined8 *)(lVar18 + 0x90),0);
  pplVar19 = *(long ***)(lVar18 + 0x98);
  lVar16 = *(long *)(lVar18 + 0x20);
  pplVar6 = pplVar19;
  if (pplVar19 == (long **)0x0) {
    pplVar6 = *(long ***)(lVar18 + 0x68);
    pplVar11 = (long **)(lVar18 + 0x98);
    uVar20 = *(undefined8 *)(lVar18 + 0x80);
    uVar21 = *(undefined8 *)(lVar18 + 0x90);
    if (pplVar6 == (long **)0x0) {
      *(undefined4 *)(lVar18 + 200) = 1;
      goto LAB_001f9870;
    }
LAB_001f97b4:
    bVar1 = *(byte *)((long)pplVar6 + 9);
    pplVar19 = (long **)(lVar18 + 0x68);
    pplVar9 = (long **)*pplVar6;
    while( true ) {
      pplVar4 = pplVar6;
      if ((bVar1 & 3) != 0) {
        *pplVar19 = (long *)pplVar9;
        *pplVar6 = *pplVar11;
        *pplVar11 = (long *)pplVar6;
        pplVar9 = (long **)*pplVar19;
        pplVar4 = pplVar19;
        pplVar11 = pplVar6;
      }
      pplVar19 = pplVar4;
      pplVar6 = pplVar9;
      if (pplVar6 == (long **)0x0) break;
      bVar1 = *(byte *)((long)pplVar6 + 9);
      pplVar9 = (long **)*pplVar6;
    }
    pplVar19 = *(long ***)(lVar18 + 0x98);
    *(undefined4 *)(lVar18 + 200) = 1;
    if (pplVar19 == (long **)0x0) goto LAB_001f9870;
  }
  else {
    do {
      pplVar11 = pplVar6;
      pplVar6 = (long **)*pplVar11;
    } while ((long **)*pplVar11 != (long **)0x0);
    pplVar6 = *(long ***)(lVar18 + 0x68);
    uVar20 = *(undefined8 *)(lVar18 + 0x80);
    uVar21 = *(undefined8 *)(lVar18 + 0x90);
    if (pplVar6 != (long **)0x0) goto LAB_001f97b4;
    *(undefined4 *)(lVar18 + 200) = 1;
  }
  do {
    bVar1 = *(byte *)((long)pplVar19 + 9);
    while ((bVar1 & 3) == 0) {
      pplVar19 = (long **)*pplVar19;
      if (pplVar19 == (long **)0x0) goto LAB_001f9870;
      bVar1 = *(byte *)((long)pplVar19 + 9);
    }
    reallymarkobject(lVar18,pplVar19);
    pplVar19 = (long **)*pplVar19;
  } while (pplVar19 != (long **)0x0);
LAB_001f9870:
  while (*(long *)(lVar18 + 0x70) != 0) {
    propagatemark(lVar18);
  }
  *(undefined8 *)(lVar18 + 0x20) = 0;
  do {
    lVar8 = *(long *)(lVar18 + 0x88);
    *(undefined8 *)(lVar18 + 0x88) = 0;
    if (lVar8 == 0) goto LAB_001f98b0;
    do {
      lVar17 = *(long *)(lVar8 + 0x30);
      iVar5 = traverseephemeron(lVar18,lVar8);
      iVar13 = extraout_w13_00;
      if (iVar5 != 0) {
        while (*(long *)(lVar18 + 0x70) != 0) {
          propagatemark(lVar18);
        }
        iVar13 = 1;
      }
      lVar8 = lVar17;
    } while (lVar17 != 0);
  } while (iVar13 != 0);
  lVar8 = *(long *)(lVar18 + 0x88);
LAB_001f98b0:
  clearkeys_constprop_0(lVar18,lVar8);
  iVar13 = 0;
  clearkeys_constprop_0(lVar18,*(undefined8 *)(lVar18 + 0x90));
  clearvalues(lVar18,*(undefined8 *)(lVar18 + 0x80),uVar20);
  clearvalues(lVar18,*(undefined8 *)(lVar18 + 0x90),uVar21);
  *(byte *)(lVar18 + 0x54) = *(byte *)(lVar18 + 0x54) ^ 3;
  lVar8 = *(long *)(lVar18 + 0x20);
  lVar17 = *(long *)(param_1 + 0x18);
  *(undefined *)(lVar17 + 0x55) = 2;
  lVar18 = lVar17;
  pplVar19 = *(long ***)(lVar17 + 0x58);
  pplVar6 = (long **)(lVar17 + 0x58);
  while( true ) {
    iVar13 = iVar13 + 1;
    if (pplVar19 == (long **)0x0) break;
    pplVar11 = (long **)*pplVar19;
    if ((byte)((*(byte *)(lVar18 + 0x54) ^ 3) & (*(byte *)((long)pplVar19 + 9) ^ 3)) == 0) {
      *pplVar6 = (long *)pplVar11;
      freeobj(param_1);
      pplVar11 = (long **)*pplVar6;
    }
    else {
      *(byte *)((long)pplVar19 + 9) =
           *(byte *)((long)pplVar19 + 9) & 0xf8 | *(byte *)(lVar18 + 0x54) & 3;
      pplVar6 = pplVar19;
    }
    if (pplVar11 == (long **)0x0) break;
    if ((long **)(lVar17 + 0x58) != pplVar6) goto LAB_001f9a14;
    lVar18 = *(long *)(param_1 + 0x18);
    pplVar19 = pplVar11;
  }
  pplVar6 = (long **)0x0;
LAB_001f9a14:
  lVar18 = *(long *)(lVar14 + 0x10);
  lVar10 = *(long *)(lVar14 + 0x18);
  *(long ***)(lVar17 + 0x60) = pplVar6;
  *(long *)(lVar14 + 0x28) = lVar18 + lVar10;
  return lVar8 + (long)iVar13 * 9 + lVar7 + lVar16;
}


