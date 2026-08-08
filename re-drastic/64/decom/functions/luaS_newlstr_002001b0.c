/*
 * Ghidra decompilation
 *
 * Function : luaS_newlstr
 * Address  : 002001b0
 * Program  : drastic64
 */


long luaS_newlstr(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined auVar14 [16];
  
  if (param_3 < 0x29) {
    lVar12 = *(long *)(param_1 + 0x18);
    uVar1 = (param_3 >> 5) + 1;
    uVar11 = *(uint *)(lVar12 + 0x50) ^ (uint)param_3;
    uVar9 = param_3;
    if (uVar1 <= param_3) {
      do {
        uVar10 = uVar9 - uVar1;
        uVar11 = uVar11 ^ (uVar11 >> 2) + uVar11 * 0x20 +
                          (uint)*(byte *)((long)param_2 + (uVar9 - 1));
        uVar9 = uVar10;
      } while (uVar1 <= uVar10);
    }
    iVar5 = *(int *)(lVar12 + 0x3c);
    uVar2 = iVar5 - 1U & uVar11;
    plVar13 = (long *)(*(long *)(lVar12 + 0x30) + (long)(int)uVar2 * 8);
    lVar7 = *(long *)(*(long *)(lVar12 + 0x30) + (long)(int)uVar2 * 8);
    while( true ) {
      if (lVar7 == 0) {
        iVar6 = *(int *)(lVar12 + 0x38);
        if (0x3fffffff < iVar6) {
          iVar6 = 0x3fffffff;
        }
        if (iVar5 <= iVar6) {
          luaS_resize(param_1,iVar5 << 1);
          plVar13 = (long *)(*(long *)(lVar12 + 0x30) +
                            (long)(int)(*(int *)(lVar12 + 0x3c) - 1U & uVar11) * 8);
        }
        lVar7 = luaC_newobj(param_1,4,param_3 + 0x21);
        *(ulong *)(lVar7 + 0x10) = param_3;
        *(undefined *)(lVar7 + 10) = 0;
        *(uint *)(lVar7 + 0xc) = uVar11;
        memcpy((void *)(lVar7 + 0x20),param_2,param_3);
        *(undefined *)(lVar7 + param_3 + 0x20) = 0;
        *(long *)(lVar7 + 0x18) = *plVar13;
        iVar5 = *(int *)(lVar12 + 0x38);
        *plVar13 = lVar7;
        *(int *)(lVar12 + 0x38) = iVar5 + 1;
        return lVar7;
      }
      if ((param_3 == *(ulong *)(lVar7 + 0x10)) &&
         (iVar6 = memcmp(param_2,(void *)(lVar7 + 0x20),param_3), iVar6 == 0)) break;
      lVar7 = *(long *)(lVar7 + 0x18);
    }
    bVar3 = *(byte *)(lVar7 + 9) ^ 3;
    if ((bVar3 & (*(byte *)(lVar12 + 0x54) ^ 3)) == 0) {
      *(byte *)(lVar7 + 9) = bVar3;
    }
  }
  else {
    if (0x7fffffdf < param_3 + 1) {
      auVar14 = luaM_toobig();
      sVar8 = strlen(auVar14._8_8_);
      lVar7 = luaS_newlstr(auVar14._0_8_,auVar14._8_8_,sVar8);
      return lVar7;
    }
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x50);
    lVar7 = luaC_newobj(param_1,0x14,param_3 + 0x21);
    *(ulong *)(lVar7 + 0x10) = param_3;
    *(undefined *)(lVar7 + 10) = 0;
    *(undefined4 *)(lVar7 + 0xc) = uVar4;
    memcpy((void *)(lVar7 + 0x20),param_2,param_3);
    *(undefined *)(lVar7 + param_3 + 0x20) = 0;
  }
  return lVar7;
}


