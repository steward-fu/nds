/*
 * Ghidra decompilation
 *
 * Function : esccheck.part.0
 * Address  : 00218780
 * Program  : drastic64
 */


void esccheck_part_0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar1 = *param_1;
  if (uVar1 != 0xffffffff) {
    plVar6 = *(long **)(param_1 + 0x12);
    lVar3 = plVar6[1];
    uVar5 = plVar6[2];
    if (uVar5 < lVar3 + 1U) {
      if (0x3ffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
        lexerror(param_1,"lexical element too long",0);
      }
      lVar2 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar6,uVar5,uVar5 << 1);
      lVar3 = plVar6[1];
      *plVar6 = lVar2;
      plVar6[2] = uVar5 << 1;
    }
    plVar6[1] = lVar3 + 1;
    *(char *)(*plVar6 + lVar3) = (char)uVar1;
    plVar6 = *(long **)(param_1 + 0x10);
    lVar3 = *plVar6;
    *plVar6 = lVar3 + -1;
    if (lVar3 == 0) {
      uVar1 = luaZ_fill();
      *param_1 = uVar1;
    }
    else {
      pbVar4 = (byte *)plVar6[1];
      plVar6[1] = (long)(pbVar4 + 1);
      *param_1 = (uint)*pbVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  lexerror(param_1,param_2,0x125);
}


