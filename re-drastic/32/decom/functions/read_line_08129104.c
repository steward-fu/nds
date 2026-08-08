/*
 * Ghidra decompilation
 *
 * Function : read_line
 * Address  : 08129104
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int read_line(lua_State *L,FILE *f,int chop)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *buff;
  uint uVar4;
  size_t sVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  luaL_Buffer b;
  
  iVar2 = __stack_chk_guard;
  luaL_buffinit(L,&b);
  do {
    pcVar3 = luaL_prepbuffsize(&b,0x800);
    pcVar3 = pcVar3 + -1;
    iVar7 = 0;
    flockfile((FILE *)f);
    do {
      pbVar6 = (byte *)f->_IO_read_ptr;
      if (pbVar6 < f->_IO_read_end) {
        f->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = __uflow((_IO_FILE *)f);
        if (uVar4 == 0xffffffff) {
          bVar1 = false;
          iVar8 = -1;
          goto LAB_081291b4;
        }
      }
      if (uVar4 == 10) {
        bVar1 = chop == 0;
        iVar8 = 10;
LAB_081291b4:
        funlockfile((FILE *)f);
        b.n = iVar7 + b.n;
        if (bVar1) {
          if (b.size <= b.n) {
            luaL_prepbuffsize(&b,1);
          }
          b.b[b.n] = '\n';
          b.n = b.n + 1;
          luaL_pushresult(&b);
          sVar5 = 1;
        }
        else {
          luaL_pushresult(&b);
          if (iVar8 == 10) {
            sVar5 = 1;
          }
          else {
            sVar5 = lua_rawlen(L,-1);
            if (sVar5 != 0) {
              sVar5 = 1;
            }
          }
        }
        if (iVar2 == __stack_chk_guard) {
          return sVar5;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      iVar7 = iVar7 + 1;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = (char)uVar4;
    } while (iVar7 != 0x800);
    funlockfile((FILE *)f);
    b.n = b.n + 0x800;
  } while( true );
}


