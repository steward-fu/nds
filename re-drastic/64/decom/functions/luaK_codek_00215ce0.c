/*
 * Ghidra decompilation
 *
 * Function : luaK_codek
 * Address  : 00215ce0
 * Program  : drastic64
 */


int luaK_codek(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0x3ffff < param_3) {
    iVar2 = luaK_code(param_1,param_2 << 6 | 2);
    luaK_code(param_1,param_3 << 6 | 0x2e);
    return iVar2;
  }
  lVar5 = *param_1;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = param_2 << 6 | param_3 << 0xe | 1;
  if (*(int *)(param_1 + 4) < *(int *)(lVar5 + 0x18)) {
    lVar4 = param_1[2];
    *(uint *)(*(long *)(lVar5 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = uVar1;
    lVar3 = *(long *)(lVar5 + 0x48);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_00215d60;
  }
  else {
    lVar3 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x38),
                          lVar5 + 0x18,4,0x7fffffff,"opcodes");
    iVar2 = *(int *)(param_1 + 4);
    *(long *)(lVar5 + 0x38) = lVar3;
    lVar4 = param_1[2];
    *(uint *)(lVar3 + (long)iVar2 * 4) = uVar1;
    lVar3 = *(long *)(lVar5 + 0x48);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_00215d60;
  }
  lVar3 = luaM_growaux_(*(undefined8 *)(lVar4 + 0x38),lVar3,lVar5 + 0x1c,4,0x7fffffff,"opcodes");
  iVar2 = *(int *)(param_1 + 4);
  lVar4 = param_1[2];
  *(long *)(lVar5 + 0x48) = lVar3;
LAB_00215d60:
  *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(lVar4 + 8);
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  return iVar2;
}


