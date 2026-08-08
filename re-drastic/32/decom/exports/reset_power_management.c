/*
 * Ghidra decompilation
 *
 * Function : reset_power_management
 * Address  : 08091c80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_power_management(power_management_struct *power_management)

{
  power_management->state = '\0';
  power_management->index = '\0';
  power_management->registers[0] = '\x7f';
  power_management->registers[1] = '\0';
  power_management->registers[2] = '\0';
  power_management->registers[3] = '\0';
  power_management->registers[4] = '\x0f';
  return;
}


