/*
 * Ghidra decompilation
 *
 * Function : FUN_0010e55c
 * Address  : 0010e55c
 * Program  : drastic64
 */


void FUN_0010e55c(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 3;
  puVar2 = &Cache;
  do {
    SecPassword::SecPassword((SecPassword *)(puVar2 + 4));
    SecPassword::Set((SecPassword *)(puVar2 + 4),L"");
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x46;
  } while (lVar1 != -1);
  __cxa_atexit(__tcf_0,0,&__dso_handle);
  return;
}


