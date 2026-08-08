/*
 * Ghidra decompilation
 *
 * Function : power_management_transfer
 * Address  : 08091960
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 power_management_transfer(power_management_struct *power_management,u8 value)

{
  u8 uVar1;
  byte bVar2;
  uint uVar3;
  
  if (power_management->state != '\0') {
    uVar3 = power_management->index & 0x7f;
    bVar2 = power_management->index >> 7 ^ 1;
    uVar1 = power_management->registers[uVar3];
    if (uVar3 == 1) {
      bVar2 = 0;
    }
    if (bVar2 != 0) {
      power_management->registers[uVar3] = value;
    }
    power_management->state = '\0';
    return uVar1;
  }
  power_management->state = '\x01';
  power_management->index = value;
  return '\0';
}


