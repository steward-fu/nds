/*
 * Ghidra decompilation
 *
 * Function : LookToRead_CreateVTable
 * Address  : 080cc544
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LookToRead_CreateVTable(CLookToRead *p,int lookahead)

{
  code *pcVar1;
  
  pcVar1 = LookToRead_Look_Exact;
  if (lookahead != 0) {
    pcVar1 = LookToRead_Look_Lookahead;
  }
  (p->s).Look = pcVar1;
  (p->s).Skip = LookToRead_Skip;
  (p->s).Read = LookToRead_Read;
  (p->s).Seek = LookToRead_Seek;
  return;
}


