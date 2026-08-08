/*
 * Ghidra decompilation
 *
 * Function : luaO_tostring
 * Address  : 08118f58
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaO_tostring(lua_State *L,StkId obj)

{
  size_t sVar1;
  size_t len;
  size_t sVar2;
  TString *pTVar3;
  TString *x_;
  TValue *io;
  size_t l;
  bool bVar4;
  char buff [50];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  if (obj->tt_ == 0x13) {
    l = __sprintf_chk(buff,1,0x32,"%d",(obj->value_).gc);
  }
  else {
    sVar1 = __sprintf_chk(buff,1,0x32,&DAT_08145d28,(double)(obj->value_).n);
    sVar2 = strspn(buff,"-0123456789");
    l = sVar1;
    if (buff[sVar2] == '\0') {
      l = sVar1 + 2;
      buff[sVar1] = '.';
      buff[sVar1 + 1] = '0';
    }
  }
  pTVar3 = luaS_newlstr(L,buff,l);
  (obj->value_).gc = (GCObject *)pTVar3;
  bVar4 = local_1c == __stack_chk_guard;
  obj->tt_ = pTVar3->tt | 0x40;
  if (bVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


