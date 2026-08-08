/*
 * Ghidra decompilation
 *
 * Function : _GLOBAL__sub_I_SetKey13
 * Address  : 0010e560
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptData::SetKey13(char const*) */

void CryptData::_GLOBAL__sub_I_SetKey13(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 3;
  puVar2 = &Cache;
  do {
                    /* try { // try from 0010e590 to 0010e593 has its CatchHandler @ 0010e5d8 */
    SecPassword::SecPassword((SecPassword *)(puVar2 + 4));
                    /* try { // try from 0010e59c to 0010e59f has its CatchHandler @ 0010e5e0 */
    SecPassword::Set((SecPassword *)(puVar2 + 4),L"");
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x46;
  } while (lVar1 != -1);
  __cxa_atexit(__tcf_0,0,&__dso_handle);
  return;
}


