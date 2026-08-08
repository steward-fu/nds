/*
 * Ghidra decompilation
 *
 * Function : lua_getlocal
 * Address  : 001f50d0
 * Program  : drastic64
 */


char * lua_getlocal(long param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  
  if (param_2 == 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + -8) != 0x46) {
      return (char *)0x0;
    }
    pcVar3 = (char *)luaF_getlocalname(*(undefined8 *)
                                        (*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18),
                                       param_3,0);
    return pcVar3;
  }
  pplVar5 = *(long ***)(param_2 + 0x78);
  plVar4 = *pplVar5;
  if ((*(byte *)((long)pplVar5 + 0x42) >> 1 & 1) == 0) {
    plVar6 = plVar4 + 2;
LAB_001f5100:
    if (pplVar5 == *(long ***)(param_1 + 0x20)) {
      lVar2 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar2 = *pplVar5[3];
    }
    lVar2 = lVar2 - (long)plVar6 >> 4;
    bVar1 = false;
    if (param_3 >= 1) {
      bVar1 = lVar2 - param_3 < 0;
    }
    if (bVar1 != (param_3 < 1 || SBORROW8(lVar2,(long)param_3))) {
      return (char *)0x0;
    }
    pcVar3 = "(*temporary)";
  }
  else {
    plVar6 = pplVar5[4];
    lVar2 = *(long *)(*plVar4 + 0x18);
    if (param_3 < 0) {
      if ((long)(((long)plVar6 - (long)plVar4 >> 4) - (ulong)*(byte *)(lVar2 + 10)) <=
          (long)-param_3) {
        return (char *)0x0;
      }
      pcVar3 = "(*vararg)";
      plVar6 = plVar4 + ((ulong)*(byte *)(lVar2 + 10) + (long)-param_3) * 2;
      goto LAB_001f513c;
    }
    pcVar3 = (char *)luaF_getlocalname(lVar2,param_3,
                                       (int)((long)pplVar5[5] - *(long *)(lVar2 + 0x38) >> 2) + -1);
    if (pcVar3 == (char *)0x0) goto LAB_001f5100;
  }
  plVar6 = plVar6 + (long)param_3 * 2 + -2;
LAB_001f513c:
  plVar4 = *(long **)(param_1 + 0x10);
  lVar2 = plVar6[1];
  *plVar4 = *plVar6;
  plVar4[1] = lVar2;
  *(long **)(param_1 + 0x10) = plVar4 + 2;
  return pcVar3;
}


