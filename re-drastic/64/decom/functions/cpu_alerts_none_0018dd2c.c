/*
 * Ghidra decompilation
 *
 * Function : cpu_alerts_none
 * Address  : 0018dd2c
 * Program  : drastic64
 */


ulong cpu_alerts_none(void)

{
  long unaff_x28;
  
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return (ulong)*(uint *)(unaff_x28 + 0x2354);
}


