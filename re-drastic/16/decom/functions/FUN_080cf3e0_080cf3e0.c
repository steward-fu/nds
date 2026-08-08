/*
 * Ghidra decompilation
 *
 * Function : FUN_080cf3e0
 * Address  : 080cf3e0
 * Program  : drastic16
 */


uint FUN_080cf3e0(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = param_3 + 7;
  }
  iVar1 = (int)uVar2 >> 3;
  return 0xffffffffU >> (0x20U - param_4 & 0xff) &
         CONCAT13(*(undefined *)(param_2 + iVar1 + 3),
                  CONCAT12(*(undefined *)(param_2 + iVar1 + 2),
                           CONCAT11(*(undefined *)(param_2 + iVar1 + 1),
                                    *(undefined *)(param_2 + iVar1)))) >> (param_3 & 7);
}


