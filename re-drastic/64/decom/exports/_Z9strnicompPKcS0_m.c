/*
 * Ghidra decompilation
 *
 * Function : _Z9strnicompPKcS0_m
 * Address  : 001b4860
 * Program  : drastic64
 */


/* strnicomp(char const*, char const*, unsigned long) */

undefined4 strnicomp(char *param_1,char *param_2,ulong param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + (param_3 - 1));
  while( true ) {
    bVar3 = *param_1;
    iVar4 = toupper((uint)bVar3);
    iVar5 = toupper((uint)(byte)*param_2);
    if (iVar4 != iVar5) {
      uVar2 = 0xffffffff;
      if (param_2 <= param_1) {
        uVar2 = 1;
      }
      return uVar2;
    }
    if ((bVar3 == 0) || (pbVar1 == (byte *)param_1)) break;
    param_1 = (char *)((byte *)param_1 + 1);
    param_2 = (char *)((byte *)param_2 + 1);
  }
  return 0;
}


