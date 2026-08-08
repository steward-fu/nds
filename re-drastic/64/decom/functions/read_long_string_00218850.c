/*
 * Ghidra decompilation
 *
 * Function : read_long_string
 * Address  : 00218850
 * Program  : drastic64
 */


void read_long_string(uint *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  
  plVar14 = *(long **)(param_1 + 0x12);
  lVar7 = plVar14[1];
  uVar10 = plVar14[2];
  uVar13 = *param_1;
  uVar2 = param_1[1];
  uVar12 = lVar7 + 1;
  if (uVar10 < uVar12) {
    if (0x3ffffffe < uVar10) goto LAB_00218c1c;
    lVar7 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar10,uVar10 * 2);
    lVar5 = plVar14[1];
    *plVar14 = lVar7;
    plVar14[2] = uVar10 * 2;
    plVar14[1] = lVar5 + 1;
    *(char *)(lVar7 + lVar5) = (char)uVar13;
    plVar14 = *(long **)(param_1 + 0x10);
    lVar7 = *plVar14;
    *plVar14 = lVar7 + -1;
    if (lVar7 == 0) goto LAB_00218b50;
LAB_002188b0:
    pbVar8 = (byte *)plVar14[1];
    plVar14[1] = (long)(pbVar8 + 1);
    bVar3 = *pbVar8;
    uVar13 = (uint)bVar3;
    *param_1 = (uint)bVar3;
    if (bVar3 == 10 || bVar3 == 0xd) {
LAB_00218b68:
      inclinenumber(param_1);
      uVar13 = *param_1;
    }
  }
  else {
    plVar14[1] = uVar12;
    *(char *)(*plVar14 + lVar7) = (char)uVar13;
    plVar14 = *(long **)(param_1 + 0x10);
    lVar7 = *plVar14;
    *plVar14 = lVar7 + -1;
    if (lVar7 != 0) goto LAB_002188b0;
LAB_00218b50:
    uVar13 = luaZ_fill();
    *param_1 = uVar13;
    if (uVar13 == 10 || uVar13 == 0xd) goto LAB_00218b68;
  }
joined_r0x002188dc:
  while (uVar13 == 0xd) {
LAB_00218908:
    plVar14 = *(long **)(param_1 + 0x12);
    lVar7 = plVar14[1];
    uVar10 = plVar14[2];
    uVar12 = lVar7 + 1;
    if (uVar10 < uVar12) {
      if (0x3ffffffe < uVar10) goto LAB_00218c1c;
      lVar5 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar10,uVar10 * 2);
      lVar7 = plVar14[1];
      *plVar14 = lVar5;
      plVar14[2] = uVar10 * 2;
      uVar12 = lVar7 + 1;
    }
    else {
      lVar5 = *plVar14;
    }
    plVar14[1] = uVar12;
    *(undefined *)(lVar5 + lVar7) = 10;
    inclinenumber(param_1);
    if (param_2 == (long *)0x0) {
      uVar13 = *param_1;
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
    }
    else {
LAB_002188fc:
      uVar13 = *param_1;
    }
  }
  if ((int)uVar13 < 0xe) {
    if (uVar13 == 0xffffffff) {
      pcVar1 = "string";
      if (param_2 == (long *)0x0) {
        pcVar1 = "comment";
      }
      uVar9 = luaO_pushfstring(*(undefined8 *)(param_1 + 0xe),
                               "unfinished long %s (starting at line %d)",pcVar1,uVar2);
                    /* WARNING: Subroutine does not return */
      lexerror(param_1,uVar9,0x121);
    }
    if (uVar13 == 10) goto LAB_00218908;
  }
  else if (uVar13 == 0x5d) {
    iVar4 = skip_sep(param_1);
    if (iVar4 != param_3) goto LAB_002188fc;
    plVar14 = *(long **)(param_1 + 0x12);
    uVar13 = *param_1;
    lVar7 = plVar14[1];
    uVar10 = plVar14[2];
    uVar12 = lVar7 + 1;
    if (uVar10 < uVar12) {
      if (0x3ffffffe < uVar10) {
LAB_00218c1c:
                    /* WARNING: Subroutine does not return */
        lexerror(param_1,"lexical element too long",0);
      }
      lVar7 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar10,uVar10 * 2);
      lVar5 = plVar14[1];
      *plVar14 = lVar7;
      plVar14[2] = uVar10 * 2;
      plVar14[1] = lVar5 + 1;
      *(char *)(lVar7 + lVar5) = (char)uVar13;
      plVar14 = *(long **)(param_1 + 0x10);
      lVar7 = *plVar14;
      *plVar14 = lVar7 + -1;
    }
    else {
      plVar14[1] = uVar12;
      *(char *)(*plVar14 + lVar7) = (char)uVar13;
      plVar14 = *(long **)(param_1 + 0x10);
      lVar7 = *plVar14;
      *plVar14 = lVar7 + -1;
    }
    if (lVar7 == 0) {
      uVar13 = luaZ_fill();
    }
    else {
      pbVar8 = (byte *)plVar14[1];
      plVar14[1] = (long)(pbVar8 + 1);
      uVar13 = (uint)*pbVar8;
    }
    *param_1 = uVar13;
    if (param_2 != (long *)0x0) {
      lVar5 = *(long *)(param_1 + 0xe);
      lVar7 = luaS_newlstr(lVar5,**(long **)(param_1 + 0x12) + (long)(param_3 + 2),
                           (*(long **)(param_1 + 0x12))[1] - (long)((param_3 + 2) * 2));
      plVar14 = *(long **)(lVar5 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x14);
      *(long **)(lVar5 + 0x10) = plVar14 + 2;
      *plVar14 = lVar7;
      *(uint *)(plVar14 + 1) = *(byte *)(lVar7 + 8) | 0x40;
      puVar6 = (undefined4 *)luaH_set(lVar5,uVar9);
      if (puVar6[2] == 0) {
        lVar11 = *(long *)(lVar5 + 0x18);
        *puVar6 = 1;
        puVar6[2] = 1;
        if (0 < *(long *)(lVar11 + 0x18)) {
          luaC_step(lVar5);
        }
      }
      else {
        lVar7 = *(long *)(puVar6 + 4);
      }
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + -0x10;
      *param_2 = lVar7;
    }
    return;
  }
  if (param_2 != (long *)0x0) {
    plVar14 = *(long **)(param_1 + 0x12);
    lVar7 = plVar14[1];
    uVar10 = plVar14[2];
    uVar12 = lVar7 + 1;
    if (uVar10 < uVar12) {
      if (0x3ffffffe < uVar10) goto LAB_00218c1c;
      lVar5 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar10,uVar10 * 2);
      lVar7 = plVar14[1];
      *plVar14 = lVar5;
      plVar14[2] = uVar10 * 2;
      uVar12 = lVar7 + 1;
    }
    else {
      lVar5 = *plVar14;
    }
    plVar14[1] = uVar12;
    *(char *)(lVar5 + lVar7) = (char)uVar13;
  }
  plVar14 = *(long **)(param_1 + 0x10);
  lVar7 = *plVar14;
  *plVar14 = lVar7 + -1;
  if (lVar7 == 0) {
    uVar13 = luaZ_fill();
    *param_1 = uVar13;
  }
  else {
    pbVar8 = (byte *)plVar14[1];
    plVar14[1] = (long)(pbVar8 + 1);
    uVar13 = (uint)*pbVar8;
    *param_1 = uVar13;
  }
  goto joined_r0x002188dc;
}


