/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_16
 * Address  : 001117f0
 * Program  : drastic64
 */


void store_io_register_arm7_16(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = param_3 & 0xffff;
  if (param_2 - 0xba < 0x445) {
                    /* WARNING: Could not recover jumptable at 0x00111878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0011187c + (long)*(short *)(&DAT_0021b988 + (ulong)(param_2 - 0xba) * 2) * 4))()
    ;
    return;
  }
  if (0x7fffff < param_2) {
    uVar2 = (ulong)param_2 & 0x3fff;
    if ((param_2 & 0xffff) - 0x4000 < 0x4000) {
      *(short *)(param_1 + uVar2 + 0x17070) = (short)param_3;
    }
    else {
      if (((param_2 & 0x3fff) == 0x158) && ((uVar1 >> 0xc & 3) == 1)) {
        *(undefined *)(param_1 + ((ulong)uVar1 & 0x7f) + 0xfb9b8) =
             *(undefined *)(param_1 + 0xfb712);
      }
      *(short *)(param_1 + uVar2 + 0xfb5b8) = (short)param_3;
    }
    return;
  }
  store_io_register_arm7_8(param_1,(ulong)param_2,(ulong)uVar1);
  store_io_register_arm7_8(param_1,param_2 + 1,uVar1 >> 8);
  return;
}


