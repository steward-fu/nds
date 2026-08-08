/*
 * Ghidra decompilation
 *
 * Function : __do_global_dtors_aux
 * Address  : 0800633c
 * Program  : drastic
 */


void __do_global_dtors_aux(void)

{
  if (completed_9910 == '\0') {
    deregister_tm_clones();
    completed_9910 = '\x01';
  }
  return;
}


