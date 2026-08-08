/*
 * Ghidra decompilation
 *
 * Function : luaK_indexed
 * Address  : 00217900
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaK_indexed(long param_1,int *param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  long local_28;
  undefined4 local_20;
  uint local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(char *)((long)param_2 + 6) = (char)param_2[1];
  if (param_3[2] == param_3[3]) {
    luaK_dischargevars(param_1,param_3);
    uVar5 = *param_3;
    bVar3 = uVar5 == 5;
    if (bVar3) goto LAB_00217a74;
LAB_00217958:
    if (uVar5 < 5 || bVar3) {
      if (uVar5 == 4) {
        uVar5 = param_3[1];
        goto joined_r0x00217a58;
      }
      if ((uVar5 != 0) && (*(int *)(param_1 + 0x2c) < 0x100)) {
        if (uVar5 == 1) {
          local_28 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
          local_20 = 0x45;
          local_10 = 0;
          uVar5 = addk(param_1,&local_28,local_18);
        }
        else {
          local_18[0] = (uint)(uVar5 == 2);
          local_10 = 1;
          uVar5 = addk(param_1,local_18);
        }
        uVar4 = (ushort)uVar5 | 0x100;
        *param_3 = 4;
        param_3[1] = uVar5;
        goto LAB_0021797c;
      }
    }
    else if (uVar5 == 6) {
      local_18[0] = param_3[1];
      local_28 = (long)(int)local_18[0];
      local_20 = 2;
      local_10 = 0x13;
      uVar5 = addk(param_1,&local_28,local_18);
      *param_3 = 4;
      param_3[1] = uVar5;
joined_r0x00217a58:
      if ((int)uVar5 < 0x100) goto LAB_00217a5c;
    }
LAB_00217970:
    uVar4 = luaK_exp2anyreg(param_1,param_3);
  }
  else {
    luaK_exp2anyreg();
    uVar5 = *param_3;
    bVar3 = uVar5 == 5;
    if (!bVar3) goto LAB_00217958;
LAB_00217a74:
    local_18[0] = param_3[1];
    local_10 = 3;
    uVar5 = addk(param_1,local_18);
    *param_3 = 4;
    param_3[1] = uVar5;
    if (0xff < (int)uVar5) goto LAB_00217970;
LAB_00217a5c:
    uVar4 = (ushort)uVar5 | 0x100;
  }
LAB_0021797c:
  iVar1 = *param_2;
  *(ushort *)(param_2 + 1) = uVar4;
  lVar2 = local_8 - ___stack_chk_guard;
  *param_2 = 10;
  *(char *)((long)param_2 + 7) = (iVar1 == 9) + '\b';
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2,0);
}


