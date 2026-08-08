/*
 * Ghidra decompilation
 *
 * Function : __do_global_dtors_aux
 * Address  : 0010e880
 * Program  : drastic64
 */


void __do_global_dtors_aux(void)

{
  if (completed_9126 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_9126 = '\x01';
  }
  return;
}


