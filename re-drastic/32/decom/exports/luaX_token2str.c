/*
 * Ghidra decompilation
 *
 * Function : luaX_token2str
 * Address  : 08138268
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaX_token2str(LexState *ls,int token)

{
  char *pcVar1;
  char *s;
  
  if (token < 0x101) {
    pcVar1 = luaO_pushfstring(ls->L,"\'%c\'",token);
    return pcVar1;
  }
  if (0x120 < token) {
    return luaX_tokens[token + -0x101];
  }
  pcVar1 = luaO_pushfstring(ls->L,"\'%s\'");
  return pcVar1;
}


