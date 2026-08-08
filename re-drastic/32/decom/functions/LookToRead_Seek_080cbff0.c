/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Seek
 * Address  : 080cbff0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookToRead_Seek(void *pp,Int64 *pos,ESzSeek origin)

{
  CLookToRead *p;
  SRes SVar1;
  
  p = *(CLookToRead **)((int)pp + 0x10);
  *(undefined4 *)((int)pp + 0x14) = 0;
  *(undefined4 *)((int)pp + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x080cc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = (*(p->s).Skip)(p,(size_t)pos);
  return SVar1;
}


