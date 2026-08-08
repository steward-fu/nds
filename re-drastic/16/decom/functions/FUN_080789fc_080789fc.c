/*
 * Ghidra decompilation
 *
 * Function : FUN_080789fc
 * Address  : 080789fc
 * Program  : drastic16
 */


void FUN_080789fc(undefined4 param_1)

{
  int iVar1;
  sigaltstack local_a4;
  sigaction local_98;
  
  DAT_081c5050 = param_1;
  memset(&local_98,0,0x8c);
  local_a4.ss_flags = 1;
  local_a4.ss_sp = &DAT_0aaf5110;
  local_a4.ss_size = 0x4000;
  iVar1 = sigaltstack(&local_a4,(sigaltstack *)0x0);
  if (iVar1 < 0) {
    perror("sigalstack setup for signal handler stack failed");
  }
  local_98.__sigaction_handler.sa_handler = FUN_08078588;
  local_98.sa_flags = 0x8000004;
  iVar1 = sigaction(0xb,&local_98,(sigaction *)0x0);
  if (-1 < iVar1) {
    return;
  }
  perror("sigaction setup for SIGSEGV handler failed");
  return;
}


