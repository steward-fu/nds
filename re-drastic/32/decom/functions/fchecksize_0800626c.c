/*
 * Ghidra decompilation
 *
 * Function : fchecksize
 * Address  : 0800626c
 * Program  : drastic
 */


void fchecksize(LoadState *S,size_t size,char *tname)

{
  LoadState *S_1;
  
  S_1 = (LoadState *)luaO_pushfstring(S->L,"%s size mismatch in",size);
                    /* WARNING: Subroutine does not return */
  error(S,S->name,S_1);
}


