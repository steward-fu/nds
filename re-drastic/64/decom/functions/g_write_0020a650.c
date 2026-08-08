/*
 * Ghidra decompilation
 *
 * Function : g_write
 * Address  : 0020a650
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void g_write(undefined8 param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *__ptr;
  undefined8 uVar5;
  size_t sVar6;
  float fVar7;
  size_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = lua_gettop(param_1,0);
  if (iVar2 - param_3 != 0) {
    iVar2 = (iVar2 - param_3) + param_3;
    bVar1 = true;
    do {
      while (iVar3 = lua_type(param_1,param_3), iVar3 == 3) {
        iVar3 = lua_isinteger(param_1,param_3);
        if (iVar3 == 0) {
          fVar7 = (float)lua_tonumberx(param_1,param_3,0);
          iVar3 = __fprintf_chk((double)fVar7,param_2,1,&DAT_00229a78);
        }
        else {
          uVar4 = lua_tointegerx(param_1);
          iVar3 = __fprintf_chk(param_2,1,"%d",uVar4);
        }
        param_3 = param_3 + 1;
        bVar1 = (bool)(0 < iVar3 & bVar1);
        if (iVar2 == param_3) goto LAB_0020a738;
      }
      __ptr = (void *)luaL_checklstring(param_1,param_3,&local_10);
      if (bVar1) {
        sVar6 = fwrite(__ptr,1,local_10,param_2);
        bVar1 = local_10 == sVar6;
      }
      param_3 = param_3 + 1;
    } while (iVar2 != param_3);
LAB_0020a738:
    if (!bVar1) {
      uVar5 = luaL_fileresult(param_1,0,0);
      goto LAB_0020a748;
    }
  }
  uVar5 = 1;
LAB_0020a748:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5,local_8 - ___stack_chk_guard,0);
  }
  return;
}


