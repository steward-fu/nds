/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink30
 * Address  : 001f0790
 * Program  : drastic64
 */


/* ExtractUnixLink30(ComprDataIO&, Archive&, wchar_t const*) */

undefined8 ExtractUnixLink30(ComprDataIO *param_1,Archive *param_2,wchar_t *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsLink(*(uint *)(param_2 + 0x878c));
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = ExtractUnixLink30(param_1,param_2,param_3);
  return uVar2;
}


