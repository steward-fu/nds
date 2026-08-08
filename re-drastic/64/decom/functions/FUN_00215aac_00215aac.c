/*
 * Ghidra decompilation
 *
 * Function : FUN_00215aac
 * Address  : 00215aac
 * Program  : drastic64
 */


void FUN_00215aac(long *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar1 = param_4 << 0x17 | param_3 << 6 | param_2 | param_5 << 0xe;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (*(int *)(param_1 + 4) < *(int *)(lVar5 + 0x18)) {
    lVar4 = param_1[2];
    *(uint *)(*(long *)(lVar5 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = uVar1;
    lVar3 = *(long *)(lVar5 + 0x48);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_00215b28;
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
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_00215b28;
  }
  lVar3 = luaM_growaux_(*(undefined8 *)(lVar4 + 0x38),lVar3,lVar5 + 0x1c,4,0x7fffffff,"opcodes");
  iVar2 = *(int *)(param_1 + 4);
  lVar4 = param_1[2];
  *(long *)(lVar5 + 0x48) = lVar3;
LAB_00215b28:
  *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(lVar4 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


