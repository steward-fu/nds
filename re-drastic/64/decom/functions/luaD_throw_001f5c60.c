/*
 * Ghidra decompilation
 *
 * Function : luaD_throw
 * Address  : 001f5c60
 * Program  : drastic64
 */


void luaD_throw(long param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x140) = param_2;
                    /* WARNING: Subroutine does not return */
    __longjmp_chk(lVar4 + 8,1);
  }
  lVar6 = *(long *)(param_1 + 0x18);
  *(char *)(param_1 + 10) = (char)param_2;
  lVar4 = *(long *)(lVar6 + 0xe0);
  if (*(long *)(lVar4 + 0x58) != 0) {
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 **)(lVar4 + 0x10) = puVar2 + 2;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    *puVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar2[1] = uVar5;
                    /* WARNING: Subroutine does not return */
    luaD_throw(lVar4);
  }
  pcVar1 = *(code **)(lVar6 + 0xd8);
  if (pcVar1 != (code *)0x0) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (param_2 == 4) {
      lVar4 = *(long *)(lVar6 + 0xf0);
      *plVar7 = lVar4;
      *(uint *)(plVar7 + 1) = *(byte *)(lVar4 + 8) | 0x40;
    }
    else if (param_2 == 6) {
      lVar4 = luaS_newlstr(param_1,"error in error handling",0x17);
      pcVar1 = *(code **)(lVar6 + 0xd8);
      *plVar7 = lVar4;
      *(uint *)(plVar7 + 1) = *(byte *)(lVar4 + 8) | 0x40;
    }
    else {
      *plVar7 = plVar7[-2];
      plVar7[1] = plVar7[-1];
    }
    plVar7 = plVar7 + 2;
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    *(long **)(param_1 + 0x10) = plVar7;
    if (plVar3 < plVar7) {
      *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar7;
    }
    (*pcVar1)(param_1);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


