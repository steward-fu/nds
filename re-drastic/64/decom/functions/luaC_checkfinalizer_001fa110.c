/*
 * Ghidra decompilation
 *
 * Function : luaC_checkfinalizer
 * Address  : 001fa110
 * Program  : drastic64
 */


void luaC_checkfinalizer(long param_1,long **param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  long **pplVar7;
  
  if (((*(byte *)((long)param_2 + 9) & 8) == 0 && param_3 != 0) &&
     ((*(byte *)(param_3 + 10) >> 2 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar2 = luaT_gettm(param_3,2,*(undefined8 *)(lVar5 + 0x108));
    if (lVar2 != 0) {
      if ((byte)(*(char *)(lVar5 + 0x55) - 2U) < 4) {
        *(byte *)((long)param_2 + 9) =
             *(byte *)((long)param_2 + 9) & 0xf8 | *(byte *)(lVar5 + 0x54) & 3;
        pplVar7 = *(long ***)(lVar5 + 0x60);
        if (pplVar7 == param_2) {
          pplVar3 = (long **)*pplVar7;
          pplVar6 = pplVar7;
          do {
            bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x54);
            if (pplVar3 == (long **)0x0) {
LAB_001fa268:
              pplVar6 = (long **)0x0;
              break;
            }
            pplVar4 = (long **)*pplVar3;
            if ((byte)((bVar1 ^ 3) & (*(byte *)((long)pplVar3 + 9) ^ 3)) == 0) {
              *pplVar6 = (long *)pplVar4;
              freeobj(param_1);
              pplVar4 = (long **)*pplVar6;
            }
            else {
              *(byte *)((long)pplVar3 + 9) = *(byte *)((long)pplVar3 + 9) & 0xf8 | bVar1 & 3;
              pplVar6 = pplVar3;
            }
            if (pplVar4 == (long **)0x0) goto LAB_001fa268;
            pplVar3 = pplVar4;
          } while (pplVar7 == pplVar6);
          *(long ***)(lVar5 + 0x60) = pplVar6;
        }
      }
      pplVar7 = *(long ***)(lVar5 + 0x58);
      if (param_2 == *(long ***)(lVar5 + 0x58)) {
        pplVar3 = (long **)(lVar5 + 0x58);
      }
      else {
        do {
          pplVar3 = pplVar7;
          pplVar7 = (long **)*pplVar3;
        } while (param_2 != (long **)*pplVar3);
      }
      *pplVar3 = *param_2;
      *param_2 = *(long **)(lVar5 + 0x68);
      *(long ***)(lVar5 + 0x68) = param_2;
      *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) | 8;
      return;
    }
  }
  return;
}


