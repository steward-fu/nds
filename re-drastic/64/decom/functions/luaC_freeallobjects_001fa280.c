/*
 * Ghidra decompilation
 *
 * Function : luaC_freeallobjects
 * Address  : 001fa280
 * Program  : drastic64
 */


void luaC_freeallobjects(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  byte bVar11;
  
  lVar7 = *(long *)(param_1 + 0x18);
  puVar8 = (undefined8 *)(lVar7 + 0x68);
  pplVar4 = *(long ***)(lVar7 + 0x98);
  if (*(long ***)(lVar7 + 0x98) == (long **)0x0) {
    pplVar6 = (long **)(lVar7 + 0x98);
    pplVar4 = *(long ***)(lVar7 + 0x68);
    if (*(long ***)(lVar7 + 0x68) != (long **)0x0) goto LAB_001fa2c0;
LAB_001fa468:
    bVar11 = 0;
    bVar9 = 3;
    *(undefined *)(lVar7 + 0x54) = 3;
    *(undefined *)(lVar7 + 0x56) = 0;
  }
  else {
    do {
      pplVar6 = pplVar4;
      pplVar4 = (long **)*pplVar6;
    } while (pplVar4 != (long **)0x0);
    pplVar4 = *(long ***)(lVar7 + 0x68);
    if (*(long ***)(lVar7 + 0x68) != (long **)0x0) {
LAB_001fa2c0:
      do {
        pplVar5 = pplVar4;
        *(long **)(lVar7 + 0x68) = *pplVar5;
        *pplVar5 = *pplVar6;
        *pplVar6 = (long *)pplVar5;
        pplVar4 = *(long ***)(lVar7 + 0x68);
        pplVar6 = pplVar5;
      } while (*(long ***)(lVar7 + 0x68) != (long **)0x0);
      if (*(long *)(lVar7 + 0x98) == 0) goto LAB_001fa468;
    }
    do {
      GCTM(param_1,0);
    } while (*(long *)(lVar7 + 0x98) != 0);
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined *)(lVar7 + 0x54) = 3;
    *(undefined *)(lVar7 + 0x56) = 0;
    bVar9 = *(byte *)(lVar1 + 0x54);
    bVar11 = bVar9 ^ 3;
    bVar9 = bVar9 & 3;
    if (*(undefined8 **)(lVar7 + 0x68) != (undefined8 *)0x0) {
      lVar1 = -1;
      puVar10 = *(undefined8 **)(lVar7 + 0x68);
      do {
        puVar2 = (undefined8 *)*puVar10;
        if ((bVar11 & (*(byte *)((long)puVar10 + 9) ^ 3)) == 0) {
          *puVar8 = puVar2;
          freeobj(param_1);
          puVar2 = (undefined8 *)*puVar8;
        }
        else {
          *(byte *)((long)puVar10 + 9) = *(byte *)((long)puVar10 + 9) & 0xf8 | bVar9;
          puVar8 = puVar10;
        }
      } while ((puVar2 != (undefined8 *)0x0) && (lVar1 = lVar1 + -1, puVar10 = puVar2, lVar1 != 0));
      bVar9 = *(byte *)(*(long *)(param_1 + 0x18) + 0x54);
      bVar11 = bVar9 ^ 3;
      bVar9 = bVar9 & 3;
    }
  }
  puVar8 = (undefined8 *)(lVar7 + 0x58);
  if (*(undefined8 **)(lVar7 + 0x58) != (undefined8 *)0x0) {
    lVar1 = -1;
    puVar10 = *(undefined8 **)(lVar7 + 0x58);
    do {
      puVar2 = (undefined8 *)*puVar10;
      if ((bVar11 & (*(byte *)((long)puVar10 + 9) ^ 3)) == 0) {
        *puVar8 = puVar2;
        freeobj(param_1);
        puVar2 = (undefined8 *)*puVar8;
      }
      else {
        *(byte *)((long)puVar10 + 9) = *(byte *)((long)puVar10 + 9) & 0xf8 | bVar9;
        puVar8 = puVar10;
      }
    } while ((puVar2 != (undefined8 *)0x0) && (lVar1 = lVar1 + -1, puVar10 = puVar2, lVar1 != 0));
    bVar9 = *(byte *)(*(long *)(param_1 + 0x18) + 0x54);
    bVar11 = bVar9 ^ 3;
    bVar9 = bVar9 & 3;
  }
  puVar10 = (undefined8 *)0xffffffffffffffff;
  puVar8 = (undefined8 *)(lVar7 + 0xa0);
  puVar2 = *(undefined8 **)(lVar7 + 0xa0);
  puVar3 = *(undefined8 **)(lVar7 + 0xa0);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)*puVar2;
    if ((bVar11 & (*(byte *)((long)puVar2 + 9) ^ 3)) == 0) {
      *puVar8 = puVar3;
      freeobj(param_1);
      puVar3 = (undefined8 *)*puVar8;
    }
    else {
      *(byte *)((long)puVar2 + 9) = *(byte *)((long)puVar2 + 9) & 0xf8 | bVar9;
      puVar8 = puVar2;
    }
    if (puVar3 == (undefined8 *)0x0) break;
    puVar10 = (undefined8 *)((long)puVar10 + -1);
    puVar2 = puVar3;
    puVar3 = puVar10;
  }
  return;
}


