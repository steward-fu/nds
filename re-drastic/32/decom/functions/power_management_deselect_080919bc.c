/*
 * Ghidra decompilation
 *
 * Function : power_management_deselect
 * Address  : 080919bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void power_management_deselect(power_management_struct *power_management)

{
  power_management->state = '\0';
  return;
}


