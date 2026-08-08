/*
 * Ghidra decompilation
 *
 * Function : reset_input
 * Address  : 00189020
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_input(long param_1)

{
  char *__filename;
  int iVar1;
  undefined auStack_8a8 [2208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __filename = auStack_8a8 + 0x80;
  __sprintf_chk(__filename,1,0x820,"%s%cinput_record%c%s.ir",*(long *)(param_1 + 0x80008) + 0x8a780,
                0x2f,0x2f,*(long *)(param_1 + 0x80008) + 0x8b380);
  iVar1 = __xstat(0,__filename,(stat *)auStack_8a8);
  if (iVar1 == 0) {
    input_log_playback(param_1,__filename);
  }
  *(long *)(param_1 + 0x80000) = param_1;
  *(undefined8 *)(param_1 + 0x80010) = 0;
  *(undefined4 *)(param_1 + 0x80018) = 0;
  *(undefined2 *)(param_1 + 0x8001c) = 0;
  *(undefined *)(param_1 + 0x8003c) = 0;
  platform_initialize_input();
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


