/*
 * Ghidra decompilation
 *
 * Function : luaD_protectedparser
 * Address  : 001f7230
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int luaD_protectedparser(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = *(undefined *)(param_1 + 0xc9);
  sVar4 = *(short *)(param_1 + 0xc4) + 1;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  *(short *)(param_1 + 0xc4) = sVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  local_68 = param_2;
  local_18 = param_4;
  uStack_10 = param_3;
  iVar6 = luaD_rawrunprotected(param_1,f_parser,&local_68);
  if (iVar6 != 0) {
    lVar13 = *(long *)(param_1 + 0x38);
    lVar9 = lVar9 - lVar12;
    puVar3 = (undefined8 *)(lVar13 + lVar9);
    luaF_close(param_1,puVar3);
    if (iVar6 == 4) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0xf0);
      *(long *)(lVar13 + lVar9) = lVar12;
      *(uint *)(puVar3 + 1) = *(byte *)(lVar12 + 8) | 0x40;
    }
    else if (iVar6 == 6) {
      lVar12 = luaS_newlstr(param_1,"error in error handling",0x17);
      *(long *)(lVar13 + lVar9) = lVar12;
      *(uint *)(puVar3 + 1) = *(byte *)(lVar12 + 8) | 0x40;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
      *puVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
      puVar3[1] = uVar7;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
    *(long *)(param_1 + 0x20) = lVar10;
    *(short *)(param_1 + 0xc4) = sVar4;
    *(undefined *)(param_1 + 0xc9) = uVar5;
    puVar3 = puVar3 + 2;
    while (lVar10 != 0) {
      puVar1 = (ulong *)(lVar10 + 8);
      lVar10 = *(long *)(lVar10 + 0x10);
      if (puVar3 < (undefined8 *)*puVar1) {
        puVar3 = (undefined8 *)*puVar1;
      }
    }
    iVar8 = (int)((long)puVar3 - *(long *)(param_1 + 0x38) >> 4);
    iVar2 = iVar8 + 1;
    if (*(int *)(param_1 + 0xb8) < 0xf4241) {
      luaE_shrinkCI(param_1);
    }
    else {
      luaE_freeCI();
    }
    if (iVar2 < 0xf4241) {
      iVar8 = iVar8 + 8;
      if (-1 < iVar2) {
        iVar8 = iVar2;
      }
      iVar2 = iVar2 + (iVar8 >> 3) + 10;
      if (1000000 < iVar2) {
        iVar2 = 1000000;
      }
      if (iVar2 < *(int *)(param_1 + 0xb8)) {
        luaD_reallocstack(param_1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar11;
  local_60 = luaM_realloc_(param_1,local_60,local_50,0);
  local_50 = 0;
  luaM_realloc_(param_1,local_48,(long)local_3c << 1,0);
  luaM_realloc_(param_1,local_38,(long)local_2c * 0x18,0);
  luaM_realloc_(param_1,local_28,(long)local_1c * 0x18,0);
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + -1;
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


