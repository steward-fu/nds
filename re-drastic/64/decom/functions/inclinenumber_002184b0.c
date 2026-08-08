/*
 * Ghidra decompilation
 *
 * Function : inclinenumber
 * Address  : 002184b0
 * Program  : drastic64
 */


void inclinenumber(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar3 = *param_1;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar5 = *plVar4;
  *plVar4 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar2 = luaZ_fill();
    *param_1 = uVar2;
    if (uVar2 != 10 && uVar2 != 0xd || uVar2 == uVar3) goto LAB_002184fc;
  }
  else {
    pbVar6 = (byte *)plVar4[1];
    plVar4[1] = (long)(pbVar6 + 1);
    bVar1 = *pbVar6;
    *param_1 = (uint)bVar1;
    if (bVar1 != 10 && bVar1 != 0xd || bVar1 == uVar3) goto LAB_002184fc;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  lVar5 = *plVar4;
  *plVar4 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar3 = luaZ_fill();
    *param_1 = uVar3;
  }
  else {
    pbVar6 = (byte *)plVar4[1];
    plVar4[1] = (long)(pbVar6 + 1);
    *param_1 = (uint)*pbVar6;
  }
LAB_002184fc:
  uVar3 = param_1[1];
  param_1[1] = uVar3 + 1;
  if (uVar3 + 1 != 0x7fffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  lexerror(param_1,"chunk has too many lines",0);
}


