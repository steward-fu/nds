/*
 * Ghidra decompilation
 *
 * Function : luaD_precall
 * Address  : 001f6430
 * Program  : drastic64
 */


undefined8 luaD_precall(long param_1,code **param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  code **ppcVar6;
  code *pcVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  code **ppcVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  undefined4 *puVar10;
  
  lVar11 = *(long *)(param_1 + 0x38);
  ppcVar17 = *(code ***)(param_1 + 0x10);
  lVar15 = *(long *)(param_1 + 0x30) - (long)ppcVar17;
  lVar21 = (long)param_2 - lVar11;
  uVar3 = *(uint *)(param_2 + 1);
  while (uVar3 = uVar3 & 0x3f, uVar3 != 0x16) {
    if (uVar3 == 0x26) {
      pcVar7 = *(code **)(*param_2 + 0x18);
      goto joined_r0x001f6668;
    }
    if (uVar3 == 6) {
      lVar18 = *(long *)(*param_2 + 0x18);
      iVar20 = (int)((long)ppcVar17 - (long)param_2 >> 4);
      iVar5 = iVar20 + -1;
      if (lVar15 >> 4 <= (long)(ulong)*(byte *)(lVar18 + 0xc)) {
        if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_001f691c;
        iVar2 = *(int *)(param_1 + 0xb8) * 2;
        iVar1 = (uint)*(byte *)(lVar18 + 0xc) + (int)((long)ppcVar17 - lVar11 >> 4) + 5;
        if (1000000 < iVar2) {
          iVar2 = 1000000;
        }
        if (iVar1 < iVar2) {
          iVar1 = iVar2;
        }
        if (1000000 < iVar1) goto LAB_001f68f8;
        luaD_reallocstack(param_1);
      }
      bVar4 = *(byte *)(lVar18 + 10);
      if (iVar5 < (int)(uint)bVar4) {
        lVar11 = *(long *)(param_1 + 0x10);
        uVar3 = (uint)bVar4 - iVar20;
        puVar9 = (undefined4 *)(lVar11 + 8);
        do {
          puVar10 = puVar9 + 4;
          *puVar9 = 0;
          puVar9 = puVar10;
        } while (puVar10 != (undefined4 *)(lVar11 + 0x18 + (ulong)uVar3 * 0x10));
        iVar5 = uVar3 + iVar20;
        *(ulong *)(param_1 + 0x10) = lVar11 + ((ulong)((uint)bVar4 - iVar20) + 1) * 0x10;
      }
      if (*(char *)(lVar18 + 0xb) == '\0') {
        lVar21 = *(long *)(param_1 + 0x38) + lVar21;
        lVar11 = lVar21 + 0x10;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x10);
        bVar4 = *(byte *)(lVar18 + 10);
        if (*(long *)(param_1 + 0x30) - lVar11 >> 4 <= (long)(ulong)*(byte *)(lVar18 + 0xc)) {
          if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_001f691c;
          iVar20 = *(int *)(param_1 + 0xb8) * 2;
          if (1000000 < iVar20) {
            iVar20 = 1000000;
          }
          iVar1 = (uint)*(byte *)(lVar18 + 0xc) + (int)(lVar11 - *(long *)(param_1 + 0x38) >> 4) + 5
          ;
          if (iVar1 < iVar20) {
            iVar1 = iVar20;
          }
          if (1000000 < iVar1) goto LAB_001f68f8;
          luaD_reallocstack(param_1);
          lVar11 = *(long *)(param_1 + 0x10);
        }
        if (bVar4 != 0) {
          puVar19 = (undefined8 *)(lVar11 + (long)iVar5 * -0x10);
          lVar15 = lVar11 + 0x10;
          do {
            uVar13 = *puVar19;
            uVar14 = puVar19[1];
            *(long *)(param_1 + 0x10) = lVar15;
            *(undefined8 *)(lVar15 + -0x10) = uVar13;
            *(undefined8 *)(lVar15 + -8) = uVar14;
            lVar15 = lVar15 + 0x10;
            *(undefined4 *)(puVar19 + 1) = 0;
            puVar19 = puVar19 + 2;
          } while (lVar11 + (ulong)(bVar4 - 1) * 0x10 + 0x20 != lVar15);
        }
        lVar21 = *(long *)(param_1 + 0x38) + lVar21;
      }
      plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)luaE_extendCI(param_1);
      }
      lVar15 = *(long *)(lVar18 + 0x38);
      *(long **)(param_1 + 0x20) = plVar8;
      *plVar8 = lVar21;
      plVar8[4] = lVar11;
      *(undefined2 *)(plVar8 + 8) = param_3;
      bVar4 = *(byte *)(lVar18 + 0xc);
      *(undefined *)((long)plVar8 + 0x42) = 2;
      lVar21 = *(long *)(param_1 + 0x18);
      lVar11 = lVar11 + (ulong)bVar4 * 0x10;
      plVar8[1] = lVar11;
      plVar8[5] = lVar15;
      *(long *)(param_1 + 0x10) = lVar11;
      if (*(long *)(lVar21 + 0x18) < 1) {
        bVar4 = *(byte *)(param_1 + 200);
      }
      else {
        luaC_step(param_1);
        bVar4 = *(byte *)(param_1 + 200);
      }
      if ((bVar4 & 1) != 0) {
        uVar13 = 0;
        plVar8[5] = plVar8[5] + 4;
        if (((*(byte *)(plVar8[2] + 0x42) >> 1 & 1) != 0) &&
           ((*(uint *)(*(long *)(plVar8[2] + 0x28) + -4) & 0x3f) == 0x25)) {
          uVar13 = 4;
          *(byte *)((long)plVar8 + 0x42) = *(byte *)((long)plVar8 + 0x42) | 0x20;
        }
        luaD_hook(param_1,uVar13,0xffffffff);
        plVar8[5] = plVar8[5] + -4;
        return 0;
      }
      return 0;
    }
    if (lVar15 < 0x11) {
      if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_001f691c;
      iVar20 = *(int *)(param_1 + 0xb8) * 2;
      iVar5 = (int)((long)ppcVar17 - lVar11 >> 4) + 6;
      if (1000000 < iVar20) {
        iVar20 = 1000000;
      }
      if (iVar5 < iVar20) {
        iVar5 = iVar20;
      }
      if (1000000 < iVar5) goto LAB_001f68f8;
      luaD_reallocstack(param_1);
      param_2 = (code **)(*(long *)(param_1 + 0x38) + lVar21);
    }
    ppcVar6 = (code **)luaT_gettmbyobj(param_1,param_2,0x17);
    if ((*(uint *)(ppcVar6 + 1) & 0xf) != 6) {
                    /* WARNING: Subroutine does not return */
      luaG_typeerror(param_1,param_2,&DAT_00229920);
    }
    ppcVar17 = *(code ***)(param_1 + 0x10);
    if (param_2 < ppcVar17) {
      uVar16 = (long)ppcVar17 + (-1 - (long)param_2);
      lVar21 = (uVar16 >> 4) + 1;
      memmove((void *)((long)ppcVar17 - (uVar16 & 0xfffffffffffffff0)),ppcVar17 + lVar21 * -2,
              lVar21 * 0x10);
    }
    ppcVar17 = ppcVar17 + 2;
    pcVar7 = *ppcVar6;
    pcVar12 = ppcVar6[1];
    *(code ***)(param_1 + 0x10) = ppcVar17;
    *param_2 = pcVar7;
    param_2[1] = pcVar12;
    lVar11 = *(long *)(param_1 + 0x38);
    lVar15 = *(long *)(param_1 + 0x30) - (long)ppcVar17;
    lVar21 = (long)param_2 - lVar11;
    uVar3 = *(uint *)(param_2 + 1);
  }
  pcVar7 = *param_2;
joined_r0x001f6668:
  if (lVar15 < 0x141) {
    if (1000000 < *(int *)(param_1 + 0xb8)) {
LAB_001f691c:
                    /* WARNING: Subroutine does not return */
      luaD_throw(param_1,6);
    }
    iVar20 = *(int *)(param_1 + 0xb8) * 2;
    iVar5 = (int)((long)ppcVar17 - lVar11 >> 4) + 0x19;
    if (1000000 < iVar20) {
      iVar20 = 1000000;
    }
    if (iVar5 < iVar20) {
      iVar5 = iVar20;
    }
    if (1000000 < iVar5) {
LAB_001f68f8:
      luaD_reallocstack(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"stack overflow");
    }
    luaD_reallocstack(param_1);
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)luaE_extendCI(param_1);
  }
  *(long **)(param_1 + 0x20) = plVar8;
  lVar11 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(param_1 + 0x38);
  *(undefined *)((long)plVar8 + 0x42) = 0;
  lVar18 = *(long *)(param_1 + 0x18);
  *plVar8 = lVar15 + lVar21;
  plVar8[1] = lVar11 + 0x140;
  *(undefined2 *)(plVar8 + 8) = param_3;
  if (0 < *(long *)(lVar18 + 0x18)) {
    luaC_step(param_1);
  }
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    luaD_hook(param_1,0,0xffffffff);
  }
  iVar5 = (*pcVar7)(param_1);
  luaD_poscall(param_1,*(long *)(param_1 + 0x10) + (long)iVar5 * -0x10);
  return 1;
}


