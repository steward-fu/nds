/*
 * Ghidra decompilation
 *
 * Function : print_coprocessor_status
 * Address  : 00182830
 * Program  : drastic64
 */


void print_coprocessor_status(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x2250);
  __printf_chk(1,"control:          %08x\n",*(undefined4 *)(lVar1 + 0x14));
  __printf_chk(1,"DTCM control:     %08x\n",*(undefined4 *)(lVar1 + 0x18));
  __printf_chk(1,"ITCM control:     %08x\n",*(undefined4 *)(lVar1 + 0x1c));
  __printf_chk(1,"DTCM offset:      %08x\n",*(undefined4 *)(lVar1 + 0x20));
  __printf_chk(1,"DTCM size:        %08x\n",*(undefined4 *)(lVar1 + 0x2c));
  __printf_chk(1,"ITCM size:        %08x\n",*(undefined4 *)(lVar1 + 0x38));
  __printf_chk(1,"Exception offset: %08x\n",*(undefined4 *)(lVar1 + 0x10));
  return;
}


