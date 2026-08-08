/*
 * Ghidra decompilation
 *
 * Function : luaK_code
 * Address  : 00214bd0
 * Program  : drastic64
 */


void luaK_code(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (*(int *)(param_1 + 4) < *(int *)(lVar4 + 0x18)) {
    lVar3 = param_1[2];
    *(undefined4 *)(*(long *)(lVar4 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = param_2;
    lVar2 = *(long *)(lVar4 + 0x48);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < *(int *)(lVar4 + 0x1c)) goto LAB_00214c38;
  }
  else {
    lVar2 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar4 + 0x38),
                          lVar4 + 0x18,4,0x7fffffff,"opcodes");
    iVar1 = *(int *)(param_1 + 4);
    *(long *)(lVar4 + 0x38) = lVar2;
    lVar3 = param_1[2];
    *(undefined4 *)(lVar2 + (long)iVar1 * 4) = param_2;
    lVar2 = *(long *)(lVar4 + 0x48);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < *(int *)(lVar4 + 0x1c)) goto LAB_00214c38;
  }
  lVar2 = luaM_growaux_(*(undefined8 *)(lVar3 + 0x38),lVar2,lVar4 + 0x1c,4,0x7fffffff,"opcodes");
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = param_1[2];
  *(long *)(lVar4 + 0x48) = lVar2;
LAB_00214c38:
  *(undefined4 *)(lVar2 + (long)iVar1 * 4) = *(undefined4 *)(lVar3 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


