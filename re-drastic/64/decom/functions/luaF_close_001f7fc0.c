/*
 * Ghidra decompilation
 *
 * Function : luaF_close
 * Address  : 001f7fc0
 * Program  : drastic64
 */


void luaF_close(long param_1,ulong param_2)

{
  ulong **ppuVar1;
  ulong **ppuVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  ppuVar3 = *(ulong ***)(param_1 + 0x40);
  do {
    if (ppuVar3 == (ulong **)0x0) {
      return;
    }
    while( true ) {
      puVar4 = *ppuVar3;
      if (puVar4 < param_2) {
        return;
      }
      uVar5 = (ulong)ppuVar3[1];
      ppuVar2 = (ulong **)ppuVar3[2];
      *(ulong ***)(param_1 + 0x40) = ppuVar2;
      if (uVar5 == 0) break;
      puVar6 = (ulong *)puVar4[1];
      ppuVar3[2] = (ulong *)*puVar4;
      ppuVar3[3] = puVar6;
      ppuVar1 = ppuVar3 + 3;
      *ppuVar3 = (ulong *)(ppuVar3 + 2);
      ppuVar3 = ppuVar2;
      if ((*(uint *)ppuVar1 >> 6 & 1) != 0) {
        luaC_upvalbarrier_(param_1);
        ppuVar3 = *(ulong ***)(param_1 + 0x40);
      }
      if (ppuVar3 == (ulong **)0x0) {
        return;
      }
    }
    luaM_realloc_(param_1,ppuVar3,0x20,0);
    ppuVar3 = *(ulong ***)(param_1 + 0x40);
  } while( true );
}


