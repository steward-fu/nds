/*
 * Ghidra decompilation
 *
 * Function : store_wifi_16
 * Address  : 00112670
 * Program  : drastic64
 */


void store_wifi_16(long param_1,ulong param_2,uint param_3)

{
  if (0x3fff < ((uint)param_2 & 0xffff) - 0x4000) {
    if ((((uint)param_2 & 0x3fff) == 0x158) && (((param_3 & 0xffff) >> 0xc & 3) == 1)) {
      *(undefined *)(param_1 + ((ulong)(param_3 & 0xffff) & 0x7f) + 0xfb9b8) =
           *(undefined *)(param_1 + 0xfb712);
    }
    *(short *)(param_1 + (param_2 & 0x3fff) + 0xfb5b8) = (short)param_3;
    return;
  }
  *(short *)(param_1 + (param_2 & 0x3fff) + 0x17070) = (short)param_3;
  return;
}


