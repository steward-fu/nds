/*
 * Ghidra decompilation
 *
 * Function : initialize_ipc
 * Address  : 080229f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_ipc(ipc_struct *ipc,cpu_struct *cpu,ipc_struct *alternate_ipc)

{
  u8 *puVar1;
  
  puVar1 = cpu->io_region;
  ipc->cpu = cpu;
  ipc->alternate_ipc = alternate_ipc;
  ipc->io_region = puVar1;
  return;
}


