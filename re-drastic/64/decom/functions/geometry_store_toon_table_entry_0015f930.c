/*
 * Ghidra decompilation
 *
 * Function : geometry_store_toon_table_entry
 * Address  : 0015f930
 * Program  : drastic64
 */


void geometry_store_toon_table_entry(long param_1,uint param_2,ulong param_3)

{
  char cVar1;
  
  *(short *)(param_1 + ((ulong)param_2 + 0x4c98) * 2 + 4) = (short)param_3;
  cVar1 = '\0';
  if ((param_3 & 0x1f) != 0) {
    cVar1 = ((byte)param_3 & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(param_1 + (ulong)param_2 + 0x99cc) = cVar1;
  cVar1 = '\0';
  if ((param_3 >> 5 & 0x1f) != 0) {
    cVar1 = ((byte)(param_3 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(param_1 + (ulong)(param_2 + 0x20) + 0x99cc) = cVar1;
  cVar1 = '\0';
  if ((param_3 >> 10 & 0x1f) != 0) {
    cVar1 = ((byte)(param_3 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(param_1 + (ulong)(param_2 + 0x40) + 0x99cc) = cVar1;
  return;
}


