/*
 * Ghidra decompilation
 *
 * Function : FUN_0021836c
 * Address  : 0021836c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021836c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined auStack_48 [64];
  undefined8 uStack_8;
  
  uStack_8 = ___stack_chk_guard;
  luaO_chunkid(auStack_48,*(long *)(param_1 + 0x60) + 0x20,0x3c);
  uVar1 = luaO_pushfstring(*(undefined8 *)(param_1 + 0x38),"%s:%d: %s",auStack_48,
                           *(undefined4 *)(param_1 + 4),param_2);
  if (param_3 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (param_3 - 0x122U < 4) {
      plVar6 = *(long **)(param_1 + 0x48);
      lVar5 = plVar6[1];
      uVar4 = plVar6[2];
      if (uVar4 < lVar5 + 1U) {
        if (0x3ffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
          lexerror(param_1,"lexical element too long",0);
        }
        lVar2 = luaM_realloc_(uVar7,*plVar6,uVar4,uVar4 << 1);
        lVar5 = plVar6[1];
        *plVar6 = lVar2;
        plVar6[2] = uVar4 << 1;
      }
      plVar6[1] = lVar5 + 1;
      *(undefined *)(*plVar6 + lVar5) = 0;
      uVar3 = luaO_pushfstring(*(undefined8 *)(param_1 + 0x38),&DAT_0022bd50,
                               **(undefined8 **)(param_1 + 0x48));
    }
    else {
      uVar3 = luaX_token2str(param_1,param_3);
    }
    luaO_pushfstring(uVar7,"%s near %s",uVar1,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  luaD_throw(*(undefined8 *)(param_1 + 0x38),3);
}


