/*
 * Ghidra decompilation
 *
 * Function : set_debug_breakpoint
 * Address  : 0010f090
 * Program  : drastic64
 */


void set_debug_breakpoint(undefined8 param_1,long param_2,undefined4 param_3,char *param_4)

{
  ulonglong uVar1;
  
  set_debug_mode(param_2,param_3);
  if (param_4 != (char *)0x0) {
    uVar1 = strtoull(param_4,(char **)0x0,0x10);
    *(ulonglong *)(param_2 + 0x110) = uVar1;
  }
  return;
}


