/*
 * Ghidra decompilation
 *
 * Function : _ZN8DataHash6ResultEP9HashValue
 * Address  : 001c8e10
 * Program  : drastic64
 */


/* DataHash::Result(HashValue*) */

void __thiscall DataHash::Result(DataHash *this,HashValue *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *(int *)param_1 = iVar1;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  }
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    *(uint *)(param_1 + 4) = ~*(uint *)(this + 4);
    iVar1 = *(int *)this;
  }
  if (iVar1 != 3) {
    return;
  }
  Result(this,param_1);
  return;
}


