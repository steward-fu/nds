/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b85c
 * Address  : 0807b85c
 * Program  : drastic16
 */


void FUN_0807b85c(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_cr9;
  undefined4 in_cr12;
  
  snd_lib_error_set_handler(&DAT_0807b7ec);
  FUN_080789fc(param_1);
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr9,in_cr12);
  coprocessor_moveto(0xf,0,0,uVar1 & 0xfffffff7 | 5,in_cr9,in_cr12);
  coprocessor_moveto(0xf,0,1,0x80000000,in_cr9,in_cr12);
  return;
}


