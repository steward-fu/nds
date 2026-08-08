/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive10SeekToNextEv
 * Address  : 001ba020
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::SeekToNext() */

void Archive::SeekToNext(void)

{
  char cVar1;
  long *in_x0;
  longlong lVar2;
  
  lVar2 = in_x0[0x2240];
  if (*(code **)(*in_x0 + 0x18) != Seek) {
                    /* WARNING: Could not recover jumptable at 0x001ba0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0x18))(in_x0,lVar2,0);
    return;
  }
  cVar1 = QuickOpen::Seek((QuickOpen *)(in_x0 + 0xec6),lVar2,0);
  if (cVar1 != '\0') {
    return;
  }
  File::Seek((File *)in_x0,lVar2,0);
  return;
}


