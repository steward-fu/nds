/*
 * Ghidra decompilation
 *
 * Function : luaO_pushvfstring
 * Address  : 001fb2d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaO_pushvfstring(long param_1,char *param_2,uint **param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  long lVar5;
  byte **ppbVar6;
  byte *pbVar7;
  uint *puVar8;
  float *pfVar9;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte **ppbVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  int local_5c;
  char *local_48;
  byte local_31;
  byte abStack_30 [4];
  byte abStack_2c [36];
  long local_8;
  
  iVar14 = 0;
  ppbVar13 = (byte **)*param_3;
  puVar3 = param_3[1];
  local_5c = *(int *)((long)param_3 + 0x1c);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_3 + 3);
  local_48 = "(null)";
  do {
    pcVar4 = strchr(param_2,0x25);
    plVar16 = *(long **)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x30) - (long)plVar16;
    if (pcVar4 == (char *)0x0) {
      if (lVar5 < 0x11) {
        luaD_growstack(param_1,1);
        plVar16 = *(long **)(param_1 + 0x10);
      }
      sVar10 = strlen(param_2);
      *(long **)(param_1 + 0x10) = plVar16 + 2;
      lVar5 = luaS_newlstr(param_1,param_2,sVar10);
      *plVar16 = lVar5;
      *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
      if (iVar14 != 0) {
        luaV_concat(param_1,iVar14 + 1);
      }
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x20,
                       local_8 - ___stack_chk_guard,0);
    }
    if (lVar5 < 0x21) {
      luaD_growstack(param_1,2);
      plVar16 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x10) = plVar16 + 2;
    lVar5 = luaS_newlstr(param_1,param_2,(long)pcVar4 - (long)param_2);
    *plVar16 = lVar5;
    *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
    bVar1 = pcVar4[1];
    if (bVar1 == 100) {
LAB_001fb3fc:
      puVar8 = *(uint **)(param_1 + 0x10);
      *(uint **)(param_1 + 0x10) = puVar8 + 4;
      ppbVar6 = ppbVar13;
      if (iVar2 < 0) {
        iVar15 = iVar2 + 8;
        if (iVar15 < 1) {
          ppbVar6 = (byte **)((long)puVar3 + (long)iVar2);
        }
        else {
          ppbVar13 = (byte **)((long)ppbVar13 + 0xbU & 0xfffffffffffffff8);
        }
      }
      else {
        ppbVar13 = (byte **)((long)ppbVar13 + 0xbU & 0xfffffffffffffff8);
        iVar15 = iVar2;
      }
      *puVar8 = *(uint *)ppbVar6;
      puVar8[2] = 0x13;
      luaO_tostring(param_1);
      iVar2 = iVar15;
    }
    else {
      if (bVar1 < 0x65) {
        if (bVar1 == 0x55) {
          ppbVar6 = ppbVar13;
          if (iVar2 < 0) {
            iVar15 = iVar2 + 8;
            if (iVar15 < 1) {
              ppbVar6 = (byte **)((long)puVar3 + (long)iVar2);
            }
            else {
              ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
            }
          }
          else {
            ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
            iVar15 = iVar2;
          }
          pbVar7 = *ppbVar6;
          if (pbVar7 < (byte *)0x80) {
            lVar5 = 7;
            sVar10 = 1;
            abStack_2c[3] = (byte)pbVar7;
          }
          else {
            pbVar11 = (byte *)0x3f;
            iVar2 = 1;
            pbVar12 = abStack_30;
            do {
              pbVar11 = (byte *)((ulong)pbVar11 >> 1);
              pbVar12[7] = (byte)pbVar7 & 0x3f | 0x80;
              pbVar7 = (byte *)((ulong)pbVar7 >> 6);
              iVar2 = iVar2 + 1;
              pbVar12 = pbVar12 + -1;
            } while (pbVar11 < pbVar7);
            sVar10 = (size_t)iVar2;
            lVar5 = 8 - sVar10;
            abStack_30[8 - iVar2] = (byte)pbVar7 | (byte)(~(uint)pbVar11 << 1);
          }
          plVar16 = *(long **)(param_1 + 0x10);
          pbVar7 = abStack_30 + lVar5;
          iVar2 = iVar15;
          goto LAB_001fb470;
        }
        if (0x55 < bVar1) {
          if (bVar1 != 99) {
LAB_001fb7d8:
                    /* WARNING: Subroutine does not return */
            luaG_runerror(param_1,"invalid option \'%%%c\' to \'lua_pushfstring\'");
          }
          ppbVar6 = ppbVar13;
          if (iVar2 < 0) {
            iVar15 = iVar2 + 8;
            if (iVar15 < 1) {
              ppbVar6 = (byte **)((long)puVar3 + (long)iVar2);
            }
            else {
              ppbVar13 = (byte **)((long)ppbVar13 + 0xbU & 0xfffffffffffffff8);
            }
          }
          else {
            ppbVar13 = (byte **)((long)ppbVar13 + 0xbU & 0xfffffffffffffff8);
            iVar15 = iVar2;
          }
          local_31 = (byte)*(uint *)ppbVar6;
          iVar2 = iVar15;
          if (((byte)(&luai_ctype_)[(int)((*(uint *)ppbVar6 & 0xff) + 1)] >> 2 & 1) == 0) {
            luaO_pushfstring(param_1,"<\\%d>");
            goto LAB_001fb374;
          }
          sVar10 = 1;
          plVar16 = *(long **)(param_1 + 0x10);
          pbVar7 = &local_31;
          goto LAB_001fb470;
        }
        if (bVar1 != 0x25) {
          if (bVar1 != 0x49) goto LAB_001fb7d8;
          goto LAB_001fb3fc;
        }
        plVar16 = *(long **)(param_1 + 0x10);
        pbVar7 = &DAT_00229aa0;
        sVar10 = 1;
        *(long **)(param_1 + 0x10) = plVar16 + 2;
      }
      else {
        if (bVar1 == 0x70) {
          ppbVar6 = ppbVar13;
          if (iVar2 < 0) {
            iVar15 = iVar2 + 8;
            if (iVar15 < 1) {
              ppbVar6 = (byte **)((long)puVar3 + (long)iVar2);
            }
            else {
              ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
            }
          }
          else {
            ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
            iVar15 = iVar2;
          }
          iVar2 = __sprintf_chk(abStack_30,1,0x28,&DAT_00227b48,*ppbVar6);
          sVar10 = (size_t)iVar2;
          plVar16 = *(long **)(param_1 + 0x10);
          pbVar7 = abStack_30;
          iVar2 = iVar15;
          goto LAB_001fb470;
        }
        if (bVar1 != 0x73) {
          if (bVar1 != 0x66) goto LAB_001fb7d8;
          pfVar9 = *(float **)(param_1 + 0x10);
          *(float **)(param_1 + 0x10) = pfVar9 + 4;
          ppbVar6 = ppbVar13;
          if (local_5c < 0) {
            iVar15 = local_5c + 0x10;
            if (iVar15 < 1) {
              ppbVar6 = (byte **)((long)param_3[2] + (long)local_5c);
              local_5c = iVar15;
            }
            else {
              ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
              local_5c = iVar15;
            }
          }
          else {
            ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
          }
          pbVar7 = *ppbVar6;
          pfVar9[2] = 4.203895e-45;
          *pfVar9 = (float)(double)pbVar7;
          luaO_tostring(param_1);
          goto LAB_001fb374;
        }
        if (iVar2 < 0) {
          iVar15 = iVar2 + 8;
          if (iVar15 < 1) {
            ppbVar6 = (byte **)((long)puVar3 + (long)iVar2);
            goto LAB_001fb454;
          }
          pbVar7 = *ppbVar13;
          ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
          if (pbVar7 == (byte *)0x0) goto LAB_001fb724;
LAB_001fb45c:
          sVar10 = strlen((char *)pbVar7);
        }
        else {
          ppbVar6 = ppbVar13;
          ppbVar13 = (byte **)((long)ppbVar13 + 0xfU & 0xfffffffffffffff8);
          iVar15 = iVar2;
LAB_001fb454:
          pbVar7 = *ppbVar6;
          if (pbVar7 != (byte *)0x0) goto LAB_001fb45c;
LAB_001fb724:
          sVar10 = 6;
          pbVar7 = (byte *)local_48;
        }
        plVar16 = *(long **)(param_1 + 0x10);
        iVar2 = iVar15;
LAB_001fb470:
        *(long **)(param_1 + 0x10) = plVar16 + 2;
      }
      lVar5 = luaS_newlstr(param_1,pbVar7,sVar10);
      *plVar16 = lVar5;
      *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
    }
LAB_001fb374:
    iVar14 = iVar14 + 2;
    param_2 = pcVar4 + 2;
  } while( true );
}


