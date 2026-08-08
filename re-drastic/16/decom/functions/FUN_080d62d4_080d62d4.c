/*
 * Ghidra decompilation
 *
 * Function : FUN_080d62d4
 * Address  : 080d62d4
 * Program  : drastic16
 */


pthread_t FUN_080d62d4(__start_routine *param_1,void *param_2)

{
  pthread_attr_t pStack_1c4;
  wchar_t awStack_1a0 [100];
  pthread_t local_10;
  int local_c;
  
  pthread_attr_init(&pStack_1c4);
  pthread_attr_setdetachstate(&pStack_1c4,0);
  local_c = pthread_create(&local_10,&pStack_1c4,param_1,param_2);
  if (local_c != 0) {
    swprintf(awStack_1a0,100,L"\npthread_create failed, code %d\n",local_c);
    FUN_080b7044(&DAT_081cd0a0,awStack_1a0);
    FUN_080b7478(&DAT_081cd0a0);
    FUN_080b71f4(&DAT_081cd0a0,2);
  }
  return local_10;
}


