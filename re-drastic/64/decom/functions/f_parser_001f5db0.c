/*
 * Ghidra decompilation
 *
 * Function : f_parser
 * Address  : 001f5db0
 * Program  : drastic64
 */


void f_parser(undefined8 param_1,long **param_2)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  
  plVar2 = *param_2;
  lVar5 = *plVar2;
  *plVar2 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar1 = luaZ_fill();
  }
  else {
    pbVar6 = (byte *)plVar2[1];
    plVar2[1] = (long)(pbVar6 + 1);
    uVar1 = (uint)*pbVar6;
  }
  plVar2 = param_2[10];
  if (uVar1 == 0x1b) {
    if ((plVar2 == (long *)0x0) || (pcVar3 = strchr((char *)plVar2,0x62), pcVar3 != (char *)0x0)) {
      uVar4 = luaU_undump(param_1,*param_2,param_2 + 1,param_2[0xb]);
      luaF_initupvals(param_1,uVar4);
      return;
    }
    pcVar3 = "binary";
  }
  else {
    if ((plVar2 == (long *)0x0) || (pcVar3 = strchr((char *)plVar2,0x74), pcVar3 != (char *)0x0)) {
      uVar4 = luaY_parser(param_1,*param_2,param_2 + 1,param_2 + 4,param_2[0xb],uVar1);
      luaF_initupvals(param_1,uVar4);
      return;
    }
    pcVar3 = "text";
  }
  luaO_pushfstring(param_1,"attempt to load a %s chunk (mode is \'%s\')",pcVar3,plVar2);
                    /* WARNING: Subroutine does not return */
  luaD_throw(param_1,3);
}


