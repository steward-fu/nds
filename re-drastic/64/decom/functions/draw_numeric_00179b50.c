/*
 * Ghidra decompilation
 *
 * Function : draw_numeric
 * Address  : 00179b50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_numeric(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined auStack_108 [256];
  long local_8;
  
  cVar2 = '\x05';
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)((long)param_2 + 0x3c);
  if (((iVar1 < 0x2711) && (cVar2 = '\x04', iVar1 < 0x3e9)) && (cVar2 = '\x03', iVar1 < 0x65)) {
    cVar2 = (10 < iVar1) + '\x01';
  }
  __sprintf_chk(auStack_108,1,0x100,"%s%*d",*param_2,cVar2,*(undefined4 *)param_2[6]);
  if (param_3 != 0) {
    param_3 = 0x17;
  }
  print_string(auStack_108,0xffff,param_3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),
               *(int *)(param_2 + 1) << 3);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


