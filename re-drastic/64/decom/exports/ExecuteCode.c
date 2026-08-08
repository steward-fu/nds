/*
 * Ghidra decompilation
 *
 * Function : ExecuteCode
 * Address  : 001eef20
 * Program  : drastic64
 */


/* RarVM::ExecuteCode(VM_PreparedCommand*, unsigned int) */

undefined8 __thiscall RarVM::ExecuteCode(RarVM *this,VM_PreparedCommand *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 24999999;
  iVar3 = *(int *)param_1;
  piVar2 = (int *)param_1;
  if (iVar3 == 0x16) goto LAB_001eef5c;
  do {
    if (iVar3 == 0x28) {
      ExecuteStandardFilter(this,piVar2[3]);
      return 1;
    }
    piVar2 = piVar2 + 0xe;
    while( true ) {
      iVar4 = iVar4 + -1;
      iVar3 = *piVar2;
      if (iVar3 != 0x16) break;
LAB_001eef5c:
      uVar1 = *(uint *)(this + 0x3c);
      if (0x3ffff < uVar1) {
        return 1;
      }
      if (param_2 <= *(uint *)(*(long *)(this + 0x18) + (ulong)uVar1)) {
        return 1;
      }
      if (iVar4 < 1) {
        return 0;
      }
      piVar2 = (int *)(param_1 + (ulong)*(uint *)(*(long *)(this + 0x18) + (ulong)uVar1) * 0x38);
      *(uint *)(this + 0x3c) = uVar1 + 4;
    }
  } while( true );
}


