/*
 * Ghidra decompilation
 *
 * Function : _Z8stricompPKcS0_
 * Address  : 001b47e0
 * Program  : drastic64
 */


/* stricomp(char const*, char const*) */

undefined4 stricomp(char *param_1,char *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    bVar2 = *param_1;
    iVar3 = toupper((uint)bVar2);
    iVar4 = toupper((uint)(byte)*param_2);
    if (iVar3 != iVar4) {
      uVar1 = 0xffffffff;
      if (param_2 <= param_1) {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (bVar2 == 0) break;
    param_1 = (char *)((byte *)param_1 + 1);
    param_2 = (char *)((byte *)param_2 + 1);
  }
  return 0;
}


