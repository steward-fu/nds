/*
 * Ghidra decompilation
 *
 * Function : spi_control_write
 * Address  : 001710d0
 * Program  : drastic64
 */


void spi_control_write(long param_1,uint param_2)

{
  if (((*(short *)(param_1 + 0x2450) < 0) && ((param_2 & 0xffff) >> 0xf == 0)) &&
     ((*(ushort *)(param_1 + 0x2450) >> 8 & 3) == 1)) {
    backup_deselect();
  }
  *(short *)(param_1 + 0x2450) = (short)param_2;
  return;
}


