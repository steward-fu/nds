/*
 * Ghidra decompilation
 *
 * Function : FUN_001828dc
 * Address  : 001828dc
 * Program  : drastic64
 */


int FUN_001828dc(long *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x23a4);
  puts("Stack:");
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      iVar3 = iVar2 + 0x14;
      do {
        uVar1 = load_memory32(lVar4 + 0x23d0,iVar2);
        iVar2 = iVar2 + 4;
        __printf_chk(1," %08x",uVar1);
      } while (iVar3 != iVar2);
      iVar5 = iVar5 + 1;
      putchar(10);
      iVar2 = iVar3;
    } while (param_2 != iVar5);
  }
  iVar2 = putchar(10);
  return iVar2;
}


