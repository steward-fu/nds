/*
 * Ghidra decompilation
 *
 * Function : luaV_execute
 * Address  : 00203ac0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaV_execute(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long **pplVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  long **pplVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  long **pplVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  long **pplVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long **pplVar32;
  float fVar33;
  float fVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  float fVar36;
  long *local_28;
  float local_18;
  float local_10;
  long local_8;
  
  pplVar23 = *(long ***)(param_1 + 0x20);
  local_8 = ___stack_chk_guard;
  plVar12 = pplVar23[5];
LAB_00203b18:
  plVar27 = pplVar23[4];
  lVar15 = **pplVar23;
  lVar24 = *(long *)(*(long *)(lVar15 + 0x18) + 0x30);
LAB_00203b38:
  while( true ) {
    uVar25 = *(uint *)plVar12;
    pplVar23[5] = (long *)((long)plVar12 + 4);
    if (((*(byte *)(param_1 + 200) & 0xc) != 0) &&
       ((iVar6 = *(int *)(param_1 + 0xc0) + -1, *(int *)(param_1 + 0xc0) = iVar6, iVar6 == 0 ||
        ((*(byte *)(param_1 + 200) >> 2 & 1) != 0)))) {
      luaG_traceexec(param_1);
      plVar27 = pplVar23[4];
    }
    uVar29 = (ulong)(uVar25 >> 6) & 0xff;
    pplVar28 = (long **)(plVar27 + uVar29 * 2);
    if ((uVar25 & 0x3f) < 0x2e) break;
LAB_00203b88:
    plVar12 = pplVar23[5];
  }
  iVar6 = (int)uVar29;
  switch(uVar25 & 0x3f) {
  case 0:
    plVar12 = pplVar23[5];
    plVar21 = (long *)(plVar27 + (ulong)(uVar25 >> 0x17) * 2)[1];
    *pplVar28 = (long *)plVar27[(ulong)(uVar25 >> 0x17) * 2];
    pplVar28[1] = plVar21;
    goto LAB_00203b38;
  case 1:
    plVar12 = pplVar23[5];
    pplVar14 = (long **)(lVar24 + (ulong)(uVar25 >> 0xe) * 0x10);
    plVar21 = pplVar14[1];
    *pplVar28 = *pplVar14;
    pplVar28[1] = plVar21;
    goto LAB_00203b38;
  case 2:
    plVar12 = (long *)((long)pplVar23[5] + 4);
    pplVar14 = (long **)(lVar24 + (ulong)(*(uint *)pplVar23[5] >> 6) * 0x10);
    plVar21 = pplVar14[1];
    *pplVar28 = *pplVar14;
    pplVar28[1] = plVar21;
    goto LAB_00203b38;
  case 3:
    plVar12 = (long *)((long)pplVar23[5] + 4);
    if ((uVar25 & 0x7fc000) == 0) {
      plVar12 = pplVar23[5];
    }
    *(uint *)pplVar28 = uVar25 >> 0x17;
    *(uint *)(pplVar28 + 1) = 1;
    goto LAB_00203b38;
  case 4:
    pplVar14 = pplVar28 + ((ulong)(uVar25 >> 0x17) + 1) * 2;
    do {
      *(uint *)(pplVar28 + 1) = 0;
      pplVar28 = pplVar28 + 2;
    } while (pplVar28 != pplVar14);
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 5:
    plVar12 = pplVar23[5];
    pplVar14 = (long **)**(long ***)(lVar15 + ((ulong)(uVar25 >> 0x17) + 4) * 8);
    plVar21 = pplVar14[1];
    *pplVar28 = *pplVar14;
    pplVar28[1] = plVar21;
    goto LAB_00203b38;
  case 6:
    uVar29 = (ulong)(uVar25 >> 0xe);
    pplVar14 = (long **)**(long ***)(lVar15 + ((ulong)(uVar25 >> 0x17) + 4) * 8);
    if ((uVar25 >> 0x16 & 1) == 0) goto LAB_00204448;
LAB_00204410:
    plVar27 = (long *)(lVar24 + (uVar29 & 0xff) * 0x10);
    break;
  case 7:
    uVar29 = (ulong)(uVar25 >> 0xe);
    pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    if ((uVar25 >> 0x16 & 1) != 0) goto LAB_00204410;
LAB_00204448:
    plVar27 = plVar27 + (uVar29 & 0x1ff) * 2;
    break;
  case 8:
    pplVar28 = (long **)**(long ***)(lVar15 + ((ulong)(uVar25 >> 6) & 0xff) * 8 + 0x20);
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
    goto LAB_00204364;
  case 9:
    plVar12 = pplVar28[1];
    pplVar18 = *(long ***)(lVar15 + ((ulong)(uVar25 >> 0x17) + 4) * 8);
    pplVar14 = (long **)*pplVar18;
    *pplVar14 = *pplVar28;
    pplVar14[1] = plVar12;
    if (((*(uint *)(pplVar14 + 1) >> 6 & 1) == 0) || (pplVar14 != pplVar18 + 2)) goto LAB_00203b88;
    luaC_upvalbarrier_(param_1);
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 10:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
LAB_00204364:
    luaV_settable(param_1,pplVar28,plVar12,plVar27);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0xb:
    plVar12 = (long *)luaH_new(param_1);
    *pplVar28 = plVar12;
    *(uint *)(pplVar28 + 1) = 0x45;
    uVar20 = uVar25 >> 0xe & 0x1ff;
    if ((uVar25 >> 0x17 | uVar20) != 0) {
      uVar10 = luaO_fb2int();
      uVar11 = luaO_fb2int(uVar20);
      luaH_resize(param_1,plVar12,uVar10,uVar11);
    }
LAB_00204914:
    lVar26 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    goto joined_r0x00203cbc;
  case 0xc:
    pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    plVar12 = pplVar14[1];
    pplVar28[2] = *pplVar14;
    pplVar28[3] = plVar12;
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
    break;
  case 0xd:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 0x13) goto LAB_00205144;
LAB_002042d8:
      if (uVar25 != 3) {
        if (((uVar25 & 0xf) == 4) &&
           (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18),
           lVar26 == *(long *)(*plVar12 + 0x10) + 1)) {
          if (local_10 == 2.662467e-44) {
            fVar36 = (float)(int)local_18;
            uVar25 = *(uint *)(plVar21 + 1);
          }
          else {
            uVar25 = *(uint *)(plVar21 + 1);
            fVar36 = local_18;
          }
          goto LAB_002042e8;
        }
LAB_002056b0:
        luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,6);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      uVar25 = *(uint *)(plVar21 + 1);
      fVar36 = *(float *)plVar12;
LAB_002042e8:
      if (uVar25 == 3) goto LAB_002042f0;
LAB_00205160:
      if (uVar25 == 0x13) {
        fVar34 = (float)*(int *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_002056b0;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 0x13) goto LAB_002042d8;
LAB_00205144:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 0x13) {
        uVar25 = *(uint *)plVar12;
        iVar6 = *(int *)plVar21;
        *(uint *)(pplVar28 + 1) = 0x13;
        *(uint *)pplVar28 = uVar25 + iVar6;
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      fVar36 = (float)*(uint *)plVar12;
      if (uVar25 != 3) goto LAB_00205160;
LAB_002042f0:
      fVar34 = *(float *)plVar21;
    }
    *(uint *)(pplVar28 + 1) = 3;
    plVar12 = pplVar23[5];
    *(float *)pplVar28 = fVar36 + fVar34;
    goto LAB_00203b38;
  case 0xe:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 0x13) goto LAB_00204e90;
LAB_00204278:
      if (uVar25 != 3) {
        if (((uVar25 & 0xf) == 4) &&
           (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18),
           lVar26 == *(long *)(*plVar12 + 0x10) + 1)) {
          if (local_10 == 2.662467e-44) {
            fVar36 = (float)(int)local_18;
            uVar25 = *(uint *)(plVar21 + 1);
          }
          else {
            uVar25 = *(uint *)(plVar21 + 1);
            fVar36 = local_18;
          }
          goto LAB_00204288;
        }
LAB_00205658:
        luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,7);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      uVar25 = *(uint *)(plVar21 + 1);
      fVar36 = *(float *)plVar12;
LAB_00204288:
      if (uVar25 == 3) goto LAB_00204290;
LAB_00204eac:
      if (uVar25 == 0x13) {
        fVar34 = (float)*(int *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_00205658;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 0x13) goto LAB_00204278;
LAB_00204e90:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 0x13) {
        uVar25 = *(uint *)plVar12;
        iVar6 = *(int *)plVar21;
        *(uint *)(pplVar28 + 1) = 0x13;
        *(uint *)pplVar28 = uVar25 - iVar6;
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      fVar36 = (float)*(uint *)plVar12;
      if (uVar25 != 3) goto LAB_00204eac;
LAB_00204290:
      fVar34 = *(float *)plVar21;
    }
    *(uint *)(pplVar28 + 1) = 3;
    plVar12 = pplVar23[5];
    *(float *)pplVar28 = fVar36 - fVar34;
    goto LAB_00203b38;
  case 0xf:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 0x13) goto LAB_00204b50;
LAB_002048b8:
      if (uVar25 != 3) {
        if (((uVar25 & 0xf) == 4) &&
           (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18),
           lVar26 == *(long *)(*plVar12 + 0x10) + 1)) {
          if (local_10 == 2.662467e-44) {
            fVar36 = (float)(int)local_18;
            uVar25 = *(uint *)(plVar21 + 1);
          }
          else {
            uVar25 = *(uint *)(plVar21 + 1);
            fVar36 = local_18;
          }
          goto LAB_002048c8;
        }
LAB_00205684:
        luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,8);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      uVar25 = *(uint *)(plVar21 + 1);
      fVar36 = *(float *)plVar12;
LAB_002048c8:
      if (uVar25 == 3) goto LAB_002048d0;
LAB_00204b6c:
      if (uVar25 == 0x13) {
        fVar34 = (float)*(int *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_00205684;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 0x13) goto LAB_002048b8;
LAB_00204b50:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 0x13) {
        uVar25 = *(uint *)plVar12;
        iVar6 = *(int *)plVar21;
        *(uint *)(pplVar28 + 1) = 0x13;
        plVar12 = pplVar23[5];
        *(uint *)pplVar28 = uVar25 * iVar6;
        goto LAB_00203b38;
      }
      fVar36 = (float)*(uint *)plVar12;
      if (uVar25 != 3) goto LAB_00204b6c;
LAB_002048d0:
      fVar34 = *(float *)plVar21;
    }
    *(uint *)(pplVar28 + 1) = 3;
    plVar12 = pplVar23[5];
    *(float *)pplVar28 = fVar36 * fVar34;
    goto LAB_00203b38;
  case 0x10:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 0x13) goto LAB_00204f1c;
LAB_002047ec:
      if (uVar25 != 3) {
        if (((uVar25 & 0xf) == 4) &&
           (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18),
           lVar26 == *(long *)(*plVar12 + 0x10) + 1)) {
          if (local_10 == 2.662467e-44) {
            fVar36 = (float)(int)local_18;
            uVar25 = *(uint *)(plVar21 + 1);
          }
          else {
            uVar25 = *(uint *)(plVar21 + 1);
            fVar36 = local_18;
          }
          goto LAB_002047fc;
        }
LAB_00205600:
        luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,9);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      uVar25 = *(uint *)(plVar21 + 1);
      fVar36 = *(float *)plVar12;
LAB_002047fc:
      if (uVar25 == 3) goto LAB_00204804;
LAB_00204f38:
      if (uVar25 == 0x13) {
        fVar34 = (float)*(uint *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_00205600;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 0x13) goto LAB_002047ec;
LAB_00204f1c:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 0x13) {
        uVar20 = *(uint *)plVar21;
        uVar9 = *(uint *)plVar12;
        if (uVar20 + 1 < 2) {
          if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            luaG_runerror(param_1,"attempt to perform \'n%%0\'");
          }
          uVar25 = 0;
        }
        else {
          iVar6 = 0;
          if (uVar20 != 0) {
            iVar6 = (int)uVar9 / (int)uVar20;
          }
          uVar4 = uVar9 - iVar6 * uVar20;
          uVar25 = uVar4;
          if ((uVar4 != 0) && (uVar25 = uVar4 + uVar20, -1 < (int)(uVar9 ^ uVar20))) {
            uVar25 = uVar4;
          }
        }
        goto LAB_00204708;
      }
      fVar36 = (float)*(uint *)plVar12;
      if (uVar25 != 3) goto LAB_00204f38;
LAB_00204804:
      fVar34 = *(float *)plVar21;
    }
    fVar36 = fmodf(fVar36,fVar34);
    if (fVar36 * fVar34 < 0.0) {
      fVar36 = fVar36 + fVar34;
    }
    *(float *)pplVar28 = fVar36;
    *(uint *)(pplVar28 + 1) = 3;
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x11:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 3) goto LAB_002050f0;
LAB_00204860:
      fVar36 = *(float *)plVar12;
LAB_00204864:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 3) {
        fVar34 = *(float *)plVar21;
      }
      else if (uVar25 == 0x13) {
        fVar34 = (float)*(int *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_00205104;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
      fVar36 = powf(fVar36,fVar34);
      *(uint *)(pplVar28 + 1) = 3;
      plVar12 = pplVar23[5];
      *(float *)pplVar28 = fVar36;
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 3) goto LAB_00204860;
LAB_002050f0:
      if (uVar25 == 0x13) {
        fVar36 = (float)*(int *)plVar12;
        goto LAB_00204864;
      }
      if (((uVar25 & 0xf) == 4) &&
         (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18), lVar26 == *(long *)(*plVar12 + 0x10) + 1
         )) {
        fVar36 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar36 = (float)(int)local_18;
        }
        goto LAB_00204864;
      }
LAB_00205104:
      luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,10);
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    goto LAB_00203b38;
  case 0x12:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 3) goto LAB_00204bdc;
LAB_00204524:
      fVar36 = *(float *)plVar12;
LAB_00204528:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 3) {
        fVar34 = *(float *)plVar21;
      }
      else if (uVar25 == 0x13) {
        fVar34 = (float)*(int *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_00204bf0;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
      *(uint *)(pplVar28 + 1) = 3;
      plVar12 = pplVar23[5];
      *(float *)pplVar28 = fVar36 / fVar34;
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 3) goto LAB_00204524;
LAB_00204bdc:
      if (uVar25 == 0x13) {
        fVar36 = (float)*(int *)plVar12;
        goto LAB_00204528;
      }
      if (((uVar25 & 0xf) == 4) &&
         (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18), lVar26 == *(long *)(*plVar12 + 0x10) + 1
         )) {
        fVar36 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar36 = (float)(int)local_18;
        }
        goto LAB_00204528;
      }
LAB_00204bf0:
      luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,0xb);
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    goto LAB_00203b38;
  case 0x13:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar21 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 == 0x13) goto LAB_00204ce4;
LAB_00204a1c:
      if (uVar25 != 3) {
        if (((uVar25 & 0xf) == 4) &&
           (lVar26 = luaO_str2num(*plVar12 + 0x20,&local_18),
           lVar26 == *(long *)(*plVar12 + 0x10) + 1)) {
          if (local_10 == 2.662467e-44) {
            fVar36 = (float)(int)local_18;
            uVar25 = *(uint *)(plVar21 + 1);
          }
          else {
            uVar25 = *(uint *)(plVar21 + 1);
            fVar36 = local_18;
          }
          goto LAB_00204a2c;
        }
LAB_0020562c:
        luaT_trybinTM(param_1,plVar12,plVar21,pplVar28,0xc);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      uVar25 = *(uint *)(plVar21 + 1);
      fVar36 = *(float *)plVar12;
LAB_00204a2c:
      if (uVar25 == 3) goto LAB_00204a34;
LAB_00204d00:
      if (uVar25 == 0x13) {
        fVar34 = (float)*(uint *)plVar21;
      }
      else {
        if (((uVar25 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*plVar21 + 0x20,&local_18),
           lVar26 != *(long *)(*plVar21 + 0x10) + 1)) goto LAB_0020562c;
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
    }
    else {
      plVar21 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      uVar25 = *(uint *)(plVar12 + 1);
      if (uVar25 != 0x13) goto LAB_00204a1c;
LAB_00204ce4:
      uVar25 = *(uint *)(plVar21 + 1);
      if (uVar25 == 0x13) {
        uVar25 = *(uint *)plVar21;
        uVar20 = *(uint *)plVar12;
        if (uVar25 + 1 < 2) {
          if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            luaG_runerror(param_1,"attempt to divide by zero");
          }
          uVar9 = -uVar20;
        }
        else {
          uVar9 = 0;
          if (uVar25 != 0) {
            uVar9 = (int)uVar20 / (int)uVar25;
          }
          if ((int)(uVar20 ^ uVar25) < 0) {
            uVar9 = uVar9 - (uVar20 != uVar9 * uVar25);
          }
        }
        *(uint *)pplVar28 = uVar9;
        *(uint *)(pplVar28 + 1) = 0x13;
        plVar12 = pplVar23[5];
        goto LAB_00203b38;
      }
      fVar36 = (float)*(uint *)plVar12;
      if (uVar25 != 3) goto LAB_00204d00;
LAB_00204a34:
      fVar34 = *(float *)plVar21;
    }
    *(uint *)(pplVar28 + 1) = 3;
    plVar12 = pplVar23[5];
    *(int *)pplVar28 = (int)(fVar36 / fVar34);
    goto LAB_00203b38;
  case 0x14:
    if ((int)uVar25 < 0) {
      pplVar14 = (long **)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    }
    pplVar18 = pplVar14;
    if ((uVar25 >> 0x16 & 1) == 0) {
      pplVar32 = (long **)(plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) != 2.662467e-44) goto LAB_00205098;
LAB_002047a0:
      fVar36 = *(float *)pplVar14;
LAB_002047a4:
      pplVar18 = pplVar32;
      fVar34 = *(float *)(pplVar32 + 1);
      if (*(float *)(pplVar32 + 1) == 2.662467e-44) {
        uVar25 = (uint)fVar36 & (uint)*(float *)pplVar32;
        goto LAB_00204708;
      }
      while (fVar34 != 4.203895e-45) {
        if (fVar34 == 2.662467e-44) {
          uVar25 = (uint)fVar36 & (uint)*(float *)pplVar18;
          goto LAB_00204708;
        }
        if ((((uint)fVar34 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar34 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_002050b0;
      }
      fVar34 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar34) && ((-2.147484e+09 <= fVar34 && (fVar34 < 2.147484e+09))))
      {
        uVar25 = (uint)fVar36 & (int)fVar34;
        goto LAB_00204708;
      }
    }
    else {
      pplVar32 = (long **)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) == 2.662467e-44) goto LAB_002047a0;
LAB_00205098:
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_002047a4;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_002050b0;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_002047a4;
      }
    }
LAB_002050b0:
    luaT_trybinTM(param_1,pplVar14,pplVar32,pplVar28,0xd);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x15:
    if ((int)uVar25 < 0) {
      pplVar14 = (long **)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    }
    pplVar18 = pplVar14;
    if ((uVar25 >> 0x16 & 1) == 0) {
      pplVar32 = (long **)(plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) != 2.662467e-44) goto LAB_00204c78;
LAB_00204964:
      fVar36 = *(float *)pplVar14;
LAB_00204968:
      bVar35 = SUB41(fVar36,0);
      bVar37 = (byte)((uint)fVar36 >> 8);
      bVar38 = (byte)((uint)fVar36 >> 0x10);
      bVar39 = (byte)((uint)fVar36 >> 0x18);
      pplVar18 = pplVar32;
      fVar36 = *(float *)(pplVar32 + 1);
      if (*(float *)(pplVar32 + 1) == 2.662467e-44) {
        fVar36 = *(float *)pplVar32;
        uVar25 = CONCAT13(bVar39 | (byte)((uint)fVar36 >> 0x18),
                          CONCAT12(bVar38 | (byte)((uint)fVar36 >> 0x10),
                                   CONCAT11(bVar37 | (byte)((uint)fVar36 >> 8),
                                            bVar35 | SUB41(fVar36,0))));
        goto LAB_00204708;
      }
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          uVar25 = CONCAT13(bVar39 | (byte)((uint)fVar36 >> 0x18),
                            CONCAT12(bVar38 | (byte)((uint)fVar36 >> 0x10),
                                     CONCAT11(bVar37 | (byte)((uint)fVar36 >> 8),
                                              bVar35 | SUB41(fVar36,0))));
          goto LAB_00204708;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204c90;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        iVar6 = (int)fVar36;
        uVar25 = CONCAT13(bVar39 | (byte)((uint)iVar6 >> 0x18),
                          CONCAT12(bVar38 | (byte)((uint)iVar6 >> 0x10),
                                   CONCAT11(bVar37 | (byte)((uint)iVar6 >> 8),bVar35 | (byte)iVar6))
                         );
        goto LAB_00204708;
      }
    }
    else {
      pplVar32 = (long **)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) == 2.662467e-44) goto LAB_00204964;
LAB_00204c78:
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_00204968;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204c90;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_00204968;
      }
    }
LAB_00204c90:
    luaT_trybinTM(param_1,pplVar14,pplVar32,pplVar28,0xe);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x16:
    if ((int)uVar25 < 0) {
      pplVar14 = (long **)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    }
    pplVar18 = pplVar14;
    if ((uVar25 >> 0x16 & 1) == 0) {
      pplVar32 = (long **)(plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) != 2.662467e-44) goto LAB_00204e38;
LAB_002043e0:
      fVar36 = *(float *)pplVar14;
LAB_002043e4:
      bVar35 = SUB41(fVar36,0);
      bVar37 = (byte)((uint)fVar36 >> 8);
      bVar38 = (byte)((uint)fVar36 >> 0x10);
      bVar39 = (byte)((uint)fVar36 >> 0x18);
      pplVar18 = pplVar32;
      fVar36 = *(float *)(pplVar32 + 1);
      if (*(float *)(pplVar32 + 1) == 2.662467e-44) {
        fVar36 = *(float *)pplVar32;
        uVar25 = CONCAT13(bVar39 ^ (byte)((uint)fVar36 >> 0x18),
                          CONCAT12(bVar38 ^ (byte)((uint)fVar36 >> 0x10),
                                   CONCAT11(bVar37 ^ (byte)((uint)fVar36 >> 8),
                                            bVar35 ^ SUB41(fVar36,0))));
        goto LAB_00204708;
      }
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          uVar25 = CONCAT13(bVar39 ^ (byte)((uint)fVar36 >> 0x18),
                            CONCAT12(bVar38 ^ (byte)((uint)fVar36 >> 0x10),
                                     CONCAT11(bVar37 ^ (byte)((uint)fVar36 >> 8),
                                              bVar35 ^ SUB41(fVar36,0))));
          goto LAB_00204708;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204e50;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        iVar6 = (int)fVar36;
        uVar25 = CONCAT13(bVar39 ^ (byte)((uint)iVar6 >> 0x18),
                          CONCAT12(bVar38 ^ (byte)((uint)iVar6 >> 0x10),
                                   CONCAT11(bVar37 ^ (byte)((uint)iVar6 >> 8),bVar35 ^ (byte)iVar6))
                         );
        goto LAB_00204708;
      }
    }
    else {
      pplVar32 = (long **)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) == 2.662467e-44) goto LAB_002043e0;
LAB_00204e38:
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_002043e4;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204e50;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_002043e4;
      }
    }
LAB_00204e50:
    luaT_trybinTM(param_1,pplVar14,pplVar32,pplVar28,0xf);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x17:
    if ((int)uVar25 < 0) {
      pplVar14 = (long **)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    }
    pplVar18 = pplVar14;
    if ((uVar25 >> 0x16 & 1) == 0) {
      pplVar32 = (long **)(plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) != 2.662467e-44) goto LAB_00204af4;
LAB_00204748:
      fVar36 = *(float *)pplVar14;
LAB_0020474c:
      pplVar18 = pplVar32;
      fVar34 = *(float *)(pplVar32 + 1);
      if (*(float *)(pplVar32 + 1) == 2.662467e-44) {
        fVar34 = *(float *)pplVar32;
joined_r0x0020475c:
        if ((int)fVar34 < 0) {
          uVar25 = (uint)fVar36 >> (ulong)(-(int)fVar34 & 0x1f);
          if (fVar34 == -NAN || (int)((int)fVar34 + 0x20U) < 0 != SCARRY4((int)fVar34,0x20)) {
            uVar25 = 0;
          }
        }
        else {
          uVar25 = (int)fVar36 << (ulong)((uint)fVar34 & 0x1f);
          if (0x1f < (int)fVar34) {
            uVar25 = 0;
          }
        }
        goto LAB_00204708;
      }
      while (fVar34 != 4.203895e-45) {
        if (fVar34 == 2.662467e-44) {
          fVar34 = *(float *)pplVar18;
          goto joined_r0x0020475c;
        }
        if ((((uint)fVar34 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar34 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204b10;
      }
      fVar34 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar34) && ((-2.147484e+09 <= fVar34 && (fVar34 < 2.147484e+09))))
      {
        fVar34 = (float)(int)fVar34;
        goto joined_r0x0020475c;
      }
    }
    else {
      pplVar32 = (long **)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) == 2.662467e-44) goto LAB_00204748;
LAB_00204af4:
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_0020474c;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00204b10;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_0020474c;
      }
    }
LAB_00204b10:
    luaT_trybinTM(param_1,pplVar14,pplVar32,pplVar28,0x10);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x18:
    if ((int)uVar25 < 0) {
      pplVar14 = (long **)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    }
    pplVar18 = pplVar14;
    if ((uVar25 >> 0x16 & 1) == 0) {
      pplVar32 = (long **)(plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) != 2.662467e-44) goto LAB_00204ff8;
LAB_002046d8:
      fVar36 = *(float *)pplVar14;
LAB_002046dc:
      pplVar18 = pplVar32;
      fVar34 = *(float *)(pplVar32 + 1);
      if (*(float *)(pplVar32 + 1) != 2.662467e-44) {
        while (fVar34 != 4.203895e-45) {
          if (fVar34 == 2.662467e-44) {
            fVar34 = *(float *)pplVar18;
            goto joined_r0x00205560;
          }
          if ((((uint)fVar34 & 0xf) != 4) ||
             (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
             pplVar18 = (long **)&local_18, fVar34 = local_10, lVar26 != plVar12[2] + 1))
          goto LAB_00205010;
        }
        fVar34 = (float)(int)*(float *)pplVar18;
        if ((*(float *)pplVar18 == fVar34) && ((-2.147484e+09 <= fVar34 && (fVar34 < 2.147484e+09)))
           ) {
          fVar34 = (float)(int)fVar34;
          goto joined_r0x00205560;
        }
        goto LAB_00205010;
      }
      fVar34 = *(float *)pplVar32;
joined_r0x00205560:
      if ((int)fVar34 < 1) {
        uVar25 = (int)fVar36 << (ulong)(-(int)fVar34 & 0x1f);
        if (fVar34 == -NAN || (int)((int)fVar34 + 0x20U) < 0 != SCARRY4((int)fVar34,0x20)) {
          uVar25 = 0;
        }
      }
      else {
        uVar25 = (uint)fVar36 >> (ulong)((uint)fVar34 & 0x1f);
        if (0x1f < (int)fVar34) {
          uVar25 = 0;
        }
      }
LAB_00204708:
      *(uint *)pplVar28 = uVar25;
      *(uint *)(pplVar28 + 1) = 0x13;
      plVar12 = pplVar23[5];
    }
    else {
      pplVar32 = (long **)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
      fVar36 = *(float *)(pplVar14 + 1);
      if (*(float *)(pplVar14 + 1) == 2.662467e-44) goto LAB_002046d8;
LAB_00204ff8:
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_002046dc;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00205010;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_002046dc;
      }
LAB_00205010:
      luaT_trybinTM(param_1,pplVar14,pplVar32,pplVar28,0x11);
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    goto LAB_00203b38;
  case 0x19:
    pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    fVar36 = *(float *)(pplVar14 + 1);
    if (fVar36 == 2.662467e-44) {
      iVar6 = *(int *)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
      *(uint *)(pplVar28 + 1) = 0x13;
      *(int *)pplVar28 = -iVar6;
      plVar12 = pplVar23[5];
    }
    else {
      if (fVar36 == 4.203895e-45) {
        fVar36 = *(float *)pplVar14;
      }
      else {
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar14 + 4,&local_18), lVar26 != (*pplVar14)[2] + 1)) {
          uVar22 = 0x12;
          goto LAB_002044c0;
        }
        fVar36 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar36 = (float)(int)local_18;
        }
      }
      *(uint *)(pplVar28 + 1) = 3;
      plVar12 = pplVar23[5];
      *(float *)pplVar28 = -fVar36;
    }
    goto LAB_00203b38;
  case 0x1a:
    pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    pplVar18 = pplVar14;
    fVar36 = *(float *)(pplVar14 + 1);
    if (*(float *)(pplVar14 + 1) == 2.662467e-44) {
      fVar36 = *(float *)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
LAB_00204470:
      *(uint *)(pplVar28 + 1) = 0x13;
      *(uint *)pplVar28 = ~(uint)fVar36;
      plVar12 = pplVar23[5];
    }
    else {
      while (fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar18;
          goto LAB_00204470;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar18 + 4,&local_18), plVar12 = *pplVar18,
           pplVar18 = (long **)&local_18, fVar36 = local_10, lVar26 != plVar12[2] + 1))
        goto LAB_00205234;
      }
      fVar36 = (float)(int)*(float *)pplVar18;
      if ((*(float *)pplVar18 == fVar36) && ((-2.147484e+09 <= fVar36 && (fVar36 < 2.147484e+09))))
      {
        fVar36 = (float)(int)fVar36;
        goto LAB_00204470;
      }
LAB_00205234:
      uVar22 = 0x13;
LAB_002044c0:
      luaT_trybinTM(param_1,pplVar14,pplVar14,pplVar28,uVar22);
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    goto LAB_00203b38;
  case 0x1b:
    uVar20 = 1;
    iVar6 = *(int *)(plVar27 + (ulong)(uVar25 >> 0x17) * 2 + 1);
    if ((iVar6 != 0) && (uVar20 = 0, iVar6 == 1)) {
      uVar20 = (uint)(*(int *)(plVar27 + (ulong)(uVar25 >> 0x17) * 2) == 0);
    }
    *(uint *)pplVar28 = uVar20;
    *(uint *)(pplVar28 + 1) = 1;
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x1c:
    luaV_objlen(param_1,pplVar28,plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x1d:
    *(long **)(param_1 + 0x10) = plVar27 + (((ulong)(uVar25 >> 0xe) & 0x1ff) + 1) * 2;
    luaV_concat(param_1,((uVar25 >> 0xe & 0x1ff) - (uVar25 >> 0x17)) + 1);
    plVar27 = pplVar23[4];
    lVar26 = *(long *)(param_1 + 0x18);
    plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    plVar21 = plVar27 + uVar29 * 2;
    lVar31 = plVar12[1];
    *plVar21 = *plVar12;
    plVar21[1] = lVar31;
    if (0 < *(long *)(lVar26 + 0x18)) {
      plVar27 = plVar21 + 2;
      if (plVar21 < plVar12) {
        plVar27 = plVar12;
      }
      *(long **)(param_1 + 0x10) = plVar27;
      luaC_step(param_1);
      plVar27 = pplVar23[4];
    }
    goto LAB_0020469c;
  case 0x1e:
    if (iVar6 != 0) {
      luaF_close(param_1,pplVar23[4] + (long)iVar6 * 2 + -2);
    }
    plVar12 = (long *)((long)pplVar23[5] + (long)(int)((uVar25 >> 0xe) - 0x1ffff) * 4);
    goto LAB_00203b38;
  case 0x1f:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
    iVar7 = luaV_equalobj(param_1,plVar12,plVar27);
    if (iVar7 != iVar6) goto LAB_00204084;
    plVar27 = pplVar23[4];
    plVar12 = pplVar23[5];
    uVar25 = *(uint *)plVar12;
    goto joined_r0x002040cc;
  case 0x20:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
    iVar7 = luaV_lessthan(param_1,plVar12,plVar27);
    goto joined_r0x00204080;
  case 0x21:
    if ((int)uVar25 < 0) {
      plVar12 = (long *)(lVar24 + ((ulong)(uVar25 >> 0x17) & 0xff) * 0x10);
    }
    else {
      plVar12 = plVar27 + (ulong)(uVar25 >> 0x17) * 2;
    }
    if ((uVar25 >> 0x16 & 1) == 0) {
      plVar27 = plVar27 + ((ulong)(uVar25 >> 0xe) & 0x1ff) * 2;
    }
    else {
      plVar27 = (long *)(lVar24 + ((ulong)(uVar25 >> 0xe) & 0xff) * 0x10);
    }
    iVar7 = luaV_lessequal(param_1,plVar12,plVar27);
joined_r0x00204080:
    if (iVar7 == iVar6) {
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
      uVar25 = *(uint *)plVar12;
joined_r0x002040cc:
      uVar20 = uVar25 >> 6 & 0xff;
      if (uVar20 != 0) {
        luaF_close(param_1,plVar27 + (long)(int)uVar20 * 2 + -2);
        plVar27 = pplVar23[4];
        plVar12 = pplVar23[5];
      }
LAB_00204040:
      plVar12 = (long *)((long)plVar12 + (long)(int)((uVar25 >> 0xe) - 0x1ffff) * 4 + 4);
    }
    else {
LAB_00204084:
      plVar27 = pplVar23[4];
      plVar12 = (long *)((long)pplVar23[5] + 4);
    }
    goto LAB_00203b38;
  case 0x22:
    uVar20 = *(uint *)(pplVar28 + 1);
    if ((uVar25 & 0x7fc000) == 0) {
      if (uVar20 != 0) {
        if (uVar20 != 1) goto LAB_00204a60;
        if (*(uint *)pplVar28 != 0) {
          plVar12 = pplVar23[5];
          goto LAB_00204a64;
        }
      }
LAB_00204030:
      plVar12 = pplVar23[5];
      uVar25 = *(uint *)plVar12;
      goto joined_r0x002041b0;
    }
    if (uVar20 == 0) {
LAB_00204a60:
      plVar12 = pplVar23[5];
    }
    else {
      if ((uVar20 != 1) || (*(uint *)pplVar28 != 0)) goto LAB_00204030;
      plVar12 = pplVar23[5];
    }
LAB_00204a64:
    plVar12 = (long *)((long)plVar12 + 4);
    goto LAB_00203b38;
  case 0x23:
    pplVar14 = (long **)(plVar27 + (ulong)(uVar25 >> 0x17) * 2);
    iVar6 = *(int *)(pplVar14 + 1);
    if ((uVar25 & 0x7fc000) == 0) {
      if (iVar6 != 0) {
        if (iVar6 != 1) goto LAB_00204a60;
        if (*(int *)pplVar14 != 0) {
          plVar12 = pplVar23[5];
          goto LAB_00204a64;
        }
      }
    }
    else {
      if (iVar6 == 0) goto LAB_00204a60;
      if ((iVar6 == 1) && (*(int *)pplVar14 == 0)) {
        plVar12 = pplVar23[5];
        goto LAB_00204a64;
      }
    }
    plVar12 = pplVar23[5];
    plVar21 = pplVar14[1];
    *pplVar28 = *pplVar14;
    pplVar28[1] = plVar21;
    uVar25 = *(uint *)plVar12;
joined_r0x002041b0:
    uVar20 = uVar25 >> 6 & 0xff;
    if (uVar20 != 0) {
      luaF_close(param_1,pplVar23[4] + (long)(int)uVar20 * 2 + -2);
      plVar12 = pplVar23[5];
    }
    goto LAB_00204040;
  case 0x24:
    iVar6 = (uVar25 >> 0xe & 0x1ff) - 1;
    if (uVar25 >> 0x17 != 0) {
      *(long ***)(param_1 + 0x10) = pplVar28 + (ulong)(uVar25 >> 0x17) * 2;
    }
    iVar7 = luaD_precall(param_1,pplVar28,iVar6);
    if (iVar7 != 0) {
      if (iVar6 == -1) goto LAB_00203cc0;
      goto LAB_0020416c;
    }
    pplVar23 = *(long ***)(param_1 + 0x20);
    plVar12 = pplVar23[5];
    *(byte *)((long)pplVar23 + 0x42) = *(byte *)((long)pplVar23 + 0x42) | 8;
    goto LAB_00203b18;
  case 0x25:
    if (uVar25 >> 0x17 != 0) {
      *(long ***)(param_1 + 0x10) = pplVar28 + (ulong)(uVar25 >> 0x17) * 2;
    }
    iVar6 = luaD_precall(param_1,pplVar28,0xffffffff);
    if (iVar6 != 0) goto LAB_00203cc0;
    pplVar28 = *(long ***)(param_1 + 0x20);
    plVar30 = *pplVar28;
    pplVar23 = (long **)pplVar28[2];
    plVar17 = pplVar28[4];
    plVar27 = *pplVar23;
    plVar12 = plVar17 + (ulong)*(byte *)(*(long *)(*plVar30 + 0x18) + 10) * 2;
    plVar21 = plVar30;
    plVar5 = plVar27;
    if (0 < *(int *)(*(long *)(lVar15 + 0x18) + 0x20)) {
      luaF_close(param_1,pplVar23[4]);
      plVar17 = pplVar28[4];
    }
    for (; plVar21 < plVar12; plVar21 = plVar21 + 2) {
      lVar15 = plVar21[1];
      *plVar5 = *plVar21;
      plVar5[1] = lVar15;
      plVar5 = plVar5 + 2;
    }
    lVar15 = *(long *)(param_1 + 0x10);
    pplVar23[4] = (long *)((long)plVar27 + ((long)plVar17 - (long)plVar30));
    plVar27 = (long *)((long)plVar27 + (lVar15 - (long)plVar30));
    plVar12 = pplVar28[5];
    *(long **)(param_1 + 0x10) = plVar27;
    pplVar23[1] = plVar27;
    pplVar23[5] = plVar12;
    *(byte *)((long)pplVar23 + 0x42) = *(byte *)((long)pplVar23 + 0x42) | 0x20;
    *(long ***)(param_1 + 0x20) = pplVar23;
    goto LAB_00203b18;
  case 0x26:
    goto switchD_00203b9c_caseD_26;
  case 0x27:
    fVar36 = *(float *)(pplVar28 + 4);
    fVar34 = *(float *)(pplVar28 + 2);
    if (*(uint *)(pplVar28 + 1) == 0x13) {
      uVar20 = (int)fVar36 + (int)*(float *)pplVar28;
      if ((int)fVar36 < 1) {
        bVar1 = (int)fVar34 <= (int)uVar20;
      }
      else {
        bVar1 = (int)uVar20 <= (int)fVar34;
      }
      plVar12 = pplVar23[5];
      if (bVar1) {
        plVar12 = (long *)((long)plVar12 + (ulong)(uVar25 >> 0xe) * 4 + -0x7fffc);
        *(uint *)pplVar28 = uVar20;
        *(uint *)(pplVar28 + 1) = 0x13;
        *(uint *)(pplVar28 + 6) = uVar20;
        *(uint *)(pplVar28 + 7) = 0x13;
      }
    }
    else {
      fVar33 = *(float *)pplVar28 + fVar36;
      if (fVar36 <= 0.0) {
        bVar1 = fVar34 <= fVar33;
      }
      else {
        bVar1 = fVar33 <= fVar34;
      }
      plVar12 = pplVar23[5];
      if (bVar1) {
        plVar12 = (long *)((long)plVar12 + (ulong)(uVar25 >> 0xe) * 4 + -0x7fffc);
        *(float *)pplVar28 = fVar33;
        *(uint *)(pplVar28 + 1) = 3;
        *(float *)(pplVar28 + 6) = fVar33;
        *(uint *)(pplVar28 + 7) = 3;
      }
    }
    goto LAB_00203b38;
  case 0x28:
    if ((*(uint *)(pplVar28 + 1) == 0x13) && (*(uint *)(pplVar28 + 5) == 0x13)) {
      uVar20 = *(uint *)(pplVar28 + 4);
      pplVar14 = pplVar28 + 2;
      while (fVar36 = *(float *)(pplVar14 + 1), fVar36 != 4.203895e-45) {
        if (fVar36 == 2.662467e-44) {
          fVar36 = *(float *)pplVar14;
          goto LAB_00205764;
        }
        if ((((uint)fVar36 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar14 + 4,&local_18), plVar12 = *pplVar14,
           pplVar14 = (long **)&local_18, lVar26 != plVar12[2] + 1)) goto LAB_00205e28;
      }
      fVar36 = (float)(int)*(float *)pplVar14;
      if ((int)uVar20 < 0 && *(float *)pplVar14 != fVar36) {
        fVar36 = fVar36 + 1.0;
      }
      if ((-2.147484e+09 <= fVar36) && (fVar36 < 2.147484e+09)) {
        fVar36 = (float)(int)fVar36;
        goto LAB_00205764;
      }
LAB_00205e28:
      uVar9 = *(uint *)(pplVar28 + 3);
      if (uVar9 == 3) {
        fVar36 = *(float *)(pplVar28 + 2);
LAB_00205e38:
        if (0.0 < fVar36) goto LAB_00205e40;
LAB_00205f84:
        fVar36 = -0.0;
        uVar9 = 0;
        if ((int)uVar20 < 0) goto LAB_00205764;
      }
      else {
        if (uVar9 == 0x13) {
          fVar36 = (float)*(uint *)(pplVar28 + 2);
          goto LAB_00205e38;
        }
        if ((uVar9 & 0xf) != 4) goto LAB_002052a8;
        lVar26 = luaO_str2num(pplVar28[2] + 4,&local_18);
        if (lVar26 != pplVar28[2][2] + 1) goto LAB_00203e08;
        fVar36 = local_18;
        if (local_10 != 2.662467e-44) goto LAB_00205e38;
        if ((float)(int)local_18 <= 0.0) goto LAB_00205f84;
LAB_00205e40:
        fVar36 = NAN;
        uVar9 = 0;
        if (-1 < (int)uVar20) {
LAB_00205764:
          uVar9 = *(uint *)pplVar28;
        }
      }
      *(uint *)pplVar28 = uVar9 - *(uint *)(pplVar28 + 4);
      *(uint *)(pplVar28 + 1) = 0x13;
      *(float *)(pplVar28 + 2) = fVar36;
      *(uint *)(pplVar28 + 3) = 0x13;
    }
    else {
LAB_00203e08:
      uVar20 = *(uint *)(pplVar28 + 3);
      if (uVar20 == 3) {
        fVar36 = *(float *)(pplVar28 + 2);
      }
      else if (uVar20 == 0x13) {
        fVar36 = (float)*(uint *)(pplVar28 + 2);
      }
      else {
        if (((uVar20 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(pplVar28[2] + 4,&local_18), lVar26 != pplVar28[2][2] + 1)) {
LAB_002052a8:
                    /* WARNING: Subroutine does not return */
          luaG_runerror(param_1,"\'for\' limit must be a number");
        }
        fVar36 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar36 = (float)(int)local_18;
        }
      }
      *(uint *)(pplVar28 + 3) = 3;
      uVar20 = *(uint *)(pplVar28 + 5);
      *(float *)(pplVar28 + 2) = fVar36;
      if (uVar20 == 3) {
        fVar36 = *(float *)(pplVar28 + 4);
      }
      else if (uVar20 == 0x13) {
        fVar36 = (float)*(uint *)(pplVar28 + 4);
      }
      else {
        if (((uVar20 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(pplVar28[4] + 4,&local_18), lVar26 != pplVar28[4][2] + 1)) {
                    /* WARNING: Subroutine does not return */
          luaG_runerror(param_1,"\'for\' step must be a number");
        }
        fVar36 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar36 = (float)(int)local_18;
        }
      }
      *(uint *)(pplVar28 + 5) = 3;
      uVar20 = *(uint *)(pplVar28 + 1);
      *(float *)(pplVar28 + 4) = fVar36;
      if (uVar20 == 3) {
        fVar34 = *(float *)pplVar28;
      }
      else if (uVar20 == 0x13) {
        fVar34 = (float)*(uint *)pplVar28;
      }
      else {
        if (((uVar20 & 0xf) != 4) ||
           (lVar26 = luaO_str2num(*pplVar28 + 4,&local_18), lVar26 != (*pplVar28)[2] + 1)) {
                    /* WARNING: Subroutine does not return */
          luaG_runerror(param_1,"\'for\' initial value must be a number");
        }
        fVar34 = local_18;
        if (local_10 == 2.662467e-44) {
          fVar34 = (float)(int)local_18;
        }
      }
      *(uint *)(pplVar28 + 1) = 3;
      *(float *)pplVar28 = fVar34 - fVar36;
    }
    plVar12 = (long *)((long)pplVar23[5] + (ulong)(uVar25 >> 0xe) * 4 + -0x7fffc);
    goto LAB_00203b38;
  case 0x29:
    pplVar28[8] = pplVar28[2];
    pplVar28[9] = pplVar28[3];
    pplVar28[10] = pplVar28[4];
    pplVar28[0xb] = pplVar28[5];
    pplVar28[6] = *pplVar28;
    pplVar28[7] = pplVar28[1];
    *(long ***)(param_1 + 0x10) = pplVar28 + 0xc;
    luaD_call(param_1,pplVar28 + 6,uVar25 >> 0xe & 0x1ff,1);
    plVar27 = pplVar23[4];
    uVar25 = *(uint *)pplVar23[5];
    plVar12 = (long *)((long)pplVar23[5] + 4);
    *(long **)(param_1 + 0x10) = pplVar23[1];
    pplVar28 = (long **)(plVar27 + ((ulong)(uVar25 >> 6) & 0xff) * 2);
    pplVar23[5] = plVar12;
    goto LAB_00203d7c;
  case 0x2a:
    plVar12 = pplVar23[5];
LAB_00203d7c:
    if (*(uint *)(pplVar28 + 3) != 0) {
      plVar12 = (long *)((long)plVar12 + (ulong)(uVar25 >> 0xe) * 4 + -0x7fffc);
      *pplVar28 = pplVar28[2];
      pplVar28[1] = pplVar28[3];
    }
    goto LAB_00203b38;
  case 0x2b:
    uVar9 = uVar25 >> 0x17;
    uVar20 = uVar25 >> 0xe & 0x1ff;
    if (uVar25 >> 0x17 == 0) {
      uVar9 = (int)(*(long *)(param_1 + 0x10) - (long)pplVar28 >> 4) - 1;
    }
    if (uVar20 == 0) {
      uVar20 = *(uint *)pplVar23[5];
      pplVar23[5] = (long *)((long)pplVar23[5] + 4);
      uVar20 = uVar20 >> 6;
    }
    plVar12 = *pplVar28;
    uVar20 = (uVar20 - 1) * 0x32;
    uVar25 = uVar20 + uVar9;
    if (*(uint *)((long)plVar12 + 0xc) < uVar25) {
      luaH_resizearray(param_1,plVar12,uVar25);
    }
    pplVar28 = pplVar28 + (long)(int)uVar9 * 2;
    if (0 < (int)uVar9) {
      do {
        luaH_setint(param_1,plVar12,uVar25,pplVar28);
        if ((((*(uint *)(pplVar28 + 1) >> 6 & 1) != 0) &&
            ((*(byte *)((long)plVar12 + 9) >> 2 & 1) != 0)) &&
           ((*(byte *)((long)*pplVar28 + 9) & 3) != 0)) {
          luaC_barrierback_(param_1,plVar12);
        }
        uVar25 = uVar25 - 1;
        pplVar28 = pplVar28 + -2;
      } while (uVar20 != uVar25);
    }
LAB_0020469c:
    *(long **)(param_1 + 0x10) = pplVar23[1];
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  case 0x2c:
    lVar26 = *(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x40) + (ulong)(uVar25 >> 0xe) * 8);
    lVar31 = *(long *)(lVar26 + 0x58);
    plVar12 = *(long **)(lVar26 + 0x60);
    iVar6 = *(int *)(lVar26 + 0x10);
    if (plVar12 != (long *)0x0) {
      if (0 < iVar6) {
        pcVar16 = (char *)(lVar31 + 8);
        pplVar14 = (long **)(plVar12 + 4);
        do {
          if (*pcVar16 == '\0') {
            if (**pplVar14 != **(long **)(lVar15 + 0x20 + (ulong)(byte)pcVar16[1] * 8)) {
LAB_00203c34:
              local_28 = (long *)luaF_newLclosure(param_1,iVar6);
              local_28[3] = lVar26;
              *(uint *)(pplVar28 + 1) = 0x46;
              *pplVar28 = local_28;
              goto LAB_00203c64;
            }
          }
          else if ((long *)**pplVar14 != plVar27 + (ulong)(byte)pcVar16[1] * 2) goto LAB_00203c34;
          pcVar16 = pcVar16 + 0x10;
          pplVar14 = pplVar14 + 1;
        } while ((char *)(lVar31 + 0x18 + (ulong)(iVar6 - 1) * 0x10) != pcVar16);
      }
      *pplVar28 = plVar12;
      *(uint *)(pplVar28 + 1) = 0x46;
      goto LAB_00204914;
    }
    local_28 = (long *)luaF_newLclosure(param_1,iVar6);
    local_28[3] = lVar26;
    *pplVar28 = local_28;
    *(uint *)(pplVar28 + 1) = 0x46;
    if (0 < iVar6) {
LAB_00203c64:
      pcVar16 = (char *)(lVar31 + 8);
      lVar31 = 0;
      do {
        while (pbVar2 = (byte *)(pcVar16 + 1), *pcVar16 == '\0') {
          lVar13 = *(long *)(lVar15 + 0x20 + (ulong)*pbVar2 * 8);
          local_28[lVar31 + 4] = lVar13;
          lVar31 = lVar31 + 1;
          pcVar16 = pcVar16 + 0x10;
          *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
          if (iVar6 <= (int)lVar31) goto LAB_00203ca0;
        }
        pcVar16 = pcVar16 + 0x10;
        lVar13 = luaF_findupval(param_1,plVar27 + (ulong)*pbVar2 * 2);
        lVar19 = *(long *)(lVar13 + 8);
        local_28[lVar31 + 4] = lVar13;
        *(long *)(lVar13 + 8) = lVar19 + 1;
        lVar31 = lVar31 + 1;
      } while ((int)lVar31 < iVar6);
    }
LAB_00203ca0:
    if ((*(byte *)(lVar26 + 9) >> 2 & 1) != 0) goto LAB_00204914;
    *(long **)(lVar26 + 0x60) = local_28;
    lVar26 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
joined_r0x00203cbc:
    if (lVar26 < 1) {
LAB_00203cc0:
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    else {
      *(long ***)(param_1 + 0x10) = pplVar28 + 2;
      luaC_step(param_1);
LAB_0020416c:
      *(long **)(param_1 + 0x10) = pplVar23[1];
      plVar27 = pplVar23[4];
      plVar12 = pplVar23[5];
    }
    goto LAB_00203b38;
  case 0x2d:
    iVar6 = ((int)((long)plVar27 - (long)*pplVar23 >> 4) -
            (uint)*(byte *)(*(long *)(lVar15 + 0x18) + 10)) + -1;
    iVar7 = (uVar25 >> 0x17) - 1;
    if (uVar25 >> 0x17 == 0) {
      if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x10) >> 4 <= (long)iVar6) {
        luaD_growstack(param_1,iVar6);
      }
      plVar27 = pplVar23[4];
      pplVar28 = (long **)(plVar27 + uVar29 * 2);
      *(long ***)(param_1 + 0x10) = pplVar28 + (long)iVar6 * 2;
      iVar7 = iVar6;
    }
    if (iVar7 < 1) goto LAB_00203b88;
    iVar8 = 0;
    if (0 < iVar6) {
      iVar3 = iVar7;
      if (iVar6 < iVar7) {
        iVar3 = iVar6;
      }
      pplVar14 = (long **)(plVar27 + (long)iVar6 * -2);
      pplVar18 = pplVar28;
      do {
        plVar12 = pplVar14[1];
        *pplVar18 = *pplVar14;
        pplVar18[1] = plVar12;
        iVar8 = iVar8 + 1;
        pplVar14 = pplVar14 + 2;
        pplVar18 = pplVar18 + 2;
      } while (iVar8 < iVar3);
      if (iVar7 <= iVar8) goto LAB_00203b88;
    }
    pplVar28 = pplVar28 + (long)iVar8 * 2 + 1;
    do {
      *(uint *)pplVar28 = 0;
      iVar8 = iVar8 + 1;
      pplVar28 = pplVar28 + 2;
    } while (iVar8 < iVar7);
    plVar12 = pplVar23[5];
    goto LAB_00203b38;
  }
  luaV_gettable(param_1,pplVar14,plVar27,pplVar28);
  plVar27 = pplVar23[4];
  plVar12 = pplVar23[5];
  goto LAB_00203b38;
switchD_00203b9c_caseD_26:
  if (uVar25 >> 0x17 != 0) {
    *(long ***)(param_1 + 0x10) = pplVar28 + (ulong)(uVar25 >> 0x17) * 2 + -2;
  }
  if (0 < *(int *)(*(long *)(lVar15 + 0x18) + 0x20)) {
    luaF_close(param_1,plVar27);
  }
  iVar6 = luaD_poscall(param_1,pplVar28);
  if ((*(byte *)((long)pplVar23 + 0x42) >> 3 & 1) == 0) {
    if (local_8 - ___stack_chk_guard == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  pplVar23 = *(long ***)(param_1 + 0x20);
  if (iVar6 == 0) {
    plVar12 = pplVar23[5];
  }
  else {
    *(long **)(param_1 + 0x10) = pplVar23[1];
    plVar12 = pplVar23[5];
  }
  goto LAB_00203b18;
}


