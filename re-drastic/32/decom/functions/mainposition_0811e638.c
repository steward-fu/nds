/*
 * Ghidra decompilation
 *
 * Function : mainposition
 * Address  : 0811e638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

Node * mainposition(Table *t,TValue *key)

{
  Node *pNVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  lua_CFunction p_Var4;
  TString *s;
  float fVar5;
  int i;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  switch(key->tt_ & 0x3f) {
  case 1:
  case 0x13:
    uVar2 = (key->value_).b;
    goto LAB_0811e71c;
  default:
    __aeabi_uidivmod((key->value_).gc,~(-1 << (uint)t->lsizenode) | 1);
    pNVar1 = t->node + extraout_r1;
    break;
  case 3:
    fVar5 = frexpf((key->value_).n,&i);
    i = (int)(fVar5 * 2.147483e+09) + i;
    iVar3 = i;
    if ((i < 0) && (iVar3 = -i, i == iVar3)) {
      iVar3 = 0;
    }
    __aeabi_idivmod(iVar3,~(-1 << (uint)t->lsizenode) | 1);
    pNVar1 = t->node + extraout_r1_00;
    break;
  case 4:
    pNVar1 = t->node + (*(uint *)((key->value_).f + 8) & ~(-1 << t->lsizenode));
    break;
  case 0x14:
    p_Var4 = (key->value_).f;
    if (p_Var4[6] == (_func_int_lua_State_ptr)0x0) {
      uVar2 = luaS_hash((char *)(p_Var4 + 0x18),*(size_t *)(p_Var4 + 0xc),*(uint *)(p_Var4 + 8));
      p_Var4[6] = (code)0x1;
      *(uint *)(p_Var4 + 8) = uVar2;
      p_Var4 = (key->value_).f;
    }
    uVar2 = *(uint *)(p_Var4 + 8);
LAB_0811e71c:
    pNVar1 = t->node + (uVar2 & ~(-1 << t->lsizenode));
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar1;
}


