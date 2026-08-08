/*
 * Ghidra decompilation
 *
 * Function : initialize_signal_handlers
 * Address  : 080c6ab4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_signal_handlers(system_struct *system)

{
  int iVar1;
  int iVar2;
  sigaltstack signal_stack_definition;
  sigaction action_definition;
  
  iVar1 = __stack_chk_guard;
  _nds_system = system;
  memset(&action_definition,0,0x8c);
  signal_stack_definition.ss_sp = signal_handler_stack;
  signal_stack_definition.ss_flags = 1;
  signal_stack_definition.ss_size = 0x4000;
  iVar2 = sigaltstack((sigaltstack *)&signal_stack_definition,(sigaltstack *)0x0);
  if (iVar2 < 0) {
    perror("sigalstack setup for signal handler stack failed");
  }
  action_definition.__sigaction_handler.sa_handler = signal_segv_handler;
  action_definition.sa_flags = 0x8000004;
  iVar2 = sigaction(0xb,(sigaction *)&action_definition,(sigaction *)0x0);
  if (iVar2 < 0) {
    perror("sigaction setup for SIGSEGV handler failed");
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


