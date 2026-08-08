/*
 * Ghidra decompilation
 *
 * Function : Seek
 * Address  : 001b9fc0
 * Program  : drastic64
 */


/* Archive::Seek(long long, int) */

void __thiscall Archive::Seek(Archive *this,longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  File::Seek((File *)this,param_1,param_2);
  return;
}


