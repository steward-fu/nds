/*
 * Ghidra decompilation
 *
 * Function : luaK_setlist
 * Address  : 00218120
 * Program  : drastic64
 */


void luaK_setlist(long *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_4 << 0x17;
  if (param_4 == -1) {
    uVar1 = 0;
  }
  iVar2 = (param_3 + -1) / 0x32 + 1;
  uVar1 = uVar1 | param_2 << 6;
  if (0x1ff < iVar2) {
    luaK_code(param_1,uVar1 | 0x2b);
    luaK_code(param_1,iVar2 * 0x40 | 0x2e);
    *(char *)((long)param_1 + 0x3c) = (char)param_2 + '\x01';
    return;
  }
  lVar5 = *param_1;
  uVar1 = uVar1 | iVar2 * 0x4000 | 0x2b;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (*(int *)(param_1 + 4) < *(int *)(lVar5 + 0x18)) {
    lVar4 = param_1[2];
    *(uint *)(*(long *)(lVar5 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = uVar1;
    lVar3 = *(long *)(lVar5 + 0x48);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_002181c8;
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
    if (iVar2 < *(int *)(lVar5 + 0x1c)) goto LAB_002181c8;
  }
  lVar3 = luaM_growaux_(*(undefined8 *)(lVar4 + 0x38),lVar3,lVar5 + 0x1c,4,0x7fffffff,"opcodes");
  iVar2 = *(int *)(param_1 + 4);
  lVar4 = param_1[2];
  *(long *)(lVar5 + 0x48) = lVar3;
LAB_002181c8:
  *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(lVar4 + 8);
  *(char *)((long)param_1 + 0x3c) = (char)param_2 + '\x01';
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


