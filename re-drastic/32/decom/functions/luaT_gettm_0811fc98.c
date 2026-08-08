/*
 * Ghidra decompilation
 *
 * Function : luaT_gettm
 * Address  : 0811fc98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TValue * luaT_gettm(Table *events,TMS event,TString *ename)

{
  TValue *pTVar1;
  TValue *tm;
  
  pTVar1 = luaH_getstr(events,ename);
  if (pTVar1->tt_ == 0) {
    events->flags = events->flags | (byte)(1 << (event & 0xff));
    pTVar1 = (TValue *)0x0;
  }
  return pTVar1;
}


