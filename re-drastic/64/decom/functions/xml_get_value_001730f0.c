/*
 * Ghidra decompilation
 *
 * Function : xml_get_value
 * Address  : 001730f0
 * Program  : drastic64
 */


undefined8 xml_get_value(long param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x308);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      lVar1 = uVar5 * 8;
      uVar6 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      iVar3 = strcmp(*(char **)(param_1 + 0x108 + lVar1),param_2);
      if (iVar3 == 0) break;
      if (uVar2 <= (uint)uVar5) {
        return 0;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + uVar6 * 8 + 0x208);
  }
  return uVar4;
}


