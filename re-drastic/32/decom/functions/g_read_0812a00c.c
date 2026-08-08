/*
 * Ghidra decompilation
 *
 * Function : g_read
 * Address  : 0812a00c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int g_read(lua_State *L,FILE *f,int first)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *p;
  size_t sVar5;
  size_t l;
  int iVar6;
  int c;
  lconv *plVar7;
  ushort **ppuVar8;
  uint __c;
  char cVar9;
  ushort uVar10;
  byte *pbVar11;
  int success;
  int n;
  uint uVar12;
  int count;
  _IO_FILE *__stream;
  ushort *puVar13;
  byte *local_118;
  RN rn;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar2 = lua_gettop(L);
  clearerr((FILE *)f);
  if (iVar2 != 1) {
    local_118 = &DAT_08147024;
    luaL_checkstack(L,iVar2 + 0x13,"too many arguments");
    iVar2 = iVar2 + -2;
    iVar6 = first;
LAB_0812a108:
    n = iVar6 + 1;
    iVar3 = lua_type(L,iVar6);
    if (iVar3 == 3) {
      sVar5 = luaL_checkinteger(L,iVar6);
      if (sVar5 == 0) {
        iVar6 = _IO_getc((_IO_FILE *)f);
        ungetc(iVar6,(FILE *)f);
        success = iVar6 + 1;
        if (success != 0) {
          success = 1;
        }
        lua_pushlstring(L,(char *)0x0,0);
      }
      else {
        success = read_chars(L,f,sVar5);
      }
      goto LAB_0812a2a0;
    }
    pcVar4 = luaL_checklstring(L,iVar6,(size_t *)0x0);
    cVar9 = *pcVar4;
    if (cVar9 == '*') {
      cVar9 = pcVar4[1];
    }
    switch(cVar9) {
    case 'L':
      success = read_line(L,f,0);
      break;
    default:
      iVar2 = luaL_argerror(L,iVar6,"invalid format");
      goto LAB_0812a094;
    case 'a':
      read_all(L,f);
      if (iVar2 != 0) goto LAB_0812a2b4;
      iVar2 = ferror((FILE *)f);
      if (iVar2 == 0) goto LAB_0812a08c;
      goto LAB_0812a2ec;
    case 'l':
      success = read_line(L,f,1);
      break;
    case 'n':
      rn.n = 0;
      rn.f = f;
      plVar7 = localeconv();
      bVar1 = *plVar7->decimal_point;
      flockfile((FILE *)rn.f);
      ppuVar8 = __ctype_b_loc();
      __stream = (_IO_FILE *)rn.f;
      do {
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          __c = (uint)*pbVar11;
        }
        else {
          __c = __uflow(__stream);
          __stream = (_IO_FILE *)rn.f;
        }
        puVar13 = *ppuVar8;
        iVar6 = __c * 2;
        rn.c = __c;
      } while ((puVar13[__c] & 0x2000) != 0);
      if ((__c - 0x2b & 0xfffffffd) == 0) {
        if (rn.n < 200) {
          rn.buff[rn.n] = (char)__c;
          pbVar11 = (byte *)__stream->_IO_read_ptr;
          if (pbVar11 < __stream->_IO_read_end) {
            __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
            __c = (uint)*pbVar11;
            rn.n = rn.n + 1;
          }
          else {
            rn.n = rn.n + 1;
            __c = __uflow(__stream);
            __stream = (_IO_FILE *)rn.f;
          }
          goto LAB_0812a35c;
        }
        rn.buff[0] = '\0';
        if (__c == 0x30) goto LAB_0812a644;
LAB_0812a36c:
        uVar12 = 0;
LAB_0812a370:
        iVar3 = 0;
        while (uVar10 = *(ushort *)((int)puVar13 + iVar6) & 0x800,
              (*(ushort *)((int)puVar13 + iVar6) & 0x800) != 0) {
          if (199 < rn.n) {
            uVar10 = 0;
            goto LAB_0812a3d4;
          }
          rn.buff[rn.n] = (char)__c;
          pbVar11 = (byte *)__stream->_IO_read_ptr;
          if (pbVar11 < __stream->_IO_read_end) {
            __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
            __c = (uint)*pbVar11;
            rn.n = rn.n + 1;
          }
          else {
            rn.n = rn.n + 1;
            __c = __uflow(__stream);
            __stream = (_IO_FILE *)rn.f;
          }
          iVar6 = __c << 1;
          iVar3 = iVar3 + 1;
          rn.c = __c;
          puVar13 = *ppuVar8;
        }
      }
      else {
LAB_0812a35c:
        rn.c = __c;
        if (__c != 0x30) {
          puVar13 = *ppuVar8;
          iVar6 = __c << 1;
          goto LAB_0812a36c;
        }
        if (199 < rn.n) {
          puVar13 = *ppuVar8;
LAB_0812a644:
          __c = 0x30;
          iVar6 = 0x60;
          rn.buff[0] = '\0';
          goto LAB_0812a36c;
        }
        rn.buff[rn.n] = '0';
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          __c = (uint)*pbVar11;
          rn.n = rn.n + 1;
        }
        else {
          rn.n = rn.n + 1;
          __c = __uflow(__stream);
          __stream = (_IO_FILE *)rn.f;
        }
        rn.c = __c;
        if ((__c & 0xffffffdf) != 0x58) {
LAB_0812a608:
          uVar12 = 1;
          puVar13 = *ppuVar8;
          iVar6 = __c << 1;
          goto LAB_0812a370;
        }
        if (199 < rn.n) {
          rn.buff[0] = '\0';
          goto LAB_0812a608;
        }
        rn.buff[rn.n] = (char)__c;
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          __c = (uint)*pbVar11;
          rn.n = rn.n + 1;
        }
        else {
          rn.n = rn.n + 1;
          __c = __uflow(__stream);
          __stream = (_IO_FILE *)rn.f;
        }
        iVar3 = 0;
        puVar13 = *ppuVar8;
LAB_0812a6e0:
        uVar12 = puVar13[__c] & 0x1000;
        rn.c = __c;
        if ((puVar13[__c] & 0x1000) != 0) {
          if (rn.n < 200) goto LAB_0812a6a4;
          uVar10 = 1;
          uVar12 = 0;
LAB_0812a3d4:
          iVar3 = uVar12 + iVar3;
          rn.buff[0] = '\0';
          if (bVar1 == __c) goto LAB_0812a630;
          goto LAB_0812a3e4;
        }
        uVar10 = 1;
      }
      iVar3 = uVar12 + iVar3;
      if (bVar1 == __c) {
        if (199 < rn.n) {
LAB_0812a630:
          rn.buff[0] = '\0';
          goto LAB_0812a3e4;
        }
        rn.buff[rn.n] = (char)__c;
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          rn.c = (int)*pbVar11;
          rn.n = rn.n + 1;
        }
        else {
          rn.n = rn.n + 1;
          rn.c = __uflow(__stream);
          __stream = (_IO_FILE *)rn.f;
        }
        if (uVar10 == 0) {
          iVar6 = 0;
          while (((*ppuVar8)[rn.c] & 0x800) != 0) {
            if (199 < rn.n) goto LAB_0812a7e8;
            rn.buff[rn.n] = (char)rn.c;
            pbVar11 = (byte *)__stream->_IO_read_ptr;
            if (pbVar11 < __stream->_IO_read_end) {
              __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
              rn.c = (int)*pbVar11;
              rn.n = rn.n + 1;
            }
            else {
              rn.n = rn.n + 1;
              rn.c = __uflow(__stream);
              __stream = (_IO_FILE *)rn.f;
            }
            iVar6 = iVar6 + 1;
          }
        }
        else {
          iVar6 = 0;
          while (((*ppuVar8)[rn.c] & 0x1000) != 0) {
            if (199 < rn.n) goto LAB_0812a7e8;
            rn.buff[rn.n] = (char)rn.c;
            pbVar11 = (byte *)__stream->_IO_read_ptr;
            if (pbVar11 < __stream->_IO_read_end) {
              __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
              rn.c = (int)*pbVar11;
              rn.n = rn.n + 1;
            }
            else {
              rn.n = rn.n + 1;
              rn.c = __uflow(__stream);
              __stream = (_IO_FILE *)rn.f;
            }
            iVar6 = iVar6 + 1;
          }
        }
        goto LAB_0812a7f0;
      }
      goto LAB_0812a3e4;
    }
    goto LAB_0812a2a0;
  }
  n = first + 1;
  success = read_line(L,f,1);
LAB_0812a074:
  iVar2 = ferror((FILE *)f);
  if (iVar2 != 0) goto LAB_0812a2ec;
  if (success == 0) goto LAB_0812a5a8;
  goto LAB_0812a08c;
LAB_0812a6a4:
  rn.buff[rn.n] = (char)__c;
  pbVar11 = (byte *)__stream->_IO_read_ptr;
  if (pbVar11 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
    __c = (uint)*pbVar11;
    rn.n = rn.n + 1;
  }
  else {
    rn.n = rn.n + 1;
    __c = __uflow(__stream);
    __stream = (_IO_FILE *)rn.f;
  }
  puVar13 = *ppuVar8;
  iVar3 = iVar3 + 1;
  goto LAB_0812a6e0;
LAB_0812a7e8:
  rn.buff[0] = '\0';
LAB_0812a7f0:
  iVar3 = iVar3 + iVar6;
  __c = rn.c;
LAB_0812a3e4:
  if (iVar3 != 0) {
    pbVar11 = local_118;
    if (uVar10 != 0) {
      pbVar11 = &DAT_08147020;
    }
    if ((*pbVar11 == __c) || (__c != 0 && pbVar11[1] == __c)) {
      if (rn.n < 200) {
        rn.buff[rn.n] = (char)__c;
        pbVar11 = (byte *)__stream->_IO_read_ptr;
        if (pbVar11 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
          __c = (uint)*pbVar11;
          rn.n = rn.n + 1;
        }
        else {
          rn.n = rn.n + 1;
          __c = __uflow(__stream);
          __stream = (_IO_FILE *)rn.f;
        }
        if ((__c - 0x2b & 0xfffffffd) == 0) {
          rn.c = __c;
          if (199 < rn.n) {
            rn.buff[0] = '\0';
            if (((*ppuVar8)[__c] & 0x800) == 0) goto LAB_0812a4f4;
            goto LAB_0812a4f0;
          }
          rn.buff[rn.n] = (char)__c;
          pbVar11 = (byte *)__stream->_IO_read_ptr;
          if (pbVar11 < __stream->_IO_read_end) {
            __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
            __c = (uint)*pbVar11;
            rn.n = rn.n + 1;
          }
          else {
            rn.n = rn.n + 1;
            __c = __uflow(__stream);
            __stream = (_IO_FILE *)rn.f;
          }
        }
        uVar10 = (*ppuVar8)[__c];
        iVar6 = rn.n;
        while (rn.c = __c, rn.n = iVar6, (uVar10 & 0x800) != 0) {
          if (199 < iVar6) goto LAB_0812a4f0;
          rn.n = iVar6 + 1;
          rn.buff[iVar6] = (char)__c;
          pbVar11 = (byte *)__stream->_IO_read_ptr;
          if (pbVar11 < __stream->_IO_read_end) {
            __stream->_IO_read_ptr = (char *)(pbVar11 + 1);
            __c = (uint)*pbVar11;
          }
          else {
            __c = __uflow(__stream);
            __stream = (_IO_FILE *)rn.f;
          }
          iVar6 = rn.n;
          uVar10 = (*ppuVar8)[__c];
        }
      }
      else {
LAB_0812a4f0:
        rn.buff[0] = '\0';
      }
    }
  }
LAB_0812a4f4:
  ungetc(__c,__stream);
  funlockfile((FILE *)rn.f);
  rn.buff[rn.n] = '\0';
  sVar5 = lua_stringtonumber(L,rn.buff);
  if (sVar5 == 0) {
    lua_pushnil(L);
    success = 0;
  }
  else {
    success = 1;
  }
LAB_0812a2a0:
  if (iVar2 == 0) goto LAB_0812a074;
  if (success == 0) goto LAB_0812a594;
LAB_0812a2b4:
  iVar2 = iVar2 + -1;
  iVar6 = n;
  goto LAB_0812a108;
LAB_0812a594:
  iVar2 = ferror((FILE *)f);
  if (iVar2 != 0) {
LAB_0812a2ec:
    iVar2 = luaL_fileresult(L,0,(char *)0x0);
    goto LAB_0812a094;
  }
LAB_0812a5a8:
  lua_settop(L,-2);
  lua_pushnil(L);
LAB_0812a08c:
  iVar2 = n - first;
LAB_0812a094:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


