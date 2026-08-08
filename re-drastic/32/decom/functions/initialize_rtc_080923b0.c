/*
 * Ghidra decompilation
 *
 * Function : initialize_rtc
 * Address  : 080923b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_rtc(rtc_struct *rtc,system_struct *system)

{
  rtc->system = system;
  return;
}


