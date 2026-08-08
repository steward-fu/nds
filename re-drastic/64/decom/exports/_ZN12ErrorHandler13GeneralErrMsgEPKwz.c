/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler13GeneralErrMsgEPKwz
 * Address  : 001c3e60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ErrorHandler::GeneralErrMsg(wchar_t const*, ...) */

void ErrorHandler::GeneralErrMsg(wchar_t *param_1,...)

{
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined *local_1120;
  undefined *puStack_1118;
  undefined8 *local_1110;
  undefined8 uStack_1108;
  undefined auStack_10b8 [4096];
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_1110 = &local_30;
  uStack_1108 = 0xffffff80ffffffd0;
  local_b8 = ___stack_chk_guard;
  local_1120 = (undefined *)register0x00000008;
  puStack_1118 = (undefined *)register0x00000008;
  local_b0 = in_d0;
  local_a0 = in_d1;
  local_90 = in_d2;
  local_80 = in_d3;
  local_70 = in_d4;
  local_60 = in_d5;
  local_50 = in_d6;
  local_40 = in_d7;
  local_30 = in_x2;
  uStack_28 = in_x3;
  local_20 = in_x4;
  uStack_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  __vswprintf_chk(auStack_10b8,0x400,1,0x400,in_x1,&local_1120);
  if (local_b8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_b8 - ___stack_chk_guard,0);
}


