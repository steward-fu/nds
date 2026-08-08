/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001c8ca0
 * Program  : drastic64
 */


/* DataHash::Init(HASH_TYPE, unsigned int) */

void __thiscall DataHash::Init(DataHash *this,HASH_TYPE param_1,uint param_2)

{
  *(HASH_TYPE *)this = param_1;
  if (param_1 == 1) {
    *(undefined4 *)(this + 4) = 0;
    if (7 < param_2) {
      param_2 = 8;
    }
    *(uint *)(this + 0xc48) = param_2;
    return;
  }
  if (param_1 == 2) {
    *(undefined4 *)(this + 4) = 0xffffffff;
  }
  else if (param_1 == 3) {
    blake2sp_init((blake2sp_state *)(this + 8));
    if (7 < param_2) {
      param_2 = 8;
    }
    *(uint *)(this + 0xc48) = param_2;
    return;
  }
  if (7 < param_2) {
    param_2 = 8;
  }
  *(uint *)(this + 0xc48) = param_2;
  return;
}


