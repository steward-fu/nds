/*
 * Ghidra decompilation
 *
 * Function : luaL_loadfilex
 * Address  : 081264a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_loadfilex(lua_State *L,char *filename,char *mode)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int c_1;
  char *pcVar5;
  int iVar6;
  int status;
  int iVar7;
  int readstatus;
  int c;
  int c_2;
  int c_3;
  int *piVar8;
  char *serr;
  char *pcVar9;
  int c_4;
  char *serr_2;
  char *serr_1;
  uint uVar10;
  char *pcVar11;
  int fnameindex;
  char *p;
  byte *pbVar12;
  LoadF lf;
  
  iVar2 = __stack_chk_guard;
  iVar4 = lua_gettop(L);
  iVar4 = iVar4 + 1;
  if (filename == (char *)0x0) {
    lua_pushlstring(L,"=stdin",6);
    lf.f = stdin;
LAB_08126530:
    lf.n = 0;
    pbVar12 = &DAT_081468ac;
    do {
      c = _IO_getc((_IO_FILE *)lf.f);
      if (c == 0xffffffff) goto LAB_08126584;
      if (c != (uint)*pbVar12) goto LAB_0812663c;
      uVar10 = (uint)pbVar12[1];
      lf.buff[lf.n] = (char)c;
      pbVar12 = pbVar12 + 1;
      lf.n = lf.n + 1;
    } while (uVar10 != 0);
    lf.n = uVar10;
    c = _IO_getc((_IO_FILE *)lf.f);
LAB_0812663c:
    if (c == 0x23) {
      do {
        iVar7 = _IO_getc((_IO_FILE *)lf.f);
      } while (iVar7 != 10 && iVar7 != -1);
      c = _IO_getc((_IO_FILE *)lf.f);
      lf.buff[lf.n] = '\n';
      lf.n = lf.n + 1;
    }
    if (c == 0x1b) {
      cVar3 = '\x1b';
      if (filename == (char *)0x0) goto LAB_0812668c;
      lf.f = (FILE *)freopen64(filename,"rb",(FILE *)lf.f);
      if (lf.f == (FILE *)0x0) {
        piVar8 = __errno_location();
        pcVar5 = strerror(*piVar8);
        pcVar9 = lua_tolstring(L,iVar4,(size_t *)0x0);
        pcVar9 = pcVar9 + 1;
        pcVar11 = "reopen";
        goto LAB_081267a0;
      }
      lf.n = 0;
      pbVar12 = &DAT_081468ac;
      do {
        c = _IO_getc((_IO_FILE *)lf.f);
        if (c == 0xffffffff) goto LAB_08126724;
        p = (char *)(pbVar12 + 1);
        if (c != (uint)*pbVar12) {
          if (c != 0x23) goto LAB_08126688;
          goto LAB_08126804;
        }
        bVar1 = *p;
        lf.buff[lf.n] = (char)c;
        pbVar12 = (byte *)p;
        lf.n = lf.n + 1;
      } while (bVar1 != 0);
      lf.n = (uint)bVar1;
      c = _IO_getc((_IO_FILE *)lf.f);
      if (c == 0x23) {
LAB_08126804:
        do {
          iVar7 = _IO_getc((_IO_FILE *)lf.f);
        } while (iVar7 != 10 && iVar7 != -1);
        c = _IO_getc((_IO_FILE *)lf.f);
      }
      if (c != 0xffffffff) goto LAB_08126688;
      c = 0xffffffff;
LAB_08126724:
      pcVar5 = lua_tolstring(L,c,(size_t *)0x0);
      iVar6 = lua_load(L,getF,&lf,pcVar5,mode);
      iVar7 = ferror((FILE *)lf.f);
LAB_081265c8:
      fclose((FILE *)lf.f);
    }
    else {
      if (c != 0xffffffff) {
LAB_08126688:
        cVar3 = (char)c;
LAB_0812668c:
        lf.buff[lf.n] = cVar3;
        lf.n = lf.n + 1;
      }
LAB_08126584:
      pcVar5 = lua_tolstring(L,-1,(size_t *)0x0);
      iVar6 = lua_load(L,getF,&lf,pcVar5,mode);
      iVar7 = ferror((FILE *)lf.f);
      if (filename != (char *)0x0) goto LAB_081265c8;
    }
    if (iVar7 == 0) {
      lua_rotate(L,iVar4,-1);
      lua_settop(L,-2);
      goto LAB_081265f8;
    }
    lua_settop(L,iVar4);
    piVar8 = __errno_location();
    pcVar5 = strerror(*piVar8);
    pcVar9 = lua_tolstring(L,iVar4,(size_t *)0x0);
    pcVar9 = pcVar9 + 1;
    pcVar11 = "read";
  }
  else {
    lua_pushfstring(L,"@%s",filename);
    lf.f = (FILE *)fopen64(filename,"r");
    if (lf.f != (FILE *)0x0) goto LAB_08126530;
    piVar8 = __errno_location();
    pcVar5 = strerror(*piVar8);
    pcVar9 = lua_tolstring(L,iVar4,(size_t *)0x0);
    pcVar9 = pcVar9 + 1;
    pcVar11 = "open";
  }
LAB_081267a0:
  lua_pushfstring(L,"cannot %s %s: %s",pcVar11,pcVar9,pcVar5);
  lua_rotate(L,iVar4,-1);
  lua_settop(L,-2);
  iVar6 = 7;
LAB_081265f8:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


