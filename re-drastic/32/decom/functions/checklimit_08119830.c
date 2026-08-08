/*
 * Ghidra decompilation
 *
 * Function : checklimit
 * Address  : 08119830
 * Program  : drastic
 */


void checklimit(FuncState *fs,int v,int l,char *what)

{
  char *where;
  char *msg_00;
  char *msg;
  int line;
  lua_State *L;
  lua_State *L_00;
  
  L_00 = fs->ls->L;
  if (fs->f->linedefined == 0) {
    where = "main function";
  }
  else {
    where = luaO_pushfstring(L_00,"function at line %d");
  }
  msg_00 = luaO_pushfstring(L_00,"too many %s (limit is %d) in %s",l,v,where);
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(fs->ls,msg_00);
}


