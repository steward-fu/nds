/*
 * Ghidra decompilation
 *
 * Function : luaV_settable
 * Address  : 00202cf0
 * Program  : drastic64
 */


void luaV_settable(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_2 + 1);
  iVar5 = 2000;
  do {
    if (uVar4 == 0x45) {
      lVar6 = *param_2;
      plVar1 = (long *)luaH_get(lVar6,param_3);
      if (*(int *)(plVar1 + 1) != 0) {
LAB_00202e00:
        lVar2 = param_4[1];
        *plVar1 = *param_4;
        plVar1[1] = lVar2;
        *(undefined *)(lVar6 + 10) = 0;
        if ((((*(uint *)(param_4 + 1) >> 6 & 1) != 0) && ((*(byte *)(lVar6 + 9) >> 2 & 1) != 0)) &&
           ((*(byte *)(*param_4 + 9) & 3) != 0)) {
          luaC_barrierback_(param_1,lVar6);
          return;
        }
        return;
      }
      lVar2 = *(long *)(lVar6 + 0x28);
      if (((lVar2 == 0) || ((*(byte *)(lVar2 + 10) >> 1 & 1) != 0)) ||
         (plVar3 = (long *)luaT_gettm(lVar2,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100)),
         plVar3 == (long *)0x0)) {
        if (plVar1 == &luaO_nilobject_) {
          plVar1 = (long *)luaH_newkey(param_1,lVar6,param_3);
        }
        goto LAB_00202e00;
      }
      uVar4 = *(uint *)(plVar3 + 1);
    }
    else {
      plVar3 = (long *)luaT_gettmbyobj(param_1,param_2,1);
      uVar4 = *(uint *)(plVar3 + 1);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_typeerror(param_1,param_2,"index");
      }
    }
    if ((uVar4 & 0xf) == 6) {
      luaT_callTM(param_1,plVar3,param_2,param_3,param_4,0);
      return;
    }
    iVar5 = iVar5 + -1;
    param_2 = plVar3;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"settable chain too long; possible loop");
    }
  } while( true );
}


