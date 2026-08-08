/*
 * Ghidra decompilation
 *
 * Function : luaO_tostring
 * Address  : 001fb100
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaO_tostring(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char acStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 1) == 0x13) {
    iVar2 = __sprintf_chk(acStack_40,1,0x32,"%d",*(float *)param_2);
    lVar5 = (long)iVar2;
  }
  else {
    iVar2 = __sprintf_chk((double)*(float *)param_2,acStack_40,1,0x32,&DAT_00229a78);
    sVar3 = strspn(acStack_40,"-0123456789");
    lVar5 = (long)iVar2;
    if (acStack_40[sVar3] == '\0') {
      acStack_40[iVar2] = '.';
      acStack_40[lVar5 + 1] = '0';
      lVar5 = lVar5 + 2;
    }
  }
  lVar4 = luaS_newlstr(param_1,acStack_40,lVar5);
  lVar5 = local_8 - ___stack_chk_guard;
  *param_2 = lVar4;
  uVar1 = *(byte *)(lVar4 + 8) | 0x40;
  *(uint *)(param_2 + 1) = uVar1;
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,lVar5,0);
  }
  return;
}


