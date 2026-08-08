/*
 * Ghidra decompilation
 *
 * Function : gotostat
 * Address  : 001fc5b0
 * Program  : drastic64
 */


void gotostat(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x10) == 0x10a) {
    luaX_next();
    if (*(int *)(param_1 + 0x10) != 0x124) {
                    /* WARNING: Subroutine does not return */
      error_expected(param_1,0x124);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    luaX_next();
  }
  else {
    luaX_next();
    uVar4 = luaS_new(*(undefined8 *)(param_1 + 0x38),"break");
  }
  lVar7 = *(long *)(param_1 + 0x58);
  iVar2 = *(int *)(lVar7 + 0x18);
  lVar5 = *(long *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x1c) <= iVar2) {
    lVar5 = luaM_growaux_(*(undefined8 *)(param_1 + 0x38),lVar5,lVar7 + 0x1c,0x18,0x7fff,
                          "labels/gotos");
    *(long *)(lVar7 + 0x10) = lVar5;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  lVar1 = lVar5 + (long)iVar2 * 0x18;
  *(undefined8 *)(lVar5 + (long)iVar2 * 0x18) = uVar4;
  *(undefined4 *)(lVar1 + 0xc) = uVar3;
  *(undefined *)(lVar1 + 0x10) = *(undefined *)(lVar6 + 0x3a);
  *(undefined4 *)(lVar1 + 8) = param_2;
  *(int *)(lVar7 + 0x18) = iVar2 + 1;
  findlabel(param_1,iVar2);
  return;
}


