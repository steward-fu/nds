/*
 * Ghidra decompilation
 *
 * Function : FUN_001f2f3c
 * Address  : 001f2f3c
 * Program  : drastic64
 */


void FUN_001f2f3c(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  uVar1 = luaH_new(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = 0x45;
  *(undefined8 **)(param_1 + 0x10) = puVar2 + 2;
  if (param_2 < 1 && param_3 == 0 || param_2 < 1 && param_3 < 0) {
    return;
  }
  luaH_resize(param_1,uVar1,param_2,param_3);
  return;
}


