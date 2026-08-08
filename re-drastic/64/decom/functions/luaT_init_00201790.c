/*
 * Ghidra decompilation
 *
 * Function : luaT_init
 * Address  : 00201790
 * Program  : drastic64
 */


void luaT_init(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  do {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar1 = luaS_new(param_1,(&luaT_eventname_4611)[lVar4]);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar2 = ((long)(int)lVar4 + 0x1e) * 8;
    lVar4 = lVar4 + 1;
    *(undefined8 *)(lVar5 + lVar2 + 8) = uVar1;
    luaC_fix(param_1,*(undefined8 *)(lVar3 + lVar2 + 8));
  } while (lVar4 != 0x18);
  return;
}


