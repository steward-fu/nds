/*
 * Ghidra decompilation
 *
 * Function : luaT_gettmbyobj
 * Address  : 00201870
 * Program  : drastic64
 */


undefined8 * luaT_gettmbyobj(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 1) & 0xf;
  if (uVar1 == 5) {
    lVar3 = *(long *)(*param_2 + 0x28);
  }
  else if (uVar1 == 7) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8 + 0x1b8);
  }
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)
             luaH_getstr(lVar3,*(undefined8 *)
                                (*(long *)(param_1 + 0x18) + (param_3 & 0xffffffff) * 8 + 0xf8));
    return puVar2;
  }
  return &luaO_nilobject_;
}


