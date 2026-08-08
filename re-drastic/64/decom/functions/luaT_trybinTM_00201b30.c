/*
 * Ghidra decompilation
 *
 * Function : luaT_trybinTM
 * Address  : 00201b30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaT_trybinTM(long param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *(uint *)(param_2 + 1) & 0xf;
  if (uVar1 == 5) goto LAB_00201ce8;
  if (uVar1 == 7) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8 + 0x1b8);
  }
  do {
    if (lVar3 == 0) {
      puVar4 = &luaO_nilobject_;
      iVar2 = DAT_00229c08;
    }
    else {
      puVar4 = (undefined8 *)
               luaH_getstr(lVar3,*(undefined8 *)
                                  (*(long *)(param_1 + 0x18) + (ulong)param_5 * 8 + 0xf8));
      iVar2 = *(int *)(puVar4 + 1);
    }
    if (iVar2 != 0) goto LAB_00201bb0;
    uVar1 = *(uint *)(param_3 + 1) & 0xf;
    if (uVar1 == 5) {
      lVar3 = *(long *)(*param_3 + 0x28);
LAB_00201c74:
      if (lVar3 != 0) goto LAB_00201c78;
LAB_00201d0c:
      puVar4 = &luaO_nilobject_;
    }
    else {
      if (uVar1 != 7) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8 + 0x1b8);
        goto LAB_00201c74;
      }
      lVar3 = *(long *)(*param_3 + 0x10);
      if (lVar3 == 0) goto LAB_00201d0c;
LAB_00201c78:
      puVar4 = (undefined8 *)
               luaH_getstr(lVar3,*(undefined8 *)
                                  (*(long *)(param_1 + 0x18) + (ulong)param_5 * 8 + 0xf8));
    }
    if (*(int *)(puVar4 + 1) != 0) {
LAB_00201bb0:
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      uVar6 = puVar4[1];
      lVar3 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(param_1 + 0x38);
      *puVar5 = *puVar4;
      puVar5[1] = uVar6;
      lVar7 = param_2[1];
      puVar5[2] = *param_2;
      puVar5[3] = lVar7;
      lVar7 = *param_3;
      lVar8 = param_3[1];
      *(undefined8 **)(param_1 + 0x10) = puVar5 + 6;
      puVar5[4] = lVar7;
      puVar5[5] = lVar8;
      luaD_call(param_1,puVar5,1,*(byte *)(lVar3 + 0x42) & 2);
      lVar3 = *(long *)(param_1 + 0x10);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (param_4 - lVar9));
      *(long *)(param_1 + 0x10) = lVar3 + -0x10;
      uVar6 = *(undefined8 *)(lVar3 + -8);
      *puVar4 = *(undefined8 *)(lVar3 + -0x10);
      puVar4[1] = uVar6;
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
      }
      return;
    }
    if (param_5 == 0x13) {
LAB_00201ca8:
      if (*(int *)(param_2 + 1) != 3) goto LAB_00201d30;
      local_c = *(undefined4 *)param_2;
    }
    else {
      if (param_5 < 0x14) {
        param_5 = param_5 - 0xd;
        if (4 < param_5) goto LAB_00201d74;
        goto LAB_00201ca8;
      }
      if (param_5 != 0x16) {
LAB_00201d74:
                    /* WARNING: Subroutine does not return */
        luaG_opinterror(param_1,param_2,param_3,"perform arithmetic on");
      }
      luaG_concaterror(param_1,param_2,param_3);
LAB_00201d30:
      iVar2 = luaV_tonumber_(param_2,&local_c);
      if (iVar2 == 0) {
LAB_00201d40:
                    /* WARNING: Subroutine does not return */
        luaG_opinterror(param_1,param_2,param_3,"perform bitwise operation on");
      }
    }
    if (*(int *)(param_3 + 1) == 3) {
      local_c = *(undefined4 *)param_3;
    }
    else {
      iVar2 = luaV_tonumber_(param_3,&local_c);
      if (iVar2 == 0) goto LAB_00201d40;
    }
    luaG_tointerror(param_1,param_2,param_3);
LAB_00201ce8:
    lVar3 = *(long *)(*param_2 + 0x28);
  } while( true );
}


