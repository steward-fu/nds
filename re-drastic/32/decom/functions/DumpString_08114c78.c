/*
 * Ghidra decompilation
 *
 * Function : DumpString
 * Address  : 08114c78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void DumpString(TString *s,DumpState *D)

{
  int iVar1;
  size_t *psVar2;
  size_t sVar3;
  lua_Writer p_Var4;
  lu_byte x;
  size_t size;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  if (s == (TString *)0x0) {
    size = size & 0xffffff00;
    if (D->status == 0) {
      iVar1 = (*D->writer)(D->L,&size,1,D->data);
      D->status = iVar1;
    }
    goto LAB_08114ccc;
  }
  size = s->len + 1;
  if (size < 0xff) {
    x = (lu_byte)size;
    if (D->status != 0) goto LAB_08114ccc;
    p_Var4 = D->writer;
    sVar3 = 1;
    psVar2 = (size_t *)&x;
  }
  else {
    x = 0xff;
    if (D->status != 0) goto LAB_08114ccc;
    iVar1 = (*D->writer)(D->L,&x,1,D->data);
    D->status = iVar1;
    if (iVar1 != 0) goto LAB_08114ccc;
    sVar3 = 4;
    psVar2 = &size;
    p_Var4 = D->writer;
  }
  iVar1 = (*p_Var4)(D->L,psVar2,sVar3,D->data);
  D->status = iVar1;
  if (iVar1 == 0) {
    iVar1 = (*D->writer)(D->L,&s[1].tt,size - 1,D->data);
    D->status = iVar1;
  }
LAB_08114ccc:
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


