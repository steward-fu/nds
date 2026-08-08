/*
 * Ghidra decompilation
 *
 * Function : str_find_aux
 * Address  : 0020fc30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void str_find_aux(undefined8 param_1,int param_2)

{
  void *__s1;
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long local_258;
  ulong local_248;
  ulong local_240;
  undefined4 local_238 [2];
  void *local_230;
  void *local_228;
  byte *local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar5 = (void *)luaL_checklstring(param_1,1,&local_248);
  pbVar6 = (byte *)luaL_checklstring(param_1,2,&local_240);
  iVar4 = luaL_optinteger(param_1,3,1);
  iVar12 = (int)pvVar5;
  uVar11 = local_240;
  if (iVar4 < 0) {
    if ((ulong)-(long)iVar4 <= local_248) {
      iVar4 = iVar4 + (int)local_248 + 1;
      goto LAB_0020fd2c;
    }
LAB_0020fcb8:
    local_258 = 1;
    pvVar10 = pvVar5;
    if (param_2 == 0) {
LAB_0020fd58:
      bVar1 = *pbVar6;
      if (bVar1 == 0x5e) {
        pbVar6 = pbVar6 + 1;
        uVar11 = uVar11 - 1;
        local_240 = uVar11;
      }
      local_228 = (void *)((long)pvVar5 + local_248);
      local_220 = pbVar6 + uVar11;
      local_238[0] = 200;
      local_230 = pvVar5;
      uStack_218 = param_1;
      do {
        local_210 = 0;
        lVar9 = match(local_238,pvVar10,pbVar6);
        if (lVar9 != 0) {
          if (param_2 == 0) {
            uVar11 = push_captures(local_238,pvVar10,lVar9);
          }
          else {
            lua_pushinteger(param_1,((int)pvVar10 - iVar12) + 1);
            lua_pushinteger(param_1,(int)lVar9 - iVar12);
            iVar4 = push_captures(local_238,0,0);
            uVar11 = (ulong)(iVar4 + 2);
          }
          goto LAB_0020fdd0;
        }
        bVar3 = pvVar10 <= local_228;
        bVar2 = local_228 != pvVar10;
        pvVar10 = (void *)((long)pvVar10 + 1);
      } while ((bVar1 != 0x5e && bVar3) && (bVar1 == 0x5e || bVar2));
    }
    else {
LAB_0020fccc:
      iVar4 = lua_toboolean(param_1,4);
      uVar11 = local_240;
      if (iVar4 == 0) {
        uVar13 = 0;
        do {
          pcVar8 = strpbrk((char *)(pbVar6 + uVar13),"^$*+?.([%-");
          if (pcVar8 != (char *)0x0) goto LAB_0020fd58;
          sVar7 = strlen((char *)(pbVar6 + uVar13));
          uVar13 = uVar13 + sVar7 + 1;
        } while (uVar13 <= uVar11);
      }
      if (uVar11 == 0) {
        if (pvVar10 != (void *)0x0) {
LAB_0020fed0:
          iVar12 = (int)pvVar10 - iVar12;
          lua_pushinteger(param_1,iVar12 + 1);
          lua_pushinteger(param_1,(int)local_240 + iVar12);
          uVar11 = 2;
          goto LAB_0020fdd0;
        }
      }
      else {
        uVar13 = (local_248 + 1) - local_258;
        if (uVar11 <= uVar13) {
          sVar7 = uVar13 - (uVar11 - 1);
          if (sVar7 != 0) {
            bVar1 = *pbVar6;
            pvVar5 = pvVar10;
            do {
              pvVar10 = memchr(pvVar5,(uint)bVar1,sVar7);
              if (pvVar10 == (void *)0x0) break;
              __s1 = (void *)((long)pvVar10 + 1);
              iVar4 = memcmp(__s1,pbVar6 + 1,uVar11 - 1);
              if (iVar4 == 0) goto LAB_0020fed0;
              sVar7 = sVar7 - ((long)__s1 - (long)pvVar5);
              pvVar5 = __s1;
            } while (sVar7 != 0);
          }
        }
      }
    }
  }
  else {
LAB_0020fd2c:
    if (iVar4 < 1) goto LAB_0020fcb8;
    if (iVar4 <= (int)local_248 + 1) {
      local_258 = (long)iVar4;
      pvVar10 = (void *)((long)pvVar5 + local_258 + -1);
      if (param_2 != 0) goto LAB_0020fccc;
      goto LAB_0020fd58;
    }
  }
  lua_pushnil(param_1);
  uVar11 = 1;
LAB_0020fdd0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11,local_8 - ___stack_chk_guard,0);
}


