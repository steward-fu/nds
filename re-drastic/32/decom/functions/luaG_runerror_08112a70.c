/*
 * Ghidra decompilation
 *
 * Function : luaG_runerror
 * Address  : 08112a70
 * Program  : drastic
 */


void luaG_runerror(lua_State *L,char *fmt,...)

{
  char *pcVar1;
  TString *src;
  undefined4 in_r2;
  int iVar2;
  undefined4 in_r3;
  CallInfo *pCVar3;
  CallInfo *ci;
  undefined4 uVar4;
  va_list argp;
  char buff [60];
  char *fmt_local;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  pcVar1 = luaO_pushvfstring(L,fmt,(va_list)&uStack_8);
  pCVar3 = L->ci;
  if ((pCVar3->callstatus & 2) != 0) {
    iVar2 = *(int *)((pCVar3->func->value_).f + 0xc);
    if (*(int *)(iVar2 + 0x38) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)
               (*(int *)(iVar2 + 0x38) +
               (((int)(pCVar3->u).l.savedpc - *(int *)(iVar2 + 0x30) >> 2) + -1) * 4);
    }
    if (*(int *)(iVar2 + 0x48) == 0) {
      buff[0] = '?';
      buff[1] = '\0';
    }
    else {
      luaO_chunkid(buff,(char *)(*(int *)(iVar2 + 0x48) + 0x18),0x3c);
    }
    luaO_pushfstring(L,"%s:%d: %s",buff,uVar4,pcVar1);
  }
                    /* WARNING: Subroutine does not return */
  luaG_errormsg(L);
}


