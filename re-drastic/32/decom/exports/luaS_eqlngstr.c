/*
 * Ghidra decompilation
 *
 * Function : luaS_eqlngstr
 * Address  : 0811dfd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaS_eqlngstr(TString *a,TString *b)

{
  int iVar1;
  size_t len;
  
  if (a == b) {
    return 1;
  }
  if (a->len != b->len) {
    return 0;
  }
  iVar1 = memcmp(&a[1].tt,&b[1].tt,a->len);
  return (uint)(iVar1 == 0);
}


