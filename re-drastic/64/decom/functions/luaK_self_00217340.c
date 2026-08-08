/*
 * Ghidra decompilation
 *
 * Function : luaK_self
 * Address  : 00217340
 * Program  : drastic64
 */


void luaK_self(long *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  luaK_exp2anyreg();
  uVar2 = param_2[1];
  uVar7 = (uint)*(byte *)((long)param_1 + 0x3c);
  if (((*param_2 == 7) && ((uVar2 >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar2)) {
    uVar1 = uVar7 - 1;
    uVar7 = uVar1 & 0xff;
    *(char *)((long)param_1 + 0x3c) = (char)uVar1;
  }
  lVar4 = *param_1;
  *param_2 = 7;
  param_2[1] = uVar7;
  uVar1 = uVar7 + 2;
  if (*(byte *)(lVar4 + 0xc) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"function or expression too complex");
    }
    *(char *)(lVar4 + 0xc) = (char)uVar1;
  }
  *(char *)((long)param_1 + 0x3c) = (char)uVar1;
  iVar3 = luaK_exp2RK(param_1,param_3);
  lVar4 = *param_1;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar7 = iVar3 << 0xe | uVar2 << 0x17 | uVar7 << 6 | 0xc;
  if (*(int *)(param_1 + 4) < *(int *)(lVar4 + 0x18)) {
    lVar6 = param_1[2];
    *(uint *)(*(long *)(lVar4 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = uVar7;
    lVar5 = *(long *)(lVar4 + 0x48);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 < *(int *)(lVar4 + 0x1c)) goto LAB_0021740c;
  }
  else {
    lVar5 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar4 + 0x38),
                          lVar4 + 0x18,4,0x7fffffff,"opcodes");
    iVar3 = *(int *)(param_1 + 4);
    *(long *)(lVar4 + 0x38) = lVar5;
    lVar6 = param_1[2];
    *(uint *)(lVar5 + (long)iVar3 * 4) = uVar7;
    lVar5 = *(long *)(lVar4 + 0x48);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 < *(int *)(lVar4 + 0x1c)) goto LAB_0021740c;
  }
  lVar5 = luaM_growaux_(*(undefined8 *)(lVar6 + 0x38),lVar5,lVar4 + 0x1c,4,0x7fffffff,"opcodes");
  iVar3 = *(int *)(param_1 + 4);
  lVar6 = param_1[2];
  *(long *)(lVar4 + 0x48) = lVar5;
LAB_0021740c:
  *(undefined4 *)(lVar5 + (long)iVar3 * 4) = *(undefined4 *)(lVar6 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (((*param_3 == 7) && (((uint)param_3[1] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[1])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  return;
}


