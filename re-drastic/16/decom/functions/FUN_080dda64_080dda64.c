/*
 * Ghidra decompilation
 *
 * Function : FUN_080dda64
 * Address  : 080dda64
 * Program  : drastic16
 */


int FUN_080dda64(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1000) < 0) {
    iVar4 = 1;
  }
  else {
    do {
      do {
        while( true ) {
          if ((*(int *)(param_1 + 0x1020) == 0) && (cVar1 = FUN_080ddbbc(param_1), cVar1 != '\x01'))
          {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            return 1;
          }
          iVar4 = FUN_080dddd8(param_1,param_2);
          if (iVar4 != 2) break;
          *(int *)(param_1 + 0x1018) = *(int *)(param_1 + 0x1018) + 1;
        }
      } while ((iVar4 == 3) ||
              (((iVar4 == 0 && (*(char *)(param_2 + 0x200c) != '\0')) &&
               (*(int *)(param_1 + 0x1014) == 0))));
      if ((iVar4 == 1) && (iVar2 = FUN_080ddbbc(param_1), iVar2 != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    } while (bVar3);
  }
  return iVar4;
}


