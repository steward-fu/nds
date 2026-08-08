/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Look_Exact
 * Address  : 001af320
 * Program  : drastic64
 */


undefined8 LookToRead_Look_Exact(long param_1,long *param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  uVar2 = *param_3;
  uVar4 = *(long *)(param_1 + 0x30) - lVar3;
  uVar1 = 0;
  if (uVar4 == 0) {
    if (uVar2 == 0) goto LAB_001af3a0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (0x4000 < *param_3) {
      *param_3 = 0x4000;
    }
    uVar1 = (***(code ***)(param_1 + 0x20))(*(code ***)(param_1 + 0x20),param_1 + 0x38,param_3);
    uVar4 = *param_3;
    *(ulong *)(param_1 + 0x30) = uVar4;
    uVar2 = *param_3;
  }
  if (uVar4 < uVar2) {
    *param_3 = uVar4;
  }
  lVar3 = *(long *)(param_1 + 0x28);
LAB_001af3a0:
  *param_2 = param_1 + 0x38 + lVar3;
  return uVar1;
}


