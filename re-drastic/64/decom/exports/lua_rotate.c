/*
 * Ghidra decompilation
 *
 * Function : lua_rotate
 * Address  : 001f0c90
 * Program  : drastic64
 */


void lua_rotate(long param_1,int param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar5 = plVar6 + -2;
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar6 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar6 + 1) == 0x16) ||
           (lVar9 = *plVar6, (int)(uint)*(byte *)(lVar9 + 10) < -0xf4628 - param_2)) {
          plVar1 = &luaO_nilobject_;
        }
        else {
          plVar1 = (long *)(lVar9 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar1 = plVar6 + (long)param_2 * 2;
    }
  }
  else {
    plVar2 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar1 = &luaO_nilobject_;
    if (plVar2 < plVar6) {
      plVar1 = plVar2;
    }
  }
  uVar7 = -(param_3 >> 0x1f & 1) & 0xfffffff000000000 | (param_3 & 0xffffffff) << 4;
  plVar6 = (long *)((long)plVar1 + (-0x10 - uVar7));
  if (-1 < (int)param_3) {
    plVar6 = (long *)((long)plVar5 - uVar7);
  }
  plVar2 = plVar1;
  plVar4 = plVar6;
  if (plVar1 < plVar6) {
    do {
      lVar11 = plVar4[1];
      lVar9 = *plVar2;
      lVar10 = plVar2[1];
      plVar3 = plVar2 + 2;
      *plVar2 = *plVar4;
      plVar2[1] = lVar11;
      plVar8 = plVar4 + -2;
      *plVar4 = lVar9;
      plVar4[1] = lVar10;
      plVar2 = plVar3;
      plVar4 = plVar8;
    } while (plVar3 < plVar8);
  }
  plVar2 = plVar6 + 2;
  plVar4 = plVar5;
  if (plVar6 + 2 < plVar5) {
    do {
      lVar11 = plVar4[1];
      lVar9 = *plVar2;
      lVar10 = plVar2[1];
      plVar6 = plVar2 + 2;
      *plVar2 = *plVar4;
      plVar2[1] = lVar11;
      plVar3 = plVar4 + -2;
      *plVar4 = lVar9;
      plVar4[1] = lVar10;
      plVar2 = plVar6;
      plVar4 = plVar3;
    } while (plVar6 < plVar3);
  }
  if (plVar1 < plVar5) {
    do {
      lVar11 = plVar5[1];
      lVar9 = *plVar1;
      lVar10 = plVar1[1];
      plVar6 = plVar1 + 2;
      *plVar1 = *plVar5;
      plVar1[1] = lVar11;
      plVar2 = plVar5 + -2;
      *plVar5 = lVar9;
      plVar5[1] = lVar10;
      plVar1 = plVar6;
      plVar5 = plVar2;
    } while (plVar6 < plVar2);
  }
  return;
}


