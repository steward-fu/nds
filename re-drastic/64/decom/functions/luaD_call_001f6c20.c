/*
 * Ghidra decompilation
 *
 * Function : luaD_call
 * Address  : 001f6c20
 * Program  : drastic64
 */


void luaD_call(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_1 + 0xc6) + 1;
  *(ushort *)(param_1 + 0xc6) = uVar1;
  if (199 < uVar1) {
    if (uVar1 == 200) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"C stack overflow");
    }
    if (0xe0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(param_1,6);
    }
  }
  if (param_4 == 0) {
    *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + 1;
    iVar2 = luaD_precall(param_1);
    if (iVar2 == 0) {
      luaV_execute(param_1);
    }
    *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + -1;
    *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
    return;
  }
  iVar2 = luaD_precall(param_1);
  if (iVar2 != 0) {
    *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
    return;
  }
  luaV_execute(param_1);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  return;
}


