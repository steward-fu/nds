/*
 * Ghidra decompilation
 *
 * Function : luaH_new
 * Address  : 002007e0
 * Program  : drastic64
 */


void luaH_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = luaC_newobj(param_1,5,0x38);
  *(undefined2 *)(lVar1 + 10) = 0xff;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined1 **)(lVar1 + 0x18) = &dummynode_;
  *(undefined1 **)(lVar1 + 0x20) = &dummynode_;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


