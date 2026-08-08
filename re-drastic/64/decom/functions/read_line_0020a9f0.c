/*
 * Ghidra decompilation
 *
 * Function : read_line
 * Address  : 0020a9f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_line(undefined8 param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long local_1028;
  ulong local_1020;
  ulong local_1018;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_buffinit(param_1,&local_1028);
  do {
    lVar3 = luaL_prepbuffsize(&local_1028,0x1000);
    lVar5 = 0;
    flockfile(param_2);
    do {
      pbVar4 = (byte *)param_2->_IO_read_ptr;
      if (pbVar4 < param_2->_IO_read_end) {
        param_2->_IO_read_ptr = (char *)(pbVar4 + 1);
        uVar2 = (uint)*pbVar4;
      }
      else {
        uVar2 = __uflow(param_2);
        if (uVar2 == 0xffffffff) {
          funlockfile(param_2);
          local_1018 = local_1018 + (long)(int)lVar5;
          luaL_pushresult(&local_1028);
          lVar5 = lua_rawlen(param_1,0xffffffff);
          bVar1 = lVar5 != 0;
          goto LAB_0020aad4;
        }
      }
      if (uVar2 == 10) {
        funlockfile(param_2);
        local_1018 = lVar5 + local_1018;
        if (param_3 == 1) {
          luaL_pushresult(&local_1028);
          bVar1 = true;
        }
        else if (local_1018 < local_1020) {
          *(undefined *)(local_1028 + local_1018) = 10;
          local_1018 = local_1018 + 1;
          luaL_pushresult(&local_1028);
          bVar1 = true;
        }
        else {
          luaL_prepbuffsize(&local_1028,1);
          *(undefined *)(local_1028 + local_1018) = 10;
          local_1018 = local_1018 + 1;
          luaL_pushresult(&local_1028);
          bVar1 = true;
        }
LAB_0020aad4:
        if (local_8 - ___stack_chk_guard == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar1,local_8 - ___stack_chk_guard,0);
      }
      *(char *)(lVar3 + lVar5) = (char)uVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x1000);
    funlockfile(param_2);
    local_1018 = local_1018 + 0x1000;
  } while( true );
}


