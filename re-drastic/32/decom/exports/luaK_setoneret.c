/*
 * Ghidra decompilation
 *
 * Function : luaK_setoneret
 * Address  : 081351e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_setoneret(FuncState *fs,expdesc *e)

{
  Instruction *pIVar1;
  Instruction IVar2;
  
  if (e->k == VCALL) {
    IVar2 = fs->f->code[(e->u).info];
    e->k = VNONRELOC;
    (e->u).info = (IVar2 << 0x12) >> 0x18;
    return;
  }
  if (e->k != VVARARG) {
    return;
  }
  pIVar1 = fs->f->code;
  pIVar1[(e->u).info] = pIVar1[(e->u).info] & 0x7fffff | 0x1000000;
  e->k = VRELOCABLE;
  return;
}


