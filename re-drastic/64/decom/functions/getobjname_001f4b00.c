/*
 * Ghidra decompilation
 *
 * Function : getobjname
 * Address  : 001f4b00
 * Program  : drastic64
 */


char * getobjname(long param_1,int param_2,uint param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
LAB_001f4b2c:
  lVar8 = luaF_getlocalname(param_1,param_3 + 1,param_2);
  *param_4 = lVar8;
  if (lVar8 != 0) {
    return "local";
  }
  if (param_2 < 1) {
    return (char *)0x0;
  }
  lVar8 = 0;
  iVar14 = -1;
  iVar7 = 0;
  lVar13 = *(long *)(param_1 + 0x38);
  iVar11 = 0;
  do {
    uVar4 = *(uint *)(lVar13 + lVar8 * 4);
    iVar1 = iVar11 + 1;
    uVar2 = uVar4 & 0x3f;
    uVar5 = uVar4 >> 6 & 0xff;
    iVar12 = (int)lVar8;
    if (uVar2 < 0x26) {
      if (uVar2 < 0x24) {
        if (uVar2 == 4) {
          if (((int)uVar5 <= (int)param_3) && ((int)param_3 <= (int)(uVar5 + (uVar4 >> 0x17))))
          goto LAB_001f4be0;
        }
        else {
          if (uVar2 != 0x1e) goto LAB_001f4c80;
          iVar11 = ((uVar4 >> 0xe) - 0x1ffff) + iVar1;
          bVar6 = false;
          if (iVar11 > iVar12) {
            bVar6 = param_2 - iVar11 < 0;
          }
          if ((bVar6 == (iVar11 <= iVar12 || SBORROW4(param_2,iVar11))) && (iVar7 < iVar11)) {
            iVar7 = iVar11;
          }
        }
      }
      else if ((int)uVar5 <= (int)param_3) goto LAB_001f4be0;
joined_r0x001f4b94:
      if (param_2 <= iVar1) break;
    }
    else {
      if (uVar2 == 0x29) {
        if ((int)(uVar5 + 1) < (int)param_3) goto LAB_001f4be0;
        goto joined_r0x001f4b94;
      }
LAB_001f4c80:
      if (((&luaP_opmodes)[uVar2] & 0x40) == 0 || param_3 != uVar5) goto joined_r0x001f4b94;
LAB_001f4be0:
      iVar14 = iVar11;
      if (iVar7 <= iVar12) goto joined_r0x001f4b94;
      if (param_2 <= iVar1) {
        return (char *)0x0;
      }
      iVar14 = -1;
    }
    lVar8 = lVar8 + 1;
    iVar11 = iVar1;
  } while( true );
  if (iVar14 == -1) {
    return (char *)0x0;
  }
  uVar4 = *(uint *)(lVar13 + (long)iVar14 * 4);
  uVar2 = uVar4 & 0x3f;
  if (uVar2 == 5) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(uVar4 >> 0x17) * 0x10);
    puVar3 = &DAT_002296a8;
    if (lVar8 != 0) {
      puVar3 = (undefined1 *)(lVar8 + 0x20);
    }
    *param_4 = (long)puVar3;
    return "upvalue";
  }
  if (uVar2 < 6) {
    if (uVar2 != 0) {
      if (1 < uVar2 - 1) {
        return (char *)0x0;
      }
      uVar4 = uVar4 >> 0xe;
      if (uVar2 != 1) {
        uVar4 = *(uint *)(lVar13 + ((long)iVar14 + 1) * 4) >> 6;
      }
      if ((*(uint *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 0x10 + 8) & 0xf) != 4) {
        return (char *)0x0;
      }
      *param_4 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 0x10) + 0x20;
      return "constant";
    }
    param_3 = uVar4 >> 0x17;
    param_2 = iVar14;
    if ((uVar4 >> 6 & 0xff) <= uVar4 >> 0x17) {
      return (char *)0x0;
    }
    goto LAB_001f4b2c;
  }
  if ((uVar4 & 0x38) != 0) {
    if (uVar2 != 0xc) {
      return (char *)0x0;
    }
    if ((uVar4 >> 0x16 & 1) == 0) {
      pcVar10 = (char *)getobjname(param_1,iVar14,uVar4 >> 0xe & 0x1ff,param_4);
      if ((pcVar10 != (char *)0x0) && (*pcVar10 == 'c')) {
        return "method";
      }
    }
    else {
      lVar8 = ((ulong)(uVar4 >> 0xe) & 0xff) * 0x10;
      if ((*(uint *)(*(long *)(param_1 + 0x30) + lVar8 + 8) & 0xf) == 4) {
        *param_4 = *(long *)(*(long *)(param_1 + 0x30) + lVar8) + 0x20;
        return "method";
      }
    }
    *param_4 = (long)&DAT_002296a8;
    return "method";
  }
  if (uVar2 == 7) {
    pcVar10 = (char *)luaF_getlocalname(param_1,(uVar4 >> 0x17) + 1,iVar14);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(uVar4 >> 0x17) * 0x10);
    pcVar10 = "?";
    if (lVar8 != 0) {
      pcVar10 = (char *)(lVar8 + 0x20);
    }
  }
  if ((uVar4 >> 0x16 & 1) == 0) {
    pcVar9 = (char *)getobjname(param_1,iVar14,uVar4 >> 0xe & 0x1ff,param_4);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 == 'c')) goto LAB_001f4d1c;
  }
  else {
    lVar8 = ((ulong)(uVar4 >> 0xe) & 0xff) * 0x10;
    if ((*(uint *)(*(long *)(param_1 + 0x30) + lVar8 + 8) & 0xf) == 4) {
      *param_4 = *(long *)(*(long *)(param_1 + 0x30) + lVar8) + 0x20;
      goto LAB_001f4d1c;
    }
  }
  *param_4 = (long)&DAT_002296a8;
LAB_001f4d1c:
  if (pcVar10 == (char *)0x0) {
    return "field";
  }
  iVar7 = strcmp(pcVar10,"_ENV");
  pcVar10 = "field";
  if (iVar7 == 0) {
    pcVar10 = "global";
  }
  return pcVar10;
}


