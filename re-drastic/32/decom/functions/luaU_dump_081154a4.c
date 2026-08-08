/*
 * Ghidra decompilation
 *
 * Function : luaU_dump
 * Address  : 081154a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaU_dump(lua_State *L,Proto *f,lua_Writer w,void *data,int strip)

{
  int iVar1;
  lu_byte x_7;
  undefined4 local_38;
  lu_byte x;
  undefined3 uStack_33;
  DumpState D;
  
  iVar1 = __stack_chk_guard;
  D.strip = strip;
  D.status = 0;
  D.L = L;
  D.writer = w;
  D.data = data;
  D.status = (*w)(L,&DAT_08145b9c,4,data);
  x = 'S';
  if (D.status == 0) {
    D.status = (*D.writer)(D.L,&x,1,D.data);
    x = '\0';
    if (D.status != 0) {
LAB_08115720:
      local_38 = 0x5678;
      _x = 0x43b94000;
      goto LAB_0811551c;
    }
    D.status = (*D.writer)(D.L,&x,1,D.data);
    if (D.status == 0) {
      D.status = (*D.writer)(D.L,&DAT_08145ba4,6,D.data);
      x = '\x04';
      if (D.status != 0) goto LAB_08115720;
      D.status = (*D.writer)(D.L,&x,1,D.data);
      x = '\x04';
      if (D.status == 0) {
        D.status = (*D.writer)(D.L,&x,1,D.data);
        x = '\x04';
        if (D.status != 0) goto LAB_08115720;
        D.status = (*D.writer)(D.L,&x,1,D.data);
        x = '\x04';
        if (D.status == 0) {
          D.status = (*D.writer)(D.L,&x,1,D.data);
          _x = CONCAT31(uStack_33,4);
          if (D.status != 0) goto LAB_08115720;
          D.status = (*D.writer)(D.L,&x,1,D.data);
          local_38 = 0x5678;
          if (D.status == 0) {
            D.status = (*D.writer)(D.L,&local_38,4,D.data);
            _x = 0x43b94000;
            if (D.status == 0) {
              D.status = (*D.writer)(D.L,&x,4,D.data);
              x_7 = (lu_byte)f->sizeupvalues;
              if (D.status == 0) {
                D.status = (*D.writer)(D.L,&x_7,1,D.data);
              }
            }
            goto LAB_0811551c;
          }
        }
      }
    }
  }
  local_38 = 0x5678;
  _x = 0x43b94000;
LAB_0811551c:
  DumpFunction(f,(TString *)0x0,&D);
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return D.status;
}


