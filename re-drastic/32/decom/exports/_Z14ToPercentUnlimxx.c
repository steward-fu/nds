/*
 * Ghidra decompilation
 *
 * Function : _Z14ToPercentUnlimxx
 * Address  : 08109cf4
 * Program  : drastic
 */


int ToPercentUnlim(int64 N1,int64 N2)

{
  uint in_r0;
  int iVar1;
  int in_r1;
  uint in_r2;
  uint in_r3;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((in_r2 | in_r3) != 0) {
    uVar2 = CONCAT44(in_r1 * 3 + (uint)CARRY4(in_r0,in_r0) + (uint)CARRY4(in_r0 * 2,in_r0),in_r0 * 3
                    );
    uVar3 = VectorShiftLeft(uVar2,5,0x40,0);
    uVar2 = VectorAdd(uVar2,uVar3,8);
    iVar1 = __aeabi_ldivmod((uint)uVar2 + in_r0,
                            (int)((ulonglong)uVar2 >> 0x20) + in_r1 +
                            (uint)CARRY4((uint)uVar2,in_r0));
    return iVar1;
  }
  return 0;
}


