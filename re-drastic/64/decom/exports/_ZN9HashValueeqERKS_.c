/*
 * Ghidra decompilation
 *
 * Function : _ZN9HashValueeqERKS_
 * Address  : 001c8a00
 * Program  : drastic64
 */


/* HashValue::TEMPNAMEPLACEHOLDERVALUE(HashValue const&) */

bool __thiscall HashValue::operator==(HashValue *this,HashValue *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  
  iVar1 = *(int *)this;
  bVar3 = true;
  if (iVar1 != 0) {
    iVar2 = *(int *)param_1;
    bVar3 = true;
    if (iVar2 != 0) {
      if ((iVar2 == 1 && iVar1 == 1) || (iVar1 == 2 && iVar2 == 2)) {
        return *(int *)(this + 4) == *(int *)(param_1 + 4);
      }
      bVar3 = iVar1 == 3 && iVar2 == 3;
      if (bVar3) {
        if ((((*(long *)(this + 4) == *(long *)(param_1 + 4)) &&
             (*(long *)(this + 0xc) == *(long *)(param_1 + 0xc))) &&
            (*(long *)(this + 0x14) == *(long *)(param_1 + 0x14))) &&
           (*(long *)(this + 0x1c) == *(long *)(param_1 + 0x1c))) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        return (bool)(bVar4 ^ 1);
      }
    }
  }
  return bVar3;
}


