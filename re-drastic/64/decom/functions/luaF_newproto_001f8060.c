/*
 * Ghidra decompilation
 *
 * Function : luaF_newproto
 * Address  : 001f8060
 * Program  : drastic64
 */


void luaF_newproto(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = luaC_newobj(param_1,9,0x78);
  *(undefined2 *)(lVar1 + 10) = 0;
  *(undefined *)(lVar1 + 0xc) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  return;
}


