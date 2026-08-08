/*
 * Ghidra decompilation
 *
 * Function : luaZ_openspace
 * Address  : 08124790
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaZ_openspace(lua_State *L,Mbuffer *buff,size_t n)

{
  char *pcVar1;
  
  if (buff->buffsize < n) {
    if (n < 0x20) {
      n = 0x20;
    }
    pcVar1 = (char *)luaM_realloc_(L,buff->buffer,buff->buffsize,n);
    buff->buffer = pcVar1;
    buff->buffsize = n;
  }
  else {
    pcVar1 = buff->buffer;
  }
  return pcVar1;
}


