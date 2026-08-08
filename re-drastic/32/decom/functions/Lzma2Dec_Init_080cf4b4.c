/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_Init
 * Address  : 080cf4b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void Lzma2Dec_Init(CLzma2Dec *p)

{
  p->state = 0;
  p->needInitDic = 1;
  p->needInitState = 1;
  p->needInitProp = 1;
  LzmaDec_Init(&p->decoder);
  return;
}


