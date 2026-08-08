/*
 * Ghidra decompilation
 *
 * Function : FUN_080dff48
 * Address  : 080dff48
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x080e0064) */
/* WARNING: Removing unreachable block (ram,0x080e0070) */
/* WARNING: Removing unreachable block (ram,0x080e007c) */
/* WARNING: Removing unreachable block (ram,0x080e00c8) */
/* WARNING: Removing unreachable block (ram,0x080e00cc) */
/* WARNING: Removing unreachable block (ram,0x080e00d8) */
/* WARNING: Removing unreachable block (ram,0x080e00e4) */
/* WARNING: Removing unreachable block (ram,0x080e00f0) */
/* WARNING: Removing unreachable block (ram,0x080e00f8) */
/* WARNING: Removing unreachable block (ram,0x080e0104) */
/* WARNING: Removing unreachable block (ram,0x080e0128) */
/* WARNING: Removing unreachable block (ram,0x080e0134) */
/* WARNING: Removing unreachable block (ram,0x080e0140) */
/* WARNING: Removing unreachable block (ram,0x080e014c) */
/* WARNING: Removing unreachable block (ram,0x080e0170) */
/* WARNING: Removing unreachable block (ram,0x080e0284) */
/* WARNING: Removing unreachable block (ram,0x080e0290) */
/* WARNING: Removing unreachable block (ram,0x080e017c) */
/* WARNING: Removing unreachable block (ram,0x080e01b8) */
/* WARNING: Removing unreachable block (ram,0x080e01c4) */
/* WARNING: Removing unreachable block (ram,0x080e01d0) */
/* WARNING: Removing unreachable block (ram,0x080e01d8) */
/* WARNING: Removing unreachable block (ram,0x080e0200) */
/* WARNING: Removing unreachable block (ram,0x080e0204) */
/* WARNING: Removing unreachable block (ram,0x080e0208) */
/* WARNING: Removing unreachable block (ram,0x080e024c) */
/* WARNING: Removing unreachable block (ram,0x080e0214) */

undefined4
FUN_080dff48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined *param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char param_10;
  
  if (param_6 != (undefined *)0x0) {
    *param_6 = 0;
  }
  while (iVar3 = FUN_080a5704(param_3), iVar3 != 0) {
    if (param_5 == 2) {
      if (param_6 != (undefined *)0x0) {
        *param_6 = 1;
      }
      return 0;
    }
    if (param_5 != 3) break;
    cVar2 = FUN_080e03e8(param_3,param_4);
    if (cVar2 != '\x01') {
      param_5 = 0;
    }
  }
  if (param_10 == '\0') {
    uVar4 = 9;
  }
  else {
    uVar4 = 10;
  }
  if ((param_2 == 0) || (iVar3 = FUN_080a40ec(param_2,param_3,uVar4), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 1;
  }
  else {
    FUN_080a5994(param_3);
    FUN_080a52ac(param_3,1);
    if (param_2 == 0) {
      uVar4 = FUN_080a6018(param_3);
    }
    else {
      uVar4 = FUN_080a40ec(param_2,param_3,uVar4);
    }
  }
  return uVar4;
}


