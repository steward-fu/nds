/*
 * Ghidra decompilation
 *
 * Function : load_system_file
 * Address  : 0010ea80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_system_file(long param_1,undefined8 param_2,void *param_3,int param_4)

{
  FILE *__stream;
  long __off;
  ulong uVar1;
  size_t sVar2;
  undefined8 uVar3;
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_428,1,0x420,"%s%csystem%c%s",param_1 + 0x8a780,0x2f,0x2f,param_2);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"***Failed to load system file %s.\n",param_2);
    uVar3 = 0xffffffff;
  }
  else {
    __off = ftell(__stream);
    fseek(__stream,0,2);
    uVar1 = ftell(__stream);
    fseek(__stream,__off,0);
    if ((int)uVar1 == param_4) {
      sVar2 = fread(param_3,uVar1 & 0xffffffff,1,__stream);
      uVar3 = 0;
      if (sVar2 != 1) {
        __printf_chk(1,"***System file %s failed to load.\n",param_2);
        uVar3 = 0xffffffff;
      }
    }
    else {
      __printf_chk(1,"***System file %s is the wrong size (should be %d bytes, is %d)\n",param_2,
                   param_4,uVar1 & 0xffffffff);
      uVar3 = 0xffffffff;
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


