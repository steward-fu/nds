/*
 * Ghidra decompilation
 *
 * Function : lua_topointer
 * Address  : 001f2210
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

long lua_topointer(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = DAT_00229c08;
  if (param_2 < 1) {
    if (-0xf4628 < param_2) {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      uVar1 = *(uint *)(plVar3 + 1);
      goto joined_r0x001f2438;
    }
    if (param_2 == -0xf4628) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x48);
      uVar2 = uVar1 & 0x3f;
      if (uVar2 == 8) goto LAB_001f2258;
      if (8 < uVar2) {
        if (uVar2 != 0x16) {
          if (uVar2 != 0x26) {
            return 0;
          }
          return *plVar3;
        }
        goto LAB_001f2258;
      }
      if (uVar2 == 6) goto LAB_001f2258;
      if (uVar2 < 7) {
        if (uVar2 != 2) {
          if (uVar2 != 5) {
            return 0;
          }
          return *plVar3;
        }
      }
      else if (uVar2 != 7) {
        return 0;
      }
      goto LAB_001f22f0;
    }
    plVar4 = **(long ***)(param_1 + 0x20);
    if (*(int *)(plVar4 + 1) == 0x16) {
      plVar3 = &luaO_nilobject_;
      uVar2 = DAT_00229c08 & 0x3f;
      if (uVar2 != 7) goto LAB_001f237c;
    }
    else {
      lVar5 = *plVar4;
      if ((int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2) {
        plVar3 = &luaO_nilobject_;
      }
      else {
        plVar3 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
      uVar2 = *(uint *)(plVar3 + 1) & 0x3f;
      if (uVar2 != 7) {
LAB_001f237c:
        if (7 < uVar2) {
          if ((uVar2 != 0x16) && (uVar2 != 0x26)) {
            if (uVar2 == 8) {
              return *plVar3;
            }
            return 0;
          }
          goto LAB_001f2258;
        }
        if ((uVar2 == 5) || (uVar2 == 6)) goto LAB_001f2258;
        if (uVar2 != 2) {
          return 0;
        }
        if (*(int *)(plVar4 + 1) == 0x16) goto LAB_001f23c8;
        lVar5 = *plVar4;
      }
      if (-0xf4628 - param_2 <= (int)(uint)*(byte *)(lVar5 + 10)) {
        lVar5 = lVar5 + (long)(-0xf4629 - param_2) * 0x10;
        plVar3 = (long *)(lVar5 + 0x20);
        uVar1 = *(uint *)(lVar5 + 0x28);
        goto LAB_001f22f0;
      }
    }
LAB_001f23c8:
    plVar3 = &luaO_nilobject_;
  }
  else {
    plVar3 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    if (plVar3 < *(long **)(param_1 + 0x10)) {
      uVar1 = *(uint *)(plVar3 + 1);
joined_r0x001f2438:
      uVar2 = uVar1 & 0x3f;
      if (uVar2 == 7) goto LAB_001f22f0;
      if ((uVar1 & 0x38) != 0) {
        if ((uVar2 != 0x16) && (uVar2 != 0x26)) {
          if (uVar2 == 8) {
            return *plVar3;
          }
          return 0;
        }
        goto LAB_001f2258;
      }
      if (uVar2 == 5) goto LAB_001f2258;
    }
    else {
      plVar3 = &luaO_nilobject_;
      uVar2 = DAT_00229c08 & 0x3f;
      if (uVar2 == 7) goto LAB_001f22f0;
      if ((DAT_00229c08 & 0x38) != 0) {
        if (uVar2 == 0x16) {
          return luaO_nilobject_;
        }
        if ((uVar2 != 0x26) && (uVar2 != 8)) {
          return 0;
        }
        goto LAB_001f2258;
      }
      if (uVar2 == 5) {
        return luaO_nilobject_;
      }
    }
    if (uVar2 == 6) goto LAB_001f2258;
    if (uVar2 != 2) {
      return 0;
    }
  }
LAB_001f22f0:
  if ((uVar1 & 0xf) != 2) {
    if ((uVar1 & 0xf) != 7) {
      return 0;
    }
    return *plVar3 + 0x28;
  }
LAB_001f2258:
  return *plVar3;
}


