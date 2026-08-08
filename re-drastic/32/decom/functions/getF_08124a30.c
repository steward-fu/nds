/*
 * Ghidra decompilation
 *
 * Function : getF
 * Address  : 08124a30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable lf:LoadF *[r1:4] conflicts with parameter, skipped. */

char * getF(lua_State *L,void *ud,size_t *size)

{
  int iVar1;
  size_t sVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((int)*ud < 1) {
    iVar1 = feof(*(FILE **)((int)ud + 4));
    if (iVar1 != 0) {
      return (char *)0x0;
    }
    sVar2 = fread((void *)((int)ud + 8),1,0x2000,*(FILE **)((int)ud + 4));
    *size = sVar2;
  }
  else {
    *size = *ud;
    *(undefined4 *)ud = 0;
  }
  return (char *)((int)ud + 8);
}


