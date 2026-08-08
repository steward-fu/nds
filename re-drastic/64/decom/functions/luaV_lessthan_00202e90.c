/*
 * Ghidra decompilation
 *
 * Function : luaV_lessthan
 * Address  : 00202e90
 * Program  : drastic64
 */


uint luaV_lessthan(undefined param_1 [16],float param_2,undefined8 param_3,long *param_4,
                  long *param_5)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  char *__s1;
  char *__s2;
  size_t sVar4;
  size_t sVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_4 + 1);
  fVar6 = *(float *)param_4;
  if (uVar2 == 0x13) {
    param_2 = *(float *)param_5;
    if (*(int *)(param_5 + 1) == 0x13) goto LAB_00202f74;
    fVar6 = (float)(int)fVar6;
    if (*(int *)(param_5 + 1) == 3) goto LAB_00202ee8;
  }
  else if (uVar2 == 3) {
    param_2 = *(float *)param_5;
    if (*(int *)(param_5 + 1) == 3) {
LAB_00202ee8:
      return (uint)(fVar6 < param_2);
    }
    if (*(int *)(param_5 + 1) == 0x13) {
      param_2 = (float)(int)param_2;
      goto LAB_00202ee8;
    }
  }
  if (((uVar2 & 0xf) == 4) && ((*(uint *)(param_5 + 1) & 0xf) == 4)) {
    __s1 = (char *)(*param_4 + 0x20);
    __s2 = (char *)(*param_5 + 0x20);
    sVar4 = *(size_t *)(*param_5 + 0x10);
    sVar5 = *(size_t *)(*param_4 + 0x10);
    while( true ) {
      uVar2 = strcoll(__s1,__s2);
      if (uVar2 != 0) {
        return uVar2 >> 0x1f;
      }
      sVar3 = strlen(__s1);
      if (sVar3 == sVar4) break;
      if (sVar3 == sVar5) {
        return 1;
      }
      lVar1 = sVar3 + 1;
      __s1 = __s1 + lVar1;
      sVar5 = sVar5 - lVar1;
      __s2 = __s2 + lVar1;
      sVar4 = sVar4 - lVar1;
    }
    return 0;
  }
  uVar2 = luaT_callorderTM(param_3,param_4,param_5,0x14);
  if (-1 < (int)uVar2) {
    return uVar2;
  }
  fVar6 = (float)luaG_ordererror(param_3,param_4,param_5);
LAB_00202f74:
  return (uint)((int)fVar6 < (int)param_2);
}


