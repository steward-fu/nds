/*
 * Ghidra decompilation
 *
 * Function : LoadString
 * Address  : 08120408
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TString * LoadString(LoadState *S)

{
  size_t sVar1;
  char *str;
  char *s;
  TString *pTVar2;
  void *extraout_r1;
  void *extraout_r1_00;
  void *extraout_r1_01;
  void *b;
  size_t size_00;
  lu_byte x;
  size_t size;
  int local_14;
  
  size_00 = 1;
  local_14 = __stack_chk_guard;
  sVar1 = luaZ_read(S->Z,&x,1);
  b = extraout_r1;
  if (sVar1 == 0) {
    size = (size_t)x;
    if (size == 0xff) {
      size_00 = 4;
      sVar1 = luaZ_read(S->Z,&size,4);
      b = extraout_r1_01;
      if (sVar1 != 0) goto LAB_081204ec;
    }
    if (size == 0) {
      pTVar2 = (TString *)0x0;
    }
    else {
      size = size - 1;
      str = luaZ_openspace(S->L,S->b,size);
      size_00 = size;
      sVar1 = luaZ_read(S->Z,str,size);
      b = extraout_r1_00;
      if (sVar1 != 0) goto LAB_081204ec;
      pTVar2 = luaS_newlstr(S->L,str,size);
    }
    if (local_14 == __stack_chk_guard) {
      return pTVar2;
    }
  }
  else {
LAB_081204ec:
    LoadBlock(S,b,size_00);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


