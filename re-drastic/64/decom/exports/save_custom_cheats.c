/*
 * Ghidra decompilation
 *
 * Function : save_custom_cheats
 * Address  : 00181cf0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_custom_cheats(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  FILE *__stream;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  char acStack_828 [2080];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_828,1,0x820,"%s%ccheats%c%s.cht",param_2 + 0x8ab80,0x2f,0x2f,
                param_2 + 0x8b380);
  __stream = fopen(acStack_828,"wb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Can\'t save custom cheat file at %s.\n",acStack_828);
    uVar3 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x420) != 0) {
      do {
        plVar5 = (long *)(*(long *)(param_1 + 0x410) + uVar6 * 0x28);
        __fprintf_chk(__stream,1,"[%s]",plVar5[1]);
        if (*(char *)plVar5[4] != '\0') {
          fputc(0x2b,__stream);
        }
        fputc(10,__stream);
        if (*(int *)(plVar5 + 3) != 0) {
          uVar4 = 0;
          do {
            uVar2 = uVar4 + 1;
            uVar1 = (ulong)uVar4;
            uVar4 = uVar4 + 2;
            __fprintf_chk(__stream,1,"%08X %08X\n",*(undefined4 *)(*plVar5 + uVar1 * 4),
                          *(undefined4 *)(*plVar5 + (ulong)uVar2 * 4));
          } while (uVar4 < *(uint *)(plVar5 + 3));
        }
        fputc(10,__stream);
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x420));
    }
    fclose(__stream);
    uVar3 = 0;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
  }
  return;
}


