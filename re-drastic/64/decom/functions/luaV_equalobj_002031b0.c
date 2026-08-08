/*
 * Ghidra decompilation
 *
 * Function : luaV_equalobj
 * Address  : 002031b0
 * Program  : drastic64
 */


ulong luaV_equalobj(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_3 + 1);
  if (((uVar1 ^ uVar2) & 0x3f) != 0) {
    if ((((uVar1 ^ uVar2) & 0xf) == 0) && ((uVar1 & 0xf) == 3)) {
      fVar8 = *(float *)param_2;
      if ((uVar1 != 3) && (fVar8 = 0.0, uVar1 == 0x13)) {
        fVar8 = (float)(int)*(float *)param_2;
      }
      fVar7 = *(float *)param_3;
      if ((uVar2 != 3) && (fVar7 = 0.0, uVar2 == 0x13)) {
        fVar7 = (float)(int)*(float *)param_3;
      }
      return (ulong)(fVar8 == fVar7);
    }
    return 0;
  }
  uVar1 = uVar1 & 0x3f;
  if (uVar1 != 5) {
    if (uVar1 < 6) {
      if (uVar1 != 2) {
        if (uVar1 < 3) {
          if (uVar1 == 0) {
            return 1;
          }
          if (uVar1 == 1) goto LAB_0020327c;
        }
        else if (uVar1 == 3) {
          return (ulong)(*(float *)param_2 == *(float *)param_3);
        }
      }
LAB_0020324c:
      return (ulong)(*param_2 == *param_3);
    }
    if (uVar1 == 0x14) {
      uVar5 = luaS_eqlngstr(*param_2,*param_3);
      return uVar5;
    }
    if (0x14 < uVar1) goto LAB_0020324c;
    if (uVar1 != 7) {
      if (uVar1 == 0x13) {
LAB_0020327c:
        return (ulong)(*(int *)param_2 == *(int *)param_3);
      }
      goto LAB_0020324c;
    }
    lVar6 = *param_3;
    if (*param_2 == lVar6) goto LAB_00203380;
    if (param_1 != 0) {
      lVar4 = *(long *)(*param_2 + 0x10);
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 10) >> 5 & 1) == 0)) {
        lVar6 = luaT_gettm(lVar4,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x120));
        if (lVar6 != 0) goto LAB_00203354;
        lVar6 = *param_3;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) goto LAB_002033d4;
      goto LAB_00203334;
    }
    goto LAB_002033d4;
  }
  lVar6 = *param_3;
  if (*param_2 == lVar6) {
LAB_00203380:
    uVar5 = 1;
  }
  else {
    if (param_1 == 0) goto LAB_002033d4;
    lVar4 = *(long *)(*param_2 + 0x28);
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 10) >> 5 & 1) != 0)) {
LAB_002033c8:
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 != 0) {
LAB_00203334:
        if (((*(byte *)(lVar6 + 10) >> 5 & 1) == 0) &&
           (lVar6 = luaT_gettm(lVar6,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x120)),
           lVar6 != 0)) goto LAB_00203354;
      }
    }
    else {
      lVar6 = luaT_gettm(lVar4,5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x120));
      if (lVar6 == 0) {
        lVar6 = *param_3;
        goto LAB_002033c8;
      }
LAB_00203354:
      luaT_callTM(param_1,lVar6,param_2,param_3,*(undefined8 *)(param_1 + 0x10),1);
      iVar3 = (*(int **)(param_1 + 0x10))[2];
      if ((iVar3 != 0) && ((iVar3 != 1 || (**(int **)(param_1 + 0x10) != 0)))) goto LAB_00203380;
    }
LAB_002033d4:
    uVar5 = 0;
  }
  return uVar5;
}


