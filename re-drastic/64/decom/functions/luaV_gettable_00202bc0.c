/*
 * Ghidra decompilation
 *
 * Function : luaV_gettable
 * Address  : 00202bc0
 * Program  : drastic64
 */


void luaV_gettable(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_2 + 1);
  iVar5 = 2000;
  do {
    if (uVar4 == 0x45) {
      lVar6 = *param_2;
      puVar1 = (undefined8 *)luaH_get(lVar6,param_3);
      if ((((*(int *)(puVar1 + 1) != 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) ||
          ((*(byte *)(lVar6 + 10) & 1) != 0)) ||
         (plVar2 = (long *)luaT_gettm(lVar6,0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf8)),
         plVar2 == (long *)0x0)) {
        uVar3 = puVar1[1];
        *param_4 = *puVar1;
        param_4[1] = uVar3;
        return;
      }
      uVar4 = *(uint *)(plVar2 + 1);
    }
    else {
      plVar2 = (long *)luaT_gettmbyobj(param_1,param_2,0);
      uVar4 = *(uint *)(plVar2 + 1);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_typeerror(param_1,param_2,"index");
      }
    }
    if ((uVar4 & 0xf) == 6) {
      luaT_callTM(param_1,plVar2,param_2,param_3,param_4,1);
      return;
    }
    iVar5 = iVar5 + -1;
    param_2 = plVar2;
  } while (iVar5 != 0);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"gettable chain too long; possible loop");
}


