/*
 * Ghidra decompilation
 *
 * Function : print_string
 * Address  : 00187f00
 * Program  : drastic64
 */


void print_string(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = get_screen_ptr(0);
  if ((lVar2 == 0) && (lVar2 = get_screen_ptr(1), lVar2 == 0)) {
    return;
  }
  uVar1 = get_screen_pitch_text(0);
  print_string_ext(param_1,param_2,param_3,param_4,param_5,lVar2,0,uVar1,0);
  return;
}


