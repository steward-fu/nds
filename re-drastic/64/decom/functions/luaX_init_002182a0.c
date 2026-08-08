/*
 * Ghidra decompilation
 *
 * Function : luaX_init
 * Address  : 002182a0
 * Program  : drastic64
 */


void luaX_init(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 1;
  uVar1 = luaS_new(param_1,&DAT_00229790);
  luaC_fix(param_1,uVar1);
  do {
    lVar2 = luaS_new(param_1,*(undefined8 *)(ll_funcs + lVar3 * 8 + 0x18));
    luaC_fix(param_1,lVar2);
    *(char *)(lVar2 + 10) = (char)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x17);
  return;
}


